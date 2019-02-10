
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_rcmd_oper_0.hpp"
#include "Cisco_IOS_XR_infra_rcmd_oper_2.hpp"
#include "Cisco_IOS_XR_infra_rcmd_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rcmd_oper {

Rcmd::Rcmd()
    :
    ospf(std::make_shared<Rcmd::Ospf>())
    , server(std::make_shared<Rcmd::Server>())
    , node(std::make_shared<Rcmd::Node>())
    , isis(std::make_shared<Rcmd::Isis>())
    , memory(std::make_shared<Rcmd::Memory>())
    , ldp(std::make_shared<Rcmd::Ldp>())
    , intf(std::make_shared<Rcmd::Intf>())
    , process(std::make_shared<Rcmd::Process>())
{
    ospf->parent = this;
    server->parent = this;
    node->parent = this;
    isis->parent = this;
    memory->parent = this;
    ldp->parent = this;
    intf->parent = this;
    process->parent = this;

    yang_name = "rcmd"; yang_parent_name = "Cisco-IOS-XR-infra-rcmd-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Rcmd::~Rcmd()
{
}

bool Rcmd::has_data() const
{
    if (is_presence_container) return true;
    return (ospf !=  nullptr && ospf->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (node !=  nullptr && node->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (memory !=  nullptr && memory->has_data())
	|| (ldp !=  nullptr && ldp->has_data())
	|| (intf !=  nullptr && intf->has_data())
	|| (process !=  nullptr && process->has_data());
}

bool Rcmd::has_operation() const
{
    return is_set(yfilter)
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (node !=  nullptr && node->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (memory !=  nullptr && memory->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (intf !=  nullptr && intf->has_operation())
	|| (process !=  nullptr && process->has_operation());
}

std::string Rcmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Rcmd::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Rcmd::Server>();
        }
        return server;
    }

    if(child_yang_name == "node")
    {
        if(node == nullptr)
        {
            node = std::make_shared<Rcmd::Node>();
        }
        return node;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Rcmd::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "memory")
    {
        if(memory == nullptr)
        {
            memory = std::make_shared<Rcmd::Memory>();
        }
        return memory;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Rcmd::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "intf")
    {
        if(intf == nullptr)
        {
            intf = std::make_shared<Rcmd::Intf>();
        }
        return intf;
    }

    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<Rcmd::Process>();
        }
        return process;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    if(node != nullptr)
    {
        _children["node"] = node;
    }

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(memory != nullptr)
    {
        _children["memory"] = memory;
    }

    if(ldp != nullptr)
    {
        _children["ldp"] = ldp;
    }

    if(intf != nullptr)
    {
        _children["intf"] = intf;
    }

    if(process != nullptr)
    {
        _children["process"] = process;
    }

    return _children;
}

void Rcmd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Rcmd::clone_ptr() const
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
    if(name == "ospf" || name == "server" || name == "node" || name == "isis" || name == "memory" || name == "ldp" || name == "intf" || name == "process")
        return true;
    return false;
}

Rcmd::Ospf::Ospf()
    :
    instances(std::make_shared<Rcmd::Ospf::Instances>())
{
    instances->parent = this;

    yang_name = "ospf"; yang_parent_name = "rcmd"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Ospf::~Ospf()
{
}

bool Rcmd::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return (instances !=  nullptr && instances->has_data());
}

bool Rcmd::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| (instances !=  nullptr && instances->has_operation());
}

std::string Rcmd::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(instances != nullptr)
    {
        _children["instances"] = instances;
    }

    return _children;
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
    :
    instance(this, {"instance_name"})
{

    yang_name = "instances"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Ospf::Instances::~Instances()
{
}

bool Rcmd::Ospf::Instances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ospf::Instances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Ospf::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    ipfrr_event_summaries(std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries>())
    , prefix_event_statistics(std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventStatistics>())
    , spf_run_summaries(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries>())
    , ipfrr_event_offlines(std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines>())
    , spf_run_offlines(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines>())
    , summary_external_event_summaries(std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries>())
    , prefix_event_summaries(std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries>())
    , summary_external_event_offlines(std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines>())
    , prefix_event_offlines(std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines>())
    , summary_external_event_statistics(std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics>())
{
    ipfrr_event_summaries->parent = this;
    prefix_event_statistics->parent = this;
    spf_run_summaries->parent = this;
    ipfrr_event_offlines->parent = this;
    spf_run_offlines->parent = this;
    summary_external_event_summaries->parent = this;
    prefix_event_summaries->parent = this;
    summary_external_event_offlines->parent = this;
    prefix_event_offlines->parent = this;
    summary_external_event_statistics->parent = this;

    yang_name = "instance"; yang_parent_name = "instances"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Ospf::Instances::Instance::~Instance()
{
}

bool Rcmd::Ospf::Instances::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_name.is_set
	|| (ipfrr_event_summaries !=  nullptr && ipfrr_event_summaries->has_data())
	|| (prefix_event_statistics !=  nullptr && prefix_event_statistics->has_data())
	|| (spf_run_summaries !=  nullptr && spf_run_summaries->has_data())
	|| (ipfrr_event_offlines !=  nullptr && ipfrr_event_offlines->has_data())
	|| (spf_run_offlines !=  nullptr && spf_run_offlines->has_data())
	|| (summary_external_event_summaries !=  nullptr && summary_external_event_summaries->has_data())
	|| (prefix_event_summaries !=  nullptr && prefix_event_summaries->has_data())
	|| (summary_external_event_offlines !=  nullptr && summary_external_event_offlines->has_data())
	|| (prefix_event_offlines !=  nullptr && prefix_event_offlines->has_data())
	|| (summary_external_event_statistics !=  nullptr && summary_external_event_statistics->has_data());
}

bool Rcmd::Ospf::Instances::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| (ipfrr_event_summaries !=  nullptr && ipfrr_event_summaries->has_operation())
	|| (prefix_event_statistics !=  nullptr && prefix_event_statistics->has_operation())
	|| (spf_run_summaries !=  nullptr && spf_run_summaries->has_operation())
	|| (ipfrr_event_offlines !=  nullptr && ipfrr_event_offlines->has_operation())
	|| (spf_run_offlines !=  nullptr && spf_run_offlines->has_operation())
	|| (summary_external_event_summaries !=  nullptr && summary_external_event_summaries->has_operation())
	|| (prefix_event_summaries !=  nullptr && prefix_event_summaries->has_operation())
	|| (summary_external_event_offlines !=  nullptr && summary_external_event_offlines->has_operation())
	|| (prefix_event_offlines !=  nullptr && prefix_event_offlines->has_operation())
	|| (summary_external_event_statistics !=  nullptr && summary_external_event_statistics->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/ospf/instances/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Ospf::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-event-summaries")
    {
        if(ipfrr_event_summaries == nullptr)
        {
            ipfrr_event_summaries = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries>();
        }
        return ipfrr_event_summaries;
    }

    if(child_yang_name == "prefix-event-statistics")
    {
        if(prefix_event_statistics == nullptr)
        {
            prefix_event_statistics = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventStatistics>();
        }
        return prefix_event_statistics;
    }

    if(child_yang_name == "spf-run-summaries")
    {
        if(spf_run_summaries == nullptr)
        {
            spf_run_summaries = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries>();
        }
        return spf_run_summaries;
    }

    if(child_yang_name == "ipfrr-event-offlines")
    {
        if(ipfrr_event_offlines == nullptr)
        {
            ipfrr_event_offlines = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines>();
        }
        return ipfrr_event_offlines;
    }

    if(child_yang_name == "spf-run-offlines")
    {
        if(spf_run_offlines == nullptr)
        {
            spf_run_offlines = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines>();
        }
        return spf_run_offlines;
    }

    if(child_yang_name == "summary-external-event-summaries")
    {
        if(summary_external_event_summaries == nullptr)
        {
            summary_external_event_summaries = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries>();
        }
        return summary_external_event_summaries;
    }

    if(child_yang_name == "prefix-event-summaries")
    {
        if(prefix_event_summaries == nullptr)
        {
            prefix_event_summaries = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries>();
        }
        return prefix_event_summaries;
    }

    if(child_yang_name == "summary-external-event-offlines")
    {
        if(summary_external_event_offlines == nullptr)
        {
            summary_external_event_offlines = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines>();
        }
        return summary_external_event_offlines;
    }

    if(child_yang_name == "prefix-event-offlines")
    {
        if(prefix_event_offlines == nullptr)
        {
            prefix_event_offlines = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines>();
        }
        return prefix_event_offlines;
    }

    if(child_yang_name == "summary-external-event-statistics")
    {
        if(summary_external_event_statistics == nullptr)
        {
            summary_external_event_statistics = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics>();
        }
        return summary_external_event_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipfrr_event_summaries != nullptr)
    {
        _children["ipfrr-event-summaries"] = ipfrr_event_summaries;
    }

    if(prefix_event_statistics != nullptr)
    {
        _children["prefix-event-statistics"] = prefix_event_statistics;
    }

    if(spf_run_summaries != nullptr)
    {
        _children["spf-run-summaries"] = spf_run_summaries;
    }

    if(ipfrr_event_offlines != nullptr)
    {
        _children["ipfrr-event-offlines"] = ipfrr_event_offlines;
    }

    if(spf_run_offlines != nullptr)
    {
        _children["spf-run-offlines"] = spf_run_offlines;
    }

    if(summary_external_event_summaries != nullptr)
    {
        _children["summary-external-event-summaries"] = summary_external_event_summaries;
    }

    if(prefix_event_summaries != nullptr)
    {
        _children["prefix-event-summaries"] = prefix_event_summaries;
    }

    if(summary_external_event_offlines != nullptr)
    {
        _children["summary-external-event-offlines"] = summary_external_event_offlines;
    }

    if(prefix_event_offlines != nullptr)
    {
        _children["prefix-event-offlines"] = prefix_event_offlines;
    }

    if(summary_external_event_statistics != nullptr)
    {
        _children["summary-external-event-statistics"] = summary_external_event_statistics;
    }

    return _children;
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
    if(name == "ipfrr-event-summaries" || name == "prefix-event-statistics" || name == "spf-run-summaries" || name == "ipfrr-event-offlines" || name == "spf-run-offlines" || name == "summary-external-event-summaries" || name == "prefix-event-summaries" || name == "summary-external-event-offlines" || name == "prefix-event-offlines" || name == "summary-external-event-statistics" || name == "instance-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummaries()
    :
    ipfrr_event_summary(this, {"event_id"})
{

    yang_name = "ipfrr-event-summaries"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::~IpfrrEventSummaries()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipfrr_event_summary.len(); index++)
    {
        if(ipfrr_event_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_event_summary.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-event-summary")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary>();
        ent_->parent = this;
        ipfrr_event_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipfrr_event_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    event_id{YType::uint32, "event-id"},
    event_id_xr{YType::uint32, "event-id-xr"},
    trigger_time{YType::str, "trigger-time"},
    trigger_spf_run{YType::uint32, "trigger-spf-run"},
    wait_time{YType::uint32, "wait-time"},
    start_time_offset{YType::str, "start-time-offset"},
    duration{YType::str, "duration"},
    completed_spf_run{YType::uint32, "completed-spf-run"},
    total_routes{YType::uint32, "total-routes"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    coverage{YType::str, "coverage"}
        ,
    ipfrr_statistic(this, {})
    , remote_node(this, {})
{

    yang_name = "ipfrr-event-summary"; yang_parent_name = "ipfrr-event-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::~IpfrrEventSummary()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipfrr_statistic.len(); index++)
    {
        if(ipfrr_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_node.len(); index++)
    {
        if(remote_node[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| event_id_xr.is_set
	|| trigger_time.is_set
	|| trigger_spf_run.is_set
	|| wait_time.is_set
	|| start_time_offset.is_set
	|| duration.is_set
	|| completed_spf_run.is_set
	|| total_routes.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| coverage.is_set;
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_statistic.len(); index++)
    {
        if(ipfrr_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_node.len(); index++)
    {
        if(remote_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(event_id_xr.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| ydk::is_set(trigger_spf_run.yfilter)
	|| ydk::is_set(wait_time.yfilter)
	|| ydk::is_set(start_time_offset.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(completed_spf_run.yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(coverage.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-event-summary";
    ADD_KEY_TOKEN(event_id, "event-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (event_id_xr.is_set || is_set(event_id_xr.yfilter)) leaf_name_data.push_back(event_id_xr.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());
    if (trigger_spf_run.is_set || is_set(trigger_spf_run.yfilter)) leaf_name_data.push_back(trigger_spf_run.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());
    if (start_time_offset.is_set || is_set(start_time_offset.yfilter)) leaf_name_data.push_back(start_time_offset.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (completed_spf_run.is_set || is_set(completed_spf_run.yfilter)) leaf_name_data.push_back(completed_spf_run.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-statistic")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic>();
        ent_->parent = this;
        ipfrr_statistic.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remote-node")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode>();
        ent_->parent = this;
        remote_node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipfrr_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : remote_node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr = value;
        event_id_xr.value_namespace = name_space;
        event_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-spf-run")
    {
        trigger_spf_run = value;
        trigger_spf_run.value_namespace = name_space;
        trigger_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time-offset")
    {
        start_time_offset = value;
        start_time_offset.value_namespace = name_space;
        start_time_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "completed-spf-run")
    {
        completed_spf_run = value;
        completed_spf_run.value_namespace = name_space;
        completed_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
    if(value_path == "trigger-spf-run")
    {
        trigger_spf_run.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
    if(value_path == "start-time-offset")
    {
        start_time_offset.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "completed-spf-run")
    {
        completed_spf_run.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-statistic" || name == "remote-node" || name == "event-id" || name == "event-id-xr" || name == "trigger-time" || name == "trigger-spf-run" || name == "wait-time" || name == "start-time-offset" || name == "duration" || name == "completed-spf-run" || name == "total-routes" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "coverage")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::IpfrrStatistic()
    :
    priority{YType::enumeration, "priority"},
    total_routes{YType::uint32, "total-routes"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    coverage{YType::str, "coverage"},
    local_lfa_coverage{YType::str, "local-lfa-coverage"},
    remote_lfa_coverage{YType::str, "remote-lfa-coverage"},
    below_threshold{YType::boolean, "below-threshold"}
{

    yang_name = "ipfrr-statistic"; yang_parent_name = "ipfrr-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::~IpfrrStatistic()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| total_routes.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| coverage.is_set
	|| local_lfa_coverage.is_set
	|| remote_lfa_coverage.is_set
	|| below_threshold.is_set;
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(local_lfa_coverage.yfilter)
	|| ydk::is_set(remote_lfa_coverage.yfilter)
	|| ydk::is_set(below_threshold.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (local_lfa_coverage.is_set || is_set(local_lfa_coverage.yfilter)) leaf_name_data.push_back(local_lfa_coverage.get_name_leafdata());
    if (remote_lfa_coverage.is_set || is_set(remote_lfa_coverage.yfilter)) leaf_name_data.push_back(remote_lfa_coverage.get_name_leafdata());
    if (below_threshold.is_set || is_set(below_threshold.yfilter)) leaf_name_data.push_back(below_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-lfa-coverage")
    {
        local_lfa_coverage = value;
        local_lfa_coverage.value_namespace = name_space;
        local_lfa_coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-coverage")
    {
        remote_lfa_coverage = value;
        remote_lfa_coverage.value_namespace = name_space;
        remote_lfa_coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "below-threshold")
    {
        below_threshold = value;
        below_threshold.value_namespace = name_space;
        below_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "local-lfa-coverage")
    {
        local_lfa_coverage.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-coverage")
    {
        remote_lfa_coverage.yfilter = yfilter;
    }
    if(value_path == "below-threshold")
    {
        below_threshold.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "total-routes" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "coverage" || name == "local-lfa-coverage" || name == "remote-lfa-coverage" || name == "below-threshold")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::RemoteNode()
    :
    remote_node_id{YType::str, "remote-node-id"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    path_count{YType::uint32, "path-count"},
    in_use_time{YType::str, "in-use-time"}
        ,
    primary_path(this, {})
{

    yang_name = "remote-node"; yang_parent_name = "ipfrr-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::~RemoteNode()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<primary_path.len(); index++)
    {
        if(primary_path[index]->has_data())
            return true;
    }
    return remote_node_id.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| path_count.is_set
	|| in_use_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::has_operation() const
{
    for (std::size_t index=0; index<primary_path.len(); index++)
    {
        if(primary_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(remote_node_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(in_use_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (in_use_time.is_set || is_set(in_use_time.yfilter)) leaf_name_data.push_back(in_use_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-path")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath>();
        ent_->parent = this;
        primary_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : primary_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "in-use-time")
    {
        in_use_time = value;
        in_use_time.value_namespace = name_space;
        in_use_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
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
    if(value_path == "in-use-time")
    {
        in_use_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-path" || name == "remote-node-id" || name == "interface-name" || name == "neighbour-address" || name == "path-count" || name == "in-use-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::PrimaryPath()
    :
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"}
{

    yang_name = "primary-path"; yang_parent_name = "remote-node"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::~PrimaryPath()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    prefix_event_statistic(this, {"prefix_info"})
{

    yang_name = "prefix-event-statistics"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::~PrefixEventStatistics()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_event_statistic.len(); index++)
    {
        if(prefix_event_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::has_operation() const
{
    for (std::size_t index=0; index<prefix_event_statistic.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-event-statistic")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic>();
        ent_->parent = this;
        prefix_event_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_event_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    prefix{YType::str, "prefix"},
    prefix_lenth{YType::uint32, "prefix-lenth"},
    last_event_time{YType::str, "last-event-time"},
    last_priority{YType::enumeration, "last-priority"},
    last_route_type{YType::enumeration, "last-route-type"},
    last_change_type{YType::enumeration, "last-change-type"},
    last_cost{YType::uint32, "last-cost"},
    critical_priority{YType::uint32, "critical-priority"},
    high_priority{YType::uint32, "high-priority"},
    medium_priority{YType::uint32, "medium-priority"},
    low_priority{YType::uint32, "low-priority"},
    add_count{YType::uint32, "add-count"},
    modify_count{YType::uint32, "modify-count"},
    delete_count{YType::uint32, "delete-count"},
    threshold_exceed_count{YType::uint32, "threshold-exceed-count"}
{

    yang_name = "prefix-event-statistic"; yang_parent_name = "prefix-event-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::~PrefixEventStatistic()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::has_data() const
{
    if (is_presence_container) return true;
    return prefix_info.is_set
	|| prefix.is_set
	|| prefix_lenth.is_set
	|| last_event_time.is_set
	|| last_priority.is_set
	|| last_route_type.is_set
	|| last_change_type.is_set
	|| last_cost.is_set
	|| critical_priority.is_set
	|| high_priority.is_set
	|| medium_priority.is_set
	|| low_priority.is_set
	|| add_count.is_set
	|| modify_count.is_set
	|| delete_count.is_set
	|| threshold_exceed_count.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_info.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_lenth.yfilter)
	|| ydk::is_set(last_event_time.yfilter)
	|| ydk::is_set(last_priority.yfilter)
	|| ydk::is_set(last_route_type.yfilter)
	|| ydk::is_set(last_change_type.yfilter)
	|| ydk::is_set(last_cost.yfilter)
	|| ydk::is_set(critical_priority.yfilter)
	|| ydk::is_set(high_priority.yfilter)
	|| ydk::is_set(medium_priority.yfilter)
	|| ydk::is_set(low_priority.yfilter)
	|| ydk::is_set(add_count.yfilter)
	|| ydk::is_set(modify_count.yfilter)
	|| ydk::is_set(delete_count.yfilter)
	|| ydk::is_set(threshold_exceed_count.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-event-statistic";
    ADD_KEY_TOKEN(prefix_info, "prefix-info");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_info.is_set || is_set(prefix_info.yfilter)) leaf_name_data.push_back(prefix_info.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_lenth.is_set || is_set(prefix_lenth.yfilter)) leaf_name_data.push_back(prefix_lenth.get_name_leafdata());
    if (last_event_time.is_set || is_set(last_event_time.yfilter)) leaf_name_data.push_back(last_event_time.get_name_leafdata());
    if (last_priority.is_set || is_set(last_priority.yfilter)) leaf_name_data.push_back(last_priority.get_name_leafdata());
    if (last_route_type.is_set || is_set(last_route_type.yfilter)) leaf_name_data.push_back(last_route_type.get_name_leafdata());
    if (last_change_type.is_set || is_set(last_change_type.yfilter)) leaf_name_data.push_back(last_change_type.get_name_leafdata());
    if (last_cost.is_set || is_set(last_cost.yfilter)) leaf_name_data.push_back(last_cost.get_name_leafdata());
    if (critical_priority.is_set || is_set(critical_priority.yfilter)) leaf_name_data.push_back(critical_priority.get_name_leafdata());
    if (high_priority.is_set || is_set(high_priority.yfilter)) leaf_name_data.push_back(high_priority.get_name_leafdata());
    if (medium_priority.is_set || is_set(medium_priority.yfilter)) leaf_name_data.push_back(medium_priority.get_name_leafdata());
    if (low_priority.is_set || is_set(low_priority.yfilter)) leaf_name_data.push_back(low_priority.get_name_leafdata());
    if (add_count.is_set || is_set(add_count.yfilter)) leaf_name_data.push_back(add_count.get_name_leafdata());
    if (modify_count.is_set || is_set(modify_count.yfilter)) leaf_name_data.push_back(modify_count.get_name_leafdata());
    if (delete_count.is_set || is_set(delete_count.yfilter)) leaf_name_data.push_back(delete_count.get_name_leafdata());
    if (threshold_exceed_count.is_set || is_set(threshold_exceed_count.yfilter)) leaf_name_data.push_back(threshold_exceed_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-info")
    {
        prefix_info = value;
        prefix_info.value_namespace = name_space;
        prefix_info.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "critical-priority")
    {
        critical_priority = value;
        critical_priority.value_namespace = name_space;
        critical_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-priority")
    {
        high_priority = value;
        high_priority.value_namespace = name_space;
        high_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium-priority")
    {
        medium_priority = value;
        medium_priority.value_namespace = name_space;
        medium_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-priority")
    {
        low_priority = value;
        low_priority.value_namespace = name_space;
        low_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-count")
    {
        add_count = value;
        add_count.value_namespace = name_space;
        add_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modify-count")
    {
        modify_count = value;
        modify_count.value_namespace = name_space;
        modify_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete-count")
    {
        delete_count = value;
        delete_count.value_namespace = name_space;
        delete_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth.yfilter = yfilter;
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
    if(value_path == "last-change-type")
    {
        last_change_type.yfilter = yfilter;
    }
    if(value_path == "last-cost")
    {
        last_cost.yfilter = yfilter;
    }
    if(value_path == "critical-priority")
    {
        critical_priority.yfilter = yfilter;
    }
    if(value_path == "high-priority")
    {
        high_priority.yfilter = yfilter;
    }
    if(value_path == "medium-priority")
    {
        medium_priority.yfilter = yfilter;
    }
    if(value_path == "low-priority")
    {
        low_priority.yfilter = yfilter;
    }
    if(value_path == "add-count")
    {
        add_count.yfilter = yfilter;
    }
    if(value_path == "modify-count")
    {
        modify_count.yfilter = yfilter;
    }
    if(value_path == "delete-count")
    {
        delete_count.yfilter = yfilter;
    }
    if(value_path == "threshold-exceed-count")
    {
        threshold_exceed_count.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-info" || name == "prefix" || name == "prefix-lenth" || name == "last-event-time" || name == "last-priority" || name == "last-route-type" || name == "last-change-type" || name == "last-cost" || name == "critical-priority" || name == "high-priority" || name == "medium-priority" || name == "low-priority" || name == "add-count" || name == "modify-count" || name == "delete-count" || name == "threshold-exceed-count")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummaries()
    :
    spf_run_summary(this, {"spf_run_number"})
{

    yang_name = "spf-run-summaries"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::~SpfRunSummaries()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spf_run_summary.len(); index++)
    {
        if(spf_run_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::has_operation() const
{
    for (std::size_t index=0; index<spf_run_summary.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-run-summary")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary>();
        ent_->parent = this;
        spf_run_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : spf_run_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    spf_run_number{YType::uint32, "spf-run-number"}
        ,
    spf_summary(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary>())
    , dijkstra_run(this, {})
    , inter_area_and_external(this, {})
{
    spf_summary->parent = this;

    yang_name = "spf-run-summary"; yang_parent_name = "spf-run-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::~SpfRunSummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dijkstra_run.len(); index++)
    {
        if(dijkstra_run[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<inter_area_and_external.len(); index++)
    {
        if(inter_area_and_external[index]->has_data())
            return true;
    }
    return spf_run_number.is_set
	|| (spf_summary !=  nullptr && spf_summary->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::has_operation() const
{
    for (std::size_t index=0; index<dijkstra_run.len(); index++)
    {
        if(dijkstra_run[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<inter_area_and_external.len(); index++)
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
    path_buffer << "spf-run-summary";
    ADD_KEY_TOKEN(spf_run_number, "spf-run-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_run_number.is_set || is_set(spf_run_number.yfilter)) leaf_name_data.push_back(spf_run_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-summary")
    {
        if(spf_summary == nullptr)
        {
            spf_summary = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary>();
        }
        return spf_summary;
    }

    if(child_yang_name == "dijkstra-run")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun>();
        ent_->parent = this;
        dijkstra_run.append(ent_);
        return ent_;
    }

    if(child_yang_name == "inter-area-and-external")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal>();
        ent_->parent = this;
        inter_area_and_external.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spf_summary != nullptr)
    {
        _children["spf-summary"] = spf_summary;
    }

    count_ = 0;
    for (auto ent_ : dijkstra_run.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : inter_area_and_external.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if(name == "spf-summary" || name == "dijkstra-run" || name == "inter-area-and-external" || name == "spf-run-number")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::SpfSummary()
    :
    state{YType::enumeration, "state"},
    is_data_complete{YType::boolean, "is-data-complete"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    trigger_time{YType::str, "trigger-time"},
    start_time{YType::str, "start-time"},
    duration{YType::str, "duration"},
    total_dijkstra_runs{YType::uint16, "total-dijkstra-runs"},
    total_inter_area_and_external_batches{YType::uint16, "total-inter-area-and-external-batches"},
    total_type12lsa_changes{YType::uint16, "total-type12lsa-changes"},
    total_type357lsa_changes{YType::uint16, "total-type357lsa-changes"}
        ,
    priority_summary(this, {})
{

    yang_name = "spf-summary"; yang_parent_name = "spf-run-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::~SpfSummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<priority_summary.len(); index++)
    {
        if(priority_summary[index]->has_data())
            return true;
    }
    return state.is_set
	|| is_data_complete.is_set
	|| threshold_exceeded.is_set
	|| trigger_time.is_set
	|| start_time.is_set
	|| duration.is_set
	|| total_dijkstra_runs.is_set
	|| total_inter_area_and_external_batches.is_set
	|| total_type12lsa_changes.is_set
	|| total_type357lsa_changes.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::has_operation() const
{
    for (std::size_t index=0; index<priority_summary.len(); index++)
    {
        if(priority_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(is_data_complete.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(total_dijkstra_runs.yfilter)
	|| ydk::is_set(total_inter_area_and_external_batches.yfilter)
	|| ydk::is_set(total_type12lsa_changes.yfilter)
	|| ydk::is_set(total_type357lsa_changes.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (is_data_complete.is_set || is_set(is_data_complete.yfilter)) leaf_name_data.push_back(is_data_complete.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (total_dijkstra_runs.is_set || is_set(total_dijkstra_runs.yfilter)) leaf_name_data.push_back(total_dijkstra_runs.get_name_leafdata());
    if (total_inter_area_and_external_batches.is_set || is_set(total_inter_area_and_external_batches.yfilter)) leaf_name_data.push_back(total_inter_area_and_external_batches.get_name_leafdata());
    if (total_type12lsa_changes.is_set || is_set(total_type12lsa_changes.yfilter)) leaf_name_data.push_back(total_type12lsa_changes.get_name_leafdata());
    if (total_type357lsa_changes.is_set || is_set(total_type357lsa_changes.yfilter)) leaf_name_data.push_back(total_type357lsa_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-summary")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary>();
        ent_->parent = this;
        priority_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : priority_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-data-complete")
    {
        is_data_complete = value;
        is_data_complete.value_namespace = name_space;
        is_data_complete.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
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
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "is-data-complete")
    {
        is_data_complete.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
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
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-summary" || name == "state" || name == "is-data-complete" || name == "threshold-exceeded" || name == "trigger-time" || name == "start-time" || name == "duration" || name == "total-dijkstra-runs" || name == "total-inter-area-and-external-batches" || name == "total-type12lsa-changes" || name == "total-type357lsa-changes")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::PrioritySummary()
    :
    level{YType::enumeration, "level"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"}
        ,
    route_statistics(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics>())
    , ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime>())
    , mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime>())
    , frr_statistic(this, {})
{
    route_statistics->parent = this;
    ip_convergence_time->parent = this;
    mpls_convergence_time->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "spf-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_statistic.len(); index++)
    {
        if(frr_statistic[index]->has_data())
            return true;
    }
    return level.is_set
	|| threshold_exceeded.is_set
	|| (route_statistics !=  nullptr && route_statistics->has_data())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::has_operation() const
{
    for (std::size_t index=0; index<frr_statistic.len(); index++)
    {
        if(frr_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| (route_statistics !=  nullptr && route_statistics->has_operation())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
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

    if(child_yang_name == "frr-statistic")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic>();
        ent_->parent = this;
        frr_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_statistics != nullptr)
    {
        _children["route-statistics"] = route_statistics;
    }

    if(ip_convergence_time != nullptr)
    {
        _children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        _children["mpls-convergence-time"] = mpls_convergence_time;
    }

    count_ = 0;
    for (auto ent_ : frr_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if(name == "route-statistics" || name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "frr-statistic" || name == "level" || name == "threshold-exceeded")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    unreachables{YType::uint32, "unreachables"},
    touches{YType::uint32, "touches"}
{

    yang_name = "route-statistics"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::has_data() const
{
    if (is_presence_container) return true;
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| unreachables.is_set
	|| touches.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| ydk::is_set(touches.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "unreachables" || name == "touches")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::FrrStatistic()
    :
    total_routes{YType::uint32, "total-routes"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    coverage{YType::str, "coverage"}
{

    yang_name = "frr-statistic"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::~FrrStatistic()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::has_data() const
{
    if (is_presence_container) return true;
    return total_routes.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| coverage.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(coverage.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-routes" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "coverage")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::DijkstraRun()
    :
    dijkstra_run_number{YType::uint32, "dijkstra-run-number"},
    area_id{YType::str, "area-id"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    trigger_time{YType::str, "trigger-time"},
    start_time{YType::str, "start-time"},
    wait_time{YType::uint32, "wait-time"},
    duration{YType::str, "duration"}
        ,
    trigger_lsa(this, {})
    , priority(this, {})
    , lsa_processed(this, {})
{

    yang_name = "dijkstra-run"; yang_parent_name = "spf-run-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::~DijkstraRun()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trigger_lsa.len(); index++)
    {
        if(trigger_lsa[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<priority.len(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsa_processed.len(); index++)
    {
        if(lsa_processed[index]->has_data())
            return true;
    }
    return dijkstra_run_number.is_set
	|| area_id.is_set
	|| threshold_exceeded.is_set
	|| trigger_time.is_set
	|| start_time.is_set
	|| wait_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::has_operation() const
{
    for (std::size_t index=0; index<trigger_lsa.len(); index++)
    {
        if(trigger_lsa[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<priority.len(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsa_processed.len(); index++)
    {
        if(lsa_processed[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dijkstra_run_number.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(wait_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dijkstra-run";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dijkstra_run_number.is_set || is_set(dijkstra_run_number.yfilter)) leaf_name_data.push_back(dijkstra_run_number.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger-lsa")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa>();
        ent_->parent = this;
        trigger_lsa.append(ent_);
        return ent_;
    }

    if(child_yang_name == "priority")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority>();
        ent_->parent = this;
        priority.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lsa-processed")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed>();
        ent_->parent = this;
        lsa_processed.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trigger_lsa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : priority.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lsa_processed.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dijkstra-run-number")
    {
        dijkstra_run_number = value;
        dijkstra_run_number.value_namespace = name_space;
        dijkstra_run_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dijkstra-run-number")
    {
        dijkstra_run_number.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger-lsa" || name == "priority" || name == "lsa-processed" || name == "dijkstra-run-number" || name == "area-id" || name == "threshold-exceeded" || name == "trigger-time" || name == "start-time" || name == "wait-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::TriggerLsa()
    :
    lsa_id{YType::str, "lsa-id"},
    sequence_number{YType::str, "sequence-number"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "trigger-lsa"; yang_parent_name = "dijkstra-run"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::~TriggerLsa()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| sequence_number.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsa";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "sequence-number" || name == "lsa-type" || name == "origin-router-id" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::Priority()
    :
    priority_summary(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary>())
    , convergence_timeline(this, {})
    , leaf_networks_added(this, {})
    , leaf_networks_deleted(this, {})
{
    priority_summary->parent = this;

    yang_name = "priority"; yang_parent_name = "dijkstra-run"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::~Priority()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<convergence_timeline.len(); index++)
    {
        if(convergence_timeline[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.len(); index++)
    {
        if(leaf_networks_added[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.len(); index++)
    {
        if(leaf_networks_deleted[index]->has_data())
            return true;
    }
    return (priority_summary !=  nullptr && priority_summary->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::has_operation() const
{
    for (std::size_t index=0; index<convergence_timeline.len(); index++)
    {
        if(convergence_timeline[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.len(); index++)
    {
        if(leaf_networks_added[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.len(); index++)
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-summary")
    {
        if(priority_summary == nullptr)
        {
            priority_summary = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary>();
        }
        return priority_summary;
    }

    if(child_yang_name == "convergence-timeline")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline>();
        ent_->parent = this;
        convergence_timeline.append(ent_);
        return ent_;
    }

    if(child_yang_name == "leaf-networks-added")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded>();
        ent_->parent = this;
        leaf_networks_added.append(ent_);
        return ent_;
    }

    if(child_yang_name == "leaf-networks-deleted")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted>();
        ent_->parent = this;
        leaf_networks_deleted.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority_summary != nullptr)
    {
        _children["priority-summary"] = priority_summary;
    }

    count_ = 0;
    for (auto ent_ : convergence_timeline.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : leaf_networks_added.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : leaf_networks_deleted.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-summary" || name == "convergence-timeline" || name == "leaf-networks-added" || name == "leaf-networks-deleted")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::PrioritySummary()
    :
    level{YType::enumeration, "level"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"}
        ,
    route_statistics(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics>())
    , ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime>())
    , mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime>())
    , frr_statistic(this, {})
{
    route_statistics->parent = this;
    ip_convergence_time->parent = this;
    mpls_convergence_time->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_statistic.len(); index++)
    {
        if(frr_statistic[index]->has_data())
            return true;
    }
    return level.is_set
	|| threshold_exceeded.is_set
	|| (route_statistics !=  nullptr && route_statistics->has_data())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::has_operation() const
{
    for (std::size_t index=0; index<frr_statistic.len(); index++)
    {
        if(frr_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| (route_statistics !=  nullptr && route_statistics->has_operation())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
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

    if(child_yang_name == "frr-statistic")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic>();
        ent_->parent = this;
        frr_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_statistics != nullptr)
    {
        _children["route-statistics"] = route_statistics;
    }

    if(ip_convergence_time != nullptr)
    {
        _children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        _children["mpls-convergence-time"] = mpls_convergence_time;
    }

    count_ = 0;
    for (auto ent_ : frr_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if(name == "route-statistics" || name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "frr-statistic" || name == "level" || name == "threshold-exceeded")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    unreachables{YType::uint32, "unreachables"},
    touches{YType::uint32, "touches"}
{

    yang_name = "route-statistics"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::has_data() const
{
    if (is_presence_container) return true;
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| unreachables.is_set
	|| touches.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| ydk::is_set(touches.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "unreachables" || name == "touches")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::FrrStatistic()
    :
    total_routes{YType::uint32, "total-routes"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    coverage{YType::str, "coverage"}
{

    yang_name = "frr-statistic"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::~FrrStatistic()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::has_data() const
{
    if (is_presence_container) return true;
    return total_routes.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| coverage.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(coverage.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-routes" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "coverage")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::ConvergenceTimeline()
    :
    route_origin(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin>())
    , ri_bv4_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter>())
    , ri_bv4_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit>())
    , ri_bv4_redistribute(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute>())
    , ldp_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter>())
    , ldp_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit>())
    , lsd_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter>())
    , lsd_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit>())
    , lc_ip(this, {})
    , lc_mpls(this, {})
{
    route_origin->parent = this;
    ri_bv4_enter->parent = this;
    ri_bv4_exit->parent = this;
    ri_bv4_redistribute->parent = this;
    ldp_enter->parent = this;
    ldp_exit->parent = this;
    lsd_enter->parent = this;
    lsd_exit->parent = this;

    yang_name = "convergence-timeline"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::~ConvergenceTimeline()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return (route_origin !=  nullptr && route_origin->has_data())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_data())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_data())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_data())
	|| (ldp_enter !=  nullptr && ldp_enter->has_data())
	|| (ldp_exit !=  nullptr && ldp_exit->has_data())
	|| (lsd_enter !=  nullptr && lsd_enter->has_data())
	|| (lsd_exit !=  nullptr && lsd_exit->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (route_origin !=  nullptr && route_origin->has_operation())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_operation())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_operation())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_operation())
	|| (ldp_enter !=  nullptr && ldp_enter->has_operation())
	|| (ldp_exit !=  nullptr && ldp_exit->has_operation())
	|| (lsd_enter !=  nullptr && lsd_enter->has_operation())
	|| (lsd_exit !=  nullptr && lsd_exit->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence-timeline";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-origin")
    {
        if(route_origin == nullptr)
        {
            route_origin = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin>();
        }
        return route_origin;
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

    if(child_yang_name == "lc-ip")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp>();
        ent_->parent = this;
        lc_ip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lc-mpls")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls>();
        ent_->parent = this;
        lc_mpls.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_origin != nullptr)
    {
        _children["route-origin"] = route_origin;
    }

    if(ri_bv4_enter != nullptr)
    {
        _children["ri-bv4-enter"] = ri_bv4_enter;
    }

    if(ri_bv4_exit != nullptr)
    {
        _children["ri-bv4-exit"] = ri_bv4_exit;
    }

    if(ri_bv4_redistribute != nullptr)
    {
        _children["ri-bv4-redistribute"] = ri_bv4_redistribute;
    }

    if(ldp_enter != nullptr)
    {
        _children["ldp-enter"] = ldp_enter;
    }

    if(ldp_exit != nullptr)
    {
        _children["ldp-exit"] = ldp_exit;
    }

    if(lsd_enter != nullptr)
    {
        _children["lsd-enter"] = lsd_enter;
    }

    if(lsd_exit != nullptr)
    {
        _children["lsd-exit"] = lsd_exit;
    }

    count_ = 0;
    for (auto ent_ : lc_ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lc_mpls.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-origin" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit" || name == "lc-ip" || name == "lc-mpls")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::RouteOrigin()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "route-origin"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::~RouteOrigin()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::RiBv4Enter()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ri-bv4-enter"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::~RiBv4Enter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::RiBv4Exit()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ri-bv4-exit"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::~RiBv4Exit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::RiBv4Redistribute()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ri-bv4-redistribute"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::~RiBv4Redistribute()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::LdpEnter()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ldp-enter"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::~LdpEnter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::LdpExit()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ldp-exit"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::~LdpExit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::LsdEnter()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "lsd-enter"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::~LsdEnter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::LsdExit()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "lsd-exit"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::~LsdExit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
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

    yang_name = "lc-ip"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::~LcIp()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fib_complete != nullptr)
    {
        _children["fib-complete"] = fib_complete;
    }

    return _children;
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
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "fib-complete"; yang_parent_name = "lc-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::~FibComplete()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
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

    yang_name = "lc-mpls"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::~LcMpls()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fib_complete != nullptr)
    {
        _children["fib-complete"] = fib_complete;
    }

    return _children;
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
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "fib-complete"; yang_parent_name = "lc-mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::~FibComplete()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded::LeafNetworksAdded()
    :
    address{YType::str, "address"},
    net_mask{YType::uint8, "net-mask"}
{

    yang_name = "leaf-networks-added"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded::~LeafNetworksAdded()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "leaf-networks-deleted"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted::~LeafNetworksDeleted()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    lsa_id{YType::str, "lsa-id"},
    sequence_number{YType::str, "sequence-number"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "lsa-processed"; yang_parent_name = "dijkstra-run"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::~LsaProcessed()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| sequence_number.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-processed";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "sequence-number" || name == "lsa-type" || name == "origin-router-id" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::InterAreaAndExternal()
    :
    priority(this, {})
{

    yang_name = "inter-area-and-external"; yang_parent_name = "spf-run-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::~InterAreaAndExternal()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<priority.len(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::has_operation() const
{
    for (std::size_t index=0; index<priority.len(); index++)
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority>();
        ent_->parent = this;
        priority.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : priority.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    , convergence_timeline(this, {})
    , leaf_networks_added(this, {})
    , leaf_networks_deleted(this, {})
{
    priority_summary->parent = this;

    yang_name = "priority"; yang_parent_name = "inter-area-and-external"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::~Priority()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<convergence_timeline.len(); index++)
    {
        if(convergence_timeline[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.len(); index++)
    {
        if(leaf_networks_added[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.len(); index++)
    {
        if(leaf_networks_deleted[index]->has_data())
            return true;
    }
    return (priority_summary !=  nullptr && priority_summary->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::has_operation() const
{
    for (std::size_t index=0; index<convergence_timeline.len(); index++)
    {
        if(convergence_timeline[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.len(); index++)
    {
        if(leaf_networks_added[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.len(); index++)
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-summary")
    {
        if(priority_summary == nullptr)
        {
            priority_summary = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary>();
        }
        return priority_summary;
    }

    if(child_yang_name == "convergence-timeline")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline>();
        ent_->parent = this;
        convergence_timeline.append(ent_);
        return ent_;
    }

    if(child_yang_name == "leaf-networks-added")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded>();
        ent_->parent = this;
        leaf_networks_added.append(ent_);
        return ent_;
    }

    if(child_yang_name == "leaf-networks-deleted")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted>();
        ent_->parent = this;
        leaf_networks_deleted.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority_summary != nullptr)
    {
        _children["priority-summary"] = priority_summary;
    }

    count_ = 0;
    for (auto ent_ : convergence_timeline.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : leaf_networks_added.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : leaf_networks_deleted.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-summary" || name == "convergence-timeline" || name == "leaf-networks-added" || name == "leaf-networks-deleted")
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
    route_statistics(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics>())
    , ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime>())
    , mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime>())
{
    route_statistics->parent = this;
    ip_convergence_time->parent = this;
    mpls_convergence_time->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| threshold_exceeded.is_set
	|| type3ls_as.is_set
	|| type4ls_as.is_set
	|| type57ls_as.is_set
	|| (route_statistics !=  nullptr && route_statistics->has_data())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(type3ls_as.yfilter)
	|| ydk::is_set(type4ls_as.yfilter)
	|| ydk::is_set(type57ls_as.yfilter)
	|| (route_statistics !=  nullptr && route_statistics->has_operation())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (type3ls_as.is_set || is_set(type3ls_as.yfilter)) leaf_name_data.push_back(type3ls_as.get_name_leafdata());
    if (type4ls_as.is_set || is_set(type4ls_as.yfilter)) leaf_name_data.push_back(type4ls_as.get_name_leafdata());
    if (type57ls_as.is_set || is_set(type57ls_as.yfilter)) leaf_name_data.push_back(type57ls_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_statistics != nullptr)
    {
        _children["route-statistics"] = route_statistics;
    }

    if(ip_convergence_time != nullptr)
    {
        _children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        _children["mpls-convergence-time"] = mpls_convergence_time;
    }

    return _children;
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
    if(name == "route-statistics" || name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "level" || name == "threshold-exceeded" || name == "type3ls-as" || name == "type4ls-as" || name == "type57ls-as")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    unreachables{YType::uint32, "unreachables"},
    touches{YType::uint32, "touches"}
{

    yang_name = "route-statistics"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::has_data() const
{
    if (is_presence_container) return true;
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| unreachables.is_set
	|| touches.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| ydk::is_set(touches.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "unreachables" || name == "touches")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::ConvergenceTimeline()
    :
    route_origin(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin>())
    , ri_bv4_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter>())
    , ri_bv4_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit>())
    , ri_bv4_redistribute(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute>())
    , ldp_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter>())
    , ldp_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit>())
    , lsd_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter>())
    , lsd_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit>())
    , lc_ip(this, {})
    , lc_mpls(this, {})
{
    route_origin->parent = this;
    ri_bv4_enter->parent = this;
    ri_bv4_exit->parent = this;
    ri_bv4_redistribute->parent = this;
    ldp_enter->parent = this;
    ldp_exit->parent = this;
    lsd_enter->parent = this;
    lsd_exit->parent = this;

    yang_name = "convergence-timeline"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::~ConvergenceTimeline()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return (route_origin !=  nullptr && route_origin->has_data())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_data())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_data())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_data())
	|| (ldp_enter !=  nullptr && ldp_enter->has_data())
	|| (ldp_exit !=  nullptr && ldp_exit->has_data())
	|| (lsd_enter !=  nullptr && lsd_enter->has_data())
	|| (lsd_exit !=  nullptr && lsd_exit->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (route_origin !=  nullptr && route_origin->has_operation())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_operation())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_operation())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_operation())
	|| (ldp_enter !=  nullptr && ldp_enter->has_operation())
	|| (ldp_exit !=  nullptr && ldp_exit->has_operation())
	|| (lsd_enter !=  nullptr && lsd_enter->has_operation())
	|| (lsd_exit !=  nullptr && lsd_exit->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence-timeline";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-origin")
    {
        if(route_origin == nullptr)
        {
            route_origin = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin>();
        }
        return route_origin;
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

    if(child_yang_name == "lc-ip")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp>();
        ent_->parent = this;
        lc_ip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lc-mpls")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls>();
        ent_->parent = this;
        lc_mpls.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_origin != nullptr)
    {
        _children["route-origin"] = route_origin;
    }

    if(ri_bv4_enter != nullptr)
    {
        _children["ri-bv4-enter"] = ri_bv4_enter;
    }

    if(ri_bv4_exit != nullptr)
    {
        _children["ri-bv4-exit"] = ri_bv4_exit;
    }

    if(ri_bv4_redistribute != nullptr)
    {
        _children["ri-bv4-redistribute"] = ri_bv4_redistribute;
    }

    if(ldp_enter != nullptr)
    {
        _children["ldp-enter"] = ldp_enter;
    }

    if(ldp_exit != nullptr)
    {
        _children["ldp-exit"] = ldp_exit;
    }

    if(lsd_enter != nullptr)
    {
        _children["lsd-enter"] = lsd_enter;
    }

    if(lsd_exit != nullptr)
    {
        _children["lsd-exit"] = lsd_exit;
    }

    count_ = 0;
    for (auto ent_ : lc_ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lc_mpls.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-origin" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit" || name == "lc-ip" || name == "lc-mpls")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::RouteOrigin()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "route-origin"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::~RouteOrigin()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::RiBv4Enter()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ri-bv4-enter"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::~RiBv4Enter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::RiBv4Exit()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ri-bv4-exit"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::~RiBv4Exit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::RiBv4Redistribute()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ri-bv4-redistribute"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::~RiBv4Redistribute()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::LdpEnter()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ldp-enter"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::~LdpEnter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::LdpExit()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ldp-exit"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::~LdpExit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::LsdEnter()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "lsd-enter"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::~LsdEnter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::LsdExit()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "lsd-exit"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::~LsdExit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
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

    yang_name = "lc-ip"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::~LcIp()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fib_complete != nullptr)
    {
        _children["fib-complete"] = fib_complete;
    }

    return _children;
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
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "fib-complete"; yang_parent_name = "lc-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::~FibComplete()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
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

    yang_name = "lc-mpls"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::~LcMpls()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fib_complete != nullptr)
    {
        _children["fib-complete"] = fib_complete;
    }

    return _children;
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
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "fib-complete"; yang_parent_name = "lc-mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::~FibComplete()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded::LeafNetworksAdded()
    :
    address{YType::str, "address"},
    net_mask{YType::uint8, "net-mask"}
{

    yang_name = "leaf-networks-added"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded::~LeafNetworksAdded()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "leaf-networks-deleted"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted::~LeafNetworksDeleted()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    ipfrr_event_offline(this, {"event_id"})
{

    yang_name = "ipfrr-event-offlines"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::~IpfrrEventOfflines()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipfrr_event_offline.len(); index++)
    {
        if(ipfrr_event_offline[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_event_offline.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-event-offline")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline>();
        ent_->parent = this;
        ipfrr_event_offline.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipfrr_event_offline.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    event_id{YType::uint32, "event-id"},
    event_id_xr{YType::uint32, "event-id-xr"},
    trigger_time{YType::str, "trigger-time"},
    trigger_spf_run{YType::uint32, "trigger-spf-run"},
    wait_time{YType::uint32, "wait-time"},
    start_time_offset{YType::str, "start-time-offset"},
    duration{YType::str, "duration"},
    completed_spf_run{YType::uint32, "completed-spf-run"},
    total_routes{YType::uint32, "total-routes"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    coverage{YType::str, "coverage"}
        ,
    ipfrr_statistic(this, {})
    , remote_node(this, {})
{

    yang_name = "ipfrr-event-offline"; yang_parent_name = "ipfrr-event-offlines"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::~IpfrrEventOffline()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipfrr_statistic.len(); index++)
    {
        if(ipfrr_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_node.len(); index++)
    {
        if(remote_node[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| event_id_xr.is_set
	|| trigger_time.is_set
	|| trigger_spf_run.is_set
	|| wait_time.is_set
	|| start_time_offset.is_set
	|| duration.is_set
	|| completed_spf_run.is_set
	|| total_routes.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| coverage.is_set;
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_statistic.len(); index++)
    {
        if(ipfrr_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_node.len(); index++)
    {
        if(remote_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(event_id_xr.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| ydk::is_set(trigger_spf_run.yfilter)
	|| ydk::is_set(wait_time.yfilter)
	|| ydk::is_set(start_time_offset.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(completed_spf_run.yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(coverage.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-event-offline";
    ADD_KEY_TOKEN(event_id, "event-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (event_id_xr.is_set || is_set(event_id_xr.yfilter)) leaf_name_data.push_back(event_id_xr.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());
    if (trigger_spf_run.is_set || is_set(trigger_spf_run.yfilter)) leaf_name_data.push_back(trigger_spf_run.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());
    if (start_time_offset.is_set || is_set(start_time_offset.yfilter)) leaf_name_data.push_back(start_time_offset.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (completed_spf_run.is_set || is_set(completed_spf_run.yfilter)) leaf_name_data.push_back(completed_spf_run.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-statistic")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic>();
        ent_->parent = this;
        ipfrr_statistic.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remote-node")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode>();
        ent_->parent = this;
        remote_node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipfrr_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : remote_node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr = value;
        event_id_xr.value_namespace = name_space;
        event_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-spf-run")
    {
        trigger_spf_run = value;
        trigger_spf_run.value_namespace = name_space;
        trigger_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time-offset")
    {
        start_time_offset = value;
        start_time_offset.value_namespace = name_space;
        start_time_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "completed-spf-run")
    {
        completed_spf_run = value;
        completed_spf_run.value_namespace = name_space;
        completed_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
    if(value_path == "trigger-spf-run")
    {
        trigger_spf_run.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
    if(value_path == "start-time-offset")
    {
        start_time_offset.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "completed-spf-run")
    {
        completed_spf_run.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-statistic" || name == "remote-node" || name == "event-id" || name == "event-id-xr" || name == "trigger-time" || name == "trigger-spf-run" || name == "wait-time" || name == "start-time-offset" || name == "duration" || name == "completed-spf-run" || name == "total-routes" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "coverage")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::IpfrrStatistic()
    :
    priority{YType::enumeration, "priority"},
    total_routes{YType::uint32, "total-routes"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    coverage{YType::str, "coverage"},
    local_lfa_coverage{YType::str, "local-lfa-coverage"},
    remote_lfa_coverage{YType::str, "remote-lfa-coverage"},
    below_threshold{YType::boolean, "below-threshold"}
{

    yang_name = "ipfrr-statistic"; yang_parent_name = "ipfrr-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::~IpfrrStatistic()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| total_routes.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| coverage.is_set
	|| local_lfa_coverage.is_set
	|| remote_lfa_coverage.is_set
	|| below_threshold.is_set;
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(local_lfa_coverage.yfilter)
	|| ydk::is_set(remote_lfa_coverage.yfilter)
	|| ydk::is_set(below_threshold.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (local_lfa_coverage.is_set || is_set(local_lfa_coverage.yfilter)) leaf_name_data.push_back(local_lfa_coverage.get_name_leafdata());
    if (remote_lfa_coverage.is_set || is_set(remote_lfa_coverage.yfilter)) leaf_name_data.push_back(remote_lfa_coverage.get_name_leafdata());
    if (below_threshold.is_set || is_set(below_threshold.yfilter)) leaf_name_data.push_back(below_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-lfa-coverage")
    {
        local_lfa_coverage = value;
        local_lfa_coverage.value_namespace = name_space;
        local_lfa_coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-coverage")
    {
        remote_lfa_coverage = value;
        remote_lfa_coverage.value_namespace = name_space;
        remote_lfa_coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "below-threshold")
    {
        below_threshold = value;
        below_threshold.value_namespace = name_space;
        below_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "local-lfa-coverage")
    {
        local_lfa_coverage.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-coverage")
    {
        remote_lfa_coverage.yfilter = yfilter;
    }
    if(value_path == "below-threshold")
    {
        below_threshold.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "total-routes" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "coverage" || name == "local-lfa-coverage" || name == "remote-lfa-coverage" || name == "below-threshold")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::RemoteNode()
    :
    remote_node_id{YType::str, "remote-node-id"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    path_count{YType::uint32, "path-count"},
    in_use_time{YType::str, "in-use-time"}
        ,
    primary_path(this, {})
{

    yang_name = "remote-node"; yang_parent_name = "ipfrr-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::~RemoteNode()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<primary_path.len(); index++)
    {
        if(primary_path[index]->has_data())
            return true;
    }
    return remote_node_id.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| path_count.is_set
	|| in_use_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::has_operation() const
{
    for (std::size_t index=0; index<primary_path.len(); index++)
    {
        if(primary_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(remote_node_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(in_use_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (in_use_time.is_set || is_set(in_use_time.yfilter)) leaf_name_data.push_back(in_use_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-path")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath>();
        ent_->parent = this;
        primary_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : primary_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "in-use-time")
    {
        in_use_time = value;
        in_use_time.value_namespace = name_space;
        in_use_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
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
    if(value_path == "in-use-time")
    {
        in_use_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-path" || name == "remote-node-id" || name == "interface-name" || name == "neighbour-address" || name == "path-count" || name == "in-use-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::PrimaryPath()
    :
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"}
{

    yang_name = "primary-path"; yang_parent_name = "remote-node"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::~PrimaryPath()
{
}

bool Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    spf_run_offline(this, {"spf_run_number"})
{

    yang_name = "spf-run-offlines"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::~SpfRunOfflines()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spf_run_offline.len(); index++)
    {
        if(spf_run_offline[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::has_operation() const
{
    for (std::size_t index=0; index<spf_run_offline.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-run-offline")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline>();
        ent_->parent = this;
        spf_run_offline.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : spf_run_offline.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    spf_run_number{YType::uint32, "spf-run-number"}
        ,
    spf_summary(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary>())
    , dijkstra_run(this, {})
    , inter_area_and_external(this, {})
{
    spf_summary->parent = this;

    yang_name = "spf-run-offline"; yang_parent_name = "spf-run-offlines"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::~SpfRunOffline()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dijkstra_run.len(); index++)
    {
        if(dijkstra_run[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<inter_area_and_external.len(); index++)
    {
        if(inter_area_and_external[index]->has_data())
            return true;
    }
    return spf_run_number.is_set
	|| (spf_summary !=  nullptr && spf_summary->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::has_operation() const
{
    for (std::size_t index=0; index<dijkstra_run.len(); index++)
    {
        if(dijkstra_run[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<inter_area_and_external.len(); index++)
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
    path_buffer << "spf-run-offline";
    ADD_KEY_TOKEN(spf_run_number, "spf-run-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_run_number.is_set || is_set(spf_run_number.yfilter)) leaf_name_data.push_back(spf_run_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-summary")
    {
        if(spf_summary == nullptr)
        {
            spf_summary = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary>();
        }
        return spf_summary;
    }

    if(child_yang_name == "dijkstra-run")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun>();
        ent_->parent = this;
        dijkstra_run.append(ent_);
        return ent_;
    }

    if(child_yang_name == "inter-area-and-external")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal>();
        ent_->parent = this;
        inter_area_and_external.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spf_summary != nullptr)
    {
        _children["spf-summary"] = spf_summary;
    }

    count_ = 0;
    for (auto ent_ : dijkstra_run.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : inter_area_and_external.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if(name == "spf-summary" || name == "dijkstra-run" || name == "inter-area-and-external" || name == "spf-run-number")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::SpfSummary()
    :
    state{YType::enumeration, "state"},
    is_data_complete{YType::boolean, "is-data-complete"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    trigger_time{YType::str, "trigger-time"},
    start_time{YType::str, "start-time"},
    duration{YType::str, "duration"},
    total_dijkstra_runs{YType::uint16, "total-dijkstra-runs"},
    total_inter_area_and_external_batches{YType::uint16, "total-inter-area-and-external-batches"},
    total_type12lsa_changes{YType::uint16, "total-type12lsa-changes"},
    total_type357lsa_changes{YType::uint16, "total-type357lsa-changes"}
        ,
    priority_summary(this, {})
{

    yang_name = "spf-summary"; yang_parent_name = "spf-run-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::~SpfSummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<priority_summary.len(); index++)
    {
        if(priority_summary[index]->has_data())
            return true;
    }
    return state.is_set
	|| is_data_complete.is_set
	|| threshold_exceeded.is_set
	|| trigger_time.is_set
	|| start_time.is_set
	|| duration.is_set
	|| total_dijkstra_runs.is_set
	|| total_inter_area_and_external_batches.is_set
	|| total_type12lsa_changes.is_set
	|| total_type357lsa_changes.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::has_operation() const
{
    for (std::size_t index=0; index<priority_summary.len(); index++)
    {
        if(priority_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(is_data_complete.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(total_dijkstra_runs.yfilter)
	|| ydk::is_set(total_inter_area_and_external_batches.yfilter)
	|| ydk::is_set(total_type12lsa_changes.yfilter)
	|| ydk::is_set(total_type357lsa_changes.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (is_data_complete.is_set || is_set(is_data_complete.yfilter)) leaf_name_data.push_back(is_data_complete.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (total_dijkstra_runs.is_set || is_set(total_dijkstra_runs.yfilter)) leaf_name_data.push_back(total_dijkstra_runs.get_name_leafdata());
    if (total_inter_area_and_external_batches.is_set || is_set(total_inter_area_and_external_batches.yfilter)) leaf_name_data.push_back(total_inter_area_and_external_batches.get_name_leafdata());
    if (total_type12lsa_changes.is_set || is_set(total_type12lsa_changes.yfilter)) leaf_name_data.push_back(total_type12lsa_changes.get_name_leafdata());
    if (total_type357lsa_changes.is_set || is_set(total_type357lsa_changes.yfilter)) leaf_name_data.push_back(total_type357lsa_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-summary")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary>();
        ent_->parent = this;
        priority_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : priority_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-data-complete")
    {
        is_data_complete = value;
        is_data_complete.value_namespace = name_space;
        is_data_complete.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
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
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "is-data-complete")
    {
        is_data_complete.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
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
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-summary" || name == "state" || name == "is-data-complete" || name == "threshold-exceeded" || name == "trigger-time" || name == "start-time" || name == "duration" || name == "total-dijkstra-runs" || name == "total-inter-area-and-external-batches" || name == "total-type12lsa-changes" || name == "total-type357lsa-changes")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::PrioritySummary()
    :
    level{YType::enumeration, "level"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"}
        ,
    route_statistics(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics>())
    , ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime>())
    , mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime>())
    , frr_statistic(this, {})
{
    route_statistics->parent = this;
    ip_convergence_time->parent = this;
    mpls_convergence_time->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "spf-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_statistic.len(); index++)
    {
        if(frr_statistic[index]->has_data())
            return true;
    }
    return level.is_set
	|| threshold_exceeded.is_set
	|| (route_statistics !=  nullptr && route_statistics->has_data())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::has_operation() const
{
    for (std::size_t index=0; index<frr_statistic.len(); index++)
    {
        if(frr_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| (route_statistics !=  nullptr && route_statistics->has_operation())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
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

    if(child_yang_name == "frr-statistic")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic>();
        ent_->parent = this;
        frr_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_statistics != nullptr)
    {
        _children["route-statistics"] = route_statistics;
    }

    if(ip_convergence_time != nullptr)
    {
        _children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        _children["mpls-convergence-time"] = mpls_convergence_time;
    }

    count_ = 0;
    for (auto ent_ : frr_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if(name == "route-statistics" || name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "frr-statistic" || name == "level" || name == "threshold-exceeded")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    unreachables{YType::uint32, "unreachables"},
    touches{YType::uint32, "touches"}
{

    yang_name = "route-statistics"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::has_data() const
{
    if (is_presence_container) return true;
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| unreachables.is_set
	|| touches.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| ydk::is_set(touches.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "unreachables" || name == "touches")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::FrrStatistic()
    :
    total_routes{YType::uint32, "total-routes"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    coverage{YType::str, "coverage"}
{

    yang_name = "frr-statistic"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::~FrrStatistic()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::has_data() const
{
    if (is_presence_container) return true;
    return total_routes.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| coverage.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(coverage.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-routes" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "coverage")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::DijkstraRun()
    :
    dijkstra_run_number{YType::uint32, "dijkstra-run-number"},
    area_id{YType::str, "area-id"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    trigger_time{YType::str, "trigger-time"},
    start_time{YType::str, "start-time"},
    wait_time{YType::uint32, "wait-time"},
    duration{YType::str, "duration"}
        ,
    trigger_lsa(this, {})
    , priority(this, {})
    , lsa_processed(this, {})
{

    yang_name = "dijkstra-run"; yang_parent_name = "spf-run-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::~DijkstraRun()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trigger_lsa.len(); index++)
    {
        if(trigger_lsa[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<priority.len(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsa_processed.len(); index++)
    {
        if(lsa_processed[index]->has_data())
            return true;
    }
    return dijkstra_run_number.is_set
	|| area_id.is_set
	|| threshold_exceeded.is_set
	|| trigger_time.is_set
	|| start_time.is_set
	|| wait_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::has_operation() const
{
    for (std::size_t index=0; index<trigger_lsa.len(); index++)
    {
        if(trigger_lsa[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<priority.len(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsa_processed.len(); index++)
    {
        if(lsa_processed[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dijkstra_run_number.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(wait_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dijkstra-run";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dijkstra_run_number.is_set || is_set(dijkstra_run_number.yfilter)) leaf_name_data.push_back(dijkstra_run_number.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger-lsa")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa>();
        ent_->parent = this;
        trigger_lsa.append(ent_);
        return ent_;
    }

    if(child_yang_name == "priority")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority>();
        ent_->parent = this;
        priority.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lsa-processed")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed>();
        ent_->parent = this;
        lsa_processed.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trigger_lsa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : priority.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lsa_processed.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dijkstra-run-number")
    {
        dijkstra_run_number = value;
        dijkstra_run_number.value_namespace = name_space;
        dijkstra_run_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dijkstra-run-number")
    {
        dijkstra_run_number.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger-lsa" || name == "priority" || name == "lsa-processed" || name == "dijkstra-run-number" || name == "area-id" || name == "threshold-exceeded" || name == "trigger-time" || name == "start-time" || name == "wait-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::TriggerLsa()
    :
    lsa_id{YType::str, "lsa-id"},
    sequence_number{YType::str, "sequence-number"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "trigger-lsa"; yang_parent_name = "dijkstra-run"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::~TriggerLsa()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| sequence_number.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsa";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "sequence-number" || name == "lsa-type" || name == "origin-router-id" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::Priority()
    :
    priority_summary(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary>())
    , convergence_timeline(this, {})
    , leaf_networks_added(this, {})
    , leaf_networks_deleted(this, {})
{
    priority_summary->parent = this;

    yang_name = "priority"; yang_parent_name = "dijkstra-run"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::~Priority()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<convergence_timeline.len(); index++)
    {
        if(convergence_timeline[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.len(); index++)
    {
        if(leaf_networks_added[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.len(); index++)
    {
        if(leaf_networks_deleted[index]->has_data())
            return true;
    }
    return (priority_summary !=  nullptr && priority_summary->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::has_operation() const
{
    for (std::size_t index=0; index<convergence_timeline.len(); index++)
    {
        if(convergence_timeline[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.len(); index++)
    {
        if(leaf_networks_added[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.len(); index++)
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-summary")
    {
        if(priority_summary == nullptr)
        {
            priority_summary = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary>();
        }
        return priority_summary;
    }

    if(child_yang_name == "convergence-timeline")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline>();
        ent_->parent = this;
        convergence_timeline.append(ent_);
        return ent_;
    }

    if(child_yang_name == "leaf-networks-added")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded>();
        ent_->parent = this;
        leaf_networks_added.append(ent_);
        return ent_;
    }

    if(child_yang_name == "leaf-networks-deleted")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted>();
        ent_->parent = this;
        leaf_networks_deleted.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority_summary != nullptr)
    {
        _children["priority-summary"] = priority_summary;
    }

    count_ = 0;
    for (auto ent_ : convergence_timeline.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : leaf_networks_added.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : leaf_networks_deleted.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-summary" || name == "convergence-timeline" || name == "leaf-networks-added" || name == "leaf-networks-deleted")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::PrioritySummary()
    :
    level{YType::enumeration, "level"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"}
        ,
    route_statistics(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics>())
    , ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime>())
    , mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime>())
    , frr_statistic(this, {})
{
    route_statistics->parent = this;
    ip_convergence_time->parent = this;
    mpls_convergence_time->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_statistic.len(); index++)
    {
        if(frr_statistic[index]->has_data())
            return true;
    }
    return level.is_set
	|| threshold_exceeded.is_set
	|| (route_statistics !=  nullptr && route_statistics->has_data())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::has_operation() const
{
    for (std::size_t index=0; index<frr_statistic.len(); index++)
    {
        if(frr_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| (route_statistics !=  nullptr && route_statistics->has_operation())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
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

    if(child_yang_name == "frr-statistic")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic>();
        ent_->parent = this;
        frr_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_statistics != nullptr)
    {
        _children["route-statistics"] = route_statistics;
    }

    if(ip_convergence_time != nullptr)
    {
        _children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        _children["mpls-convergence-time"] = mpls_convergence_time;
    }

    count_ = 0;
    for (auto ent_ : frr_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if(name == "route-statistics" || name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "frr-statistic" || name == "level" || name == "threshold-exceeded")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    unreachables{YType::uint32, "unreachables"},
    touches{YType::uint32, "touches"}
{

    yang_name = "route-statistics"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::has_data() const
{
    if (is_presence_container) return true;
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| unreachables.is_set
	|| touches.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| ydk::is_set(touches.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "unreachables" || name == "touches")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::FrrStatistic()
    :
    total_routes{YType::uint32, "total-routes"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    coverage{YType::str, "coverage"}
{

    yang_name = "frr-statistic"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::~FrrStatistic()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::has_data() const
{
    if (is_presence_container) return true;
    return total_routes.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| coverage.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(coverage.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-routes" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "coverage")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::ConvergenceTimeline()
    :
    route_origin(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin>())
    , ri_bv4_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter>())
    , ri_bv4_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit>())
    , ri_bv4_redistribute(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute>())
    , ldp_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter>())
    , ldp_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit>())
    , lsd_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter>())
    , lsd_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit>())
    , lc_ip(this, {})
    , lc_mpls(this, {})
{
    route_origin->parent = this;
    ri_bv4_enter->parent = this;
    ri_bv4_exit->parent = this;
    ri_bv4_redistribute->parent = this;
    ldp_enter->parent = this;
    ldp_exit->parent = this;
    lsd_enter->parent = this;
    lsd_exit->parent = this;

    yang_name = "convergence-timeline"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::~ConvergenceTimeline()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return (route_origin !=  nullptr && route_origin->has_data())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_data())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_data())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_data())
	|| (ldp_enter !=  nullptr && ldp_enter->has_data())
	|| (ldp_exit !=  nullptr && ldp_exit->has_data())
	|| (lsd_enter !=  nullptr && lsd_enter->has_data())
	|| (lsd_exit !=  nullptr && lsd_exit->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (route_origin !=  nullptr && route_origin->has_operation())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_operation())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_operation())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_operation())
	|| (ldp_enter !=  nullptr && ldp_enter->has_operation())
	|| (ldp_exit !=  nullptr && ldp_exit->has_operation())
	|| (lsd_enter !=  nullptr && lsd_enter->has_operation())
	|| (lsd_exit !=  nullptr && lsd_exit->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence-timeline";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-origin")
    {
        if(route_origin == nullptr)
        {
            route_origin = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin>();
        }
        return route_origin;
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

    if(child_yang_name == "lc-ip")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp>();
        ent_->parent = this;
        lc_ip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lc-mpls")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls>();
        ent_->parent = this;
        lc_mpls.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_origin != nullptr)
    {
        _children["route-origin"] = route_origin;
    }

    if(ri_bv4_enter != nullptr)
    {
        _children["ri-bv4-enter"] = ri_bv4_enter;
    }

    if(ri_bv4_exit != nullptr)
    {
        _children["ri-bv4-exit"] = ri_bv4_exit;
    }

    if(ri_bv4_redistribute != nullptr)
    {
        _children["ri-bv4-redistribute"] = ri_bv4_redistribute;
    }

    if(ldp_enter != nullptr)
    {
        _children["ldp-enter"] = ldp_enter;
    }

    if(ldp_exit != nullptr)
    {
        _children["ldp-exit"] = ldp_exit;
    }

    if(lsd_enter != nullptr)
    {
        _children["lsd-enter"] = lsd_enter;
    }

    if(lsd_exit != nullptr)
    {
        _children["lsd-exit"] = lsd_exit;
    }

    count_ = 0;
    for (auto ent_ : lc_ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lc_mpls.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-origin" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit" || name == "lc-ip" || name == "lc-mpls")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::RouteOrigin()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "route-origin"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::~RouteOrigin()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::RiBv4Enter()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ri-bv4-enter"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::~RiBv4Enter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::RiBv4Exit()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ri-bv4-exit"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::~RiBv4Exit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::RiBv4Redistribute()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ri-bv4-redistribute"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::~RiBv4Redistribute()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::LdpEnter()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ldp-enter"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::~LdpEnter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::LdpExit()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ldp-exit"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::~LdpExit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::LsdEnter()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "lsd-enter"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::~LsdEnter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::LsdExit()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "lsd-exit"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::~LsdExit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
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

    yang_name = "lc-ip"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::~LcIp()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fib_complete != nullptr)
    {
        _children["fib-complete"] = fib_complete;
    }

    return _children;
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
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "fib-complete"; yang_parent_name = "lc-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::~FibComplete()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
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

    yang_name = "lc-mpls"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::~LcMpls()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fib_complete != nullptr)
    {
        _children["fib-complete"] = fib_complete;
    }

    return _children;
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
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "fib-complete"; yang_parent_name = "lc-mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::~FibComplete()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded::LeafNetworksAdded()
    :
    address{YType::str, "address"},
    net_mask{YType::uint8, "net-mask"}
{

    yang_name = "leaf-networks-added"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded::~LeafNetworksAdded()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "leaf-networks-deleted"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted::~LeafNetworksDeleted()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    lsa_id{YType::str, "lsa-id"},
    sequence_number{YType::str, "sequence-number"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "lsa-processed"; yang_parent_name = "dijkstra-run"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::~LsaProcessed()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| sequence_number.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-processed";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "sequence-number" || name == "lsa-type" || name == "origin-router-id" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::InterAreaAndExternal()
    :
    priority(this, {})
{

    yang_name = "inter-area-and-external"; yang_parent_name = "spf-run-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::~InterAreaAndExternal()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<priority.len(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::has_operation() const
{
    for (std::size_t index=0; index<priority.len(); index++)
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority>();
        ent_->parent = this;
        priority.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : priority.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    , convergence_timeline(this, {})
    , leaf_networks_added(this, {})
    , leaf_networks_deleted(this, {})
{
    priority_summary->parent = this;

    yang_name = "priority"; yang_parent_name = "inter-area-and-external"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::~Priority()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<convergence_timeline.len(); index++)
    {
        if(convergence_timeline[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.len(); index++)
    {
        if(leaf_networks_added[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.len(); index++)
    {
        if(leaf_networks_deleted[index]->has_data())
            return true;
    }
    return (priority_summary !=  nullptr && priority_summary->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::has_operation() const
{
    for (std::size_t index=0; index<convergence_timeline.len(); index++)
    {
        if(convergence_timeline[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.len(); index++)
    {
        if(leaf_networks_added[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.len(); index++)
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-summary")
    {
        if(priority_summary == nullptr)
        {
            priority_summary = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary>();
        }
        return priority_summary;
    }

    if(child_yang_name == "convergence-timeline")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline>();
        ent_->parent = this;
        convergence_timeline.append(ent_);
        return ent_;
    }

    if(child_yang_name == "leaf-networks-added")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded>();
        ent_->parent = this;
        leaf_networks_added.append(ent_);
        return ent_;
    }

    if(child_yang_name == "leaf-networks-deleted")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted>();
        ent_->parent = this;
        leaf_networks_deleted.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority_summary != nullptr)
    {
        _children["priority-summary"] = priority_summary;
    }

    count_ = 0;
    for (auto ent_ : convergence_timeline.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : leaf_networks_added.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : leaf_networks_deleted.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-summary" || name == "convergence-timeline" || name == "leaf-networks-added" || name == "leaf-networks-deleted")
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
    route_statistics(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics>())
    , ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime>())
    , mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime>())
{
    route_statistics->parent = this;
    ip_convergence_time->parent = this;
    mpls_convergence_time->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| threshold_exceeded.is_set
	|| type3ls_as.is_set
	|| type4ls_as.is_set
	|| type57ls_as.is_set
	|| (route_statistics !=  nullptr && route_statistics->has_data())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(type3ls_as.yfilter)
	|| ydk::is_set(type4ls_as.yfilter)
	|| ydk::is_set(type57ls_as.yfilter)
	|| (route_statistics !=  nullptr && route_statistics->has_operation())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (type3ls_as.is_set || is_set(type3ls_as.yfilter)) leaf_name_data.push_back(type3ls_as.get_name_leafdata());
    if (type4ls_as.is_set || is_set(type4ls_as.yfilter)) leaf_name_data.push_back(type4ls_as.get_name_leafdata());
    if (type57ls_as.is_set || is_set(type57ls_as.yfilter)) leaf_name_data.push_back(type57ls_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_statistics != nullptr)
    {
        _children["route-statistics"] = route_statistics;
    }

    if(ip_convergence_time != nullptr)
    {
        _children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        _children["mpls-convergence-time"] = mpls_convergence_time;
    }

    return _children;
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
    if(name == "route-statistics" || name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "level" || name == "threshold-exceeded" || name == "type3ls-as" || name == "type4ls-as" || name == "type57ls-as")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    unreachables{YType::uint32, "unreachables"},
    touches{YType::uint32, "touches"}
{

    yang_name = "route-statistics"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::has_data() const
{
    if (is_presence_container) return true;
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| unreachables.is_set
	|| touches.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| ydk::is_set(touches.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "unreachables" || name == "touches")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::ConvergenceTimeline()
    :
    route_origin(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin>())
    , ri_bv4_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter>())
    , ri_bv4_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit>())
    , ri_bv4_redistribute(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute>())
    , ldp_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter>())
    , ldp_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit>())
    , lsd_enter(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter>())
    , lsd_exit(std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit>())
    , lc_ip(this, {})
    , lc_mpls(this, {})
{
    route_origin->parent = this;
    ri_bv4_enter->parent = this;
    ri_bv4_exit->parent = this;
    ri_bv4_redistribute->parent = this;
    ldp_enter->parent = this;
    ldp_exit->parent = this;
    lsd_enter->parent = this;
    lsd_exit->parent = this;

    yang_name = "convergence-timeline"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::~ConvergenceTimeline()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return (route_origin !=  nullptr && route_origin->has_data())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_data())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_data())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_data())
	|| (ldp_enter !=  nullptr && ldp_enter->has_data())
	|| (ldp_exit !=  nullptr && ldp_exit->has_data())
	|| (lsd_enter !=  nullptr && lsd_enter->has_data())
	|| (lsd_exit !=  nullptr && lsd_exit->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (route_origin !=  nullptr && route_origin->has_operation())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_operation())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_operation())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_operation())
	|| (ldp_enter !=  nullptr && ldp_enter->has_operation())
	|| (ldp_exit !=  nullptr && ldp_exit->has_operation())
	|| (lsd_enter !=  nullptr && lsd_enter->has_operation())
	|| (lsd_exit !=  nullptr && lsd_exit->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence-timeline";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-origin")
    {
        if(route_origin == nullptr)
        {
            route_origin = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin>();
        }
        return route_origin;
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

    if(child_yang_name == "lc-ip")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp>();
        ent_->parent = this;
        lc_ip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lc-mpls")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls>();
        ent_->parent = this;
        lc_mpls.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_origin != nullptr)
    {
        _children["route-origin"] = route_origin;
    }

    if(ri_bv4_enter != nullptr)
    {
        _children["ri-bv4-enter"] = ri_bv4_enter;
    }

    if(ri_bv4_exit != nullptr)
    {
        _children["ri-bv4-exit"] = ri_bv4_exit;
    }

    if(ri_bv4_redistribute != nullptr)
    {
        _children["ri-bv4-redistribute"] = ri_bv4_redistribute;
    }

    if(ldp_enter != nullptr)
    {
        _children["ldp-enter"] = ldp_enter;
    }

    if(ldp_exit != nullptr)
    {
        _children["ldp-exit"] = ldp_exit;
    }

    if(lsd_enter != nullptr)
    {
        _children["lsd-enter"] = lsd_enter;
    }

    if(lsd_exit != nullptr)
    {
        _children["lsd-exit"] = lsd_exit;
    }

    count_ = 0;
    for (auto ent_ : lc_ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lc_mpls.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-origin" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit" || name == "lc-ip" || name == "lc-mpls")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::RouteOrigin()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "route-origin"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::~RouteOrigin()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::RiBv4Enter()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ri-bv4-enter"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::~RiBv4Enter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::RiBv4Exit()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ri-bv4-exit"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::~RiBv4Exit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::RiBv4Redistribute()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ri-bv4-redistribute"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::~RiBv4Redistribute()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::LdpEnter()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ldp-enter"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::~LdpEnter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::LdpExit()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ldp-exit"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::~LdpExit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::LsdEnter()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "lsd-enter"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::~LsdEnter()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::LsdExit()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "lsd-exit"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::~LsdExit()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
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

    yang_name = "lc-ip"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::~LcIp()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fib_complete != nullptr)
    {
        _children["fib-complete"] = fib_complete;
    }

    return _children;
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
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "fib-complete"; yang_parent_name = "lc-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::~FibComplete()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
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

    yang_name = "lc-mpls"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::~LcMpls()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fib_complete != nullptr)
    {
        _children["fib-complete"] = fib_complete;
    }

    return _children;
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
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "fib-complete"; yang_parent_name = "lc-mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::~FibComplete()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded::LeafNetworksAdded()
    :
    address{YType::str, "address"},
    net_mask{YType::uint8, "net-mask"}
{

    yang_name = "leaf-networks-added"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded::~LeafNetworksAdded()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "leaf-networks-deleted"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted::~LeafNetworksDeleted()
{
}

bool Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    summary_external_event_summary(this, {"event_id"})
{

    yang_name = "summary-external-event-summaries"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::~SummaryExternalEventSummaries()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary_external_event_summary.len(); index++)
    {
        if(summary_external_event_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::has_operation() const
{
    for (std::size_t index=0; index<summary_external_event_summary.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-external-event-summary")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary>();
        ent_->parent = this;
        summary_external_event_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : summary_external_event_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    event_id{YType::uint32, "event-id"},
    prefix{YType::str, "prefix"},
    prefix_lenth{YType::uint32, "prefix-lenth"},
    spf_run_no{YType::uint32, "spf-run-no"},
    ipfrr_event_id{YType::uint32, "ipfrr-event-id"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    priority{YType::enumeration, "priority"},
    change_type{YType::enumeration, "change-type"},
    route_type{YType::enumeration, "route-type"},
    route_path_change_type{YType::enumeration, "route-path-change-type"},
    cost{YType::uint32, "cost"},
    trigger_time{YType::str, "trigger-time"}
        ,
    ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime>())
    , mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime>())
    , path(this, {})
    , trigger_lsa(this, {})
    , time_line(this, {})
    , lsa_processed(this, {})
{
    ip_convergence_time->parent = this;
    mpls_convergence_time->parent = this;

    yang_name = "summary-external-event-summary"; yang_parent_name = "summary-external-event-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::~SummaryExternalEventSummary()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.len(); index++)
    {
        if(trigger_lsa[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<time_line.len(); index++)
    {
        if(time_line[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsa_processed.len(); index++)
    {
        if(lsa_processed[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| prefix.is_set
	|| prefix_lenth.is_set
	|| spf_run_no.is_set
	|| ipfrr_event_id.is_set
	|| threshold_exceeded.is_set
	|| priority.is_set
	|| change_type.is_set
	|| route_type.is_set
	|| route_path_change_type.is_set
	|| cost.is_set
	|| trigger_time.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::has_operation() const
{
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.len(); index++)
    {
        if(trigger_lsa[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<time_line.len(); index++)
    {
        if(time_line[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsa_processed.len(); index++)
    {
        if(lsa_processed[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_lenth.yfilter)
	|| ydk::is_set(spf_run_no.yfilter)
	|| ydk::is_set(ipfrr_event_id.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_path_change_type.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-external-event-summary";
    ADD_KEY_TOKEN(event_id, "event-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_lenth.is_set || is_set(prefix_lenth.yfilter)) leaf_name_data.push_back(prefix_lenth.get_name_leafdata());
    if (spf_run_no.is_set || is_set(spf_run_no.yfilter)) leaf_name_data.push_back(spf_run_no.get_name_leafdata());
    if (ipfrr_event_id.is_set || is_set(ipfrr_event_id.yfilter)) leaf_name_data.push_back(ipfrr_event_id.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_path_change_type.is_set || is_set(route_path_change_type.yfilter)) leaf_name_data.push_back(route_path_change_type.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime>();
        }
        return ip_convergence_time;
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
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path>();
        ent_->parent = this;
        path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "trigger-lsa")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa>();
        ent_->parent = this;
        trigger_lsa.append(ent_);
        return ent_;
    }

    if(child_yang_name == "time-line")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine>();
        ent_->parent = this;
        time_line.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lsa-processed")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed>();
        ent_->parent = this;
        lsa_processed.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_convergence_time != nullptr)
    {
        _children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        _children["mpls-convergence-time"] = mpls_convergence_time;
    }

    count_ = 0;
    for (auto ent_ : path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : trigger_lsa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : time_line.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lsa_processed.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "spf-run-no")
    {
        spf_run_no = value;
        spf_run_no.value_namespace = name_space;
        spf_run_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id = value;
        ipfrr_event_id.value_namespace = name_space;
        ipfrr_event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type = value;
        route_path_change_type.value_namespace = name_space;
        route_path_change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth.yfilter = yfilter;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no.yfilter = yfilter;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "path" || name == "trigger-lsa" || name == "time-line" || name == "lsa-processed" || name == "event-id" || name == "prefix" || name == "prefix-lenth" || name == "spf-run-no" || name == "ipfrr-event-id" || name == "threshold-exceeded" || name == "priority" || name == "change-type" || name == "route-type" || name == "route-path-change-type" || name == "cost" || name == "trigger-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::IpConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "ip-convergence-time"; yang_parent_name = "summary-external-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "mpls-convergence-time"; yang_parent_name = "summary-external-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::Path()
    :
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    change_type{YType::enumeration, "change-type"},
    path_metric{YType::uint32, "path-metric"}
        ,
    lfa_path(this, {})
{

    yang_name = "path"; yang_parent_name = "summary-external-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::~Path()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lfa_path.len(); index++)
    {
        if(lfa_path[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbour_address.is_set
	|| change_type.is_set
	|| path_metric.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::has_operation() const
{
    for (std::size_t index=0; index<lfa_path.len(); index++)
    {
        if(lfa_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(path_metric.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lfa-path")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath>();
        ent_->parent = this;
        lfa_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lfa_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "path-metric")
    {
        path_metric.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lfa-path" || name == "interface-name" || name == "neighbour-address" || name == "change-type" || name == "path-metric")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::LfaPath()
    :
    lfa_type{YType::enumeration, "lfa-type"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    change_type{YType::enumeration, "change-type"},
    path_metric{YType::uint32, "path-metric"},
    remote_node_id{YType::str, "remote-node-id"}
{

    yang_name = "lfa-path"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::~LfaPath()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::has_data() const
{
    if (is_presence_container) return true;
    return lfa_type.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| change_type.is_set
	|| path_metric.is_set
	|| remote_node_id.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lfa_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(path_metric.yfilter)
	|| ydk::is_set(remote_node_id.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lfa-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lfa_type.is_set || is_set(lfa_type.yfilter)) leaf_name_data.push_back(lfa_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lfa-type")
    {
        lfa_type = value;
        lfa_type.value_namespace = name_space;
        lfa_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lfa-type")
    {
        lfa_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
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
    if(name == "lfa-type" || name == "interface-name" || name == "neighbour-address" || name == "change-type" || name == "path-metric" || name == "remote-node-id")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::TriggerLsa()
    :
    lsa_id{YType::str, "lsa-id"},
    sequence_number{YType::str, "sequence-number"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "trigger-lsa"; yang_parent_name = "summary-external-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::~TriggerLsa()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| sequence_number.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsa";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "sequence-number" || name == "lsa-type" || name == "origin-router-id" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::TimeLine()
    :
    route_origin{YType::str, "route-origin"},
    ri_bv4_enter{YType::str, "ri-bv4-enter"},
    ri_bv4_exit{YType::str, "ri-bv4-exit"},
    ri_bv4_redistribute{YType::str, "ri-bv4-redistribute"},
    ldp_enter{YType::str, "ldp-enter"},
    ldp_exit{YType::str, "ldp-exit"},
    lsd_enter{YType::str, "lsd-enter"},
    lsd_exit{YType::str, "lsd-exit"}
        ,
    lc_ip(this, {})
    , lc_mpls(this, {})
{

    yang_name = "time-line"; yang_parent_name = "summary-external-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::~TimeLine()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return route_origin.is_set
	|| ri_bv4_enter.is_set
	|| ri_bv4_exit.is_set
	|| ri_bv4_redistribute.is_set
	|| ldp_enter.is_set
	|| ldp_exit.is_set
	|| lsd_enter.is_set
	|| lsd_exit.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_origin.yfilter)
	|| ydk::is_set(ri_bv4_enter.yfilter)
	|| ydk::is_set(ri_bv4_exit.yfilter)
	|| ydk::is_set(ri_bv4_redistribute.yfilter)
	|| ydk::is_set(ldp_enter.yfilter)
	|| ydk::is_set(ldp_exit.yfilter)
	|| ydk::is_set(lsd_enter.yfilter)
	|| ydk::is_set(lsd_exit.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-line";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_origin.is_set || is_set(route_origin.yfilter)) leaf_name_data.push_back(route_origin.get_name_leafdata());
    if (ri_bv4_enter.is_set || is_set(ri_bv4_enter.yfilter)) leaf_name_data.push_back(ri_bv4_enter.get_name_leafdata());
    if (ri_bv4_exit.is_set || is_set(ri_bv4_exit.yfilter)) leaf_name_data.push_back(ri_bv4_exit.get_name_leafdata());
    if (ri_bv4_redistribute.is_set || is_set(ri_bv4_redistribute.yfilter)) leaf_name_data.push_back(ri_bv4_redistribute.get_name_leafdata());
    if (ldp_enter.is_set || is_set(ldp_enter.yfilter)) leaf_name_data.push_back(ldp_enter.get_name_leafdata());
    if (ldp_exit.is_set || is_set(ldp_exit.yfilter)) leaf_name_data.push_back(ldp_exit.get_name_leafdata());
    if (lsd_enter.is_set || is_set(lsd_enter.yfilter)) leaf_name_data.push_back(lsd_enter.get_name_leafdata());
    if (lsd_exit.is_set || is_set(lsd_exit.yfilter)) leaf_name_data.push_back(lsd_exit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-ip")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp>();
        ent_->parent = this;
        lc_ip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lc-mpls")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls>();
        ent_->parent = this;
        lc_mpls.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lc_ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lc_mpls.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-origin")
    {
        route_origin = value;
        route_origin.value_namespace = name_space;
        route_origin.value_namespace_prefix = name_space_prefix;
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
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-origin")
    {
        route_origin.yfilter = yfilter;
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
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-ip" || name == "lc-mpls" || name == "route-origin" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::LcIp()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"},
    fib_complete{YType::str, "fib-complete"}
{

    yang_name = "lc-ip"; yang_parent_name = "time-line"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::~LcIp()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| speed.is_set
	|| fib_complete.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(fib_complete.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-ip";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "speed" || name == "fib-complete")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::LcMpls()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"},
    fib_complete{YType::str, "fib-complete"}
{

    yang_name = "lc-mpls"; yang_parent_name = "time-line"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::~LcMpls()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| speed.is_set
	|| fib_complete.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(fib_complete.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-mpls";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "speed" || name == "fib-complete")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::LsaProcessed()
    :
    lsa_id{YType::str, "lsa-id"},
    sequence_number{YType::str, "sequence-number"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "lsa-processed"; yang_parent_name = "summary-external-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::~LsaProcessed()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| sequence_number.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-processed";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "sequence-number" || name == "lsa-type" || name == "origin-router-id" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummaries()
    :
    prefix_event_summary(this, {"event_id"})
{

    yang_name = "prefix-event-summaries"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::~PrefixEventSummaries()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_event_summary.len(); index++)
    {
        if(prefix_event_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::has_operation() const
{
    for (std::size_t index=0; index<prefix_event_summary.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-event-summary")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary>();
        ent_->parent = this;
        prefix_event_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_event_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    event_id{YType::uint32, "event-id"},
    prefix{YType::str, "prefix"},
    prefix_lenth{YType::uint32, "prefix-lenth"},
    spf_run_no{YType::uint32, "spf-run-no"},
    ipfrr_event_id{YType::uint32, "ipfrr-event-id"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    priority{YType::enumeration, "priority"},
    change_type{YType::enumeration, "change-type"},
    route_type{YType::enumeration, "route-type"},
    route_path_change_type{YType::enumeration, "route-path-change-type"},
    cost{YType::uint32, "cost"},
    trigger_time{YType::str, "trigger-time"}
        ,
    ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime>())
    , mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime>())
    , path(this, {})
    , trigger_lsa(this, {})
    , time_line(this, {})
    , lsa_processed(this, {})
{
    ip_convergence_time->parent = this;
    mpls_convergence_time->parent = this;

    yang_name = "prefix-event-summary"; yang_parent_name = "prefix-event-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::~PrefixEventSummary()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.len(); index++)
    {
        if(trigger_lsa[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<time_line.len(); index++)
    {
        if(time_line[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsa_processed.len(); index++)
    {
        if(lsa_processed[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| prefix.is_set
	|| prefix_lenth.is_set
	|| spf_run_no.is_set
	|| ipfrr_event_id.is_set
	|| threshold_exceeded.is_set
	|| priority.is_set
	|| change_type.is_set
	|| route_type.is_set
	|| route_path_change_type.is_set
	|| cost.is_set
	|| trigger_time.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::has_operation() const
{
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.len(); index++)
    {
        if(trigger_lsa[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<time_line.len(); index++)
    {
        if(time_line[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsa_processed.len(); index++)
    {
        if(lsa_processed[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_lenth.yfilter)
	|| ydk::is_set(spf_run_no.yfilter)
	|| ydk::is_set(ipfrr_event_id.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_path_change_type.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-event-summary";
    ADD_KEY_TOKEN(event_id, "event-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_lenth.is_set || is_set(prefix_lenth.yfilter)) leaf_name_data.push_back(prefix_lenth.get_name_leafdata());
    if (spf_run_no.is_set || is_set(spf_run_no.yfilter)) leaf_name_data.push_back(spf_run_no.get_name_leafdata());
    if (ipfrr_event_id.is_set || is_set(ipfrr_event_id.yfilter)) leaf_name_data.push_back(ipfrr_event_id.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_path_change_type.is_set || is_set(route_path_change_type.yfilter)) leaf_name_data.push_back(route_path_change_type.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime>();
        }
        return ip_convergence_time;
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
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path>();
        ent_->parent = this;
        path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "trigger-lsa")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa>();
        ent_->parent = this;
        trigger_lsa.append(ent_);
        return ent_;
    }

    if(child_yang_name == "time-line")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine>();
        ent_->parent = this;
        time_line.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lsa-processed")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed>();
        ent_->parent = this;
        lsa_processed.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_convergence_time != nullptr)
    {
        _children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        _children["mpls-convergence-time"] = mpls_convergence_time;
    }

    count_ = 0;
    for (auto ent_ : path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : trigger_lsa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : time_line.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lsa_processed.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "spf-run-no")
    {
        spf_run_no = value;
        spf_run_no.value_namespace = name_space;
        spf_run_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id = value;
        ipfrr_event_id.value_namespace = name_space;
        ipfrr_event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type = value;
        route_path_change_type.value_namespace = name_space;
        route_path_change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth.yfilter = yfilter;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no.yfilter = yfilter;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "path" || name == "trigger-lsa" || name == "time-line" || name == "lsa-processed" || name == "event-id" || name == "prefix" || name == "prefix-lenth" || name == "spf-run-no" || name == "ipfrr-event-id" || name == "threshold-exceeded" || name == "priority" || name == "change-type" || name == "route-type" || name == "route-path-change-type" || name == "cost" || name == "trigger-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::IpConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "ip-convergence-time"; yang_parent_name = "prefix-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "mpls-convergence-time"; yang_parent_name = "prefix-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::Path()
    :
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    change_type{YType::enumeration, "change-type"},
    path_metric{YType::uint32, "path-metric"}
        ,
    lfa_path(this, {})
{

    yang_name = "path"; yang_parent_name = "prefix-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::~Path()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lfa_path.len(); index++)
    {
        if(lfa_path[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbour_address.is_set
	|| change_type.is_set
	|| path_metric.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::has_operation() const
{
    for (std::size_t index=0; index<lfa_path.len(); index++)
    {
        if(lfa_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(path_metric.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lfa-path")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath>();
        ent_->parent = this;
        lfa_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lfa_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "path-metric")
    {
        path_metric.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lfa-path" || name == "interface-name" || name == "neighbour-address" || name == "change-type" || name == "path-metric")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::LfaPath()
    :
    lfa_type{YType::enumeration, "lfa-type"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    change_type{YType::enumeration, "change-type"},
    path_metric{YType::uint32, "path-metric"},
    remote_node_id{YType::str, "remote-node-id"}
{

    yang_name = "lfa-path"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::~LfaPath()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::has_data() const
{
    if (is_presence_container) return true;
    return lfa_type.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| change_type.is_set
	|| path_metric.is_set
	|| remote_node_id.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lfa_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(path_metric.yfilter)
	|| ydk::is_set(remote_node_id.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lfa-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lfa_type.is_set || is_set(lfa_type.yfilter)) leaf_name_data.push_back(lfa_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lfa-type")
    {
        lfa_type = value;
        lfa_type.value_namespace = name_space;
        lfa_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lfa-type")
    {
        lfa_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
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
    if(name == "lfa-type" || name == "interface-name" || name == "neighbour-address" || name == "change-type" || name == "path-metric" || name == "remote-node-id")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::TriggerLsa()
    :
    lsa_id{YType::str, "lsa-id"},
    sequence_number{YType::str, "sequence-number"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "trigger-lsa"; yang_parent_name = "prefix-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::~TriggerLsa()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| sequence_number.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsa";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "sequence-number" || name == "lsa-type" || name == "origin-router-id" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::TimeLine()
    :
    route_origin{YType::str, "route-origin"},
    ri_bv4_enter{YType::str, "ri-bv4-enter"},
    ri_bv4_exit{YType::str, "ri-bv4-exit"},
    ri_bv4_redistribute{YType::str, "ri-bv4-redistribute"},
    ldp_enter{YType::str, "ldp-enter"},
    ldp_exit{YType::str, "ldp-exit"},
    lsd_enter{YType::str, "lsd-enter"},
    lsd_exit{YType::str, "lsd-exit"}
        ,
    lc_ip(this, {})
    , lc_mpls(this, {})
{

    yang_name = "time-line"; yang_parent_name = "prefix-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::~TimeLine()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return route_origin.is_set
	|| ri_bv4_enter.is_set
	|| ri_bv4_exit.is_set
	|| ri_bv4_redistribute.is_set
	|| ldp_enter.is_set
	|| ldp_exit.is_set
	|| lsd_enter.is_set
	|| lsd_exit.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_origin.yfilter)
	|| ydk::is_set(ri_bv4_enter.yfilter)
	|| ydk::is_set(ri_bv4_exit.yfilter)
	|| ydk::is_set(ri_bv4_redistribute.yfilter)
	|| ydk::is_set(ldp_enter.yfilter)
	|| ydk::is_set(ldp_exit.yfilter)
	|| ydk::is_set(lsd_enter.yfilter)
	|| ydk::is_set(lsd_exit.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-line";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_origin.is_set || is_set(route_origin.yfilter)) leaf_name_data.push_back(route_origin.get_name_leafdata());
    if (ri_bv4_enter.is_set || is_set(ri_bv4_enter.yfilter)) leaf_name_data.push_back(ri_bv4_enter.get_name_leafdata());
    if (ri_bv4_exit.is_set || is_set(ri_bv4_exit.yfilter)) leaf_name_data.push_back(ri_bv4_exit.get_name_leafdata());
    if (ri_bv4_redistribute.is_set || is_set(ri_bv4_redistribute.yfilter)) leaf_name_data.push_back(ri_bv4_redistribute.get_name_leafdata());
    if (ldp_enter.is_set || is_set(ldp_enter.yfilter)) leaf_name_data.push_back(ldp_enter.get_name_leafdata());
    if (ldp_exit.is_set || is_set(ldp_exit.yfilter)) leaf_name_data.push_back(ldp_exit.get_name_leafdata());
    if (lsd_enter.is_set || is_set(lsd_enter.yfilter)) leaf_name_data.push_back(lsd_enter.get_name_leafdata());
    if (lsd_exit.is_set || is_set(lsd_exit.yfilter)) leaf_name_data.push_back(lsd_exit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-ip")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp>();
        ent_->parent = this;
        lc_ip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lc-mpls")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls>();
        ent_->parent = this;
        lc_mpls.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lc_ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lc_mpls.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-origin")
    {
        route_origin = value;
        route_origin.value_namespace = name_space;
        route_origin.value_namespace_prefix = name_space_prefix;
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
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-origin")
    {
        route_origin.yfilter = yfilter;
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
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-ip" || name == "lc-mpls" || name == "route-origin" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::LcIp()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"},
    fib_complete{YType::str, "fib-complete"}
{

    yang_name = "lc-ip"; yang_parent_name = "time-line"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::~LcIp()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| speed.is_set
	|| fib_complete.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(fib_complete.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-ip";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "speed" || name == "fib-complete")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::LcMpls()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"},
    fib_complete{YType::str, "fib-complete"}
{

    yang_name = "lc-mpls"; yang_parent_name = "time-line"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::~LcMpls()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| speed.is_set
	|| fib_complete.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(fib_complete.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-mpls";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "speed" || name == "fib-complete")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::LsaProcessed()
    :
    lsa_id{YType::str, "lsa-id"},
    sequence_number{YType::str, "sequence-number"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "lsa-processed"; yang_parent_name = "prefix-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::~LsaProcessed()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| sequence_number.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-processed";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "sequence-number" || name == "lsa-type" || name == "origin-router-id" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOfflines()
    :
    summary_external_event_offline(this, {"event_id"})
{

    yang_name = "summary-external-event-offlines"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::~SummaryExternalEventOfflines()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary_external_event_offline.len(); index++)
    {
        if(summary_external_event_offline[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::has_operation() const
{
    for (std::size_t index=0; index<summary_external_event_offline.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-external-event-offline")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline>();
        ent_->parent = this;
        summary_external_event_offline.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : summary_external_event_offline.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    event_id{YType::uint32, "event-id"},
    prefix{YType::str, "prefix"},
    prefix_lenth{YType::uint32, "prefix-lenth"},
    spf_run_no{YType::uint32, "spf-run-no"},
    ipfrr_event_id{YType::uint32, "ipfrr-event-id"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    priority{YType::enumeration, "priority"},
    change_type{YType::enumeration, "change-type"},
    route_type{YType::enumeration, "route-type"},
    route_path_change_type{YType::enumeration, "route-path-change-type"},
    cost{YType::uint32, "cost"},
    trigger_time{YType::str, "trigger-time"}
        ,
    ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime>())
    , mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime>())
    , path(this, {})
    , trigger_lsa(this, {})
    , time_line(this, {})
    , lsa_processed(this, {})
{
    ip_convergence_time->parent = this;
    mpls_convergence_time->parent = this;

    yang_name = "summary-external-event-offline"; yang_parent_name = "summary-external-event-offlines"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::~SummaryExternalEventOffline()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.len(); index++)
    {
        if(trigger_lsa[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<time_line.len(); index++)
    {
        if(time_line[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsa_processed.len(); index++)
    {
        if(lsa_processed[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| prefix.is_set
	|| prefix_lenth.is_set
	|| spf_run_no.is_set
	|| ipfrr_event_id.is_set
	|| threshold_exceeded.is_set
	|| priority.is_set
	|| change_type.is_set
	|| route_type.is_set
	|| route_path_change_type.is_set
	|| cost.is_set
	|| trigger_time.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::has_operation() const
{
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.len(); index++)
    {
        if(trigger_lsa[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<time_line.len(); index++)
    {
        if(time_line[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsa_processed.len(); index++)
    {
        if(lsa_processed[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_lenth.yfilter)
	|| ydk::is_set(spf_run_no.yfilter)
	|| ydk::is_set(ipfrr_event_id.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_path_change_type.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-external-event-offline";
    ADD_KEY_TOKEN(event_id, "event-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_lenth.is_set || is_set(prefix_lenth.yfilter)) leaf_name_data.push_back(prefix_lenth.get_name_leafdata());
    if (spf_run_no.is_set || is_set(spf_run_no.yfilter)) leaf_name_data.push_back(spf_run_no.get_name_leafdata());
    if (ipfrr_event_id.is_set || is_set(ipfrr_event_id.yfilter)) leaf_name_data.push_back(ipfrr_event_id.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_path_change_type.is_set || is_set(route_path_change_type.yfilter)) leaf_name_data.push_back(route_path_change_type.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime>();
        }
        return ip_convergence_time;
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
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path>();
        ent_->parent = this;
        path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "trigger-lsa")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa>();
        ent_->parent = this;
        trigger_lsa.append(ent_);
        return ent_;
    }

    if(child_yang_name == "time-line")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine>();
        ent_->parent = this;
        time_line.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lsa-processed")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed>();
        ent_->parent = this;
        lsa_processed.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_convergence_time != nullptr)
    {
        _children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        _children["mpls-convergence-time"] = mpls_convergence_time;
    }

    count_ = 0;
    for (auto ent_ : path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : trigger_lsa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : time_line.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lsa_processed.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "spf-run-no")
    {
        spf_run_no = value;
        spf_run_no.value_namespace = name_space;
        spf_run_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id = value;
        ipfrr_event_id.value_namespace = name_space;
        ipfrr_event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type = value;
        route_path_change_type.value_namespace = name_space;
        route_path_change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth.yfilter = yfilter;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no.yfilter = yfilter;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "path" || name == "trigger-lsa" || name == "time-line" || name == "lsa-processed" || name == "event-id" || name == "prefix" || name == "prefix-lenth" || name == "spf-run-no" || name == "ipfrr-event-id" || name == "threshold-exceeded" || name == "priority" || name == "change-type" || name == "route-type" || name == "route-path-change-type" || name == "cost" || name == "trigger-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::IpConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "ip-convergence-time"; yang_parent_name = "summary-external-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::MplsConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "mpls-convergence-time"; yang_parent_name = "summary-external-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::Path()
    :
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    change_type{YType::enumeration, "change-type"},
    path_metric{YType::uint32, "path-metric"}
        ,
    lfa_path(this, {})
{

    yang_name = "path"; yang_parent_name = "summary-external-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::~Path()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lfa_path.len(); index++)
    {
        if(lfa_path[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbour_address.is_set
	|| change_type.is_set
	|| path_metric.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::has_operation() const
{
    for (std::size_t index=0; index<lfa_path.len(); index++)
    {
        if(lfa_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(path_metric.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lfa-path")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath>();
        ent_->parent = this;
        lfa_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lfa_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "path-metric")
    {
        path_metric.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lfa-path" || name == "interface-name" || name == "neighbour-address" || name == "change-type" || name == "path-metric")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::LfaPath()
    :
    lfa_type{YType::enumeration, "lfa-type"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    change_type{YType::enumeration, "change-type"},
    path_metric{YType::uint32, "path-metric"},
    remote_node_id{YType::str, "remote-node-id"}
{

    yang_name = "lfa-path"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::~LfaPath()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::has_data() const
{
    if (is_presence_container) return true;
    return lfa_type.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| change_type.is_set
	|| path_metric.is_set
	|| remote_node_id.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lfa_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(path_metric.yfilter)
	|| ydk::is_set(remote_node_id.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lfa-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lfa_type.is_set || is_set(lfa_type.yfilter)) leaf_name_data.push_back(lfa_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lfa-type")
    {
        lfa_type = value;
        lfa_type.value_namespace = name_space;
        lfa_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lfa-type")
    {
        lfa_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
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
    if(name == "lfa-type" || name == "interface-name" || name == "neighbour-address" || name == "change-type" || name == "path-metric" || name == "remote-node-id")
        return true;
    return false;
}

const Enum::YLeaf RcmdBagEnblDsbl::dsbl {0, "dsbl"};
const Enum::YLeaf RcmdBagEnblDsbl::enbl {1, "enbl"};

const Enum::YLeaf RcmdBoolYesNo::no {0, "no"};
const Enum::YLeaf RcmdBoolYesNo::yes {1, "yes"};

const Enum::YLeaf RcmdPriorityLevel::critical {0, "critical"};
const Enum::YLeaf RcmdPriorityLevel::high {1, "high"};
const Enum::YLeaf RcmdPriorityLevel::medium {2, "medium"};
const Enum::YLeaf RcmdPriorityLevel::low {3, "low"};

const Enum::YLeaf RcmdSpfState::complete {0, "complete"};
const Enum::YLeaf RcmdSpfState::in_complete {1, "in-complete"};
const Enum::YLeaf RcmdSpfState::collecting {2, "collecting"};
const Enum::YLeaf RcmdSpfState::no_route_change {3, "no-route-change"};

const Enum::YLeaf RcmdShowIpfrrLfa::none {0, "none"};
const Enum::YLeaf RcmdShowIpfrrLfa::local {1, "local"};
const Enum::YLeaf RcmdShowIpfrrLfa::remote {2, "remote"};

const Enum::YLeaf RcmdShowPrcsState::success {0, "success"};
const Enum::YLeaf RcmdShowPrcsState::cpu {1, "cpu"};
const Enum::YLeaf RcmdShowPrcsState::memory {2, "memory"};

const Enum::YLeaf RcmdShowCompId::ospf {0, "ospf"};
const Enum::YLeaf RcmdShowCompId::isis {1, "isis"};
const Enum::YLeaf RcmdShowCompId::un_known {2, "un-known"};

const Enum::YLeaf RcmdShowLdpSessionState::gr_down {0, "gr-down"};
const Enum::YLeaf RcmdShowLdpSessionState::gr_converging {1, "gr-converging"};
const Enum::YLeaf RcmdShowLdpSessionState::establishing {2, "establishing"};
const Enum::YLeaf RcmdShowLdpSessionState::converging {3, "converging"};
const Enum::YLeaf RcmdShowLdpSessionState::converged {4, "converged"};
const Enum::YLeaf RcmdShowLdpSessionState::retrying {5, "retrying"};
const Enum::YLeaf RcmdShowLdpSessionState::total {6, "total"};

const Enum::YLeaf RcmdProtocolId::ospf {0, "ospf"};
const Enum::YLeaf RcmdProtocolId::isis {1, "isis"};
const Enum::YLeaf RcmdProtocolId::na {2, "na"};

const Enum::YLeaf RcmdShowLdpConvState::not_full {0, "not-full"};
const Enum::YLeaf RcmdShowLdpConvState::fully_covered {1, "fully-covered"};
const Enum::YLeaf RcmdShowLdpConvState::coverage_above_threshold {2, "coverage-above-threshold"};
const Enum::YLeaf RcmdShowLdpConvState::coverage_below_threshold {3, "coverage-below-threshold"};
const Enum::YLeaf RcmdShowLdpConvState::coverage_flapping {4, "coverage-flapping"};

const Enum::YLeaf RcmdLinecardSpeed::other {0, "other"};
const Enum::YLeaf RcmdLinecardSpeed::fastest {1, "fastest"};
const Enum::YLeaf RcmdLinecardSpeed::slowest {2, "slowest"};

const Enum::YLeaf RcmdShowNode::unknown {0, "unknown"};
const Enum::YLeaf RcmdShowNode::lc {1, "lc"};
const Enum::YLeaf RcmdShowNode::rp {2, "rp"};

const Enum::YLeaf RcmdShowLdpNeighbourStatus::down {0, "down"};
const Enum::YLeaf RcmdShowLdpNeighbourStatus::up {1, "up"};

const Enum::YLeaf RcmdIsisSpf::full {0, "full"};
const Enum::YLeaf RcmdIsisSpf::incremental {1, "incremental"};
const Enum::YLeaf RcmdIsisSpf::next_hop {2, "next-hop"};
const Enum::YLeaf RcmdIsisSpf::partial_route {3, "partial-route"};

const Enum::YLeaf RcmdShowRoutePathChange::primary {0, "primary"};
const Enum::YLeaf RcmdShowRoutePathChange::backup {1, "backup"};

const Enum::YLeaf RcmdIsisLvl::l1 {0, "l1"};
const Enum::YLeaf RcmdIsisLvl::l2 {1, "l2"};

const Enum::YLeaf RcmdChange::none {0, "none"};
const Enum::YLeaf RcmdChange::add {1, "add"};
const Enum::YLeaf RcmdChange::delete_ {2, "delete"};
const Enum::YLeaf RcmdChange::modify {3, "modify"};
const Enum::YLeaf RcmdChange::no_change {4, "no-change"};

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

const Enum::YLeaf RcmdLdpEvent::neighbor {1, "neighbor"};
const Enum::YLeaf RcmdLdpEvent::adjacency {2, "adjacency"};

const Enum::YLeaf RcmdLsa::unknown {0, "unknown"};
const Enum::YLeaf RcmdLsa::router {1, "router"};
const Enum::YLeaf RcmdLsa::network {2, "network"};
const Enum::YLeaf RcmdLsa::summary {3, "summary"};
const Enum::YLeaf RcmdLsa::asbr {4, "asbr"};
const Enum::YLeaf RcmdLsa::external {5, "external"};
const Enum::YLeaf RcmdLsa::multicast {6, "multicast"};
const Enum::YLeaf RcmdLsa::nssa {7, "nssa"};

const Enum::YLeaf RcmdShowMem::standard {0, "standard"};
const Enum::YLeaf RcmdShowMem::chunk {1, "chunk"};
const Enum::YLeaf RcmdShowMem::edm {2, "edm"};
const Enum::YLeaf RcmdShowMem::string {3, "string"};
const Enum::YLeaf RcmdShowMem::static_ {4, "static"};
const Enum::YLeaf RcmdShowMem::unknown {5, "unknown"};

const Enum::YLeaf RcmdBagEnableDisable::disable {0, "disable"};
const Enum::YLeaf RcmdBagEnableDisable::enable {1, "enable"};

const Enum::YLeaf RcmdShowInstState::unknown {0, "unknown"};
const Enum::YLeaf RcmdShowInstState::active {1, "active"};
const Enum::YLeaf RcmdShowInstState::in_active {2, "in-active"};
const Enum::YLeaf RcmdShowInstState::na {3, "na"};

const Enum::YLeaf RcmdLsChange::new_ {0, "new"};
const Enum::YLeaf RcmdLsChange::delete_ {1, "delete"};
const Enum::YLeaf RcmdLsChange::modify {2, "modify"};
const Enum::YLeaf RcmdLsChange::noop {3, "noop"};

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


}
}

