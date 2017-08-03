
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_rcmd_oper_0.hpp"
#include "Cisco_IOS_XR_infra_rcmd_oper_1.hpp"
#include "Cisco_IOS_XR_infra_rcmd_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rcmd_oper {

Rcmd::Rcmd()
    :
    intf(std::make_shared<Rcmd::Intf>())
	,isis(std::make_shared<Rcmd::Isis>())
	,ldp(std::make_shared<Rcmd::Ldp>())
	,memory(std::make_shared<Rcmd::Memory>())
	,node(std::make_shared<Rcmd::Node>())
	,ospf(std::make_shared<Rcmd::Ospf>())
	,process(std::make_shared<Rcmd::Process>())
	,server(std::make_shared<Rcmd::Server>())
{
    intf->parent = this;

    isis->parent = this;

    ldp->parent = this;

    memory->parent = this;

    node->parent = this;

    ospf->parent = this;

    process->parent = this;

    server->parent = this;

    yang_name = "rcmd"; yang_parent_name = "Cisco-IOS-XR-infra-rcmd-oper";
}

Rcmd::~Rcmd()
{
}

bool Rcmd::has_data() const
{
    return (intf !=  nullptr && intf->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (ldp !=  nullptr && ldp->has_data())
	|| (memory !=  nullptr && memory->has_data())
	|| (node !=  nullptr && node->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (process !=  nullptr && process->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Rcmd::has_operation() const
{
    return is_set(yfilter)
	|| (intf !=  nullptr && intf->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (memory !=  nullptr && memory->has_operation())
	|| (node !=  nullptr && node->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (process !=  nullptr && process->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Rcmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd";

    return path_buffer.str();

}

const EntityPath Rcmd::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Rcmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf")
    {
        if(intf == nullptr)
        {
            intf = std::make_shared<Rcmd::Intf>();
        }
        return intf;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Rcmd::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Rcmd::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "memory")
    {
        if(memory == nullptr)
        {
            memory = std::make_shared<Rcmd::Memory>();
        }
        return memory;
    }

    if(child_yang_name == "node")
    {
        if(node == nullptr)
        {
            node = std::make_shared<Rcmd::Node>();
        }
        return node;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Rcmd::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<Rcmd::Process>();
        }
        return process;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Rcmd::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(intf != nullptr)
    {
        children["intf"] = intf;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    if(memory != nullptr)
    {
        children["memory"] = memory;
    }

    if(node != nullptr)
    {
        children["node"] = node;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(process != nullptr)
    {
        children["process"] = process;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Rcmd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Rcmd::clone_ptr() const
{
    return std::make_shared<Rcmd>();
}

std::string Rcmd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Rcmd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Rcmd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Rcmd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Rcmd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf" || name == "isis" || name == "ldp" || name == "memory" || name == "node" || name == "ospf" || name == "process" || name == "server")
        return true;
    return false;
}

Rcmd::Ospf::Ospf()
    :
    instances(std::make_shared<Rcmd::Ospf::Instances>())
{
    instances->parent = this;

    yang_name = "ospf"; yang_parent_name = "rcmd";
}

Rcmd::Ospf::~Ospf()
{
}

bool Rcmd::Ospf::has_data() const
{
    return (instances !=  nullptr && instances->has_data());
}

bool Rcmd::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| (instances !=  nullptr && instances->has_operation());
}

std::string Rcmd::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instances")
    {
        if(instances == nullptr)
        {
            instances = std::make_shared<Rcmd::Ospf::Instances>();
        }
        return instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instances != nullptr)
    {
        children["instances"] = instances;
    }

    return children;
}

void Rcmd::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instances")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instances()
{
    yang_name = "instances"; yang_parent_name = "ospf";
}

Rcmd::Ospf::Instances::~Instances()
{
}

bool Rcmd::Ospf::Instances::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ospf::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/ospf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::Instance()
    :
    instance_name{YType::str, "instance-name"}
    	,
    ipfrr_event_offlines(std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines>())
	,ipfrr_event_summaries(std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries>())
	,prefix_event_offlines(std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines>())
	,prefix_event_statistics(std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventStatistics>())
	,prefix_event_summaries(std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries>())
	,spf_run_offlines(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines>())
	,spf_run_summaries(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries>())
	,summary_external_event_offlines(std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines>())
	,summary_external_event_statistics(std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics>())
	,summary_external_event_summaries(std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries>())
{
    ipfrr_event_offlines->parent = this;

    ipfrr_event_summaries->parent = this;

    prefix_event_offlines->parent = this;

    prefix_event_statistics->parent = this;

    prefix_event_summaries->parent = this;

    spf_run_offlines->parent = this;

    spf_run_summaries->parent = this;

    summary_external_event_offlines->parent = this;

    summary_external_event_statistics->parent = this;

    summary_external_event_summaries->parent = this;

    yang_name = "instance"; yang_parent_name = "instances";
}

Rcmd::Ospf::Instances::Instance::~Instance()
{
}

bool Rcmd::Ospf::Instances::Instance::has_data() const
{
    return instance_name.is_set
	|| (ipfrr_event_offlines !=  nullptr && ipfrr_event_offlines->has_data())
	|| (ipfrr_event_summaries !=  nullptr && ipfrr_event_summaries->has_data())
	|| (prefix_event_offlines !=  nullptr && prefix_event_offlines->has_data())
	|| (prefix_event_statistics !=  nullptr && prefix_event_statistics->has_data())
	|| (prefix_event_summaries !=  nullptr && prefix_event_summaries->has_data())
	|| (spf_run_offlines !=  nullptr && spf_run_offlines->has_data())
	|| (spf_run_summaries !=  nullptr && spf_run_summaries->has_data())
	|| (summary_external_event_offlines !=  nullptr && summary_external_event_offlines->has_data())
	|| (summary_external_event_statistics !=  nullptr && summary_external_event_statistics->has_data())
	|| (summary_external_event_summaries !=  nullptr && summary_external_event_summaries->has_data());
}

bool Rcmd::Ospf::Instances::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| (ipfrr_event_offlines !=  nullptr && ipfrr_event_offlines->has_operation())
	|| (ipfrr_event_summaries !=  nullptr && ipfrr_event_summaries->has_operation())
	|| (prefix_event_offlines !=  nullptr && prefix_event_offlines->has_operation())
	|| (prefix_event_statistics !=  nullptr && prefix_event_statistics->has_operation())
	|| (prefix_event_summaries !=  nullptr && prefix_event_summaries->has_operation())
	|| (spf_run_offlines !=  nullptr && spf_run_offlines->has_operation())
	|| (spf_run_summaries !=  nullptr && spf_run_summaries->has_operation())
	|| (summary_external_event_offlines !=  nullptr && summary_external_event_offlines->has_operation())
	|| (summary_external_event_statistics !=  nullptr && summary_external_event_statistics->has_operation())
	|| (summary_external_event_summaries !=  nullptr && summary_external_event_summaries->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/ospf/instances/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-event-offlines")
    {
        if(ipfrr_event_offlines == nullptr)
        {
            ipfrr_event_offlines = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines>();
        }
        return ipfrr_event_offlines;
    }

    if(child_yang_name == "ipfrr-event-summaries")
    {
        if(ipfrr_event_summaries == nullptr)
        {
            ipfrr_event_summaries = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries>();
        }
        return ipfrr_event_summaries;
    }

    if(child_yang_name == "prefix-event-offlines")
    {
        if(prefix_event_offlines == nullptr)
        {
            prefix_event_offlines = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines>();
        }
        return prefix_event_offlines;
    }

    if(child_yang_name == "prefix-event-statistics")
    {
        if(prefix_event_statistics == nullptr)
        {
            prefix_event_statistics = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventStatistics>();
        }
        return prefix_event_statistics;
    }

    if(child_yang_name == "prefix-event-summaries")
    {
        if(prefix_event_summaries == nullptr)
        {
            prefix_event_summaries = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries>();
        }
        return prefix_event_summaries;
    }

    if(child_yang_name == "spf-run-offlines")
    {
        if(spf_run_offlines == nullptr)
        {
            spf_run_offlines = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines>();
        }
        return spf_run_offlines;
    }

    if(child_yang_name == "spf-run-summaries")
    {
        if(spf_run_summaries == nullptr)
        {
            spf_run_summaries = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries>();
        }
        return spf_run_summaries;
    }

    if(child_yang_name == "summary-external-event-offlines")
    {
        if(summary_external_event_offlines == nullptr)
        {
            summary_external_event_offlines = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines>();
        }
        return summary_external_event_offlines;
    }

    if(child_yang_name == "summary-external-event-statistics")
    {
        if(summary_external_event_statistics == nullptr)
        {
            summary_external_event_statistics = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics>();
        }
        return summary_external_event_statistics;
    }

    if(child_yang_name == "summary-external-event-summaries")
    {
        if(summary_external_event_summaries == nullptr)
        {
            summary_external_event_summaries = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries>();
        }
        return summary_external_event_summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipfrr_event_offlines != nullptr)
    {
        children["ipfrr-event-offlines"] = ipfrr_event_offlines;
    }

    if(ipfrr_event_summaries != nullptr)
    {
        children["ipfrr-event-summaries"] = ipfrr_event_summaries;
    }

    if(prefix_event_offlines != nullptr)
    {
        children["prefix-event-offlines"] = prefix_event_offlines;
    }

    if(prefix_event_statistics != nullptr)
    {
        children["prefix-event-statistics"] = prefix_event_statistics;
    }

    if(prefix_event_summaries != nullptr)
    {
        children["prefix-event-summaries"] = prefix_event_summaries;
    }

    if(spf_run_offlines != nullptr)
    {
        children["spf-run-offlines"] = spf_run_offlines;
    }

    if(spf_run_summaries != nullptr)
    {
        children["spf-run-summaries"] = spf_run_summaries;
    }

    if(summary_external_event_offlines != nullptr)
    {
        children["summary-external-event-offlines"] = summary_external_event_offlines;
    }

    if(summary_external_event_statistics != nullptr)
    {
        children["summary-external-event-statistics"] = summary_external_event_statistics;
    }

    if(summary_external_event_summaries != nullptr)
    {
        children["summary-external-event-summaries"] = summary_external_event_summaries;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-event-offlines" || name == "ipfrr-event-summaries" || name == "prefix-event-offlines" || name == "prefix-event-statistics" || name == "prefix-event-summaries" || name == "spf-run-offlines" || name == "spf-run-summaries" || name == "summary-external-event-offlines" || name == "summary-external-event-statistics" || name == "summary-external-event-summaries" || name == "instance-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummaries()
{
    yang_name = "ipfrr-event-summaries"; yang_parent_name = "instance";
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::~IpfrrEventSummaries()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::has_data() const
{
    for (std::size_t index=0; index<ipfrr_event_summary.size(); index++)
    {
        if(ipfrr_event_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_event_summary.size(); index++)
    {
        if(ipfrr_event_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-event-summaries";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpfrrEventSummaries' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-event-summary")
    {
        for(auto const & c : ipfrr_event_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary>();
        c->parent = this;
        ipfrr_event_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipfrr_event_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-event-summary")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrEventSummary()
    :
    event_id{YType::int32, "event-id"},
    completed_spf_run{YType::uint32, "completed-spf-run"},
    coverage{YType::str, "coverage"},
    duration{YType::str, "duration"},
    event_id_xr{YType::uint32, "event-id-xr"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    start_time_offset{YType::str, "start-time-offset"},
    total_routes{YType::uint32, "total-routes"},
    trigger_spf_run{YType::uint32, "trigger-spf-run"},
    trigger_time{YType::str, "trigger-time"},
    wait_time{YType::uint32, "wait-time"}
{
    yang_name = "ipfrr-event-summary"; yang_parent_name = "ipfrr-event-summaries";
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::~IpfrrEventSummary()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::has_data() const
{
    for (std::size_t index=0; index<ipfrr_statistic.size(); index++)
    {
        if(ipfrr_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_node.size(); index++)
    {
        if(remote_node[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| completed_spf_run.is_set
	|| coverage.is_set
	|| duration.is_set
	|| event_id_xr.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| start_time_offset.is_set
	|| total_routes.is_set
	|| trigger_spf_run.is_set
	|| trigger_time.is_set
	|| wait_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_statistic.size(); index++)
    {
        if(ipfrr_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_node.size(); index++)
    {
        if(remote_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(completed_spf_run.yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(event_id_xr.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(start_time_offset.yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(trigger_spf_run.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-event-summary" <<"[event-id='" <<event_id <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpfrrEventSummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (completed_spf_run.is_set || is_set(completed_spf_run.yfilter)) leaf_name_data.push_back(completed_spf_run.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (event_id_xr.is_set || is_set(event_id_xr.yfilter)) leaf_name_data.push_back(event_id_xr.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (start_time_offset.is_set || is_set(start_time_offset.yfilter)) leaf_name_data.push_back(start_time_offset.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (trigger_spf_run.is_set || is_set(trigger_spf_run.yfilter)) leaf_name_data.push_back(trigger_spf_run.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-statistic")
    {
        for(auto const & c : ipfrr_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic>();
        c->parent = this;
        ipfrr_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "remote-node")
    {
        for(auto const & c : remote_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode>();
        c->parent = this;
        remote_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipfrr_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : remote_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "completed-spf-run")
    {
        completed_spf_run = value;
        completed_spf_run.value_namespace = name_space;
        completed_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr = value;
        event_id_xr.value_namespace = name_space;
        event_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes = value;
        fully_protected_routes.value_namespace = name_space;
        fully_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes = value;
        partially_protected_routes.value_namespace = name_space;
        partially_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time-offset")
    {
        start_time_offset = value;
        start_time_offset.value_namespace = name_space;
        start_time_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-spf-run")
    {
        trigger_spf_run = value;
        trigger_spf_run.value_namespace = name_space;
        trigger_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "completed-spf-run")
    {
        completed_spf_run.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "start-time-offset")
    {
        start_time_offset.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "trigger-spf-run")
    {
        trigger_spf_run.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-statistic" || name == "remote-node" || name == "event-id" || name == "completed-spf-run" || name == "coverage" || name == "duration" || name == "event-id-xr" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "start-time-offset" || name == "total-routes" || name == "trigger-spf-run" || name == "trigger-time" || name == "wait-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::IpfrrStatistic()
    :
    below_threshold{YType::boolean, "below-threshold"},
    coverage{YType::str, "coverage"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    local_lfa_coverage{YType::str, "local-lfa-coverage"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    priority{YType::enumeration, "priority"},
    remote_lfa_coverage{YType::str, "remote-lfa-coverage"},
    total_routes{YType::uint32, "total-routes"}
{
    yang_name = "ipfrr-statistic"; yang_parent_name = "ipfrr-event-summary";
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::~IpfrrStatistic()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::has_data() const
{
    return below_threshold.is_set
	|| coverage.is_set
	|| fully_protected_routes.is_set
	|| local_lfa_coverage.is_set
	|| partially_protected_routes.is_set
	|| priority.is_set
	|| remote_lfa_coverage.is_set
	|| total_routes.is_set;
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(below_threshold.yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(local_lfa_coverage.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(remote_lfa_coverage.yfilter)
	|| ydk::is_set(total_routes.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-statistic";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpfrrStatistic' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (below_threshold.is_set || is_set(below_threshold.yfilter)) leaf_name_data.push_back(below_threshold.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (local_lfa_coverage.is_set || is_set(local_lfa_coverage.yfilter)) leaf_name_data.push_back(local_lfa_coverage.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (remote_lfa_coverage.is_set || is_set(remote_lfa_coverage.yfilter)) leaf_name_data.push_back(remote_lfa_coverage.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "below-threshold")
    {
        below_threshold = value;
        below_threshold.value_namespace = name_space;
        below_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes = value;
        fully_protected_routes.value_namespace = name_space;
        fully_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-lfa-coverage")
    {
        local_lfa_coverage = value;
        local_lfa_coverage.value_namespace = name_space;
        local_lfa_coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes = value;
        partially_protected_routes.value_namespace = name_space;
        partially_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-coverage")
    {
        remote_lfa_coverage = value;
        remote_lfa_coverage.value_namespace = name_space;
        remote_lfa_coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "below-threshold")
    {
        below_threshold.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "local-lfa-coverage")
    {
        local_lfa_coverage.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-coverage")
    {
        remote_lfa_coverage.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "below-threshold" || name == "coverage" || name == "fully-protected-routes" || name == "local-lfa-coverage" || name == "partially-protected-routes" || name == "priority" || name == "remote-lfa-coverage" || name == "total-routes")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::RemoteNode()
    :
    in_use_time{YType::str, "in-use-time"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    path_count{YType::uint32, "path-count"},
    remote_node_id{YType::str, "remote-node-id"}
{
    yang_name = "remote-node"; yang_parent_name = "ipfrr-event-summary";
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::~RemoteNode()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::has_data() const
{
    for (std::size_t index=0; index<primary_path.size(); index++)
    {
        if(primary_path[index]->has_data())
            return true;
    }
    return in_use_time.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| path_count.is_set
	|| remote_node_id.is_set;
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::has_operation() const
{
    for (std::size_t index=0; index<primary_path.size(); index++)
    {
        if(primary_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(in_use_time.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(remote_node_id.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteNode' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_use_time.is_set || is_set(in_use_time.yfilter)) leaf_name_data.push_back(in_use_time.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-path")
    {
        for(auto const & c : primary_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath>();
        c->parent = this;
        primary_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : primary_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-use-time")
    {
        in_use_time = value;
        in_use_time.value_namespace = name_space;
        in_use_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-use-time")
    {
        in_use_time.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-path" || name == "in-use-time" || name == "interface-name" || name == "neighbour-address" || name == "path-count" || name == "remote-node-id")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::PrimaryPath()
    :
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"}
{
    yang_name = "primary-path"; yang_parent_name = "remote-node";
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::~PrimaryPath()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::has_data() const
{
    return interface_name.is_set
	|| neighbour_address.is_set;
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-path";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrimaryPath' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "neighbour-address")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistics()
{
    yang_name = "prefix-event-statistics"; yang_parent_name = "instance";
}

Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::~PrefixEventStatistics()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::has_data() const
{
    for (std::size_t index=0; index<prefix_event_statistic.size(); index++)
    {
        if(prefix_event_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::has_operation() const
{
    for (std::size_t index=0; index<prefix_event_statistic.size(); index++)
    {
        if(prefix_event_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-event-statistics";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixEventStatistics' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-event-statistic")
    {
        for(auto const & c : prefix_event_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic>();
        c->parent = this;
        prefix_event_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_event_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-event-statistic")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::PrefixEventStatistic()
    :
    prefix_info{YType::str, "prefix-info"},
    add_count{YType::uint32, "add-count"},
    critical_priority{YType::uint32, "critical-priority"},
    delete_count{YType::uint32, "delete-count"},
    high_priority{YType::uint32, "high-priority"},
    last_change_type{YType::enumeration, "last-change-type"},
    last_cost{YType::uint32, "last-cost"},
    last_event_time{YType::str, "last-event-time"},
    last_priority{YType::enumeration, "last-priority"},
    last_route_type{YType::enumeration, "last-route-type"},
    low_priority{YType::uint32, "low-priority"},
    medium_priority{YType::uint32, "medium-priority"},
    modify_count{YType::uint32, "modify-count"},
    prefix{YType::str, "prefix"},
    prefix_lenth{YType::uint32, "prefix-lenth"},
    threshold_exceed_count{YType::uint32, "threshold-exceed-count"}
{
    yang_name = "prefix-event-statistic"; yang_parent_name = "prefix-event-statistics";
}

Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::~PrefixEventStatistic()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::has_data() const
{
    return prefix_info.is_set
	|| add_count.is_set
	|| critical_priority.is_set
	|| delete_count.is_set
	|| high_priority.is_set
	|| last_change_type.is_set
	|| last_cost.is_set
	|| last_event_time.is_set
	|| last_priority.is_set
	|| last_route_type.is_set
	|| low_priority.is_set
	|| medium_priority.is_set
	|| modify_count.is_set
	|| prefix.is_set
	|| prefix_lenth.is_set
	|| threshold_exceed_count.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_info.yfilter)
	|| ydk::is_set(add_count.yfilter)
	|| ydk::is_set(critical_priority.yfilter)
	|| ydk::is_set(delete_count.yfilter)
	|| ydk::is_set(high_priority.yfilter)
	|| ydk::is_set(last_change_type.yfilter)
	|| ydk::is_set(last_cost.yfilter)
	|| ydk::is_set(last_event_time.yfilter)
	|| ydk::is_set(last_priority.yfilter)
	|| ydk::is_set(last_route_type.yfilter)
	|| ydk::is_set(low_priority.yfilter)
	|| ydk::is_set(medium_priority.yfilter)
	|| ydk::is_set(modify_count.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_lenth.yfilter)
	|| ydk::is_set(threshold_exceed_count.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-event-statistic" <<"[prefix-info='" <<prefix_info <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixEventStatistic' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_info.is_set || is_set(prefix_info.yfilter)) leaf_name_data.push_back(prefix_info.get_name_leafdata());
    if (add_count.is_set || is_set(add_count.yfilter)) leaf_name_data.push_back(add_count.get_name_leafdata());
    if (critical_priority.is_set || is_set(critical_priority.yfilter)) leaf_name_data.push_back(critical_priority.get_name_leafdata());
    if (delete_count.is_set || is_set(delete_count.yfilter)) leaf_name_data.push_back(delete_count.get_name_leafdata());
    if (high_priority.is_set || is_set(high_priority.yfilter)) leaf_name_data.push_back(high_priority.get_name_leafdata());
    if (last_change_type.is_set || is_set(last_change_type.yfilter)) leaf_name_data.push_back(last_change_type.get_name_leafdata());
    if (last_cost.is_set || is_set(last_cost.yfilter)) leaf_name_data.push_back(last_cost.get_name_leafdata());
    if (last_event_time.is_set || is_set(last_event_time.yfilter)) leaf_name_data.push_back(last_event_time.get_name_leafdata());
    if (last_priority.is_set || is_set(last_priority.yfilter)) leaf_name_data.push_back(last_priority.get_name_leafdata());
    if (last_route_type.is_set || is_set(last_route_type.yfilter)) leaf_name_data.push_back(last_route_type.get_name_leafdata());
    if (low_priority.is_set || is_set(low_priority.yfilter)) leaf_name_data.push_back(low_priority.get_name_leafdata());
    if (medium_priority.is_set || is_set(medium_priority.yfilter)) leaf_name_data.push_back(medium_priority.get_name_leafdata());
    if (modify_count.is_set || is_set(modify_count.yfilter)) leaf_name_data.push_back(modify_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_lenth.is_set || is_set(prefix_lenth.yfilter)) leaf_name_data.push_back(prefix_lenth.get_name_leafdata());
    if (threshold_exceed_count.is_set || is_set(threshold_exceed_count.yfilter)) leaf_name_data.push_back(threshold_exceed_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-info")
    {
        prefix_info = value;
        prefix_info.value_namespace = name_space;
        prefix_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-count")
    {
        add_count = value;
        add_count.value_namespace = name_space;
        add_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical-priority")
    {
        critical_priority = value;
        critical_priority.value_namespace = name_space;
        critical_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete-count")
    {
        delete_count = value;
        delete_count.value_namespace = name_space;
        delete_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-priority")
    {
        high_priority = value;
        high_priority.value_namespace = name_space;
        high_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-change-type")
    {
        last_change_type = value;
        last_change_type.value_namespace = name_space;
        last_change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cost")
    {
        last_cost = value;
        last_cost.value_namespace = name_space;
        last_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-event-time")
    {
        last_event_time = value;
        last_event_time.value_namespace = name_space;
        last_event_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-priority")
    {
        last_priority = value;
        last_priority.value_namespace = name_space;
        last_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-route-type")
    {
        last_route_type = value;
        last_route_type.value_namespace = name_space;
        last_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-priority")
    {
        low_priority = value;
        low_priority.value_namespace = name_space;
        low_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium-priority")
    {
        medium_priority = value;
        medium_priority.value_namespace = name_space;
        medium_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modify-count")
    {
        modify_count = value;
        modify_count.value_namespace = name_space;
        modify_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth = value;
        prefix_lenth.value_namespace = name_space;
        prefix_lenth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceed-count")
    {
        threshold_exceed_count = value;
        threshold_exceed_count.value_namespace = name_space;
        threshold_exceed_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-info")
    {
        prefix_info.yfilter = yfilter;
    }
    if(value_path == "add-count")
    {
        add_count.yfilter = yfilter;
    }
    if(value_path == "critical-priority")
    {
        critical_priority.yfilter = yfilter;
    }
    if(value_path == "delete-count")
    {
        delete_count.yfilter = yfilter;
    }
    if(value_path == "high-priority")
    {
        high_priority.yfilter = yfilter;
    }
    if(value_path == "last-change-type")
    {
        last_change_type.yfilter = yfilter;
    }
    if(value_path == "last-cost")
    {
        last_cost.yfilter = yfilter;
    }
    if(value_path == "last-event-time")
    {
        last_event_time.yfilter = yfilter;
    }
    if(value_path == "last-priority")
    {
        last_priority.yfilter = yfilter;
    }
    if(value_path == "last-route-type")
    {
        last_route_type.yfilter = yfilter;
    }
    if(value_path == "low-priority")
    {
        low_priority.yfilter = yfilter;
    }
    if(value_path == "medium-priority")
    {
        medium_priority.yfilter = yfilter;
    }
    if(value_path == "modify-count")
    {
        modify_count.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth.yfilter = yfilter;
    }
    if(value_path == "threshold-exceed-count")
    {
        threshold_exceed_count.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-info" || name == "add-count" || name == "critical-priority" || name == "delete-count" || name == "high-priority" || name == "last-change-type" || name == "last-cost" || name == "last-event-time" || name == "last-priority" || name == "last-route-type" || name == "low-priority" || name == "medium-priority" || name == "modify-count" || name == "prefix" || name == "prefix-lenth" || name == "threshold-exceed-count")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummaries()
{
    yang_name = "spf-run-summaries"; yang_parent_name = "instance";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::~SpfRunSummaries()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::has_data() const
{
    for (std::size_t index=0; index<spf_run_summary.size(); index++)
    {
        if(spf_run_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::has_operation() const
{
    for (std::size_t index=0; index<spf_run_summary.size(); index++)
    {
        if(spf_run_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-run-summaries";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfRunSummaries' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-run-summary")
    {
        for(auto const & c : spf_run_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary>();
        c->parent = this;
        spf_run_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : spf_run_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-run-summary")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfRunSummary()
    :
    spf_run_number{YType::int32, "spf-run-number"}
    	,
    spf_summary(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary>())
{
    spf_summary->parent = this;

    yang_name = "spf-run-summary"; yang_parent_name = "spf-run-summaries";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::~SpfRunSummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::has_data() const
{
    for (std::size_t index=0; index<dijkstra_run.size(); index++)
    {
        if(dijkstra_run[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<inter_area_and_external.size(); index++)
    {
        if(inter_area_and_external[index]->has_data())
            return true;
    }
    return spf_run_number.is_set
	|| (spf_summary !=  nullptr && spf_summary->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::has_operation() const
{
    for (std::size_t index=0; index<dijkstra_run.size(); index++)
    {
        if(dijkstra_run[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<inter_area_and_external.size(); index++)
    {
        if(inter_area_and_external[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(spf_run_number.yfilter)
	|| (spf_summary !=  nullptr && spf_summary->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-run-summary" <<"[spf-run-number='" <<spf_run_number <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfRunSummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_run_number.is_set || is_set(spf_run_number.yfilter)) leaf_name_data.push_back(spf_run_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dijkstra-run")
    {
        for(auto const & c : dijkstra_run)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun>();
        c->parent = this;
        dijkstra_run.push_back(c);
        return c;
    }

    if(child_yang_name == "inter-area-and-external")
    {
        for(auto const & c : inter_area_and_external)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal>();
        c->parent = this;
        inter_area_and_external.push_back(c);
        return c;
    }

    if(child_yang_name == "spf-summary")
    {
        if(spf_summary == nullptr)
        {
            spf_summary = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary>();
        }
        return spf_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dijkstra_run)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : inter_area_and_external)
    {
        children[c->get_segment_path()] = c;
    }

    if(spf_summary != nullptr)
    {
        children["spf-summary"] = spf_summary;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-run-number")
    {
        spf_run_number = value;
        spf_run_number.value_namespace = name_space;
        spf_run_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-run-number")
    {
        spf_run_number.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dijkstra-run" || name == "inter-area-and-external" || name == "spf-summary" || name == "spf-run-number")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::SpfSummary()
    :
    duration{YType::str, "duration"},
    is_data_complete{YType::boolean, "is-data-complete"},
    start_time{YType::str, "start-time"},
    state{YType::enumeration, "state"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    total_dijkstra_runs{YType::uint16, "total-dijkstra-runs"},
    total_inter_area_and_external_batches{YType::uint16, "total-inter-area-and-external-batches"},
    total_type12lsa_changes{YType::uint16, "total-type12lsa-changes"},
    total_type357lsa_changes{YType::uint16, "total-type357lsa-changes"},
    trigger_time{YType::str, "trigger-time"}
{
    yang_name = "spf-summary"; yang_parent_name = "spf-run-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::~SpfSummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::has_data() const
{
    for (std::size_t index=0; index<priority_summary.size(); index++)
    {
        if(priority_summary[index]->has_data())
            return true;
    }
    return duration.is_set
	|| is_data_complete.is_set
	|| start_time.is_set
	|| state.is_set
	|| threshold_exceeded.is_set
	|| total_dijkstra_runs.is_set
	|| total_inter_area_and_external_batches.is_set
	|| total_type12lsa_changes.is_set
	|| total_type357lsa_changes.is_set
	|| trigger_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::has_operation() const
{
    for (std::size_t index=0; index<priority_summary.size(); index++)
    {
        if(priority_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(is_data_complete.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(total_dijkstra_runs.yfilter)
	|| ydk::is_set(total_inter_area_and_external_batches.yfilter)
	|| ydk::is_set(total_type12lsa_changes.yfilter)
	|| ydk::is_set(total_type357lsa_changes.yfilter)
	|| ydk::is_set(trigger_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-summary";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfSummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (is_data_complete.is_set || is_set(is_data_complete.yfilter)) leaf_name_data.push_back(is_data_complete.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (total_dijkstra_runs.is_set || is_set(total_dijkstra_runs.yfilter)) leaf_name_data.push_back(total_dijkstra_runs.get_name_leafdata());
    if (total_inter_area_and_external_batches.is_set || is_set(total_inter_area_and_external_batches.yfilter)) leaf_name_data.push_back(total_inter_area_and_external_batches.get_name_leafdata());
    if (total_type12lsa_changes.is_set || is_set(total_type12lsa_changes.yfilter)) leaf_name_data.push_back(total_type12lsa_changes.get_name_leafdata());
    if (total_type357lsa_changes.is_set || is_set(total_type357lsa_changes.yfilter)) leaf_name_data.push_back(total_type357lsa_changes.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-summary")
    {
        for(auto const & c : priority_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary>();
        c->parent = this;
        priority_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : priority_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-data-complete")
    {
        is_data_complete = value;
        is_data_complete.value_namespace = name_space;
        is_data_complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-dijkstra-runs")
    {
        total_dijkstra_runs = value;
        total_dijkstra_runs.value_namespace = name_space;
        total_dijkstra_runs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-inter-area-and-external-batches")
    {
        total_inter_area_and_external_batches = value;
        total_inter_area_and_external_batches.value_namespace = name_space;
        total_inter_area_and_external_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-type12lsa-changes")
    {
        total_type12lsa_changes = value;
        total_type12lsa_changes.value_namespace = name_space;
        total_type12lsa_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-type357lsa-changes")
    {
        total_type357lsa_changes = value;
        total_type357lsa_changes.value_namespace = name_space;
        total_type357lsa_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "is-data-complete")
    {
        is_data_complete.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "total-dijkstra-runs")
    {
        total_dijkstra_runs.yfilter = yfilter;
    }
    if(value_path == "total-inter-area-and-external-batches")
    {
        total_inter_area_and_external_batches.yfilter = yfilter;
    }
    if(value_path == "total-type12lsa-changes")
    {
        total_type12lsa_changes.yfilter = yfilter;
    }
    if(value_path == "total-type357lsa-changes")
    {
        total_type357lsa_changes.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-summary" || name == "duration" || name == "is-data-complete" || name == "start-time" || name == "state" || name == "threshold-exceeded" || name == "total-dijkstra-runs" || name == "total-inter-area-and-external-batches" || name == "total-type12lsa-changes" || name == "total-type357lsa-changes" || name == "trigger-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::PrioritySummary()
    :
    level{YType::enumeration, "level"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"}
    	,
    ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime>())
	,mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime>())
	,route_statistics(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics>())
{
    ip_convergence_time->parent = this;

    mpls_convergence_time->parent = this;

    route_statistics->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "spf-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::has_data() const
{
    for (std::size_t index=0; index<frr_statistic.size(); index++)
    {
        if(frr_statistic[index]->has_data())
            return true;
    }
    return level.is_set
	|| threshold_exceeded.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data())
	|| (route_statistics !=  nullptr && route_statistics->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::has_operation() const
{
    for (std::size_t index=0; index<frr_statistic.size(); index++)
    {
        if(frr_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation())
	|| (route_statistics !=  nullptr && route_statistics->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrioritySummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-statistic")
    {
        for(auto const & c : frr_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic>();
        c->parent = this;
        frr_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "mpls-convergence-time")
    {
        if(mpls_convergence_time == nullptr)
        {
            mpls_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime>();
        }
        return mpls_convergence_time;
    }

    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frr_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(ip_convergence_time != nullptr)
    {
        children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        children["mpls-convergence-time"] = mpls_convergence_time;
    }

    if(route_statistics != nullptr)
    {
        children["route-statistics"] = route_statistics;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-statistic" || name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "route-statistics" || name == "level" || name == "threshold-exceeded")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    touches{YType::uint32, "touches"},
    unreachables{YType::uint32, "unreachables"}
{
    yang_name = "route-statistics"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::has_data() const
{
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| touches.is_set
	|| unreachables.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(touches.yfilter)
	|| ydk::is_set(unreachables.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteStatistics' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adds")
    {
        adds = value;
        adds.value_namespace = name_space;
        adds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletes")
    {
        deletes = value;
        deletes.value_namespace = name_space;
        deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modifies")
    {
        modifies = value;
        modifies.value_namespace = name_space;
        modifies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachables")
    {
        reachables = value;
        reachables.value_namespace = name_space;
        reachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adds")
    {
        adds.yfilter = yfilter;
    }
    if(value_path == "deletes")
    {
        deletes.yfilter = yfilter;
    }
    if(value_path == "modifies")
    {
        modifies.yfilter = yfilter;
    }
    if(value_path == "reachables")
    {
        reachables.yfilter = yfilter;
    }
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "touches" || name == "unreachables")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::FrrStatistic()
    :
    coverage{YType::str, "coverage"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    total_routes{YType::uint32, "total-routes"}
{
    yang_name = "frr-statistic"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::~FrrStatistic()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::has_data() const
{
    return coverage.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| total_routes.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(total_routes.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-statistic";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrStatistic' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes = value;
        fully_protected_routes.value_namespace = name_space;
        fully_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes = value;
        partially_protected_routes.value_namespace = name_space;
        partially_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coverage" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "total-routes")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::DijkstraRun()
    :
    area_id{YType::str, "area-id"},
    dijkstra_run_number{YType::uint32, "dijkstra-run-number"},
    duration{YType::str, "duration"},
    start_time{YType::str, "start-time"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    trigger_time{YType::str, "trigger-time"},
    wait_time{YType::uint32, "wait-time"}
{
    yang_name = "dijkstra-run"; yang_parent_name = "spf-run-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::~DijkstraRun()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::has_data() const
{
    for (std::size_t index=0; index<lsa_processed.size(); index++)
    {
        if(lsa_processed[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.size(); index++)
    {
        if(trigger_lsa[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| dijkstra_run_number.is_set
	|| duration.is_set
	|| start_time.is_set
	|| threshold_exceeded.is_set
	|| trigger_time.is_set
	|| wait_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::has_operation() const
{
    for (std::size_t index=0; index<lsa_processed.size(); index++)
    {
        if(lsa_processed[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.size(); index++)
    {
        if(trigger_lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(dijkstra_run_number.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dijkstra-run";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DijkstraRun' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (dijkstra_run_number.is_set || is_set(dijkstra_run_number.yfilter)) leaf_name_data.push_back(dijkstra_run_number.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-processed")
    {
        for(auto const & c : lsa_processed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed>();
        c->parent = this;
        lsa_processed.push_back(c);
        return c;
    }

    if(child_yang_name == "priority")
    {
        for(auto const & c : priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority>();
        c->parent = this;
        priority.push_back(c);
        return c;
    }

    if(child_yang_name == "trigger-lsa")
    {
        for(auto const & c : trigger_lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa>();
        c->parent = this;
        trigger_lsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsa_processed)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : priority)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : trigger_lsa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dijkstra-run-number")
    {
        dijkstra_run_number = value;
        dijkstra_run_number.value_namespace = name_space;
        dijkstra_run_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "dijkstra-run-number")
    {
        dijkstra_run_number.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-processed" || name == "priority" || name == "trigger-lsa" || name == "area-id" || name == "dijkstra-run-number" || name == "duration" || name == "start-time" || name == "threshold-exceeded" || name == "trigger-time" || name == "wait-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::TriggerLsa()
    :
    change_type{YType::enumeration, "change-type"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::str, "sequence-number"}
{
    yang_name = "trigger-lsa"; yang_parent_name = "dijkstra-run";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::~TriggerLsa()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::has_data() const
{
    return change_type.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsa";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerLsa' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id = value;
        origin_router_id.value_namespace = name_space;
        origin_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsa-id" || name == "lsa-type" || name == "origin-router-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::Priority()
    :
    priority_summary(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary>())
{
    priority_summary->parent = this;

    yang_name = "priority"; yang_parent_name = "dijkstra-run";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::~Priority()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::has_data() const
{
    for (std::size_t index=0; index<convergence_timeline.size(); index++)
    {
        if(convergence_timeline[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.size(); index++)
    {
        if(leaf_networks_added[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.size(); index++)
    {
        if(leaf_networks_deleted[index]->has_data())
            return true;
    }
    return (priority_summary !=  nullptr && priority_summary->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::has_operation() const
{
    for (std::size_t index=0; index<convergence_timeline.size(); index++)
    {
        if(convergence_timeline[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.size(); index++)
    {
        if(leaf_networks_added[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.size(); index++)
    {
        if(leaf_networks_deleted[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (priority_summary !=  nullptr && priority_summary->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "convergence-timeline")
    {
        for(auto const & c : convergence_timeline)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline>();
        c->parent = this;
        convergence_timeline.push_back(c);
        return c;
    }

    if(child_yang_name == "leaf-networks-added")
    {
        for(auto const & c : leaf_networks_added)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded>();
        c->parent = this;
        leaf_networks_added.push_back(c);
        return c;
    }

    if(child_yang_name == "leaf-networks-deleted")
    {
        for(auto const & c : leaf_networks_deleted)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted>();
        c->parent = this;
        leaf_networks_deleted.push_back(c);
        return c;
    }

    if(child_yang_name == "priority-summary")
    {
        if(priority_summary == nullptr)
        {
            priority_summary = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary>();
        }
        return priority_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : convergence_timeline)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : leaf_networks_added)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : leaf_networks_deleted)
    {
        children[c->get_segment_path()] = c;
    }

    if(priority_summary != nullptr)
    {
        children["priority-summary"] = priority_summary;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "convergence-timeline" || name == "leaf-networks-added" || name == "leaf-networks-deleted" || name == "priority-summary")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::PrioritySummary()
    :
    level{YType::enumeration, "level"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"}
    	,
    ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime>())
	,mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime>())
	,route_statistics(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics>())
{
    ip_convergence_time->parent = this;

    mpls_convergence_time->parent = this;

    route_statistics->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "priority";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::has_data() const
{
    for (std::size_t index=0; index<frr_statistic.size(); index++)
    {
        if(frr_statistic[index]->has_data())
            return true;
    }
    return level.is_set
	|| threshold_exceeded.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data())
	|| (route_statistics !=  nullptr && route_statistics->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::has_operation() const
{
    for (std::size_t index=0; index<frr_statistic.size(); index++)
    {
        if(frr_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation())
	|| (route_statistics !=  nullptr && route_statistics->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrioritySummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-statistic")
    {
        for(auto const & c : frr_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic>();
        c->parent = this;
        frr_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "mpls-convergence-time")
    {
        if(mpls_convergence_time == nullptr)
        {
            mpls_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime>();
        }
        return mpls_convergence_time;
    }

    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frr_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(ip_convergence_time != nullptr)
    {
        children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        children["mpls-convergence-time"] = mpls_convergence_time;
    }

    if(route_statistics != nullptr)
    {
        children["route-statistics"] = route_statistics;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-statistic" || name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "route-statistics" || name == "level" || name == "threshold-exceeded")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    touches{YType::uint32, "touches"},
    unreachables{YType::uint32, "unreachables"}
{
    yang_name = "route-statistics"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::has_data() const
{
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| touches.is_set
	|| unreachables.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(touches.yfilter)
	|| ydk::is_set(unreachables.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteStatistics' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adds")
    {
        adds = value;
        adds.value_namespace = name_space;
        adds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletes")
    {
        deletes = value;
        deletes.value_namespace = name_space;
        deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modifies")
    {
        modifies = value;
        modifies.value_namespace = name_space;
        modifies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachables")
    {
        reachables = value;
        reachables.value_namespace = name_space;
        reachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adds")
    {
        adds.yfilter = yfilter;
    }
    if(value_path == "deletes")
    {
        deletes.yfilter = yfilter;
    }
    if(value_path == "modifies")
    {
        modifies.yfilter = yfilter;
    }
    if(value_path == "reachables")
    {
        reachables.yfilter = yfilter;
    }
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "touches" || name == "unreachables")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::FrrStatistic()
    :
    coverage{YType::str, "coverage"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    total_routes{YType::uint32, "total-routes"}
{
    yang_name = "frr-statistic"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::~FrrStatistic()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::has_data() const
{
    return coverage.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| total_routes.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(total_routes.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-statistic";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrStatistic' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes = value;
        fully_protected_routes.value_namespace = name_space;
        fully_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes = value;
        partially_protected_routes.value_namespace = name_space;
        partially_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coverage" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "total-routes")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::ConvergenceTimeline()
    :
    ldp_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter>())
	,ldp_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit>())
	,lsd_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter>())
	,lsd_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit>())
	,ri_bv4_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter>())
	,ri_bv4_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit>())
	,ri_bv4_redistribute(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute>())
	,route_origin(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin>())
{
    ldp_enter->parent = this;

    ldp_exit->parent = this;

    lsd_enter->parent = this;

    lsd_exit->parent = this;

    ri_bv4_enter->parent = this;

    ri_bv4_exit->parent = this;

    ri_bv4_redistribute->parent = this;

    route_origin->parent = this;

    yang_name = "convergence-timeline"; yang_parent_name = "priority";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::~ConvergenceTimeline()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::has_data() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return (ldp_enter !=  nullptr && ldp_enter->has_data())
	|| (ldp_exit !=  nullptr && ldp_exit->has_data())
	|| (lsd_enter !=  nullptr && lsd_enter->has_data())
	|| (lsd_exit !=  nullptr && lsd_exit->has_data())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_data())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_data())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_data())
	|| (route_origin !=  nullptr && route_origin->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ldp_enter !=  nullptr && ldp_enter->has_operation())
	|| (ldp_exit !=  nullptr && ldp_exit->has_operation())
	|| (lsd_enter !=  nullptr && lsd_enter->has_operation())
	|| (lsd_exit !=  nullptr && lsd_exit->has_operation())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_operation())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_operation())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_operation())
	|| (route_origin !=  nullptr && route_origin->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence-timeline";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConvergenceTimeline' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-ip")
    {
        for(auto const & c : lc_ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp>();
        c->parent = this;
        lc_ip.push_back(c);
        return c;
    }

    if(child_yang_name == "lc-mpls")
    {
        for(auto const & c : lc_mpls)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls>();
        c->parent = this;
        lc_mpls.push_back(c);
        return c;
    }

    if(child_yang_name == "ldp-enter")
    {
        if(ldp_enter == nullptr)
        {
            ldp_enter = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter>();
        }
        return ldp_enter;
    }

    if(child_yang_name == "ldp-exit")
    {
        if(ldp_exit == nullptr)
        {
            ldp_exit = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit>();
        }
        return ldp_exit;
    }

    if(child_yang_name == "lsd-enter")
    {
        if(lsd_enter == nullptr)
        {
            lsd_enter = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter>();
        }
        return lsd_enter;
    }

    if(child_yang_name == "lsd-exit")
    {
        if(lsd_exit == nullptr)
        {
            lsd_exit = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit>();
        }
        return lsd_exit;
    }

    if(child_yang_name == "ri-bv4-enter")
    {
        if(ri_bv4_enter == nullptr)
        {
            ri_bv4_enter = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter>();
        }
        return ri_bv4_enter;
    }

    if(child_yang_name == "ri-bv4-exit")
    {
        if(ri_bv4_exit == nullptr)
        {
            ri_bv4_exit = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit>();
        }
        return ri_bv4_exit;
    }

    if(child_yang_name == "ri-bv4-redistribute")
    {
        if(ri_bv4_redistribute == nullptr)
        {
            ri_bv4_redistribute = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute>();
        }
        return ri_bv4_redistribute;
    }

    if(child_yang_name == "route-origin")
    {
        if(route_origin == nullptr)
        {
            route_origin = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin>();
        }
        return route_origin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lc_ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lc_mpls)
    {
        children[c->get_segment_path()] = c;
    }

    if(ldp_enter != nullptr)
    {
        children["ldp-enter"] = ldp_enter;
    }

    if(ldp_exit != nullptr)
    {
        children["ldp-exit"] = ldp_exit;
    }

    if(lsd_enter != nullptr)
    {
        children["lsd-enter"] = lsd_enter;
    }

    if(lsd_exit != nullptr)
    {
        children["lsd-exit"] = lsd_exit;
    }

    if(ri_bv4_enter != nullptr)
    {
        children["ri-bv4-enter"] = ri_bv4_enter;
    }

    if(ri_bv4_exit != nullptr)
    {
        children["ri-bv4-exit"] = ri_bv4_exit;
    }

    if(ri_bv4_redistribute != nullptr)
    {
        children["ri-bv4-redistribute"] = ri_bv4_redistribute;
    }

    if(route_origin != nullptr)
    {
        children["route-origin"] = route_origin;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-ip" || name == "lc-mpls" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "route-origin")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::RouteOrigin()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "route-origin"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::~RouteOrigin()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-origin";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteOrigin' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::RiBv4Enter()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ri-bv4-enter"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::~RiBv4Enter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-enter";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RiBv4Enter' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::RiBv4Exit()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ri-bv4-exit"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::~RiBv4Exit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-exit";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RiBv4Exit' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::RiBv4Redistribute()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ri-bv4-redistribute"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::~RiBv4Redistribute()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-redistribute";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RiBv4Redistribute' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::LdpEnter()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ldp-enter"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::~LdpEnter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-enter";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpEnter' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::LdpExit()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ldp-exit"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::~LdpExit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-exit";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpExit' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::LsdEnter()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "lsd-enter"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::~LsdEnter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-enter";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsdEnter' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::LsdExit()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "lsd-exit"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::~LsdExit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-exit";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsdExit' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::LcIp()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
    	,
    fib_complete(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete>())
{
    fib_complete->parent = this;

    yang_name = "lc-ip"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::~LcIp()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::has_data() const
{
    return node_name.is_set
	|| speed.is_set
	|| (fib_complete !=  nullptr && fib_complete->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| (fib_complete !=  nullptr && fib_complete->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-ip";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcIp' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-complete")
    {
        if(fib_complete == nullptr)
        {
            fib_complete = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete>();
        }
        return fib_complete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fib_complete != nullptr)
    {
        children["fib-complete"] = fib_complete;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::FibComplete()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "fib-complete"; yang_parent_name = "lc-ip";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::~FibComplete()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibComplete' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::LcMpls()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
    	,
    fib_complete(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete>())
{
    fib_complete->parent = this;

    yang_name = "lc-mpls"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::~LcMpls()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::has_data() const
{
    return node_name.is_set
	|| speed.is_set
	|| (fib_complete !=  nullptr && fib_complete->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| (fib_complete !=  nullptr && fib_complete->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-mpls";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcMpls' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-complete")
    {
        if(fib_complete == nullptr)
        {
            fib_complete = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete>();
        }
        return fib_complete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fib_complete != nullptr)
    {
        children["fib-complete"] = fib_complete;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::FibComplete()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "fib-complete"; yang_parent_name = "lc-mpls";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::~FibComplete()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibComplete' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded::LeafNetworksAdded()
    :
    address{YType::str, "address"},
    net_mask{YType::uint8, "net-mask"}
{
    yang_name = "leaf-networks-added"; yang_parent_name = "priority";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded::~LeafNetworksAdded()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded::has_data() const
{
    return address.is_set
	|| net_mask.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(net_mask.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leaf-networks-added";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeafNetworksAdded' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-mask")
    {
        net_mask = value;
        net_mask.value_namespace = name_space;
        net_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "net-mask")
    {
        net_mask.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "net-mask")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted::LeafNetworksDeleted()
    :
    address{YType::str, "address"},
    net_mask{YType::uint8, "net-mask"}
{
    yang_name = "leaf-networks-deleted"; yang_parent_name = "priority";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted::~LeafNetworksDeleted()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted::has_data() const
{
    return address.is_set
	|| net_mask.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(net_mask.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leaf-networks-deleted";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeafNetworksDeleted' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-mask")
    {
        net_mask = value;
        net_mask.value_namespace = name_space;
        net_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "net-mask")
    {
        net_mask.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "net-mask")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::LsaProcessed()
    :
    change_type{YType::enumeration, "change-type"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::str, "sequence-number"}
{
    yang_name = "lsa-processed"; yang_parent_name = "dijkstra-run";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::~LsaProcessed()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::has_data() const
{
    return change_type.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-processed";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaProcessed' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id = value;
        origin_router_id.value_namespace = name_space;
        origin_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsa-id" || name == "lsa-type" || name == "origin-router-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::InterAreaAndExternal()
{
    yang_name = "inter-area-and-external"; yang_parent_name = "spf-run-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::~InterAreaAndExternal()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::has_data() const
{
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::has_operation() const
{
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-and-external";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterAreaAndExternal' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        for(auto const & c : priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority>();
        c->parent = this;
        priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : priority)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::Priority()
    :
    priority_summary(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary>())
{
    priority_summary->parent = this;

    yang_name = "priority"; yang_parent_name = "inter-area-and-external";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::~Priority()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::has_data() const
{
    for (std::size_t index=0; index<convergence_timeline.size(); index++)
    {
        if(convergence_timeline[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.size(); index++)
    {
        if(leaf_networks_added[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.size(); index++)
    {
        if(leaf_networks_deleted[index]->has_data())
            return true;
    }
    return (priority_summary !=  nullptr && priority_summary->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::has_operation() const
{
    for (std::size_t index=0; index<convergence_timeline.size(); index++)
    {
        if(convergence_timeline[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.size(); index++)
    {
        if(leaf_networks_added[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.size(); index++)
    {
        if(leaf_networks_deleted[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (priority_summary !=  nullptr && priority_summary->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "convergence-timeline")
    {
        for(auto const & c : convergence_timeline)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline>();
        c->parent = this;
        convergence_timeline.push_back(c);
        return c;
    }

    if(child_yang_name == "leaf-networks-added")
    {
        for(auto const & c : leaf_networks_added)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded>();
        c->parent = this;
        leaf_networks_added.push_back(c);
        return c;
    }

    if(child_yang_name == "leaf-networks-deleted")
    {
        for(auto const & c : leaf_networks_deleted)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted>();
        c->parent = this;
        leaf_networks_deleted.push_back(c);
        return c;
    }

    if(child_yang_name == "priority-summary")
    {
        if(priority_summary == nullptr)
        {
            priority_summary = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary>();
        }
        return priority_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : convergence_timeline)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : leaf_networks_added)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : leaf_networks_deleted)
    {
        children[c->get_segment_path()] = c;
    }

    if(priority_summary != nullptr)
    {
        children["priority-summary"] = priority_summary;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "convergence-timeline" || name == "leaf-networks-added" || name == "leaf-networks-deleted" || name == "priority-summary")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::PrioritySummary()
    :
    level{YType::enumeration, "level"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    type3ls_as{YType::uint32, "type3ls-as"},
    type4ls_as{YType::uint32, "type4ls-as"},
    type57ls_as{YType::uint32, "type57ls-as"}
    	,
    ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime>())
	,mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime>())
	,route_statistics(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics>())
{
    ip_convergence_time->parent = this;

    mpls_convergence_time->parent = this;

    route_statistics->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "priority";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::has_data() const
{
    return level.is_set
	|| threshold_exceeded.is_set
	|| type3ls_as.is_set
	|| type4ls_as.is_set
	|| type57ls_as.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data())
	|| (route_statistics !=  nullptr && route_statistics->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(type3ls_as.yfilter)
	|| ydk::is_set(type4ls_as.yfilter)
	|| ydk::is_set(type57ls_as.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation())
	|| (route_statistics !=  nullptr && route_statistics->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrioritySummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (type3ls_as.is_set || is_set(type3ls_as.yfilter)) leaf_name_data.push_back(type3ls_as.get_name_leafdata());
    if (type4ls_as.is_set || is_set(type4ls_as.yfilter)) leaf_name_data.push_back(type4ls_as.get_name_leafdata());
    if (type57ls_as.is_set || is_set(type57ls_as.yfilter)) leaf_name_data.push_back(type57ls_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "mpls-convergence-time")
    {
        if(mpls_convergence_time == nullptr)
        {
            mpls_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime>();
        }
        return mpls_convergence_time;
    }

    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_convergence_time != nullptr)
    {
        children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        children["mpls-convergence-time"] = mpls_convergence_time;
    }

    if(route_statistics != nullptr)
    {
        children["route-statistics"] = route_statistics;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type3ls-as")
    {
        type3ls_as = value;
        type3ls_as.value_namespace = name_space;
        type3ls_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type4ls-as")
    {
        type4ls_as = value;
        type4ls_as.value_namespace = name_space;
        type4ls_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type57ls-as")
    {
        type57ls_as = value;
        type57ls_as.value_namespace = name_space;
        type57ls_as.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "type3ls-as")
    {
        type3ls_as.yfilter = yfilter;
    }
    if(value_path == "type4ls-as")
    {
        type4ls_as.yfilter = yfilter;
    }
    if(value_path == "type57ls-as")
    {
        type57ls_as.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "route-statistics" || name == "level" || name == "threshold-exceeded" || name == "type3ls-as" || name == "type4ls-as" || name == "type57ls-as")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    touches{YType::uint32, "touches"},
    unreachables{YType::uint32, "unreachables"}
{
    yang_name = "route-statistics"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::has_data() const
{
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| touches.is_set
	|| unreachables.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(touches.yfilter)
	|| ydk::is_set(unreachables.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteStatistics' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adds")
    {
        adds = value;
        adds.value_namespace = name_space;
        adds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletes")
    {
        deletes = value;
        deletes.value_namespace = name_space;
        deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modifies")
    {
        modifies = value;
        modifies.value_namespace = name_space;
        modifies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachables")
    {
        reachables = value;
        reachables.value_namespace = name_space;
        reachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adds")
    {
        adds.yfilter = yfilter;
    }
    if(value_path == "deletes")
    {
        deletes.yfilter = yfilter;
    }
    if(value_path == "modifies")
    {
        modifies.yfilter = yfilter;
    }
    if(value_path == "reachables")
    {
        reachables.yfilter = yfilter;
    }
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "touches" || name == "unreachables")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::ConvergenceTimeline()
    :
    ldp_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter>())
	,ldp_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit>())
	,lsd_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter>())
	,lsd_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit>())
	,ri_bv4_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter>())
	,ri_bv4_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit>())
	,ri_bv4_redistribute(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute>())
	,route_origin(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin>())
{
    ldp_enter->parent = this;

    ldp_exit->parent = this;

    lsd_enter->parent = this;

    lsd_exit->parent = this;

    ri_bv4_enter->parent = this;

    ri_bv4_exit->parent = this;

    ri_bv4_redistribute->parent = this;

    route_origin->parent = this;

    yang_name = "convergence-timeline"; yang_parent_name = "priority";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::~ConvergenceTimeline()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::has_data() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return (ldp_enter !=  nullptr && ldp_enter->has_data())
	|| (ldp_exit !=  nullptr && ldp_exit->has_data())
	|| (lsd_enter !=  nullptr && lsd_enter->has_data())
	|| (lsd_exit !=  nullptr && lsd_exit->has_data())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_data())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_data())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_data())
	|| (route_origin !=  nullptr && route_origin->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ldp_enter !=  nullptr && ldp_enter->has_operation())
	|| (ldp_exit !=  nullptr && ldp_exit->has_operation())
	|| (lsd_enter !=  nullptr && lsd_enter->has_operation())
	|| (lsd_exit !=  nullptr && lsd_exit->has_operation())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_operation())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_operation())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_operation())
	|| (route_origin !=  nullptr && route_origin->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence-timeline";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConvergenceTimeline' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-ip")
    {
        for(auto const & c : lc_ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp>();
        c->parent = this;
        lc_ip.push_back(c);
        return c;
    }

    if(child_yang_name == "lc-mpls")
    {
        for(auto const & c : lc_mpls)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls>();
        c->parent = this;
        lc_mpls.push_back(c);
        return c;
    }

    if(child_yang_name == "ldp-enter")
    {
        if(ldp_enter == nullptr)
        {
            ldp_enter = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter>();
        }
        return ldp_enter;
    }

    if(child_yang_name == "ldp-exit")
    {
        if(ldp_exit == nullptr)
        {
            ldp_exit = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit>();
        }
        return ldp_exit;
    }

    if(child_yang_name == "lsd-enter")
    {
        if(lsd_enter == nullptr)
        {
            lsd_enter = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter>();
        }
        return lsd_enter;
    }

    if(child_yang_name == "lsd-exit")
    {
        if(lsd_exit == nullptr)
        {
            lsd_exit = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit>();
        }
        return lsd_exit;
    }

    if(child_yang_name == "ri-bv4-enter")
    {
        if(ri_bv4_enter == nullptr)
        {
            ri_bv4_enter = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter>();
        }
        return ri_bv4_enter;
    }

    if(child_yang_name == "ri-bv4-exit")
    {
        if(ri_bv4_exit == nullptr)
        {
            ri_bv4_exit = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit>();
        }
        return ri_bv4_exit;
    }

    if(child_yang_name == "ri-bv4-redistribute")
    {
        if(ri_bv4_redistribute == nullptr)
        {
            ri_bv4_redistribute = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute>();
        }
        return ri_bv4_redistribute;
    }

    if(child_yang_name == "route-origin")
    {
        if(route_origin == nullptr)
        {
            route_origin = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin>();
        }
        return route_origin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lc_ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lc_mpls)
    {
        children[c->get_segment_path()] = c;
    }

    if(ldp_enter != nullptr)
    {
        children["ldp-enter"] = ldp_enter;
    }

    if(ldp_exit != nullptr)
    {
        children["ldp-exit"] = ldp_exit;
    }

    if(lsd_enter != nullptr)
    {
        children["lsd-enter"] = lsd_enter;
    }

    if(lsd_exit != nullptr)
    {
        children["lsd-exit"] = lsd_exit;
    }

    if(ri_bv4_enter != nullptr)
    {
        children["ri-bv4-enter"] = ri_bv4_enter;
    }

    if(ri_bv4_exit != nullptr)
    {
        children["ri-bv4-exit"] = ri_bv4_exit;
    }

    if(ri_bv4_redistribute != nullptr)
    {
        children["ri-bv4-redistribute"] = ri_bv4_redistribute;
    }

    if(route_origin != nullptr)
    {
        children["route-origin"] = route_origin;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-ip" || name == "lc-mpls" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "route-origin")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::RouteOrigin()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "route-origin"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::~RouteOrigin()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-origin";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteOrigin' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::RiBv4Enter()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ri-bv4-enter"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::~RiBv4Enter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-enter";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RiBv4Enter' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::RiBv4Exit()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ri-bv4-exit"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::~RiBv4Exit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-exit";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RiBv4Exit' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::RiBv4Redistribute()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ri-bv4-redistribute"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::~RiBv4Redistribute()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-redistribute";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RiBv4Redistribute' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::LdpEnter()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ldp-enter"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::~LdpEnter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-enter";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpEnter' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::LdpExit()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ldp-exit"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::~LdpExit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-exit";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpExit' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::LsdEnter()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "lsd-enter"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::~LsdEnter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-enter";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsdEnter' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::LsdExit()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "lsd-exit"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::~LsdExit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-exit";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsdExit' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::LcIp()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
    	,
    fib_complete(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete>())
{
    fib_complete->parent = this;

    yang_name = "lc-ip"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::~LcIp()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::has_data() const
{
    return node_name.is_set
	|| speed.is_set
	|| (fib_complete !=  nullptr && fib_complete->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| (fib_complete !=  nullptr && fib_complete->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-ip";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcIp' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-complete")
    {
        if(fib_complete == nullptr)
        {
            fib_complete = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete>();
        }
        return fib_complete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fib_complete != nullptr)
    {
        children["fib-complete"] = fib_complete;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::FibComplete()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "fib-complete"; yang_parent_name = "lc-ip";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::~FibComplete()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibComplete' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::LcMpls()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
    	,
    fib_complete(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete>())
{
    fib_complete->parent = this;

    yang_name = "lc-mpls"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::~LcMpls()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::has_data() const
{
    return node_name.is_set
	|| speed.is_set
	|| (fib_complete !=  nullptr && fib_complete->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| (fib_complete !=  nullptr && fib_complete->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-mpls";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcMpls' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-complete")
    {
        if(fib_complete == nullptr)
        {
            fib_complete = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete>();
        }
        return fib_complete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fib_complete != nullptr)
    {
        children["fib-complete"] = fib_complete;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::FibComplete()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "fib-complete"; yang_parent_name = "lc-mpls";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::~FibComplete()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibComplete' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded::LeafNetworksAdded()
    :
    address{YType::str, "address"},
    net_mask{YType::uint8, "net-mask"}
{
    yang_name = "leaf-networks-added"; yang_parent_name = "priority";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded::~LeafNetworksAdded()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded::has_data() const
{
    return address.is_set
	|| net_mask.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(net_mask.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leaf-networks-added";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeafNetworksAdded' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-mask")
    {
        net_mask = value;
        net_mask.value_namespace = name_space;
        net_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "net-mask")
    {
        net_mask.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "net-mask")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted::LeafNetworksDeleted()
    :
    address{YType::str, "address"},
    net_mask{YType::uint8, "net-mask"}
{
    yang_name = "leaf-networks-deleted"; yang_parent_name = "priority";
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted::~LeafNetworksDeleted()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted::has_data() const
{
    return address.is_set
	|| net_mask.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(net_mask.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leaf-networks-deleted";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeafNetworksDeleted' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-mask")
    {
        net_mask = value;
        net_mask.value_namespace = name_space;
        net_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "net-mask")
    {
        net_mask.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "net-mask")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOfflines()
{
    yang_name = "ipfrr-event-offlines"; yang_parent_name = "instance";
}

Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::~IpfrrEventOfflines()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::has_data() const
{
    for (std::size_t index=0; index<ipfrr_event_offline.size(); index++)
    {
        if(ipfrr_event_offline[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_event_offline.size(); index++)
    {
        if(ipfrr_event_offline[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-event-offlines";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpfrrEventOfflines' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-event-offline")
    {
        for(auto const & c : ipfrr_event_offline)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline>();
        c->parent = this;
        ipfrr_event_offline.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipfrr_event_offline)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-event-offline")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrEventOffline()
    :
    event_id{YType::int32, "event-id"},
    completed_spf_run{YType::uint32, "completed-spf-run"},
    coverage{YType::str, "coverage"},
    duration{YType::str, "duration"},
    event_id_xr{YType::uint32, "event-id-xr"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    start_time_offset{YType::str, "start-time-offset"},
    total_routes{YType::uint32, "total-routes"},
    trigger_spf_run{YType::uint32, "trigger-spf-run"},
    trigger_time{YType::str, "trigger-time"},
    wait_time{YType::uint32, "wait-time"}
{
    yang_name = "ipfrr-event-offline"; yang_parent_name = "ipfrr-event-offlines";
}

Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::~IpfrrEventOffline()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::has_data() const
{
    for (std::size_t index=0; index<ipfrr_statistic.size(); index++)
    {
        if(ipfrr_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_node.size(); index++)
    {
        if(remote_node[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| completed_spf_run.is_set
	|| coverage.is_set
	|| duration.is_set
	|| event_id_xr.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| start_time_offset.is_set
	|| total_routes.is_set
	|| trigger_spf_run.is_set
	|| trigger_time.is_set
	|| wait_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_statistic.size(); index++)
    {
        if(ipfrr_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_node.size(); index++)
    {
        if(remote_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(completed_spf_run.yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(event_id_xr.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(start_time_offset.yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(trigger_spf_run.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-event-offline" <<"[event-id='" <<event_id <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpfrrEventOffline' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (completed_spf_run.is_set || is_set(completed_spf_run.yfilter)) leaf_name_data.push_back(completed_spf_run.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (event_id_xr.is_set || is_set(event_id_xr.yfilter)) leaf_name_data.push_back(event_id_xr.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (start_time_offset.is_set || is_set(start_time_offset.yfilter)) leaf_name_data.push_back(start_time_offset.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (trigger_spf_run.is_set || is_set(trigger_spf_run.yfilter)) leaf_name_data.push_back(trigger_spf_run.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-statistic")
    {
        for(auto const & c : ipfrr_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic>();
        c->parent = this;
        ipfrr_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "remote-node")
    {
        for(auto const & c : remote_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode>();
        c->parent = this;
        remote_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipfrr_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : remote_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "completed-spf-run")
    {
        completed_spf_run = value;
        completed_spf_run.value_namespace = name_space;
        completed_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr = value;
        event_id_xr.value_namespace = name_space;
        event_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes = value;
        fully_protected_routes.value_namespace = name_space;
        fully_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes = value;
        partially_protected_routes.value_namespace = name_space;
        partially_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time-offset")
    {
        start_time_offset = value;
        start_time_offset.value_namespace = name_space;
        start_time_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-spf-run")
    {
        trigger_spf_run = value;
        trigger_spf_run.value_namespace = name_space;
        trigger_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "completed-spf-run")
    {
        completed_spf_run.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "start-time-offset")
    {
        start_time_offset.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "trigger-spf-run")
    {
        trigger_spf_run.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-statistic" || name == "remote-node" || name == "event-id" || name == "completed-spf-run" || name == "coverage" || name == "duration" || name == "event-id-xr" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "start-time-offset" || name == "total-routes" || name == "trigger-spf-run" || name == "trigger-time" || name == "wait-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::IpfrrStatistic()
    :
    below_threshold{YType::boolean, "below-threshold"},
    coverage{YType::str, "coverage"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    local_lfa_coverage{YType::str, "local-lfa-coverage"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    priority{YType::enumeration, "priority"},
    remote_lfa_coverage{YType::str, "remote-lfa-coverage"},
    total_routes{YType::uint32, "total-routes"}
{
    yang_name = "ipfrr-statistic"; yang_parent_name = "ipfrr-event-offline";
}

Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::~IpfrrStatistic()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::has_data() const
{
    return below_threshold.is_set
	|| coverage.is_set
	|| fully_protected_routes.is_set
	|| local_lfa_coverage.is_set
	|| partially_protected_routes.is_set
	|| priority.is_set
	|| remote_lfa_coverage.is_set
	|| total_routes.is_set;
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(below_threshold.yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(local_lfa_coverage.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(remote_lfa_coverage.yfilter)
	|| ydk::is_set(total_routes.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-statistic";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpfrrStatistic' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (below_threshold.is_set || is_set(below_threshold.yfilter)) leaf_name_data.push_back(below_threshold.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (local_lfa_coverage.is_set || is_set(local_lfa_coverage.yfilter)) leaf_name_data.push_back(local_lfa_coverage.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (remote_lfa_coverage.is_set || is_set(remote_lfa_coverage.yfilter)) leaf_name_data.push_back(remote_lfa_coverage.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "below-threshold")
    {
        below_threshold = value;
        below_threshold.value_namespace = name_space;
        below_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes = value;
        fully_protected_routes.value_namespace = name_space;
        fully_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-lfa-coverage")
    {
        local_lfa_coverage = value;
        local_lfa_coverage.value_namespace = name_space;
        local_lfa_coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes = value;
        partially_protected_routes.value_namespace = name_space;
        partially_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-coverage")
    {
        remote_lfa_coverage = value;
        remote_lfa_coverage.value_namespace = name_space;
        remote_lfa_coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "below-threshold")
    {
        below_threshold.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "local-lfa-coverage")
    {
        local_lfa_coverage.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-coverage")
    {
        remote_lfa_coverage.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "below-threshold" || name == "coverage" || name == "fully-protected-routes" || name == "local-lfa-coverage" || name == "partially-protected-routes" || name == "priority" || name == "remote-lfa-coverage" || name == "total-routes")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::RemoteNode()
    :
    in_use_time{YType::str, "in-use-time"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    path_count{YType::uint32, "path-count"},
    remote_node_id{YType::str, "remote-node-id"}
{
    yang_name = "remote-node"; yang_parent_name = "ipfrr-event-offline";
}

Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::~RemoteNode()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::has_data() const
{
    for (std::size_t index=0; index<primary_path.size(); index++)
    {
        if(primary_path[index]->has_data())
            return true;
    }
    return in_use_time.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| path_count.is_set
	|| remote_node_id.is_set;
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::has_operation() const
{
    for (std::size_t index=0; index<primary_path.size(); index++)
    {
        if(primary_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(in_use_time.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(remote_node_id.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteNode' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_use_time.is_set || is_set(in_use_time.yfilter)) leaf_name_data.push_back(in_use_time.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-path")
    {
        for(auto const & c : primary_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath>();
        c->parent = this;
        primary_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : primary_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-use-time")
    {
        in_use_time = value;
        in_use_time.value_namespace = name_space;
        in_use_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-use-time")
    {
        in_use_time.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-path" || name == "in-use-time" || name == "interface-name" || name == "neighbour-address" || name == "path-count" || name == "remote-node-id")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::PrimaryPath()
    :
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"}
{
    yang_name = "primary-path"; yang_parent_name = "remote-node";
}

Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::~PrimaryPath()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::has_data() const
{
    return interface_name.is_set
	|| neighbour_address.is_set;
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-path";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrimaryPath' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "neighbour-address")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOfflines()
{
    yang_name = "spf-run-offlines"; yang_parent_name = "instance";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::~SpfRunOfflines()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::has_data() const
{
    for (std::size_t index=0; index<spf_run_offline.size(); index++)
    {
        if(spf_run_offline[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::has_operation() const
{
    for (std::size_t index=0; index<spf_run_offline.size(); index++)
    {
        if(spf_run_offline[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-run-offlines";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfRunOfflines' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-run-offline")
    {
        for(auto const & c : spf_run_offline)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline>();
        c->parent = this;
        spf_run_offline.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : spf_run_offline)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-run-offline")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfRunOffline()
    :
    spf_run_number{YType::int32, "spf-run-number"}
    	,
    spf_summary(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary>())
{
    spf_summary->parent = this;

    yang_name = "spf-run-offline"; yang_parent_name = "spf-run-offlines";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::~SpfRunOffline()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::has_data() const
{
    for (std::size_t index=0; index<dijkstra_run.size(); index++)
    {
        if(dijkstra_run[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<inter_area_and_external.size(); index++)
    {
        if(inter_area_and_external[index]->has_data())
            return true;
    }
    return spf_run_number.is_set
	|| (spf_summary !=  nullptr && spf_summary->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::has_operation() const
{
    for (std::size_t index=0; index<dijkstra_run.size(); index++)
    {
        if(dijkstra_run[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<inter_area_and_external.size(); index++)
    {
        if(inter_area_and_external[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(spf_run_number.yfilter)
	|| (spf_summary !=  nullptr && spf_summary->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-run-offline" <<"[spf-run-number='" <<spf_run_number <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfRunOffline' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_run_number.is_set || is_set(spf_run_number.yfilter)) leaf_name_data.push_back(spf_run_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dijkstra-run")
    {
        for(auto const & c : dijkstra_run)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun>();
        c->parent = this;
        dijkstra_run.push_back(c);
        return c;
    }

    if(child_yang_name == "inter-area-and-external")
    {
        for(auto const & c : inter_area_and_external)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal>();
        c->parent = this;
        inter_area_and_external.push_back(c);
        return c;
    }

    if(child_yang_name == "spf-summary")
    {
        if(spf_summary == nullptr)
        {
            spf_summary = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary>();
        }
        return spf_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dijkstra_run)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : inter_area_and_external)
    {
        children[c->get_segment_path()] = c;
    }

    if(spf_summary != nullptr)
    {
        children["spf-summary"] = spf_summary;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-run-number")
    {
        spf_run_number = value;
        spf_run_number.value_namespace = name_space;
        spf_run_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-run-number")
    {
        spf_run_number.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dijkstra-run" || name == "inter-area-and-external" || name == "spf-summary" || name == "spf-run-number")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::SpfSummary()
    :
    duration{YType::str, "duration"},
    is_data_complete{YType::boolean, "is-data-complete"},
    start_time{YType::str, "start-time"},
    state{YType::enumeration, "state"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    total_dijkstra_runs{YType::uint16, "total-dijkstra-runs"},
    total_inter_area_and_external_batches{YType::uint16, "total-inter-area-and-external-batches"},
    total_type12lsa_changes{YType::uint16, "total-type12lsa-changes"},
    total_type357lsa_changes{YType::uint16, "total-type357lsa-changes"},
    trigger_time{YType::str, "trigger-time"}
{
    yang_name = "spf-summary"; yang_parent_name = "spf-run-offline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::~SpfSummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::has_data() const
{
    for (std::size_t index=0; index<priority_summary.size(); index++)
    {
        if(priority_summary[index]->has_data())
            return true;
    }
    return duration.is_set
	|| is_data_complete.is_set
	|| start_time.is_set
	|| state.is_set
	|| threshold_exceeded.is_set
	|| total_dijkstra_runs.is_set
	|| total_inter_area_and_external_batches.is_set
	|| total_type12lsa_changes.is_set
	|| total_type357lsa_changes.is_set
	|| trigger_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::has_operation() const
{
    for (std::size_t index=0; index<priority_summary.size(); index++)
    {
        if(priority_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(is_data_complete.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(total_dijkstra_runs.yfilter)
	|| ydk::is_set(total_inter_area_and_external_batches.yfilter)
	|| ydk::is_set(total_type12lsa_changes.yfilter)
	|| ydk::is_set(total_type357lsa_changes.yfilter)
	|| ydk::is_set(trigger_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-summary";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfSummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (is_data_complete.is_set || is_set(is_data_complete.yfilter)) leaf_name_data.push_back(is_data_complete.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (total_dijkstra_runs.is_set || is_set(total_dijkstra_runs.yfilter)) leaf_name_data.push_back(total_dijkstra_runs.get_name_leafdata());
    if (total_inter_area_and_external_batches.is_set || is_set(total_inter_area_and_external_batches.yfilter)) leaf_name_data.push_back(total_inter_area_and_external_batches.get_name_leafdata());
    if (total_type12lsa_changes.is_set || is_set(total_type12lsa_changes.yfilter)) leaf_name_data.push_back(total_type12lsa_changes.get_name_leafdata());
    if (total_type357lsa_changes.is_set || is_set(total_type357lsa_changes.yfilter)) leaf_name_data.push_back(total_type357lsa_changes.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-summary")
    {
        for(auto const & c : priority_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary>();
        c->parent = this;
        priority_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : priority_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-data-complete")
    {
        is_data_complete = value;
        is_data_complete.value_namespace = name_space;
        is_data_complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-dijkstra-runs")
    {
        total_dijkstra_runs = value;
        total_dijkstra_runs.value_namespace = name_space;
        total_dijkstra_runs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-inter-area-and-external-batches")
    {
        total_inter_area_and_external_batches = value;
        total_inter_area_and_external_batches.value_namespace = name_space;
        total_inter_area_and_external_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-type12lsa-changes")
    {
        total_type12lsa_changes = value;
        total_type12lsa_changes.value_namespace = name_space;
        total_type12lsa_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-type357lsa-changes")
    {
        total_type357lsa_changes = value;
        total_type357lsa_changes.value_namespace = name_space;
        total_type357lsa_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "is-data-complete")
    {
        is_data_complete.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "total-dijkstra-runs")
    {
        total_dijkstra_runs.yfilter = yfilter;
    }
    if(value_path == "total-inter-area-and-external-batches")
    {
        total_inter_area_and_external_batches.yfilter = yfilter;
    }
    if(value_path == "total-type12lsa-changes")
    {
        total_type12lsa_changes.yfilter = yfilter;
    }
    if(value_path == "total-type357lsa-changes")
    {
        total_type357lsa_changes.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-summary" || name == "duration" || name == "is-data-complete" || name == "start-time" || name == "state" || name == "threshold-exceeded" || name == "total-dijkstra-runs" || name == "total-inter-area-and-external-batches" || name == "total-type12lsa-changes" || name == "total-type357lsa-changes" || name == "trigger-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::PrioritySummary()
    :
    level{YType::enumeration, "level"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"}
    	,
    ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime>())
	,mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime>())
	,route_statistics(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics>())
{
    ip_convergence_time->parent = this;

    mpls_convergence_time->parent = this;

    route_statistics->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "spf-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::has_data() const
{
    for (std::size_t index=0; index<frr_statistic.size(); index++)
    {
        if(frr_statistic[index]->has_data())
            return true;
    }
    return level.is_set
	|| threshold_exceeded.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data())
	|| (route_statistics !=  nullptr && route_statistics->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::has_operation() const
{
    for (std::size_t index=0; index<frr_statistic.size(); index++)
    {
        if(frr_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation())
	|| (route_statistics !=  nullptr && route_statistics->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrioritySummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-statistic")
    {
        for(auto const & c : frr_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic>();
        c->parent = this;
        frr_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "mpls-convergence-time")
    {
        if(mpls_convergence_time == nullptr)
        {
            mpls_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime>();
        }
        return mpls_convergence_time;
    }

    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frr_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(ip_convergence_time != nullptr)
    {
        children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        children["mpls-convergence-time"] = mpls_convergence_time;
    }

    if(route_statistics != nullptr)
    {
        children["route-statistics"] = route_statistics;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-statistic" || name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "route-statistics" || name == "level" || name == "threshold-exceeded")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    touches{YType::uint32, "touches"},
    unreachables{YType::uint32, "unreachables"}
{
    yang_name = "route-statistics"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::has_data() const
{
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| touches.is_set
	|| unreachables.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(touches.yfilter)
	|| ydk::is_set(unreachables.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteStatistics' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adds")
    {
        adds = value;
        adds.value_namespace = name_space;
        adds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletes")
    {
        deletes = value;
        deletes.value_namespace = name_space;
        deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modifies")
    {
        modifies = value;
        modifies.value_namespace = name_space;
        modifies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachables")
    {
        reachables = value;
        reachables.value_namespace = name_space;
        reachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adds")
    {
        adds.yfilter = yfilter;
    }
    if(value_path == "deletes")
    {
        deletes.yfilter = yfilter;
    }
    if(value_path == "modifies")
    {
        modifies.yfilter = yfilter;
    }
    if(value_path == "reachables")
    {
        reachables.yfilter = yfilter;
    }
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "touches" || name == "unreachables")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::FrrStatistic()
    :
    coverage{YType::str, "coverage"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    total_routes{YType::uint32, "total-routes"}
{
    yang_name = "frr-statistic"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::~FrrStatistic()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::has_data() const
{
    return coverage.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| total_routes.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(total_routes.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-statistic";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrStatistic' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes = value;
        fully_protected_routes.value_namespace = name_space;
        fully_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes = value;
        partially_protected_routes.value_namespace = name_space;
        partially_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coverage" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "total-routes")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::DijkstraRun()
    :
    area_id{YType::str, "area-id"},
    dijkstra_run_number{YType::uint32, "dijkstra-run-number"},
    duration{YType::str, "duration"},
    start_time{YType::str, "start-time"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    trigger_time{YType::str, "trigger-time"},
    wait_time{YType::uint32, "wait-time"}
{
    yang_name = "dijkstra-run"; yang_parent_name = "spf-run-offline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::~DijkstraRun()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::has_data() const
{
    for (std::size_t index=0; index<lsa_processed.size(); index++)
    {
        if(lsa_processed[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.size(); index++)
    {
        if(trigger_lsa[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| dijkstra_run_number.is_set
	|| duration.is_set
	|| start_time.is_set
	|| threshold_exceeded.is_set
	|| trigger_time.is_set
	|| wait_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::has_operation() const
{
    for (std::size_t index=0; index<lsa_processed.size(); index++)
    {
        if(lsa_processed[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.size(); index++)
    {
        if(trigger_lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(dijkstra_run_number.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dijkstra-run";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DijkstraRun' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (dijkstra_run_number.is_set || is_set(dijkstra_run_number.yfilter)) leaf_name_data.push_back(dijkstra_run_number.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-processed")
    {
        for(auto const & c : lsa_processed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed>();
        c->parent = this;
        lsa_processed.push_back(c);
        return c;
    }

    if(child_yang_name == "priority")
    {
        for(auto const & c : priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority>();
        c->parent = this;
        priority.push_back(c);
        return c;
    }

    if(child_yang_name == "trigger-lsa")
    {
        for(auto const & c : trigger_lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa>();
        c->parent = this;
        trigger_lsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsa_processed)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : priority)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : trigger_lsa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dijkstra-run-number")
    {
        dijkstra_run_number = value;
        dijkstra_run_number.value_namespace = name_space;
        dijkstra_run_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "dijkstra-run-number")
    {
        dijkstra_run_number.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-processed" || name == "priority" || name == "trigger-lsa" || name == "area-id" || name == "dijkstra-run-number" || name == "duration" || name == "start-time" || name == "threshold-exceeded" || name == "trigger-time" || name == "wait-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::TriggerLsa()
    :
    change_type{YType::enumeration, "change-type"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::str, "sequence-number"}
{
    yang_name = "trigger-lsa"; yang_parent_name = "dijkstra-run";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::~TriggerLsa()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::has_data() const
{
    return change_type.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsa";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerLsa' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id = value;
        origin_router_id.value_namespace = name_space;
        origin_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsa-id" || name == "lsa-type" || name == "origin-router-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::Priority()
    :
    priority_summary(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary>())
{
    priority_summary->parent = this;

    yang_name = "priority"; yang_parent_name = "dijkstra-run";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::~Priority()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::has_data() const
{
    for (std::size_t index=0; index<convergence_timeline.size(); index++)
    {
        if(convergence_timeline[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.size(); index++)
    {
        if(leaf_networks_added[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.size(); index++)
    {
        if(leaf_networks_deleted[index]->has_data())
            return true;
    }
    return (priority_summary !=  nullptr && priority_summary->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::has_operation() const
{
    for (std::size_t index=0; index<convergence_timeline.size(); index++)
    {
        if(convergence_timeline[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.size(); index++)
    {
        if(leaf_networks_added[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.size(); index++)
    {
        if(leaf_networks_deleted[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (priority_summary !=  nullptr && priority_summary->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "convergence-timeline")
    {
        for(auto const & c : convergence_timeline)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline>();
        c->parent = this;
        convergence_timeline.push_back(c);
        return c;
    }

    if(child_yang_name == "leaf-networks-added")
    {
        for(auto const & c : leaf_networks_added)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded>();
        c->parent = this;
        leaf_networks_added.push_back(c);
        return c;
    }

    if(child_yang_name == "leaf-networks-deleted")
    {
        for(auto const & c : leaf_networks_deleted)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted>();
        c->parent = this;
        leaf_networks_deleted.push_back(c);
        return c;
    }

    if(child_yang_name == "priority-summary")
    {
        if(priority_summary == nullptr)
        {
            priority_summary = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary>();
        }
        return priority_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : convergence_timeline)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : leaf_networks_added)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : leaf_networks_deleted)
    {
        children[c->get_segment_path()] = c;
    }

    if(priority_summary != nullptr)
    {
        children["priority-summary"] = priority_summary;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "convergence-timeline" || name == "leaf-networks-added" || name == "leaf-networks-deleted" || name == "priority-summary")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::PrioritySummary()
    :
    level{YType::enumeration, "level"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"}
    	,
    ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime>())
	,mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime>())
	,route_statistics(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics>())
{
    ip_convergence_time->parent = this;

    mpls_convergence_time->parent = this;

    route_statistics->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "priority";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::has_data() const
{
    for (std::size_t index=0; index<frr_statistic.size(); index++)
    {
        if(frr_statistic[index]->has_data())
            return true;
    }
    return level.is_set
	|| threshold_exceeded.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data())
	|| (route_statistics !=  nullptr && route_statistics->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::has_operation() const
{
    for (std::size_t index=0; index<frr_statistic.size(); index++)
    {
        if(frr_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation())
	|| (route_statistics !=  nullptr && route_statistics->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrioritySummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-statistic")
    {
        for(auto const & c : frr_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic>();
        c->parent = this;
        frr_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "mpls-convergence-time")
    {
        if(mpls_convergence_time == nullptr)
        {
            mpls_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime>();
        }
        return mpls_convergence_time;
    }

    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frr_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(ip_convergence_time != nullptr)
    {
        children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        children["mpls-convergence-time"] = mpls_convergence_time;
    }

    if(route_statistics != nullptr)
    {
        children["route-statistics"] = route_statistics;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-statistic" || name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "route-statistics" || name == "level" || name == "threshold-exceeded")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    touches{YType::uint32, "touches"},
    unreachables{YType::uint32, "unreachables"}
{
    yang_name = "route-statistics"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::has_data() const
{
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| touches.is_set
	|| unreachables.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(touches.yfilter)
	|| ydk::is_set(unreachables.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteStatistics' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adds")
    {
        adds = value;
        adds.value_namespace = name_space;
        adds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletes")
    {
        deletes = value;
        deletes.value_namespace = name_space;
        deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modifies")
    {
        modifies = value;
        modifies.value_namespace = name_space;
        modifies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachables")
    {
        reachables = value;
        reachables.value_namespace = name_space;
        reachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adds")
    {
        adds.yfilter = yfilter;
    }
    if(value_path == "deletes")
    {
        deletes.yfilter = yfilter;
    }
    if(value_path == "modifies")
    {
        modifies.yfilter = yfilter;
    }
    if(value_path == "reachables")
    {
        reachables.yfilter = yfilter;
    }
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "touches" || name == "unreachables")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::FrrStatistic()
    :
    coverage{YType::str, "coverage"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    total_routes{YType::uint32, "total-routes"}
{
    yang_name = "frr-statistic"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::~FrrStatistic()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::has_data() const
{
    return coverage.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| total_routes.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(total_routes.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-statistic";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrStatistic' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes = value;
        fully_protected_routes.value_namespace = name_space;
        fully_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes = value;
        partially_protected_routes.value_namespace = name_space;
        partially_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coverage" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "total-routes")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::ConvergenceTimeline()
    :
    ldp_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter>())
	,ldp_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit>())
	,lsd_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter>())
	,lsd_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit>())
	,ri_bv4_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter>())
	,ri_bv4_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit>())
	,ri_bv4_redistribute(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute>())
	,route_origin(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin>())
{
    ldp_enter->parent = this;

    ldp_exit->parent = this;

    lsd_enter->parent = this;

    lsd_exit->parent = this;

    ri_bv4_enter->parent = this;

    ri_bv4_exit->parent = this;

    ri_bv4_redistribute->parent = this;

    route_origin->parent = this;

    yang_name = "convergence-timeline"; yang_parent_name = "priority";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::~ConvergenceTimeline()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::has_data() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return (ldp_enter !=  nullptr && ldp_enter->has_data())
	|| (ldp_exit !=  nullptr && ldp_exit->has_data())
	|| (lsd_enter !=  nullptr && lsd_enter->has_data())
	|| (lsd_exit !=  nullptr && lsd_exit->has_data())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_data())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_data())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_data())
	|| (route_origin !=  nullptr && route_origin->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ldp_enter !=  nullptr && ldp_enter->has_operation())
	|| (ldp_exit !=  nullptr && ldp_exit->has_operation())
	|| (lsd_enter !=  nullptr && lsd_enter->has_operation())
	|| (lsd_exit !=  nullptr && lsd_exit->has_operation())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_operation())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_operation())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_operation())
	|| (route_origin !=  nullptr && route_origin->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence-timeline";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConvergenceTimeline' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-ip")
    {
        for(auto const & c : lc_ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp>();
        c->parent = this;
        lc_ip.push_back(c);
        return c;
    }

    if(child_yang_name == "lc-mpls")
    {
        for(auto const & c : lc_mpls)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls>();
        c->parent = this;
        lc_mpls.push_back(c);
        return c;
    }

    if(child_yang_name == "ldp-enter")
    {
        if(ldp_enter == nullptr)
        {
            ldp_enter = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter>();
        }
        return ldp_enter;
    }

    if(child_yang_name == "ldp-exit")
    {
        if(ldp_exit == nullptr)
        {
            ldp_exit = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit>();
        }
        return ldp_exit;
    }

    if(child_yang_name == "lsd-enter")
    {
        if(lsd_enter == nullptr)
        {
            lsd_enter = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter>();
        }
        return lsd_enter;
    }

    if(child_yang_name == "lsd-exit")
    {
        if(lsd_exit == nullptr)
        {
            lsd_exit = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit>();
        }
        return lsd_exit;
    }

    if(child_yang_name == "ri-bv4-enter")
    {
        if(ri_bv4_enter == nullptr)
        {
            ri_bv4_enter = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter>();
        }
        return ri_bv4_enter;
    }

    if(child_yang_name == "ri-bv4-exit")
    {
        if(ri_bv4_exit == nullptr)
        {
            ri_bv4_exit = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit>();
        }
        return ri_bv4_exit;
    }

    if(child_yang_name == "ri-bv4-redistribute")
    {
        if(ri_bv4_redistribute == nullptr)
        {
            ri_bv4_redistribute = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute>();
        }
        return ri_bv4_redistribute;
    }

    if(child_yang_name == "route-origin")
    {
        if(route_origin == nullptr)
        {
            route_origin = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin>();
        }
        return route_origin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lc_ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lc_mpls)
    {
        children[c->get_segment_path()] = c;
    }

    if(ldp_enter != nullptr)
    {
        children["ldp-enter"] = ldp_enter;
    }

    if(ldp_exit != nullptr)
    {
        children["ldp-exit"] = ldp_exit;
    }

    if(lsd_enter != nullptr)
    {
        children["lsd-enter"] = lsd_enter;
    }

    if(lsd_exit != nullptr)
    {
        children["lsd-exit"] = lsd_exit;
    }

    if(ri_bv4_enter != nullptr)
    {
        children["ri-bv4-enter"] = ri_bv4_enter;
    }

    if(ri_bv4_exit != nullptr)
    {
        children["ri-bv4-exit"] = ri_bv4_exit;
    }

    if(ri_bv4_redistribute != nullptr)
    {
        children["ri-bv4-redistribute"] = ri_bv4_redistribute;
    }

    if(route_origin != nullptr)
    {
        children["route-origin"] = route_origin;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-ip" || name == "lc-mpls" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "route-origin")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::RouteOrigin()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "route-origin"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::~RouteOrigin()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-origin";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteOrigin' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::RiBv4Enter()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ri-bv4-enter"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::~RiBv4Enter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-enter";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RiBv4Enter' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::RiBv4Exit()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ri-bv4-exit"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::~RiBv4Exit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-exit";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RiBv4Exit' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::RiBv4Redistribute()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ri-bv4-redistribute"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::~RiBv4Redistribute()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-redistribute";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RiBv4Redistribute' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::LdpEnter()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ldp-enter"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::~LdpEnter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-enter";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpEnter' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::LdpExit()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ldp-exit"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::~LdpExit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-exit";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpExit' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::LsdEnter()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "lsd-enter"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::~LsdEnter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-enter";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsdEnter' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::LsdExit()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "lsd-exit"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::~LsdExit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-exit";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsdExit' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::LcIp()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
    	,
    fib_complete(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete>())
{
    fib_complete->parent = this;

    yang_name = "lc-ip"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::~LcIp()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::has_data() const
{
    return node_name.is_set
	|| speed.is_set
	|| (fib_complete !=  nullptr && fib_complete->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| (fib_complete !=  nullptr && fib_complete->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-ip";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcIp' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-complete")
    {
        if(fib_complete == nullptr)
        {
            fib_complete = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete>();
        }
        return fib_complete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fib_complete != nullptr)
    {
        children["fib-complete"] = fib_complete;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::FibComplete()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "fib-complete"; yang_parent_name = "lc-ip";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::~FibComplete()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibComplete' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::LcMpls()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
    	,
    fib_complete(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete>())
{
    fib_complete->parent = this;

    yang_name = "lc-mpls"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::~LcMpls()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::has_data() const
{
    return node_name.is_set
	|| speed.is_set
	|| (fib_complete !=  nullptr && fib_complete->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| (fib_complete !=  nullptr && fib_complete->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-mpls";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcMpls' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-complete")
    {
        if(fib_complete == nullptr)
        {
            fib_complete = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete>();
        }
        return fib_complete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fib_complete != nullptr)
    {
        children["fib-complete"] = fib_complete;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::FibComplete()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "fib-complete"; yang_parent_name = "lc-mpls";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::~FibComplete()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibComplete' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded::LeafNetworksAdded()
    :
    address{YType::str, "address"},
    net_mask{YType::uint8, "net-mask"}
{
    yang_name = "leaf-networks-added"; yang_parent_name = "priority";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded::~LeafNetworksAdded()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded::has_data() const
{
    return address.is_set
	|| net_mask.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(net_mask.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leaf-networks-added";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeafNetworksAdded' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-mask")
    {
        net_mask = value;
        net_mask.value_namespace = name_space;
        net_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "net-mask")
    {
        net_mask.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "net-mask")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted::LeafNetworksDeleted()
    :
    address{YType::str, "address"},
    net_mask{YType::uint8, "net-mask"}
{
    yang_name = "leaf-networks-deleted"; yang_parent_name = "priority";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted::~LeafNetworksDeleted()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted::has_data() const
{
    return address.is_set
	|| net_mask.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(net_mask.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leaf-networks-deleted";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeafNetworksDeleted' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-mask")
    {
        net_mask = value;
        net_mask.value_namespace = name_space;
        net_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "net-mask")
    {
        net_mask.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "net-mask")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::LsaProcessed()
    :
    change_type{YType::enumeration, "change-type"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::str, "sequence-number"}
{
    yang_name = "lsa-processed"; yang_parent_name = "dijkstra-run";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::~LsaProcessed()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::has_data() const
{
    return change_type.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-processed";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaProcessed' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id = value;
        origin_router_id.value_namespace = name_space;
        origin_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsa-id" || name == "lsa-type" || name == "origin-router-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::InterAreaAndExternal()
{
    yang_name = "inter-area-and-external"; yang_parent_name = "spf-run-offline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::~InterAreaAndExternal()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::has_data() const
{
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::has_operation() const
{
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-and-external";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterAreaAndExternal' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        for(auto const & c : priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority>();
        c->parent = this;
        priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : priority)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::Priority()
    :
    priority_summary(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary>())
{
    priority_summary->parent = this;

    yang_name = "priority"; yang_parent_name = "inter-area-and-external";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::~Priority()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::has_data() const
{
    for (std::size_t index=0; index<convergence_timeline.size(); index++)
    {
        if(convergence_timeline[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.size(); index++)
    {
        if(leaf_networks_added[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.size(); index++)
    {
        if(leaf_networks_deleted[index]->has_data())
            return true;
    }
    return (priority_summary !=  nullptr && priority_summary->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::has_operation() const
{
    for (std::size_t index=0; index<convergence_timeline.size(); index++)
    {
        if(convergence_timeline[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.size(); index++)
    {
        if(leaf_networks_added[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.size(); index++)
    {
        if(leaf_networks_deleted[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (priority_summary !=  nullptr && priority_summary->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "convergence-timeline")
    {
        for(auto const & c : convergence_timeline)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline>();
        c->parent = this;
        convergence_timeline.push_back(c);
        return c;
    }

    if(child_yang_name == "leaf-networks-added")
    {
        for(auto const & c : leaf_networks_added)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded>();
        c->parent = this;
        leaf_networks_added.push_back(c);
        return c;
    }

    if(child_yang_name == "leaf-networks-deleted")
    {
        for(auto const & c : leaf_networks_deleted)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted>();
        c->parent = this;
        leaf_networks_deleted.push_back(c);
        return c;
    }

    if(child_yang_name == "priority-summary")
    {
        if(priority_summary == nullptr)
        {
            priority_summary = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary>();
        }
        return priority_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : convergence_timeline)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : leaf_networks_added)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : leaf_networks_deleted)
    {
        children[c->get_segment_path()] = c;
    }

    if(priority_summary != nullptr)
    {
        children["priority-summary"] = priority_summary;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "convergence-timeline" || name == "leaf-networks-added" || name == "leaf-networks-deleted" || name == "priority-summary")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::PrioritySummary()
    :
    level{YType::enumeration, "level"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    type3ls_as{YType::uint32, "type3ls-as"},
    type4ls_as{YType::uint32, "type4ls-as"},
    type57ls_as{YType::uint32, "type57ls-as"}
    	,
    ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime>())
	,mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime>())
	,route_statistics(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics>())
{
    ip_convergence_time->parent = this;

    mpls_convergence_time->parent = this;

    route_statistics->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "priority";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::has_data() const
{
    return level.is_set
	|| threshold_exceeded.is_set
	|| type3ls_as.is_set
	|| type4ls_as.is_set
	|| type57ls_as.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data())
	|| (route_statistics !=  nullptr && route_statistics->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(type3ls_as.yfilter)
	|| ydk::is_set(type4ls_as.yfilter)
	|| ydk::is_set(type57ls_as.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation())
	|| (route_statistics !=  nullptr && route_statistics->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrioritySummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (type3ls_as.is_set || is_set(type3ls_as.yfilter)) leaf_name_data.push_back(type3ls_as.get_name_leafdata());
    if (type4ls_as.is_set || is_set(type4ls_as.yfilter)) leaf_name_data.push_back(type4ls_as.get_name_leafdata());
    if (type57ls_as.is_set || is_set(type57ls_as.yfilter)) leaf_name_data.push_back(type57ls_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "mpls-convergence-time")
    {
        if(mpls_convergence_time == nullptr)
        {
            mpls_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime>();
        }
        return mpls_convergence_time;
    }

    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_convergence_time != nullptr)
    {
        children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        children["mpls-convergence-time"] = mpls_convergence_time;
    }

    if(route_statistics != nullptr)
    {
        children["route-statistics"] = route_statistics;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type3ls-as")
    {
        type3ls_as = value;
        type3ls_as.value_namespace = name_space;
        type3ls_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type4ls-as")
    {
        type4ls_as = value;
        type4ls_as.value_namespace = name_space;
        type4ls_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type57ls-as")
    {
        type57ls_as = value;
        type57ls_as.value_namespace = name_space;
        type57ls_as.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "type3ls-as")
    {
        type3ls_as.yfilter = yfilter;
    }
    if(value_path == "type4ls-as")
    {
        type4ls_as.yfilter = yfilter;
    }
    if(value_path == "type57ls-as")
    {
        type57ls_as.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "route-statistics" || name == "level" || name == "threshold-exceeded" || name == "type3ls-as" || name == "type4ls-as" || name == "type57ls-as")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    touches{YType::uint32, "touches"},
    unreachables{YType::uint32, "unreachables"}
{
    yang_name = "route-statistics"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::has_data() const
{
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| touches.is_set
	|| unreachables.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(touches.yfilter)
	|| ydk::is_set(unreachables.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteStatistics' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adds")
    {
        adds = value;
        adds.value_namespace = name_space;
        adds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletes")
    {
        deletes = value;
        deletes.value_namespace = name_space;
        deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modifies")
    {
        modifies = value;
        modifies.value_namespace = name_space;
        modifies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachables")
    {
        reachables = value;
        reachables.value_namespace = name_space;
        reachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adds")
    {
        adds.yfilter = yfilter;
    }
    if(value_path == "deletes")
    {
        deletes.yfilter = yfilter;
    }
    if(value_path == "modifies")
    {
        modifies.yfilter = yfilter;
    }
    if(value_path == "reachables")
    {
        reachables.yfilter = yfilter;
    }
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "touches" || name == "unreachables")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::ConvergenceTimeline()
    :
    ldp_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter>())
	,ldp_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit>())
	,lsd_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter>())
	,lsd_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit>())
	,ri_bv4_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter>())
	,ri_bv4_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit>())
	,ri_bv4_redistribute(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute>())
	,route_origin(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin>())
{
    ldp_enter->parent = this;

    ldp_exit->parent = this;

    lsd_enter->parent = this;

    lsd_exit->parent = this;

    ri_bv4_enter->parent = this;

    ri_bv4_exit->parent = this;

    ri_bv4_redistribute->parent = this;

    route_origin->parent = this;

    yang_name = "convergence-timeline"; yang_parent_name = "priority";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::~ConvergenceTimeline()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::has_data() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return (ldp_enter !=  nullptr && ldp_enter->has_data())
	|| (ldp_exit !=  nullptr && ldp_exit->has_data())
	|| (lsd_enter !=  nullptr && lsd_enter->has_data())
	|| (lsd_exit !=  nullptr && lsd_exit->has_data())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_data())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_data())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_data())
	|| (route_origin !=  nullptr && route_origin->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ldp_enter !=  nullptr && ldp_enter->has_operation())
	|| (ldp_exit !=  nullptr && ldp_exit->has_operation())
	|| (lsd_enter !=  nullptr && lsd_enter->has_operation())
	|| (lsd_exit !=  nullptr && lsd_exit->has_operation())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_operation())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_operation())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_operation())
	|| (route_origin !=  nullptr && route_origin->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence-timeline";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConvergenceTimeline' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-ip")
    {
        for(auto const & c : lc_ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp>();
        c->parent = this;
        lc_ip.push_back(c);
        return c;
    }

    if(child_yang_name == "lc-mpls")
    {
        for(auto const & c : lc_mpls)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls>();
        c->parent = this;
        lc_mpls.push_back(c);
        return c;
    }

    if(child_yang_name == "ldp-enter")
    {
        if(ldp_enter == nullptr)
        {
            ldp_enter = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter>();
        }
        return ldp_enter;
    }

    if(child_yang_name == "ldp-exit")
    {
        if(ldp_exit == nullptr)
        {
            ldp_exit = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit>();
        }
        return ldp_exit;
    }

    if(child_yang_name == "lsd-enter")
    {
        if(lsd_enter == nullptr)
        {
            lsd_enter = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter>();
        }
        return lsd_enter;
    }

    if(child_yang_name == "lsd-exit")
    {
        if(lsd_exit == nullptr)
        {
            lsd_exit = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit>();
        }
        return lsd_exit;
    }

    if(child_yang_name == "ri-bv4-enter")
    {
        if(ri_bv4_enter == nullptr)
        {
            ri_bv4_enter = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter>();
        }
        return ri_bv4_enter;
    }

    if(child_yang_name == "ri-bv4-exit")
    {
        if(ri_bv4_exit == nullptr)
        {
            ri_bv4_exit = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit>();
        }
        return ri_bv4_exit;
    }

    if(child_yang_name == "ri-bv4-redistribute")
    {
        if(ri_bv4_redistribute == nullptr)
        {
            ri_bv4_redistribute = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute>();
        }
        return ri_bv4_redistribute;
    }

    if(child_yang_name == "route-origin")
    {
        if(route_origin == nullptr)
        {
            route_origin = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin>();
        }
        return route_origin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lc_ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lc_mpls)
    {
        children[c->get_segment_path()] = c;
    }

    if(ldp_enter != nullptr)
    {
        children["ldp-enter"] = ldp_enter;
    }

    if(ldp_exit != nullptr)
    {
        children["ldp-exit"] = ldp_exit;
    }

    if(lsd_enter != nullptr)
    {
        children["lsd-enter"] = lsd_enter;
    }

    if(lsd_exit != nullptr)
    {
        children["lsd-exit"] = lsd_exit;
    }

    if(ri_bv4_enter != nullptr)
    {
        children["ri-bv4-enter"] = ri_bv4_enter;
    }

    if(ri_bv4_exit != nullptr)
    {
        children["ri-bv4-exit"] = ri_bv4_exit;
    }

    if(ri_bv4_redistribute != nullptr)
    {
        children["ri-bv4-redistribute"] = ri_bv4_redistribute;
    }

    if(route_origin != nullptr)
    {
        children["route-origin"] = route_origin;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-ip" || name == "lc-mpls" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "route-origin")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::RouteOrigin()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "route-origin"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::~RouteOrigin()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-origin";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteOrigin' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::RiBv4Enter()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ri-bv4-enter"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::~RiBv4Enter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-enter";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RiBv4Enter' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::RiBv4Exit()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ri-bv4-exit"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::~RiBv4Exit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-exit";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RiBv4Exit' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::RiBv4Redistribute()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ri-bv4-redistribute"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::~RiBv4Redistribute()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-redistribute";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RiBv4Redistribute' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::LdpEnter()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ldp-enter"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::~LdpEnter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-enter";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpEnter' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::LdpExit()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ldp-exit"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::~LdpExit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-exit";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpExit' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::LsdEnter()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "lsd-enter"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::~LsdEnter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-enter";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsdEnter' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::LsdExit()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "lsd-exit"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::~LsdExit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-exit";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsdExit' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::LcIp()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
    	,
    fib_complete(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete>())
{
    fib_complete->parent = this;

    yang_name = "lc-ip"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::~LcIp()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::has_data() const
{
    return node_name.is_set
	|| speed.is_set
	|| (fib_complete !=  nullptr && fib_complete->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| (fib_complete !=  nullptr && fib_complete->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-ip";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcIp' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-complete")
    {
        if(fib_complete == nullptr)
        {
            fib_complete = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete>();
        }
        return fib_complete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fib_complete != nullptr)
    {
        children["fib-complete"] = fib_complete;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::FibComplete()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "fib-complete"; yang_parent_name = "lc-ip";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::~FibComplete()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibComplete' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::LcMpls()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
    	,
    fib_complete(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete>())
{
    fib_complete->parent = this;

    yang_name = "lc-mpls"; yang_parent_name = "convergence-timeline";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::~LcMpls()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::has_data() const
{
    return node_name.is_set
	|| speed.is_set
	|| (fib_complete !=  nullptr && fib_complete->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| (fib_complete !=  nullptr && fib_complete->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-mpls";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcMpls' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-complete")
    {
        if(fib_complete == nullptr)
        {
            fib_complete = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete>();
        }
        return fib_complete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fib_complete != nullptr)
    {
        children["fib-complete"] = fib_complete;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::FibComplete()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "fib-complete"; yang_parent_name = "lc-mpls";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::~FibComplete()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibComplete' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded::LeafNetworksAdded()
    :
    address{YType::str, "address"},
    net_mask{YType::uint8, "net-mask"}
{
    yang_name = "leaf-networks-added"; yang_parent_name = "priority";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded::~LeafNetworksAdded()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded::has_data() const
{
    return address.is_set
	|| net_mask.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(net_mask.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leaf-networks-added";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeafNetworksAdded' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-mask")
    {
        net_mask = value;
        net_mask.value_namespace = name_space;
        net_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "net-mask")
    {
        net_mask.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "net-mask")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted::LeafNetworksDeleted()
    :
    address{YType::str, "address"},
    net_mask{YType::uint8, "net-mask"}
{
    yang_name = "leaf-networks-deleted"; yang_parent_name = "priority";
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted::~LeafNetworksDeleted()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted::has_data() const
{
    return address.is_set
	|| net_mask.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(net_mask.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leaf-networks-deleted";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeafNetworksDeleted' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-mask")
    {
        net_mask = value;
        net_mask.value_namespace = name_space;
        net_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "net-mask")
    {
        net_mask.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "net-mask")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummaries()
{
    yang_name = "summary-external-event-summaries"; yang_parent_name = "instance";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::~SummaryExternalEventSummaries()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::has_data() const
{
    for (std::size_t index=0; index<summary_external_event_summary.size(); index++)
    {
        if(summary_external_event_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::has_operation() const
{
    for (std::size_t index=0; index<summary_external_event_summary.size(); index++)
    {
        if(summary_external_event_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-external-event-summaries";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryExternalEventSummaries' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-external-event-summary")
    {
        for(auto const & c : summary_external_event_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary>();
        c->parent = this;
        summary_external_event_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : summary_external_event_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-external-event-summary")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::SummaryExternalEventSummary()
    :
    event_id{YType::int32, "event-id"},
    change_type{YType::enumeration, "change-type"},
    cost{YType::uint32, "cost"},
    ipfrr_event_id{YType::uint32, "ipfrr-event-id"},
    prefix{YType::str, "prefix"},
    prefix_lenth{YType::uint32, "prefix-lenth"},
    priority{YType::enumeration, "priority"},
    route_path_change_type{YType::enumeration, "route-path-change-type"},
    route_type{YType::enumeration, "route-type"},
    spf_run_no{YType::uint32, "spf-run-no"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    trigger_time{YType::str, "trigger-time"}
    	,
    ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime>())
	,mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime>())
{
    ip_convergence_time->parent = this;

    mpls_convergence_time->parent = this;

    yang_name = "summary-external-event-summary"; yang_parent_name = "summary-external-event-summaries";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::~SummaryExternalEventSummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::has_data() const
{
    for (std::size_t index=0; index<lsa_processed.size(); index++)
    {
        if(lsa_processed[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<time_line.size(); index++)
    {
        if(time_line[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.size(); index++)
    {
        if(trigger_lsa[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| change_type.is_set
	|| cost.is_set
	|| ipfrr_event_id.is_set
	|| prefix.is_set
	|| prefix_lenth.is_set
	|| priority.is_set
	|| route_path_change_type.is_set
	|| route_type.is_set
	|| spf_run_no.is_set
	|| threshold_exceeded.is_set
	|| trigger_time.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::has_operation() const
{
    for (std::size_t index=0; index<lsa_processed.size(); index++)
    {
        if(lsa_processed[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<time_line.size(); index++)
    {
        if(time_line[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.size(); index++)
    {
        if(trigger_lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(ipfrr_event_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_lenth.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(route_path_change_type.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(spf_run_no.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-external-event-summary" <<"[event-id='" <<event_id <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryExternalEventSummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (ipfrr_event_id.is_set || is_set(ipfrr_event_id.yfilter)) leaf_name_data.push_back(ipfrr_event_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_lenth.is_set || is_set(prefix_lenth.yfilter)) leaf_name_data.push_back(prefix_lenth.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (route_path_change_type.is_set || is_set(route_path_change_type.yfilter)) leaf_name_data.push_back(route_path_change_type.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (spf_run_no.is_set || is_set(spf_run_no.yfilter)) leaf_name_data.push_back(spf_run_no.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "lsa-processed")
    {
        for(auto const & c : lsa_processed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed>();
        c->parent = this;
        lsa_processed.push_back(c);
        return c;
    }

    if(child_yang_name == "mpls-convergence-time")
    {
        if(mpls_convergence_time == nullptr)
        {
            mpls_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime>();
        }
        return mpls_convergence_time;
    }

    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    if(child_yang_name == "time-line")
    {
        for(auto const & c : time_line)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine>();
        c->parent = this;
        time_line.push_back(c);
        return c;
    }

    if(child_yang_name == "trigger-lsa")
    {
        for(auto const & c : trigger_lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa>();
        c->parent = this;
        trigger_lsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_convergence_time != nullptr)
    {
        children["ip-convergence-time"] = ip_convergence_time;
    }

    for (auto const & c : lsa_processed)
    {
        children[c->get_segment_path()] = c;
    }

    if(mpls_convergence_time != nullptr)
    {
        children["mpls-convergence-time"] = mpls_convergence_time;
    }

    for (auto const & c : path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : time_line)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : trigger_lsa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id = value;
        ipfrr_event_id.value_namespace = name_space;
        ipfrr_event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth = value;
        prefix_lenth.value_namespace = name_space;
        prefix_lenth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type = value;
        route_path_change_type.value_namespace = name_space;
        route_path_change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no = value;
        spf_run_no.value_namespace = name_space;
        spf_run_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-convergence-time" || name == "lsa-processed" || name == "mpls-convergence-time" || name == "path" || name == "time-line" || name == "trigger-lsa" || name == "event-id" || name == "change-type" || name == "cost" || name == "ipfrr-event-id" || name == "prefix" || name == "prefix-lenth" || name == "priority" || name == "route-path-change-type" || name == "route-type" || name == "spf-run-no" || name == "threshold-exceeded" || name == "trigger-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::IpConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "ip-convergence-time"; yang_parent_name = "summary-external-event-summary";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "mpls-convergence-time"; yang_parent_name = "summary-external-event-summary";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::Path()
    :
    change_type{YType::enumeration, "change-type"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    path_metric{YType::uint32, "path-metric"}
{
    yang_name = "path"; yang_parent_name = "summary-external-event-summary";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::~Path()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::has_data() const
{
    for (std::size_t index=0; index<lfa_path.size(); index++)
    {
        if(lfa_path[index]->has_data())
            return true;
    }
    return change_type.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| path_metric.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::has_operation() const
{
    for (std::size_t index=0; index<lfa_path.size(); index++)
    {
        if(lfa_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_metric.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lfa-path")
    {
        for(auto const & c : lfa_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath>();
        c->parent = this;
        lfa_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lfa_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-metric")
    {
        path_metric = value;
        path_metric.value_namespace = name_space;
        path_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "path-metric")
    {
        path_metric.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lfa-path" || name == "change-type" || name == "interface-name" || name == "neighbour-address" || name == "path-metric")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::LfaPath()
    :
    change_type{YType::enumeration, "change-type"},
    interface_name{YType::str, "interface-name"},
    lfa_type{YType::enumeration, "lfa-type"},
    neighbour_address{YType::str, "neighbour-address"},
    path_metric{YType::uint32, "path-metric"},
    remote_node_id{YType::str, "remote-node-id"}
{
    yang_name = "lfa-path"; yang_parent_name = "path";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::~LfaPath()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::has_data() const
{
    return change_type.is_set
	|| interface_name.is_set
	|| lfa_type.is_set
	|| neighbour_address.is_set
	|| path_metric.is_set
	|| remote_node_id.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(lfa_type.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_metric.yfilter)
	|| ydk::is_set(remote_node_id.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lfa-path";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LfaPath' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (lfa_type.is_set || is_set(lfa_type.yfilter)) leaf_name_data.push_back(lfa_type.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-type")
    {
        lfa_type = value;
        lfa_type.value_namespace = name_space;
        lfa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-metric")
    {
        path_metric = value;
        path_metric.value_namespace = name_space;
        path_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "lfa-type")
    {
        lfa_type.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "path-metric")
    {
        path_metric.yfilter = yfilter;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "interface-name" || name == "lfa-type" || name == "neighbour-address" || name == "path-metric" || name == "remote-node-id")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::TriggerLsa()
    :
    change_type{YType::enumeration, "change-type"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::str, "sequence-number"}
{
    yang_name = "trigger-lsa"; yang_parent_name = "summary-external-event-summary";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::~TriggerLsa()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::has_data() const
{
    return change_type.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsa";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerLsa' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id = value;
        origin_router_id.value_namespace = name_space;
        origin_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsa-id" || name == "lsa-type" || name == "origin-router-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::TimeLine()
    :
    ldp_enter{YType::str, "ldp-enter"},
    ldp_exit{YType::str, "ldp-exit"},
    lsd_enter{YType::str, "lsd-enter"},
    lsd_exit{YType::str, "lsd-exit"},
    ri_bv4_enter{YType::str, "ri-bv4-enter"},
    ri_bv4_exit{YType::str, "ri-bv4-exit"},
    ri_bv4_redistribute{YType::str, "ri-bv4-redistribute"},
    route_origin{YType::str, "route-origin"}
{
    yang_name = "time-line"; yang_parent_name = "summary-external-event-summary";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::~TimeLine()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::has_data() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return ldp_enter.is_set
	|| ldp_exit.is_set
	|| lsd_enter.is_set
	|| lsd_exit.is_set
	|| ri_bv4_enter.is_set
	|| ri_bv4_exit.is_set
	|| ri_bv4_redistribute.is_set
	|| route_origin.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ldp_enter.yfilter)
	|| ydk::is_set(ldp_exit.yfilter)
	|| ydk::is_set(lsd_enter.yfilter)
	|| ydk::is_set(lsd_exit.yfilter)
	|| ydk::is_set(ri_bv4_enter.yfilter)
	|| ydk::is_set(ri_bv4_exit.yfilter)
	|| ydk::is_set(ri_bv4_redistribute.yfilter)
	|| ydk::is_set(route_origin.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-line";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TimeLine' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp_enter.is_set || is_set(ldp_enter.yfilter)) leaf_name_data.push_back(ldp_enter.get_name_leafdata());
    if (ldp_exit.is_set || is_set(ldp_exit.yfilter)) leaf_name_data.push_back(ldp_exit.get_name_leafdata());
    if (lsd_enter.is_set || is_set(lsd_enter.yfilter)) leaf_name_data.push_back(lsd_enter.get_name_leafdata());
    if (lsd_exit.is_set || is_set(lsd_exit.yfilter)) leaf_name_data.push_back(lsd_exit.get_name_leafdata());
    if (ri_bv4_enter.is_set || is_set(ri_bv4_enter.yfilter)) leaf_name_data.push_back(ri_bv4_enter.get_name_leafdata());
    if (ri_bv4_exit.is_set || is_set(ri_bv4_exit.yfilter)) leaf_name_data.push_back(ri_bv4_exit.get_name_leafdata());
    if (ri_bv4_redistribute.is_set || is_set(ri_bv4_redistribute.yfilter)) leaf_name_data.push_back(ri_bv4_redistribute.get_name_leafdata());
    if (route_origin.is_set || is_set(route_origin.yfilter)) leaf_name_data.push_back(route_origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-ip")
    {
        for(auto const & c : lc_ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp>();
        c->parent = this;
        lc_ip.push_back(c);
        return c;
    }

    if(child_yang_name == "lc-mpls")
    {
        for(auto const & c : lc_mpls)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls>();
        c->parent = this;
        lc_mpls.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lc_ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lc_mpls)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldp-enter")
    {
        ldp_enter = value;
        ldp_enter.value_namespace = name_space;
        ldp_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-exit")
    {
        ldp_exit = value;
        ldp_exit.value_namespace = name_space;
        ldp_exit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-enter")
    {
        lsd_enter = value;
        lsd_enter.value_namespace = name_space;
        lsd_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-exit")
    {
        lsd_exit = value;
        lsd_exit.value_namespace = name_space;
        lsd_exit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-bv4-enter")
    {
        ri_bv4_enter = value;
        ri_bv4_enter.value_namespace = name_space;
        ri_bv4_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-bv4-exit")
    {
        ri_bv4_exit = value;
        ri_bv4_exit.value_namespace = name_space;
        ri_bv4_exit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-bv4-redistribute")
    {
        ri_bv4_redistribute = value;
        ri_bv4_redistribute.value_namespace = name_space;
        ri_bv4_redistribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-origin")
    {
        route_origin = value;
        route_origin.value_namespace = name_space;
        route_origin.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldp-enter")
    {
        ldp_enter.yfilter = yfilter;
    }
    if(value_path == "ldp-exit")
    {
        ldp_exit.yfilter = yfilter;
    }
    if(value_path == "lsd-enter")
    {
        lsd_enter.yfilter = yfilter;
    }
    if(value_path == "lsd-exit")
    {
        lsd_exit.yfilter = yfilter;
    }
    if(value_path == "ri-bv4-enter")
    {
        ri_bv4_enter.yfilter = yfilter;
    }
    if(value_path == "ri-bv4-exit")
    {
        ri_bv4_exit.yfilter = yfilter;
    }
    if(value_path == "ri-bv4-redistribute")
    {
        ri_bv4_redistribute.yfilter = yfilter;
    }
    if(value_path == "route-origin")
    {
        route_origin.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-ip" || name == "lc-mpls" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "route-origin")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::LcIp()
    :
    fib_complete{YType::str, "fib-complete"},
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
{
    yang_name = "lc-ip"; yang_parent_name = "time-line";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::~LcIp()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::has_data() const
{
    return fib_complete.is_set
	|| node_name.is_set
	|| speed.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fib_complete.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-ip";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcIp' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::LcMpls()
    :
    fib_complete{YType::str, "fib-complete"},
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
{
    yang_name = "lc-mpls"; yang_parent_name = "time-line";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::~LcMpls()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::has_data() const
{
    return fib_complete.is_set
	|| node_name.is_set
	|| speed.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fib_complete.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-mpls";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcMpls' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::LsaProcessed()
    :
    change_type{YType::enumeration, "change-type"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::str, "sequence-number"}
{
    yang_name = "lsa-processed"; yang_parent_name = "summary-external-event-summary";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::~LsaProcessed()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::has_data() const
{
    return change_type.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-processed";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaProcessed' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id = value;
        origin_router_id.value_namespace = name_space;
        origin_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsa-id" || name == "lsa-type" || name == "origin-router-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummaries()
{
    yang_name = "prefix-event-summaries"; yang_parent_name = "instance";
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::~PrefixEventSummaries()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::has_data() const
{
    for (std::size_t index=0; index<prefix_event_summary.size(); index++)
    {
        if(prefix_event_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::has_operation() const
{
    for (std::size_t index=0; index<prefix_event_summary.size(); index++)
    {
        if(prefix_event_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-event-summaries";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixEventSummaries' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-event-summary")
    {
        for(auto const & c : prefix_event_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary>();
        c->parent = this;
        prefix_event_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_event_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-event-summary")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::PrefixEventSummary()
    :
    event_id{YType::int32, "event-id"},
    change_type{YType::enumeration, "change-type"},
    cost{YType::uint32, "cost"},
    ipfrr_event_id{YType::uint32, "ipfrr-event-id"},
    prefix{YType::str, "prefix"},
    prefix_lenth{YType::uint32, "prefix-lenth"},
    priority{YType::enumeration, "priority"},
    route_path_change_type{YType::enumeration, "route-path-change-type"},
    route_type{YType::enumeration, "route-type"},
    spf_run_no{YType::uint32, "spf-run-no"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    trigger_time{YType::str, "trigger-time"}
    	,
    ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime>())
	,mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime>())
{
    ip_convergence_time->parent = this;

    mpls_convergence_time->parent = this;

    yang_name = "prefix-event-summary"; yang_parent_name = "prefix-event-summaries";
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::~PrefixEventSummary()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::has_data() const
{
    for (std::size_t index=0; index<lsa_processed.size(); index++)
    {
        if(lsa_processed[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<time_line.size(); index++)
    {
        if(time_line[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.size(); index++)
    {
        if(trigger_lsa[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| change_type.is_set
	|| cost.is_set
	|| ipfrr_event_id.is_set
	|| prefix.is_set
	|| prefix_lenth.is_set
	|| priority.is_set
	|| route_path_change_type.is_set
	|| route_type.is_set
	|| spf_run_no.is_set
	|| threshold_exceeded.is_set
	|| trigger_time.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::has_operation() const
{
    for (std::size_t index=0; index<lsa_processed.size(); index++)
    {
        if(lsa_processed[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<time_line.size(); index++)
    {
        if(time_line[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.size(); index++)
    {
        if(trigger_lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(ipfrr_event_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_lenth.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(route_path_change_type.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(spf_run_no.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-event-summary" <<"[event-id='" <<event_id <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixEventSummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (ipfrr_event_id.is_set || is_set(ipfrr_event_id.yfilter)) leaf_name_data.push_back(ipfrr_event_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_lenth.is_set || is_set(prefix_lenth.yfilter)) leaf_name_data.push_back(prefix_lenth.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (route_path_change_type.is_set || is_set(route_path_change_type.yfilter)) leaf_name_data.push_back(route_path_change_type.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (spf_run_no.is_set || is_set(spf_run_no.yfilter)) leaf_name_data.push_back(spf_run_no.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "lsa-processed")
    {
        for(auto const & c : lsa_processed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed>();
        c->parent = this;
        lsa_processed.push_back(c);
        return c;
    }

    if(child_yang_name == "mpls-convergence-time")
    {
        if(mpls_convergence_time == nullptr)
        {
            mpls_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime>();
        }
        return mpls_convergence_time;
    }

    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    if(child_yang_name == "time-line")
    {
        for(auto const & c : time_line)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine>();
        c->parent = this;
        time_line.push_back(c);
        return c;
    }

    if(child_yang_name == "trigger-lsa")
    {
        for(auto const & c : trigger_lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa>();
        c->parent = this;
        trigger_lsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_convergence_time != nullptr)
    {
        children["ip-convergence-time"] = ip_convergence_time;
    }

    for (auto const & c : lsa_processed)
    {
        children[c->get_segment_path()] = c;
    }

    if(mpls_convergence_time != nullptr)
    {
        children["mpls-convergence-time"] = mpls_convergence_time;
    }

    for (auto const & c : path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : time_line)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : trigger_lsa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id = value;
        ipfrr_event_id.value_namespace = name_space;
        ipfrr_event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth = value;
        prefix_lenth.value_namespace = name_space;
        prefix_lenth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type = value;
        route_path_change_type.value_namespace = name_space;
        route_path_change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no = value;
        spf_run_no.value_namespace = name_space;
        spf_run_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-convergence-time" || name == "lsa-processed" || name == "mpls-convergence-time" || name == "path" || name == "time-line" || name == "trigger-lsa" || name == "event-id" || name == "change-type" || name == "cost" || name == "ipfrr-event-id" || name == "prefix" || name == "prefix-lenth" || name == "priority" || name == "route-path-change-type" || name == "route-type" || name == "spf-run-no" || name == "threshold-exceeded" || name == "trigger-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::IpConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "ip-convergence-time"; yang_parent_name = "prefix-event-summary";
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "mpls-convergence-time"; yang_parent_name = "prefix-event-summary";
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::Path()
    :
    change_type{YType::enumeration, "change-type"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    path_metric{YType::uint32, "path-metric"}
{
    yang_name = "path"; yang_parent_name = "prefix-event-summary";
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::~Path()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::has_data() const
{
    for (std::size_t index=0; index<lfa_path.size(); index++)
    {
        if(lfa_path[index]->has_data())
            return true;
    }
    return change_type.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| path_metric.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::has_operation() const
{
    for (std::size_t index=0; index<lfa_path.size(); index++)
    {
        if(lfa_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_metric.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lfa-path")
    {
        for(auto const & c : lfa_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath>();
        c->parent = this;
        lfa_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lfa_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-metric")
    {
        path_metric = value;
        path_metric.value_namespace = name_space;
        path_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "path-metric")
    {
        path_metric.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lfa-path" || name == "change-type" || name == "interface-name" || name == "neighbour-address" || name == "path-metric")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::LfaPath()
    :
    change_type{YType::enumeration, "change-type"},
    interface_name{YType::str, "interface-name"},
    lfa_type{YType::enumeration, "lfa-type"},
    neighbour_address{YType::str, "neighbour-address"},
    path_metric{YType::uint32, "path-metric"},
    remote_node_id{YType::str, "remote-node-id"}
{
    yang_name = "lfa-path"; yang_parent_name = "path";
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::~LfaPath()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::has_data() const
{
    return change_type.is_set
	|| interface_name.is_set
	|| lfa_type.is_set
	|| neighbour_address.is_set
	|| path_metric.is_set
	|| remote_node_id.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(lfa_type.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_metric.yfilter)
	|| ydk::is_set(remote_node_id.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lfa-path";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LfaPath' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (lfa_type.is_set || is_set(lfa_type.yfilter)) leaf_name_data.push_back(lfa_type.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-type")
    {
        lfa_type = value;
        lfa_type.value_namespace = name_space;
        lfa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-metric")
    {
        path_metric = value;
        path_metric.value_namespace = name_space;
        path_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "lfa-type")
    {
        lfa_type.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "path-metric")
    {
        path_metric.yfilter = yfilter;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "interface-name" || name == "lfa-type" || name == "neighbour-address" || name == "path-metric" || name == "remote-node-id")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::TriggerLsa()
    :
    change_type{YType::enumeration, "change-type"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::str, "sequence-number"}
{
    yang_name = "trigger-lsa"; yang_parent_name = "prefix-event-summary";
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::~TriggerLsa()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::has_data() const
{
    return change_type.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsa";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerLsa' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id = value;
        origin_router_id.value_namespace = name_space;
        origin_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsa-id" || name == "lsa-type" || name == "origin-router-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::TimeLine()
    :
    ldp_enter{YType::str, "ldp-enter"},
    ldp_exit{YType::str, "ldp-exit"},
    lsd_enter{YType::str, "lsd-enter"},
    lsd_exit{YType::str, "lsd-exit"},
    ri_bv4_enter{YType::str, "ri-bv4-enter"},
    ri_bv4_exit{YType::str, "ri-bv4-exit"},
    ri_bv4_redistribute{YType::str, "ri-bv4-redistribute"},
    route_origin{YType::str, "route-origin"}
{
    yang_name = "time-line"; yang_parent_name = "prefix-event-summary";
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::~TimeLine()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::has_data() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return ldp_enter.is_set
	|| ldp_exit.is_set
	|| lsd_enter.is_set
	|| lsd_exit.is_set
	|| ri_bv4_enter.is_set
	|| ri_bv4_exit.is_set
	|| ri_bv4_redistribute.is_set
	|| route_origin.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ldp_enter.yfilter)
	|| ydk::is_set(ldp_exit.yfilter)
	|| ydk::is_set(lsd_enter.yfilter)
	|| ydk::is_set(lsd_exit.yfilter)
	|| ydk::is_set(ri_bv4_enter.yfilter)
	|| ydk::is_set(ri_bv4_exit.yfilter)
	|| ydk::is_set(ri_bv4_redistribute.yfilter)
	|| ydk::is_set(route_origin.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-line";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TimeLine' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp_enter.is_set || is_set(ldp_enter.yfilter)) leaf_name_data.push_back(ldp_enter.get_name_leafdata());
    if (ldp_exit.is_set || is_set(ldp_exit.yfilter)) leaf_name_data.push_back(ldp_exit.get_name_leafdata());
    if (lsd_enter.is_set || is_set(lsd_enter.yfilter)) leaf_name_data.push_back(lsd_enter.get_name_leafdata());
    if (lsd_exit.is_set || is_set(lsd_exit.yfilter)) leaf_name_data.push_back(lsd_exit.get_name_leafdata());
    if (ri_bv4_enter.is_set || is_set(ri_bv4_enter.yfilter)) leaf_name_data.push_back(ri_bv4_enter.get_name_leafdata());
    if (ri_bv4_exit.is_set || is_set(ri_bv4_exit.yfilter)) leaf_name_data.push_back(ri_bv4_exit.get_name_leafdata());
    if (ri_bv4_redistribute.is_set || is_set(ri_bv4_redistribute.yfilter)) leaf_name_data.push_back(ri_bv4_redistribute.get_name_leafdata());
    if (route_origin.is_set || is_set(route_origin.yfilter)) leaf_name_data.push_back(route_origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-ip")
    {
        for(auto const & c : lc_ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp>();
        c->parent = this;
        lc_ip.push_back(c);
        return c;
    }

    if(child_yang_name == "lc-mpls")
    {
        for(auto const & c : lc_mpls)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls>();
        c->parent = this;
        lc_mpls.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lc_ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lc_mpls)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldp-enter")
    {
        ldp_enter = value;
        ldp_enter.value_namespace = name_space;
        ldp_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-exit")
    {
        ldp_exit = value;
        ldp_exit.value_namespace = name_space;
        ldp_exit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-enter")
    {
        lsd_enter = value;
        lsd_enter.value_namespace = name_space;
        lsd_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-exit")
    {
        lsd_exit = value;
        lsd_exit.value_namespace = name_space;
        lsd_exit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-bv4-enter")
    {
        ri_bv4_enter = value;
        ri_bv4_enter.value_namespace = name_space;
        ri_bv4_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-bv4-exit")
    {
        ri_bv4_exit = value;
        ri_bv4_exit.value_namespace = name_space;
        ri_bv4_exit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-bv4-redistribute")
    {
        ri_bv4_redistribute = value;
        ri_bv4_redistribute.value_namespace = name_space;
        ri_bv4_redistribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-origin")
    {
        route_origin = value;
        route_origin.value_namespace = name_space;
        route_origin.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldp-enter")
    {
        ldp_enter.yfilter = yfilter;
    }
    if(value_path == "ldp-exit")
    {
        ldp_exit.yfilter = yfilter;
    }
    if(value_path == "lsd-enter")
    {
        lsd_enter.yfilter = yfilter;
    }
    if(value_path == "lsd-exit")
    {
        lsd_exit.yfilter = yfilter;
    }
    if(value_path == "ri-bv4-enter")
    {
        ri_bv4_enter.yfilter = yfilter;
    }
    if(value_path == "ri-bv4-exit")
    {
        ri_bv4_exit.yfilter = yfilter;
    }
    if(value_path == "ri-bv4-redistribute")
    {
        ri_bv4_redistribute.yfilter = yfilter;
    }
    if(value_path == "route-origin")
    {
        route_origin.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-ip" || name == "lc-mpls" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "route-origin")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::LcIp()
    :
    fib_complete{YType::str, "fib-complete"},
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
{
    yang_name = "lc-ip"; yang_parent_name = "time-line";
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::~LcIp()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::has_data() const
{
    return fib_complete.is_set
	|| node_name.is_set
	|| speed.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fib_complete.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-ip";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcIp' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::LcMpls()
    :
    fib_complete{YType::str, "fib-complete"},
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
{
    yang_name = "lc-mpls"; yang_parent_name = "time-line";
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::~LcMpls()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::has_data() const
{
    return fib_complete.is_set
	|| node_name.is_set
	|| speed.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fib_complete.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-mpls";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcMpls' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::LsaProcessed()
    :
    change_type{YType::enumeration, "change-type"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::str, "sequence-number"}
{
    yang_name = "lsa-processed"; yang_parent_name = "prefix-event-summary";
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::~LsaProcessed()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::has_data() const
{
    return change_type.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-processed";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaProcessed' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id = value;
        origin_router_id.value_namespace = name_space;
        origin_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsa-id" || name == "lsa-type" || name == "origin-router-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOfflines()
{
    yang_name = "summary-external-event-offlines"; yang_parent_name = "instance";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::~SummaryExternalEventOfflines()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::has_data() const
{
    for (std::size_t index=0; index<summary_external_event_offline.size(); index++)
    {
        if(summary_external_event_offline[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::has_operation() const
{
    for (std::size_t index=0; index<summary_external_event_offline.size(); index++)
    {
        if(summary_external_event_offline[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-external-event-offlines";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryExternalEventOfflines' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-external-event-offline")
    {
        for(auto const & c : summary_external_event_offline)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline>();
        c->parent = this;
        summary_external_event_offline.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : summary_external_event_offline)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-external-event-offline")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::SummaryExternalEventOffline()
    :
    event_id{YType::int32, "event-id"},
    change_type{YType::enumeration, "change-type"},
    cost{YType::uint32, "cost"},
    ipfrr_event_id{YType::uint32, "ipfrr-event-id"},
    prefix{YType::str, "prefix"},
    prefix_lenth{YType::uint32, "prefix-lenth"},
    priority{YType::enumeration, "priority"},
    route_path_change_type{YType::enumeration, "route-path-change-type"},
    route_type{YType::enumeration, "route-type"},
    spf_run_no{YType::uint32, "spf-run-no"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    trigger_time{YType::str, "trigger-time"}
    	,
    ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime>())
	,mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime>())
{
    ip_convergence_time->parent = this;

    mpls_convergence_time->parent = this;

    yang_name = "summary-external-event-offline"; yang_parent_name = "summary-external-event-offlines";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::~SummaryExternalEventOffline()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::has_data() const
{
    for (std::size_t index=0; index<lsa_processed.size(); index++)
    {
        if(lsa_processed[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<time_line.size(); index++)
    {
        if(time_line[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.size(); index++)
    {
        if(trigger_lsa[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| change_type.is_set
	|| cost.is_set
	|| ipfrr_event_id.is_set
	|| prefix.is_set
	|| prefix_lenth.is_set
	|| priority.is_set
	|| route_path_change_type.is_set
	|| route_type.is_set
	|| spf_run_no.is_set
	|| threshold_exceeded.is_set
	|| trigger_time.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::has_operation() const
{
    for (std::size_t index=0; index<lsa_processed.size(); index++)
    {
        if(lsa_processed[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<time_line.size(); index++)
    {
        if(time_line[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.size(); index++)
    {
        if(trigger_lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(ipfrr_event_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_lenth.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(route_path_change_type.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(spf_run_no.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-external-event-offline" <<"[event-id='" <<event_id <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryExternalEventOffline' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (ipfrr_event_id.is_set || is_set(ipfrr_event_id.yfilter)) leaf_name_data.push_back(ipfrr_event_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_lenth.is_set || is_set(prefix_lenth.yfilter)) leaf_name_data.push_back(prefix_lenth.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (route_path_change_type.is_set || is_set(route_path_change_type.yfilter)) leaf_name_data.push_back(route_path_change_type.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (spf_run_no.is_set || is_set(spf_run_no.yfilter)) leaf_name_data.push_back(spf_run_no.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "lsa-processed")
    {
        for(auto const & c : lsa_processed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed>();
        c->parent = this;
        lsa_processed.push_back(c);
        return c;
    }

    if(child_yang_name == "mpls-convergence-time")
    {
        if(mpls_convergence_time == nullptr)
        {
            mpls_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime>();
        }
        return mpls_convergence_time;
    }

    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    if(child_yang_name == "time-line")
    {
        for(auto const & c : time_line)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine>();
        c->parent = this;
        time_line.push_back(c);
        return c;
    }

    if(child_yang_name == "trigger-lsa")
    {
        for(auto const & c : trigger_lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa>();
        c->parent = this;
        trigger_lsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_convergence_time != nullptr)
    {
        children["ip-convergence-time"] = ip_convergence_time;
    }

    for (auto const & c : lsa_processed)
    {
        children[c->get_segment_path()] = c;
    }

    if(mpls_convergence_time != nullptr)
    {
        children["mpls-convergence-time"] = mpls_convergence_time;
    }

    for (auto const & c : path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : time_line)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : trigger_lsa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id = value;
        ipfrr_event_id.value_namespace = name_space;
        ipfrr_event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth = value;
        prefix_lenth.value_namespace = name_space;
        prefix_lenth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type = value;
        route_path_change_type.value_namespace = name_space;
        route_path_change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no = value;
        spf_run_no.value_namespace = name_space;
        spf_run_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-convergence-time" || name == "lsa-processed" || name == "mpls-convergence-time" || name == "path" || name == "time-line" || name == "trigger-lsa" || name == "event-id" || name == "change-type" || name == "cost" || name == "ipfrr-event-id" || name == "prefix" || name == "prefix-lenth" || name == "priority" || name == "route-path-change-type" || name == "route-type" || name == "spf-run-no" || name == "threshold-exceeded" || name == "trigger-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::IpConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "ip-convergence-time"; yang_parent_name = "summary-external-event-offline";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::MplsConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "mpls-convergence-time"; yang_parent_name = "summary-external-event-offline";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::Path()
    :
    change_type{YType::enumeration, "change-type"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    path_metric{YType::uint32, "path-metric"}
{
    yang_name = "path"; yang_parent_name = "summary-external-event-offline";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::~Path()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::has_data() const
{
    for (std::size_t index=0; index<lfa_path.size(); index++)
    {
        if(lfa_path[index]->has_data())
            return true;
    }
    return change_type.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| path_metric.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::has_operation() const
{
    for (std::size_t index=0; index<lfa_path.size(); index++)
    {
        if(lfa_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_metric.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lfa-path")
    {
        for(auto const & c : lfa_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath>();
        c->parent = this;
        lfa_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lfa_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-metric")
    {
        path_metric = value;
        path_metric.value_namespace = name_space;
        path_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "path-metric")
    {
        path_metric.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lfa-path" || name == "change-type" || name == "interface-name" || name == "neighbour-address" || name == "path-metric")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::LfaPath()
    :
    change_type{YType::enumeration, "change-type"},
    interface_name{YType::str, "interface-name"},
    lfa_type{YType::enumeration, "lfa-type"},
    neighbour_address{YType::str, "neighbour-address"},
    path_metric{YType::uint32, "path-metric"},
    remote_node_id{YType::str, "remote-node-id"}
{
    yang_name = "lfa-path"; yang_parent_name = "path";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::~LfaPath()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::has_data() const
{
    return change_type.is_set
	|| interface_name.is_set
	|| lfa_type.is_set
	|| neighbour_address.is_set
	|| path_metric.is_set
	|| remote_node_id.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(lfa_type.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_metric.yfilter)
	|| ydk::is_set(remote_node_id.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lfa-path";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LfaPath' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (lfa_type.is_set || is_set(lfa_type.yfilter)) leaf_name_data.push_back(lfa_type.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-type")
    {
        lfa_type = value;
        lfa_type.value_namespace = name_space;
        lfa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-metric")
    {
        path_metric = value;
        path_metric.value_namespace = name_space;
        path_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "lfa-type")
    {
        lfa_type.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "path-metric")
    {
        path_metric.yfilter = yfilter;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "interface-name" || name == "lfa-type" || name == "neighbour-address" || name == "path-metric" || name == "remote-node-id")
        return true;
    return false;
}

const Enum::YLeaf RcmdLsa::unknown {0, "unknown"};
const Enum::YLeaf RcmdLsa::router {1, "router"};
const Enum::YLeaf RcmdLsa::network {2, "network"};
const Enum::YLeaf RcmdLsa::summary {3, "summary"};
const Enum::YLeaf RcmdLsa::asbr {4, "asbr"};
const Enum::YLeaf RcmdLsa::external {5, "external"};
const Enum::YLeaf RcmdLsa::multicast {6, "multicast"};
const Enum::YLeaf RcmdLsa::nssa {7, "nssa"};

const Enum::YLeaf RcmdShowIpfrrLfa::none {0, "none"};
const Enum::YLeaf RcmdShowIpfrrLfa::local {1, "local"};
const Enum::YLeaf RcmdShowIpfrrLfa::remote {2, "remote"};

const Enum::YLeaf RcmdLdpEvent::neighbor {1, "neighbor"};
const Enum::YLeaf RcmdLdpEvent::adjacency {2, "adjacency"};

const Enum::YLeaf RcmdShowLdpSessionState::gr_down {0, "gr-down"};
const Enum::YLeaf RcmdShowLdpSessionState::gr_converging {1, "gr-converging"};
const Enum::YLeaf RcmdShowLdpSessionState::establishing {2, "establishing"};
const Enum::YLeaf RcmdShowLdpSessionState::converging {3, "converging"};
const Enum::YLeaf RcmdShowLdpSessionState::converged {4, "converged"};
const Enum::YLeaf RcmdShowLdpSessionState::retrying {5, "retrying"};
const Enum::YLeaf RcmdShowLdpSessionState::total {6, "total"};

const Enum::YLeaf RcmdShowNode::unknown {0, "unknown"};
const Enum::YLeaf RcmdShowNode::lc {1, "lc"};
const Enum::YLeaf RcmdShowNode::rp {2, "rp"};

const Enum::YLeaf RcmdShowRoutePathChange::primary {0, "primary"};
const Enum::YLeaf RcmdShowRoutePathChange::backup {1, "backup"};

const Enum::YLeaf RcmdProtocolId::ospf {0, "ospf"};
const Enum::YLeaf RcmdProtocolId::isis {1, "isis"};
const Enum::YLeaf RcmdProtocolId::na {2, "na"};

const Enum::YLeaf RcmdLinecardSpeed::other {0, "other"};
const Enum::YLeaf RcmdLinecardSpeed::fastest {1, "fastest"};
const Enum::YLeaf RcmdLinecardSpeed::slowest {2, "slowest"};

const Enum::YLeaf RcmdShowPrcsState::success {0, "success"};
const Enum::YLeaf RcmdShowPrcsState::cpu {1, "cpu"};
const Enum::YLeaf RcmdShowPrcsState::memory {2, "memory"};

const Enum::YLeaf RcmdLsChange::new_ {0, "new"};
const Enum::YLeaf RcmdLsChange::delete_ {1, "delete"};
const Enum::YLeaf RcmdLsChange::modify {2, "modify"};
const Enum::YLeaf RcmdLsChange::noop {3, "noop"};

const Enum::YLeaf RcmdBagEnableDisable::disable {0, "disable"};
const Enum::YLeaf RcmdBagEnableDisable::enable {1, "enable"};

const Enum::YLeaf RcmdBoolYesNo::no {0, "no"};
const Enum::YLeaf RcmdBoolYesNo::yes {1, "yes"};

const Enum::YLeaf RcmdShowInstState::unknown {0, "unknown"};
const Enum::YLeaf RcmdShowInstState::active {1, "active"};
const Enum::YLeaf RcmdShowInstState::in_active {2, "in-active"};
const Enum::YLeaf RcmdShowInstState::na {3, "na"};

const Enum::YLeaf RcmdIsisLvl::l1 {0, "l1"};
const Enum::YLeaf RcmdIsisLvl::l2 {1, "l2"};

const Enum::YLeaf RcmdChange::none {0, "none"};
const Enum::YLeaf RcmdChange::add {1, "add"};
const Enum::YLeaf RcmdChange::delete_ {2, "delete"};
const Enum::YLeaf RcmdChange::modify {3, "modify"};
const Enum::YLeaf RcmdChange::no_change {4, "no-change"};

const Enum::YLeaf RcmdShowIntfEvent::create {1, "create"};
const Enum::YLeaf RcmdShowIntfEvent::delete_ {2, "delete"};
const Enum::YLeaf RcmdShowIntfEvent::link_up {3, "link-up"};
const Enum::YLeaf RcmdShowIntfEvent::link_down {4, "link-down"};
const Enum::YLeaf RcmdShowIntfEvent::primary_address {5, "primary-address"};
const Enum::YLeaf RcmdShowIntfEvent::secondary_address {6, "secondary-address"};
const Enum::YLeaf RcmdShowIntfEvent::ipv6_link_local_address {7, "ipv6-link-local-address"};
const Enum::YLeaf RcmdShowIntfEvent::ipv6_global_address {8, "ipv6-global-address"};
const Enum::YLeaf RcmdShowIntfEvent::mtu {9, "mtu"};
const Enum::YLeaf RcmdShowIntfEvent::band_width {10, "band-width"};
const Enum::YLeaf RcmdShowIntfEvent::ldp_sync {11, "ldp-sync"};
const Enum::YLeaf RcmdShowIntfEvent::forward_reference {12, "forward-reference"};
const Enum::YLeaf RcmdShowIntfEvent::ldp_no_sync {13, "ldp-no-sync"};

const Enum::YLeaf RcmdIsisSpf::full {0, "full"};
const Enum::YLeaf RcmdIsisSpf::incremental {1, "incremental"};
const Enum::YLeaf RcmdIsisSpf::next_hop {2, "next-hop"};
const Enum::YLeaf RcmdIsisSpf::partial_route {3, "partial-route"};

const Enum::YLeaf RcmdShowLdpNeighbourStatus::down {0, "down"};
const Enum::YLeaf RcmdShowLdpNeighbourStatus::up {1, "up"};

const Enum::YLeaf RcmdBagEnblDsbl::dsbl {0, "dsbl"};
const Enum::YLeaf RcmdBagEnblDsbl::enbl {1, "enbl"};

const Enum::YLeaf RcmdShowLdpConvState::not_full {0, "not-full"};
const Enum::YLeaf RcmdShowLdpConvState::fully_covered {1, "fully-covered"};
const Enum::YLeaf RcmdShowLdpConvState::coverage_above_threshold {2, "coverage-above-threshold"};
const Enum::YLeaf RcmdShowLdpConvState::coverage_below_threshold {3, "coverage-below-threshold"};
const Enum::YLeaf RcmdShowLdpConvState::coverage_flapping {4, "coverage-flapping"};

const Enum::YLeaf RcmdShowCompId::ospf {0, "ospf"};
const Enum::YLeaf RcmdShowCompId::isis {1, "isis"};
const Enum::YLeaf RcmdShowCompId::un_known {2, "un-known"};

const Enum::YLeaf RcmdPriorityLevel::critical {0, "critical"};
const Enum::YLeaf RcmdPriorityLevel::high {1, "high"};
const Enum::YLeaf RcmdPriorityLevel::medium {2, "medium"};
const Enum::YLeaf RcmdPriorityLevel::low {3, "low"};

const Enum::YLeaf RcmdSpfState::complete {0, "complete"};
const Enum::YLeaf RcmdSpfState::in_complete {1, "in-complete"};
const Enum::YLeaf RcmdSpfState::collecting {2, "collecting"};
const Enum::YLeaf RcmdSpfState::no_route_change {3, "no-route-change"};

const Enum::YLeaf RcmdShowMem::standard {0, "standard"};
const Enum::YLeaf RcmdShowMem::chunk {1, "chunk"};
const Enum::YLeaf RcmdShowMem::edm {2, "edm"};
const Enum::YLeaf RcmdShowMem::string {3, "string"};
const Enum::YLeaf RcmdShowMem::static_ {4, "static"};
const Enum::YLeaf RcmdShowMem::unknown {5, "unknown"};

const Enum::YLeaf RcmdShowRoute::ospf {0, "ospf"};
const Enum::YLeaf RcmdShowRoute::intra {1, "intra"};
const Enum::YLeaf RcmdShowRoute::inter {2, "inter"};
const Enum::YLeaf RcmdShowRoute::ext_1 {3, "ext-1"};
const Enum::YLeaf RcmdShowRoute::ext_2 {4, "ext-2"};
const Enum::YLeaf RcmdShowRoute::nssa_1 {5, "nssa-1"};
const Enum::YLeaf RcmdShowRoute::nssa_2 {6, "nssa-2"};
const Enum::YLeaf RcmdShowRoute::isis {7, "isis"};
const Enum::YLeaf RcmdShowRoute::l1_summary {8, "l1-summary"};
const Enum::YLeaf RcmdShowRoute::l1 {9, "l1"};
const Enum::YLeaf RcmdShowRoute::l2_summary {10, "l2-summary"};
const Enum::YLeaf RcmdShowRoute::l2 {11, "l2"};
const Enum::YLeaf RcmdShowRoute::inter_area_summary {12, "inter-area-summary"};
const Enum::YLeaf RcmdShowRoute::inter_area {13, "inter-area"};
const Enum::YLeaf RcmdShowRoute::default_attached {14, "default-attached"};


}
}

