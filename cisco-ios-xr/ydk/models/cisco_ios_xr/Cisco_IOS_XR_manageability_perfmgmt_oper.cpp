
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_manageability_perfmgmt_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_manageability_perfmgmt_oper {

PerfMgmt::PerfMgmt()
    :
    periodic(std::make_shared<PerfMgmt::Periodic>())
    , monitor(std::make_shared<PerfMgmt::Monitor>())
{
    periodic->parent = this;
    monitor->parent = this;

    yang_name = "perf-mgmt"; yang_parent_name = "Cisco-IOS-XR-manageability-perfmgmt-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

PerfMgmt::~PerfMgmt()
{
}

bool PerfMgmt::has_data() const
{
    if (is_presence_container) return true;
    return (periodic !=  nullptr && periodic->has_data())
	|| (monitor !=  nullptr && monitor->has_data());
}

bool PerfMgmt::has_operation() const
{
    return is_set(yfilter)
	|| (periodic !=  nullptr && periodic->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string PerfMgmt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<PerfMgmt::Periodic>();
        }
        return periodic;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<PerfMgmt::Monitor>();
        }
        return monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(periodic != nullptr)
    {
        children["periodic"] = periodic;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    return children;
}

void PerfMgmt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PerfMgmt::clone_ptr() const
{
    return std::make_shared<PerfMgmt>();
}

std::string PerfMgmt::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PerfMgmt::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PerfMgmt::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PerfMgmt::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PerfMgmt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic" || name == "monitor")
        return true;
    return false;
}

PerfMgmt::Periodic::Periodic()
    :
    ospf(std::make_shared<PerfMgmt::Periodic::Ospf>())
    , mpls(std::make_shared<PerfMgmt::Periodic::Mpls>())
    , nodes(std::make_shared<PerfMgmt::Periodic::Nodes>())
    , bgp(std::make_shared<PerfMgmt::Periodic::Bgp>())
    , interface(std::make_shared<PerfMgmt::Periodic::Interface>())
{
    ospf->parent = this;
    mpls->parent = this;
    nodes->parent = this;
    bgp->parent = this;
    interface->parent = this;

    yang_name = "periodic"; yang_parent_name = "perf-mgmt"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::~Periodic()
{
}

bool PerfMgmt::Periodic::has_data() const
{
    if (is_presence_container) return true;
    return (ospf !=  nullptr && ospf->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (nodes !=  nullptr && nodes->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (interface !=  nullptr && interface->has_data());
}

bool PerfMgmt::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (interface !=  nullptr && interface->has_operation());
}

std::string PerfMgmt::Periodic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PerfMgmt::Periodic::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<PerfMgmt::Periodic::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerfMgmt::Periodic::Nodes>();
        }
        return nodes;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PerfMgmt::Periodic::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<PerfMgmt::Periodic::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void PerfMgmt::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf" || name == "mpls" || name == "nodes" || name == "bgp" || name == "interface")
        return true;
    return false;
}

PerfMgmt::Periodic::Ospf::Ospf()
    :
    ospfv2_protocol_instances(std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances>())
    , ospfv3_protocol_instances(std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances>())
{
    ospfv2_protocol_instances->parent = this;
    ospfv3_protocol_instances->parent = this;

    yang_name = "ospf"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Ospf::~Ospf()
{
}

bool PerfMgmt::Periodic::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return (ospfv2_protocol_instances !=  nullptr && ospfv2_protocol_instances->has_data())
	|| (ospfv3_protocol_instances !=  nullptr && ospfv3_protocol_instances->has_data());
}

bool PerfMgmt::Periodic::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| (ospfv2_protocol_instances !=  nullptr && ospfv2_protocol_instances->has_operation())
	|| (ospfv3_protocol_instances !=  nullptr && ospfv3_protocol_instances->has_operation());
}

std::string PerfMgmt::Periodic::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-protocol-instances")
    {
        if(ospfv2_protocol_instances == nullptr)
        {
            ospfv2_protocol_instances = std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances>();
        }
        return ospfv2_protocol_instances;
    }

    if(child_yang_name == "ospfv3-protocol-instances")
    {
        if(ospfv3_protocol_instances == nullptr)
        {
            ospfv3_protocol_instances = std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances>();
        }
        return ospfv3_protocol_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ospfv2_protocol_instances != nullptr)
    {
        children["ospfv2-protocol-instances"] = ospfv2_protocol_instances;
    }

    if(ospfv3_protocol_instances != nullptr)
    {
        children["ospfv3-protocol-instances"] = ospfv3_protocol_instances;
    }

    return children;
}

void PerfMgmt::Periodic::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-protocol-instances" || name == "ospfv3-protocol-instances")
        return true;
    return false;
}

PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstances()
    :
    ospfv2_protocol_instance(this, {"instance_name"})
{

    yang_name = "ospfv2-protocol-instances"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::~Ospfv2ProtocolInstances()
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv2_protocol_instance.len(); index++)
    {
        if(ospfv2_protocol_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_protocol_instance.len(); index++)
    {
        if(ospfv2_protocol_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-protocol-instance")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance>();
        c->parent = this;
        ospfv2_protocol_instance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfv2_protocol_instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-protocol-instance")
        return true;
    return false;
}

PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Ospfv2ProtocolInstance()
    :
    instance_name{YType::str, "instance-name"}
        ,
    samples(std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples>())
{
    samples->parent = this;

    yang_name = "ospfv2-protocol-instance"; yang_parent_name = "ospfv2-protocol-instances"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::~Ospfv2ProtocolInstance()
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::has_data() const
{
    if (is_presence_container) return true;
    return instance_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/ospf/ospfv2-protocol-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol-instance";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "instance-name")
        return true;
    return false;
}

PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Samples()
    :
    sample(this, {"sample_id"})
{

    yang_name = "samples"; yang_parent_name = "ospfv2-protocol-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::~Samples()
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    input_packets{YType::uint32, "input-packets"},
    output_packets{YType::uint32, "output-packets"},
    input_hello_packets{YType::uint32, "input-hello-packets"},
    output_hello_packets{YType::uint32, "output-hello-packets"},
    input_db_ds{YType::uint32, "input-db-ds"},
    input_db_ds_lsa{YType::uint32, "input-db-ds-lsa"},
    output_db_ds{YType::uint32, "output-db-ds"},
    output_db_ds_lsa{YType::uint32, "output-db-ds-lsa"},
    input_ls_requests{YType::uint32, "input-ls-requests"},
    input_ls_requests_lsa{YType::uint32, "input-ls-requests-lsa"},
    output_ls_requests{YType::uint32, "output-ls-requests"},
    output_ls_requests_lsa{YType::uint32, "output-ls-requests-lsa"},
    input_lsa_updates{YType::uint32, "input-lsa-updates"},
    input_lsa_updates_lsa{YType::uint32, "input-lsa-updates-lsa"},
    output_lsa_updates{YType::uint32, "output-lsa-updates"},
    output_lsa_updates_lsa{YType::uint32, "output-lsa-updates-lsa"},
    input_lsa_acks{YType::uint32, "input-lsa-acks"},
    input_lsa_acks_lsa{YType::uint32, "input-lsa-acks-lsa"},
    output_lsa_acks{YType::uint32, "output-lsa-acks"},
    output_lsa_acks_lsa{YType::uint32, "output-lsa-acks-lsa"},
    checksum_errors{YType::uint32, "checksum-errors"}
{

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| input_packets.is_set
	|| output_packets.is_set
	|| input_hello_packets.is_set
	|| output_hello_packets.is_set
	|| input_db_ds.is_set
	|| input_db_ds_lsa.is_set
	|| output_db_ds.is_set
	|| output_db_ds_lsa.is_set
	|| input_ls_requests.is_set
	|| input_ls_requests_lsa.is_set
	|| output_ls_requests.is_set
	|| output_ls_requests_lsa.is_set
	|| input_lsa_updates.is_set
	|| input_lsa_updates_lsa.is_set
	|| output_lsa_updates.is_set
	|| output_lsa_updates_lsa.is_set
	|| input_lsa_acks.is_set
	|| input_lsa_acks_lsa.is_set
	|| output_lsa_acks.is_set
	|| output_lsa_acks_lsa.is_set
	|| checksum_errors.is_set;
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(input_packets.yfilter)
	|| ydk::is_set(output_packets.yfilter)
	|| ydk::is_set(input_hello_packets.yfilter)
	|| ydk::is_set(output_hello_packets.yfilter)
	|| ydk::is_set(input_db_ds.yfilter)
	|| ydk::is_set(input_db_ds_lsa.yfilter)
	|| ydk::is_set(output_db_ds.yfilter)
	|| ydk::is_set(output_db_ds_lsa.yfilter)
	|| ydk::is_set(input_ls_requests.yfilter)
	|| ydk::is_set(input_ls_requests_lsa.yfilter)
	|| ydk::is_set(output_ls_requests.yfilter)
	|| ydk::is_set(output_ls_requests_lsa.yfilter)
	|| ydk::is_set(input_lsa_updates.yfilter)
	|| ydk::is_set(input_lsa_updates_lsa.yfilter)
	|| ydk::is_set(output_lsa_updates.yfilter)
	|| ydk::is_set(output_lsa_updates_lsa.yfilter)
	|| ydk::is_set(input_lsa_acks.yfilter)
	|| ydk::is_set(input_lsa_acks_lsa.yfilter)
	|| ydk::is_set(output_lsa_acks.yfilter)
	|| ydk::is_set(output_lsa_acks_lsa.yfilter)
	|| ydk::is_set(checksum_errors.yfilter);
}

std::string PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (input_packets.is_set || is_set(input_packets.yfilter)) leaf_name_data.push_back(input_packets.get_name_leafdata());
    if (output_packets.is_set || is_set(output_packets.yfilter)) leaf_name_data.push_back(output_packets.get_name_leafdata());
    if (input_hello_packets.is_set || is_set(input_hello_packets.yfilter)) leaf_name_data.push_back(input_hello_packets.get_name_leafdata());
    if (output_hello_packets.is_set || is_set(output_hello_packets.yfilter)) leaf_name_data.push_back(output_hello_packets.get_name_leafdata());
    if (input_db_ds.is_set || is_set(input_db_ds.yfilter)) leaf_name_data.push_back(input_db_ds.get_name_leafdata());
    if (input_db_ds_lsa.is_set || is_set(input_db_ds_lsa.yfilter)) leaf_name_data.push_back(input_db_ds_lsa.get_name_leafdata());
    if (output_db_ds.is_set || is_set(output_db_ds.yfilter)) leaf_name_data.push_back(output_db_ds.get_name_leafdata());
    if (output_db_ds_lsa.is_set || is_set(output_db_ds_lsa.yfilter)) leaf_name_data.push_back(output_db_ds_lsa.get_name_leafdata());
    if (input_ls_requests.is_set || is_set(input_ls_requests.yfilter)) leaf_name_data.push_back(input_ls_requests.get_name_leafdata());
    if (input_ls_requests_lsa.is_set || is_set(input_ls_requests_lsa.yfilter)) leaf_name_data.push_back(input_ls_requests_lsa.get_name_leafdata());
    if (output_ls_requests.is_set || is_set(output_ls_requests.yfilter)) leaf_name_data.push_back(output_ls_requests.get_name_leafdata());
    if (output_ls_requests_lsa.is_set || is_set(output_ls_requests_lsa.yfilter)) leaf_name_data.push_back(output_ls_requests_lsa.get_name_leafdata());
    if (input_lsa_updates.is_set || is_set(input_lsa_updates.yfilter)) leaf_name_data.push_back(input_lsa_updates.get_name_leafdata());
    if (input_lsa_updates_lsa.is_set || is_set(input_lsa_updates_lsa.yfilter)) leaf_name_data.push_back(input_lsa_updates_lsa.get_name_leafdata());
    if (output_lsa_updates.is_set || is_set(output_lsa_updates.yfilter)) leaf_name_data.push_back(output_lsa_updates.get_name_leafdata());
    if (output_lsa_updates_lsa.is_set || is_set(output_lsa_updates_lsa.yfilter)) leaf_name_data.push_back(output_lsa_updates_lsa.get_name_leafdata());
    if (input_lsa_acks.is_set || is_set(input_lsa_acks.yfilter)) leaf_name_data.push_back(input_lsa_acks.get_name_leafdata());
    if (input_lsa_acks_lsa.is_set || is_set(input_lsa_acks_lsa.yfilter)) leaf_name_data.push_back(input_lsa_acks_lsa.get_name_leafdata());
    if (output_lsa_acks.is_set || is_set(output_lsa_acks.yfilter)) leaf_name_data.push_back(output_lsa_acks.get_name_leafdata());
    if (output_lsa_acks_lsa.is_set || is_set(output_lsa_acks_lsa.yfilter)) leaf_name_data.push_back(output_lsa_acks_lsa.get_name_leafdata());
    if (checksum_errors.is_set || is_set(checksum_errors.yfilter)) leaf_name_data.push_back(checksum_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-packets")
    {
        input_packets = value;
        input_packets.value_namespace = name_space;
        input_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-packets")
    {
        output_packets = value;
        output_packets.value_namespace = name_space;
        output_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-hello-packets")
    {
        input_hello_packets = value;
        input_hello_packets.value_namespace = name_space;
        input_hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello-packets")
    {
        output_hello_packets = value;
        output_hello_packets.value_namespace = name_space;
        output_hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-db-ds")
    {
        input_db_ds = value;
        input_db_ds.value_namespace = name_space;
        input_db_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-db-ds-lsa")
    {
        input_db_ds_lsa = value;
        input_db_ds_lsa.value_namespace = name_space;
        input_db_ds_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-db-ds")
    {
        output_db_ds = value;
        output_db_ds.value_namespace = name_space;
        output_db_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-db-ds-lsa")
    {
        output_db_ds_lsa = value;
        output_db_ds_lsa.value_namespace = name_space;
        output_db_ds_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ls-requests")
    {
        input_ls_requests = value;
        input_ls_requests.value_namespace = name_space;
        input_ls_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ls-requests-lsa")
    {
        input_ls_requests_lsa = value;
        input_ls_requests_lsa.value_namespace = name_space;
        input_ls_requests_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ls-requests")
    {
        output_ls_requests = value;
        output_ls_requests.value_namespace = name_space;
        output_ls_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ls-requests-lsa")
    {
        output_ls_requests_lsa = value;
        output_ls_requests_lsa.value_namespace = name_space;
        output_ls_requests_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsa-updates")
    {
        input_lsa_updates = value;
        input_lsa_updates.value_namespace = name_space;
        input_lsa_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsa-updates-lsa")
    {
        input_lsa_updates_lsa = value;
        input_lsa_updates_lsa.value_namespace = name_space;
        input_lsa_updates_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsa-updates")
    {
        output_lsa_updates = value;
        output_lsa_updates.value_namespace = name_space;
        output_lsa_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsa-updates-lsa")
    {
        output_lsa_updates_lsa = value;
        output_lsa_updates_lsa.value_namespace = name_space;
        output_lsa_updates_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsa-acks")
    {
        input_lsa_acks = value;
        input_lsa_acks.value_namespace = name_space;
        input_lsa_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsa-acks-lsa")
    {
        input_lsa_acks_lsa = value;
        input_lsa_acks_lsa.value_namespace = name_space;
        input_lsa_acks_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsa-acks")
    {
        output_lsa_acks = value;
        output_lsa_acks.value_namespace = name_space;
        output_lsa_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsa-acks-lsa")
    {
        output_lsa_acks_lsa = value;
        output_lsa_acks_lsa.value_namespace = name_space;
        output_lsa_acks_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum-errors")
    {
        checksum_errors = value;
        checksum_errors.value_namespace = name_space;
        checksum_errors.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "input-packets")
    {
        input_packets.yfilter = yfilter;
    }
    if(value_path == "output-packets")
    {
        output_packets.yfilter = yfilter;
    }
    if(value_path == "input-hello-packets")
    {
        input_hello_packets.yfilter = yfilter;
    }
    if(value_path == "output-hello-packets")
    {
        output_hello_packets.yfilter = yfilter;
    }
    if(value_path == "input-db-ds")
    {
        input_db_ds.yfilter = yfilter;
    }
    if(value_path == "input-db-ds-lsa")
    {
        input_db_ds_lsa.yfilter = yfilter;
    }
    if(value_path == "output-db-ds")
    {
        output_db_ds.yfilter = yfilter;
    }
    if(value_path == "output-db-ds-lsa")
    {
        output_db_ds_lsa.yfilter = yfilter;
    }
    if(value_path == "input-ls-requests")
    {
        input_ls_requests.yfilter = yfilter;
    }
    if(value_path == "input-ls-requests-lsa")
    {
        input_ls_requests_lsa.yfilter = yfilter;
    }
    if(value_path == "output-ls-requests")
    {
        output_ls_requests.yfilter = yfilter;
    }
    if(value_path == "output-ls-requests-lsa")
    {
        output_ls_requests_lsa.yfilter = yfilter;
    }
    if(value_path == "input-lsa-updates")
    {
        input_lsa_updates.yfilter = yfilter;
    }
    if(value_path == "input-lsa-updates-lsa")
    {
        input_lsa_updates_lsa.yfilter = yfilter;
    }
    if(value_path == "output-lsa-updates")
    {
        output_lsa_updates.yfilter = yfilter;
    }
    if(value_path == "output-lsa-updates-lsa")
    {
        output_lsa_updates_lsa.yfilter = yfilter;
    }
    if(value_path == "input-lsa-acks")
    {
        input_lsa_acks.yfilter = yfilter;
    }
    if(value_path == "input-lsa-acks-lsa")
    {
        input_lsa_acks_lsa.yfilter = yfilter;
    }
    if(value_path == "output-lsa-acks")
    {
        output_lsa_acks.yfilter = yfilter;
    }
    if(value_path == "output-lsa-acks-lsa")
    {
        output_lsa_acks_lsa.yfilter = yfilter;
    }
    if(value_path == "checksum-errors")
    {
        checksum_errors.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "input-packets" || name == "output-packets" || name == "input-hello-packets" || name == "output-hello-packets" || name == "input-db-ds" || name == "input-db-ds-lsa" || name == "output-db-ds" || name == "output-db-ds-lsa" || name == "input-ls-requests" || name == "input-ls-requests-lsa" || name == "output-ls-requests" || name == "output-ls-requests-lsa" || name == "input-lsa-updates" || name == "input-lsa-updates-lsa" || name == "output-lsa-updates" || name == "output-lsa-updates-lsa" || name == "input-lsa-acks" || name == "input-lsa-acks-lsa" || name == "output-lsa-acks" || name == "output-lsa-acks-lsa" || name == "checksum-errors")
        return true;
    return false;
}

PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstances()
    :
    ospfv3_protocol_instance(this, {"instance_name"})
{

    yang_name = "ospfv3-protocol-instances"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::~Ospfv3ProtocolInstances()
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv3_protocol_instance.len(); index++)
    {
        if(ospfv3_protocol_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::has_operation() const
{
    for (std::size_t index=0; index<ospfv3_protocol_instance.len(); index++)
    {
        if(ospfv3_protocol_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv3-protocol-instance")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance>();
        c->parent = this;
        ospfv3_protocol_instance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfv3_protocol_instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv3-protocol-instance")
        return true;
    return false;
}

PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Ospfv3ProtocolInstance()
    :
    instance_name{YType::str, "instance-name"}
        ,
    samples(std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples>())
{
    samples->parent = this;

    yang_name = "ospfv3-protocol-instance"; yang_parent_name = "ospfv3-protocol-instances"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::~Ospfv3ProtocolInstance()
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::has_data() const
{
    if (is_presence_container) return true;
    return instance_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/ospf/ospfv3-protocol-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol-instance";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "instance-name")
        return true;
    return false;
}

PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Samples()
    :
    sample(this, {"sample_id"})
{

    yang_name = "samples"; yang_parent_name = "ospfv3-protocol-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::~Samples()
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    input_packets{YType::uint32, "input-packets"},
    output_packets{YType::uint32, "output-packets"},
    input_hello_packets{YType::uint32, "input-hello-packets"},
    output_hello_packets{YType::uint32, "output-hello-packets"},
    input_db_ds{YType::uint32, "input-db-ds"},
    input_db_ds_lsa{YType::uint32, "input-db-ds-lsa"},
    output_db_ds{YType::uint32, "output-db-ds"},
    output_db_ds_lsa{YType::uint32, "output-db-ds-lsa"},
    input_ls_requests{YType::uint32, "input-ls-requests"},
    input_ls_requests_lsa{YType::uint32, "input-ls-requests-lsa"},
    output_ls_requests{YType::uint32, "output-ls-requests"},
    output_ls_requests_lsa{YType::uint32, "output-ls-requests-lsa"},
    input_lsa_updates{YType::uint32, "input-lsa-updates"},
    input_lsa_updates_lsa{YType::uint32, "input-lsa-updates-lsa"},
    output_lsa_updates{YType::uint32, "output-lsa-updates"},
    output_lsa_updates_lsa{YType::uint32, "output-lsa-updates-lsa"},
    input_lsa_acks{YType::uint32, "input-lsa-acks"},
    input_lsa_acks_lsa{YType::uint32, "input-lsa-acks-lsa"},
    output_lsa_acks{YType::uint32, "output-lsa-acks"},
    output_lsa_acks_lsa{YType::uint32, "output-lsa-acks-lsa"}
{

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| input_packets.is_set
	|| output_packets.is_set
	|| input_hello_packets.is_set
	|| output_hello_packets.is_set
	|| input_db_ds.is_set
	|| input_db_ds_lsa.is_set
	|| output_db_ds.is_set
	|| output_db_ds_lsa.is_set
	|| input_ls_requests.is_set
	|| input_ls_requests_lsa.is_set
	|| output_ls_requests.is_set
	|| output_ls_requests_lsa.is_set
	|| input_lsa_updates.is_set
	|| input_lsa_updates_lsa.is_set
	|| output_lsa_updates.is_set
	|| output_lsa_updates_lsa.is_set
	|| input_lsa_acks.is_set
	|| input_lsa_acks_lsa.is_set
	|| output_lsa_acks.is_set
	|| output_lsa_acks_lsa.is_set;
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(input_packets.yfilter)
	|| ydk::is_set(output_packets.yfilter)
	|| ydk::is_set(input_hello_packets.yfilter)
	|| ydk::is_set(output_hello_packets.yfilter)
	|| ydk::is_set(input_db_ds.yfilter)
	|| ydk::is_set(input_db_ds_lsa.yfilter)
	|| ydk::is_set(output_db_ds.yfilter)
	|| ydk::is_set(output_db_ds_lsa.yfilter)
	|| ydk::is_set(input_ls_requests.yfilter)
	|| ydk::is_set(input_ls_requests_lsa.yfilter)
	|| ydk::is_set(output_ls_requests.yfilter)
	|| ydk::is_set(output_ls_requests_lsa.yfilter)
	|| ydk::is_set(input_lsa_updates.yfilter)
	|| ydk::is_set(input_lsa_updates_lsa.yfilter)
	|| ydk::is_set(output_lsa_updates.yfilter)
	|| ydk::is_set(output_lsa_updates_lsa.yfilter)
	|| ydk::is_set(input_lsa_acks.yfilter)
	|| ydk::is_set(input_lsa_acks_lsa.yfilter)
	|| ydk::is_set(output_lsa_acks.yfilter)
	|| ydk::is_set(output_lsa_acks_lsa.yfilter);
}

std::string PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (input_packets.is_set || is_set(input_packets.yfilter)) leaf_name_data.push_back(input_packets.get_name_leafdata());
    if (output_packets.is_set || is_set(output_packets.yfilter)) leaf_name_data.push_back(output_packets.get_name_leafdata());
    if (input_hello_packets.is_set || is_set(input_hello_packets.yfilter)) leaf_name_data.push_back(input_hello_packets.get_name_leafdata());
    if (output_hello_packets.is_set || is_set(output_hello_packets.yfilter)) leaf_name_data.push_back(output_hello_packets.get_name_leafdata());
    if (input_db_ds.is_set || is_set(input_db_ds.yfilter)) leaf_name_data.push_back(input_db_ds.get_name_leafdata());
    if (input_db_ds_lsa.is_set || is_set(input_db_ds_lsa.yfilter)) leaf_name_data.push_back(input_db_ds_lsa.get_name_leafdata());
    if (output_db_ds.is_set || is_set(output_db_ds.yfilter)) leaf_name_data.push_back(output_db_ds.get_name_leafdata());
    if (output_db_ds_lsa.is_set || is_set(output_db_ds_lsa.yfilter)) leaf_name_data.push_back(output_db_ds_lsa.get_name_leafdata());
    if (input_ls_requests.is_set || is_set(input_ls_requests.yfilter)) leaf_name_data.push_back(input_ls_requests.get_name_leafdata());
    if (input_ls_requests_lsa.is_set || is_set(input_ls_requests_lsa.yfilter)) leaf_name_data.push_back(input_ls_requests_lsa.get_name_leafdata());
    if (output_ls_requests.is_set || is_set(output_ls_requests.yfilter)) leaf_name_data.push_back(output_ls_requests.get_name_leafdata());
    if (output_ls_requests_lsa.is_set || is_set(output_ls_requests_lsa.yfilter)) leaf_name_data.push_back(output_ls_requests_lsa.get_name_leafdata());
    if (input_lsa_updates.is_set || is_set(input_lsa_updates.yfilter)) leaf_name_data.push_back(input_lsa_updates.get_name_leafdata());
    if (input_lsa_updates_lsa.is_set || is_set(input_lsa_updates_lsa.yfilter)) leaf_name_data.push_back(input_lsa_updates_lsa.get_name_leafdata());
    if (output_lsa_updates.is_set || is_set(output_lsa_updates.yfilter)) leaf_name_data.push_back(output_lsa_updates.get_name_leafdata());
    if (output_lsa_updates_lsa.is_set || is_set(output_lsa_updates_lsa.yfilter)) leaf_name_data.push_back(output_lsa_updates_lsa.get_name_leafdata());
    if (input_lsa_acks.is_set || is_set(input_lsa_acks.yfilter)) leaf_name_data.push_back(input_lsa_acks.get_name_leafdata());
    if (input_lsa_acks_lsa.is_set || is_set(input_lsa_acks_lsa.yfilter)) leaf_name_data.push_back(input_lsa_acks_lsa.get_name_leafdata());
    if (output_lsa_acks.is_set || is_set(output_lsa_acks.yfilter)) leaf_name_data.push_back(output_lsa_acks.get_name_leafdata());
    if (output_lsa_acks_lsa.is_set || is_set(output_lsa_acks_lsa.yfilter)) leaf_name_data.push_back(output_lsa_acks_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-packets")
    {
        input_packets = value;
        input_packets.value_namespace = name_space;
        input_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-packets")
    {
        output_packets = value;
        output_packets.value_namespace = name_space;
        output_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-hello-packets")
    {
        input_hello_packets = value;
        input_hello_packets.value_namespace = name_space;
        input_hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello-packets")
    {
        output_hello_packets = value;
        output_hello_packets.value_namespace = name_space;
        output_hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-db-ds")
    {
        input_db_ds = value;
        input_db_ds.value_namespace = name_space;
        input_db_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-db-ds-lsa")
    {
        input_db_ds_lsa = value;
        input_db_ds_lsa.value_namespace = name_space;
        input_db_ds_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-db-ds")
    {
        output_db_ds = value;
        output_db_ds.value_namespace = name_space;
        output_db_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-db-ds-lsa")
    {
        output_db_ds_lsa = value;
        output_db_ds_lsa.value_namespace = name_space;
        output_db_ds_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ls-requests")
    {
        input_ls_requests = value;
        input_ls_requests.value_namespace = name_space;
        input_ls_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ls-requests-lsa")
    {
        input_ls_requests_lsa = value;
        input_ls_requests_lsa.value_namespace = name_space;
        input_ls_requests_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ls-requests")
    {
        output_ls_requests = value;
        output_ls_requests.value_namespace = name_space;
        output_ls_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ls-requests-lsa")
    {
        output_ls_requests_lsa = value;
        output_ls_requests_lsa.value_namespace = name_space;
        output_ls_requests_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsa-updates")
    {
        input_lsa_updates = value;
        input_lsa_updates.value_namespace = name_space;
        input_lsa_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsa-updates-lsa")
    {
        input_lsa_updates_lsa = value;
        input_lsa_updates_lsa.value_namespace = name_space;
        input_lsa_updates_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsa-updates")
    {
        output_lsa_updates = value;
        output_lsa_updates.value_namespace = name_space;
        output_lsa_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsa-updates-lsa")
    {
        output_lsa_updates_lsa = value;
        output_lsa_updates_lsa.value_namespace = name_space;
        output_lsa_updates_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsa-acks")
    {
        input_lsa_acks = value;
        input_lsa_acks.value_namespace = name_space;
        input_lsa_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsa-acks-lsa")
    {
        input_lsa_acks_lsa = value;
        input_lsa_acks_lsa.value_namespace = name_space;
        input_lsa_acks_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsa-acks")
    {
        output_lsa_acks = value;
        output_lsa_acks.value_namespace = name_space;
        output_lsa_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsa-acks-lsa")
    {
        output_lsa_acks_lsa = value;
        output_lsa_acks_lsa.value_namespace = name_space;
        output_lsa_acks_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "input-packets")
    {
        input_packets.yfilter = yfilter;
    }
    if(value_path == "output-packets")
    {
        output_packets.yfilter = yfilter;
    }
    if(value_path == "input-hello-packets")
    {
        input_hello_packets.yfilter = yfilter;
    }
    if(value_path == "output-hello-packets")
    {
        output_hello_packets.yfilter = yfilter;
    }
    if(value_path == "input-db-ds")
    {
        input_db_ds.yfilter = yfilter;
    }
    if(value_path == "input-db-ds-lsa")
    {
        input_db_ds_lsa.yfilter = yfilter;
    }
    if(value_path == "output-db-ds")
    {
        output_db_ds.yfilter = yfilter;
    }
    if(value_path == "output-db-ds-lsa")
    {
        output_db_ds_lsa.yfilter = yfilter;
    }
    if(value_path == "input-ls-requests")
    {
        input_ls_requests.yfilter = yfilter;
    }
    if(value_path == "input-ls-requests-lsa")
    {
        input_ls_requests_lsa.yfilter = yfilter;
    }
    if(value_path == "output-ls-requests")
    {
        output_ls_requests.yfilter = yfilter;
    }
    if(value_path == "output-ls-requests-lsa")
    {
        output_ls_requests_lsa.yfilter = yfilter;
    }
    if(value_path == "input-lsa-updates")
    {
        input_lsa_updates.yfilter = yfilter;
    }
    if(value_path == "input-lsa-updates-lsa")
    {
        input_lsa_updates_lsa.yfilter = yfilter;
    }
    if(value_path == "output-lsa-updates")
    {
        output_lsa_updates.yfilter = yfilter;
    }
    if(value_path == "output-lsa-updates-lsa")
    {
        output_lsa_updates_lsa.yfilter = yfilter;
    }
    if(value_path == "input-lsa-acks")
    {
        input_lsa_acks.yfilter = yfilter;
    }
    if(value_path == "input-lsa-acks-lsa")
    {
        input_lsa_acks_lsa.yfilter = yfilter;
    }
    if(value_path == "output-lsa-acks")
    {
        output_lsa_acks.yfilter = yfilter;
    }
    if(value_path == "output-lsa-acks-lsa")
    {
        output_lsa_acks_lsa.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "input-packets" || name == "output-packets" || name == "input-hello-packets" || name == "output-hello-packets" || name == "input-db-ds" || name == "input-db-ds-lsa" || name == "output-db-ds" || name == "output-db-ds-lsa" || name == "input-ls-requests" || name == "input-ls-requests-lsa" || name == "output-ls-requests" || name == "output-ls-requests-lsa" || name == "input-lsa-updates" || name == "input-lsa-updates-lsa" || name == "output-lsa-updates" || name == "output-lsa-updates-lsa" || name == "input-lsa-acks" || name == "input-lsa-acks-lsa" || name == "output-lsa-acks" || name == "output-lsa-acks-lsa")
        return true;
    return false;
}

PerfMgmt::Periodic::Mpls::Mpls()
    :
    ldp_neighbors(std::make_shared<PerfMgmt::Periodic::Mpls::LdpNeighbors>())
{
    ldp_neighbors->parent = this;

    yang_name = "mpls"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Mpls::~Mpls()
{
}

bool PerfMgmt::Periodic::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return (ldp_neighbors !=  nullptr && ldp_neighbors->has_data());
}

bool PerfMgmt::Periodic::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (ldp_neighbors !=  nullptr && ldp_neighbors->has_operation());
}

std::string PerfMgmt::Periodic::Mpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-neighbors")
    {
        if(ldp_neighbors == nullptr)
        {
            ldp_neighbors = std::make_shared<PerfMgmt::Periodic::Mpls::LdpNeighbors>();
        }
        return ldp_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ldp_neighbors != nullptr)
    {
        children["ldp-neighbors"] = ldp_neighbors;
    }

    return children;
}

void PerfMgmt::Periodic::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp-neighbors")
        return true;
    return false;
}

PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbors()
    :
    ldp_neighbor(this, {"nbr"})
{

    yang_name = "ldp-neighbors"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Mpls::LdpNeighbors::~LdpNeighbors()
{
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ldp_neighbor.len(); index++)
    {
        if(ldp_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::has_operation() const
{
    for (std::size_t index=0; index<ldp_neighbor.len(); index++)
    {
        if(ldp_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Mpls::LdpNeighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Mpls::LdpNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Mpls::LdpNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Mpls::LdpNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-neighbor")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor>();
        c->parent = this;
        ldp_neighbor.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Mpls::LdpNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ldp_neighbor.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Mpls::LdpNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Mpls::LdpNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp-neighbor")
        return true;
    return false;
}

PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::LdpNeighbor()
    :
    nbr{YType::str, "nbr"}
        ,
    samples(std::make_shared<PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples>())
{
    samples->parent = this;

    yang_name = "ldp-neighbor"; yang_parent_name = "ldp-neighbors"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::~LdpNeighbor()
{
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return nbr.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbr.yfilter)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/mpls/ldp-neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-neighbor";
    ADD_KEY_TOKEN(nbr, "nbr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbr.is_set || is_set(nbr.yfilter)) leaf_name_data.push_back(nbr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbr")
    {
        nbr = value;
        nbr.value_namespace = name_space;
        nbr.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbr")
    {
        nbr.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "nbr")
        return true;
    return false;
}

PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Samples()
    :
    sample(this, {"sample_id"})
{

    yang_name = "samples"; yang_parent_name = "ldp-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::~Samples()
{
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    total_msgs_sent{YType::uint16, "total-msgs-sent"},
    total_msgs_rcvd{YType::uint16, "total-msgs-rcvd"},
    init_msgs_sent{YType::uint16, "init-msgs-sent"},
    init_msgs_rcvd{YType::uint16, "init-msgs-rcvd"},
    address_msgs_sent{YType::uint16, "address-msgs-sent"},
    address_msgs_rcvd{YType::uint16, "address-msgs-rcvd"},
    address_withdraw_msgs_sent{YType::uint16, "address-withdraw-msgs-sent"},
    address_withdraw_msgs_rcvd{YType::uint16, "address-withdraw-msgs-rcvd"},
    label_mapping_msgs_sent{YType::uint16, "label-mapping-msgs-sent"},
    label_mapping_msgs_rcvd{YType::uint16, "label-mapping-msgs-rcvd"},
    label_withdraw_msgs_sent{YType::uint16, "label-withdraw-msgs-sent"},
    label_withdraw_msgs_rcvd{YType::uint16, "label-withdraw-msgs-rcvd"},
    label_release_msgs_sent{YType::uint16, "label-release-msgs-sent"},
    label_release_msgs_rcvd{YType::uint16, "label-release-msgs-rcvd"},
    notification_msgs_sent{YType::uint16, "notification-msgs-sent"},
    notification_msgs_rcvd{YType::uint16, "notification-msgs-rcvd"},
    keepalive_msgs_sent{YType::uint16, "keepalive-msgs-sent"},
    keepalive_msgs_rcvd{YType::uint16, "keepalive-msgs-rcvd"}
{

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| total_msgs_sent.is_set
	|| total_msgs_rcvd.is_set
	|| init_msgs_sent.is_set
	|| init_msgs_rcvd.is_set
	|| address_msgs_sent.is_set
	|| address_msgs_rcvd.is_set
	|| address_withdraw_msgs_sent.is_set
	|| address_withdraw_msgs_rcvd.is_set
	|| label_mapping_msgs_sent.is_set
	|| label_mapping_msgs_rcvd.is_set
	|| label_withdraw_msgs_sent.is_set
	|| label_withdraw_msgs_rcvd.is_set
	|| label_release_msgs_sent.is_set
	|| label_release_msgs_rcvd.is_set
	|| notification_msgs_sent.is_set
	|| notification_msgs_rcvd.is_set
	|| keepalive_msgs_sent.is_set
	|| keepalive_msgs_rcvd.is_set;
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(total_msgs_sent.yfilter)
	|| ydk::is_set(total_msgs_rcvd.yfilter)
	|| ydk::is_set(init_msgs_sent.yfilter)
	|| ydk::is_set(init_msgs_rcvd.yfilter)
	|| ydk::is_set(address_msgs_sent.yfilter)
	|| ydk::is_set(address_msgs_rcvd.yfilter)
	|| ydk::is_set(address_withdraw_msgs_sent.yfilter)
	|| ydk::is_set(address_withdraw_msgs_rcvd.yfilter)
	|| ydk::is_set(label_mapping_msgs_sent.yfilter)
	|| ydk::is_set(label_mapping_msgs_rcvd.yfilter)
	|| ydk::is_set(label_withdraw_msgs_sent.yfilter)
	|| ydk::is_set(label_withdraw_msgs_rcvd.yfilter)
	|| ydk::is_set(label_release_msgs_sent.yfilter)
	|| ydk::is_set(label_release_msgs_rcvd.yfilter)
	|| ydk::is_set(notification_msgs_sent.yfilter)
	|| ydk::is_set(notification_msgs_rcvd.yfilter)
	|| ydk::is_set(keepalive_msgs_sent.yfilter)
	|| ydk::is_set(keepalive_msgs_rcvd.yfilter);
}

std::string PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (total_msgs_sent.is_set || is_set(total_msgs_sent.yfilter)) leaf_name_data.push_back(total_msgs_sent.get_name_leafdata());
    if (total_msgs_rcvd.is_set || is_set(total_msgs_rcvd.yfilter)) leaf_name_data.push_back(total_msgs_rcvd.get_name_leafdata());
    if (init_msgs_sent.is_set || is_set(init_msgs_sent.yfilter)) leaf_name_data.push_back(init_msgs_sent.get_name_leafdata());
    if (init_msgs_rcvd.is_set || is_set(init_msgs_rcvd.yfilter)) leaf_name_data.push_back(init_msgs_rcvd.get_name_leafdata());
    if (address_msgs_sent.is_set || is_set(address_msgs_sent.yfilter)) leaf_name_data.push_back(address_msgs_sent.get_name_leafdata());
    if (address_msgs_rcvd.is_set || is_set(address_msgs_rcvd.yfilter)) leaf_name_data.push_back(address_msgs_rcvd.get_name_leafdata());
    if (address_withdraw_msgs_sent.is_set || is_set(address_withdraw_msgs_sent.yfilter)) leaf_name_data.push_back(address_withdraw_msgs_sent.get_name_leafdata());
    if (address_withdraw_msgs_rcvd.is_set || is_set(address_withdraw_msgs_rcvd.yfilter)) leaf_name_data.push_back(address_withdraw_msgs_rcvd.get_name_leafdata());
    if (label_mapping_msgs_sent.is_set || is_set(label_mapping_msgs_sent.yfilter)) leaf_name_data.push_back(label_mapping_msgs_sent.get_name_leafdata());
    if (label_mapping_msgs_rcvd.is_set || is_set(label_mapping_msgs_rcvd.yfilter)) leaf_name_data.push_back(label_mapping_msgs_rcvd.get_name_leafdata());
    if (label_withdraw_msgs_sent.is_set || is_set(label_withdraw_msgs_sent.yfilter)) leaf_name_data.push_back(label_withdraw_msgs_sent.get_name_leafdata());
    if (label_withdraw_msgs_rcvd.is_set || is_set(label_withdraw_msgs_rcvd.yfilter)) leaf_name_data.push_back(label_withdraw_msgs_rcvd.get_name_leafdata());
    if (label_release_msgs_sent.is_set || is_set(label_release_msgs_sent.yfilter)) leaf_name_data.push_back(label_release_msgs_sent.get_name_leafdata());
    if (label_release_msgs_rcvd.is_set || is_set(label_release_msgs_rcvd.yfilter)) leaf_name_data.push_back(label_release_msgs_rcvd.get_name_leafdata());
    if (notification_msgs_sent.is_set || is_set(notification_msgs_sent.yfilter)) leaf_name_data.push_back(notification_msgs_sent.get_name_leafdata());
    if (notification_msgs_rcvd.is_set || is_set(notification_msgs_rcvd.yfilter)) leaf_name_data.push_back(notification_msgs_rcvd.get_name_leafdata());
    if (keepalive_msgs_sent.is_set || is_set(keepalive_msgs_sent.yfilter)) leaf_name_data.push_back(keepalive_msgs_sent.get_name_leafdata());
    if (keepalive_msgs_rcvd.is_set || is_set(keepalive_msgs_rcvd.yfilter)) leaf_name_data.push_back(keepalive_msgs_rcvd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-msgs-sent")
    {
        total_msgs_sent = value;
        total_msgs_sent.value_namespace = name_space;
        total_msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-msgs-rcvd")
    {
        total_msgs_rcvd = value;
        total_msgs_rcvd.value_namespace = name_space;
        total_msgs_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-msgs-sent")
    {
        init_msgs_sent = value;
        init_msgs_sent.value_namespace = name_space;
        init_msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-msgs-rcvd")
    {
        init_msgs_rcvd = value;
        init_msgs_rcvd.value_namespace = name_space;
        init_msgs_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-msgs-sent")
    {
        address_msgs_sent = value;
        address_msgs_sent.value_namespace = name_space;
        address_msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-msgs-rcvd")
    {
        address_msgs_rcvd = value;
        address_msgs_rcvd.value_namespace = name_space;
        address_msgs_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-withdraw-msgs-sent")
    {
        address_withdraw_msgs_sent = value;
        address_withdraw_msgs_sent.value_namespace = name_space;
        address_withdraw_msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-withdraw-msgs-rcvd")
    {
        address_withdraw_msgs_rcvd = value;
        address_withdraw_msgs_rcvd.value_namespace = name_space;
        address_withdraw_msgs_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-mapping-msgs-sent")
    {
        label_mapping_msgs_sent = value;
        label_mapping_msgs_sent.value_namespace = name_space;
        label_mapping_msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-mapping-msgs-rcvd")
    {
        label_mapping_msgs_rcvd = value;
        label_mapping_msgs_rcvd.value_namespace = name_space;
        label_mapping_msgs_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-withdraw-msgs-sent")
    {
        label_withdraw_msgs_sent = value;
        label_withdraw_msgs_sent.value_namespace = name_space;
        label_withdraw_msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-withdraw-msgs-rcvd")
    {
        label_withdraw_msgs_rcvd = value;
        label_withdraw_msgs_rcvd.value_namespace = name_space;
        label_withdraw_msgs_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-release-msgs-sent")
    {
        label_release_msgs_sent = value;
        label_release_msgs_sent.value_namespace = name_space;
        label_release_msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-release-msgs-rcvd")
    {
        label_release_msgs_rcvd = value;
        label_release_msgs_rcvd.value_namespace = name_space;
        label_release_msgs_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-msgs-sent")
    {
        notification_msgs_sent = value;
        notification_msgs_sent.value_namespace = name_space;
        notification_msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-msgs-rcvd")
    {
        notification_msgs_rcvd = value;
        notification_msgs_rcvd.value_namespace = name_space;
        notification_msgs_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-msgs-sent")
    {
        keepalive_msgs_sent = value;
        keepalive_msgs_sent.value_namespace = name_space;
        keepalive_msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-msgs-rcvd")
    {
        keepalive_msgs_rcvd = value;
        keepalive_msgs_rcvd.value_namespace = name_space;
        keepalive_msgs_rcvd.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "total-msgs-sent")
    {
        total_msgs_sent.yfilter = yfilter;
    }
    if(value_path == "total-msgs-rcvd")
    {
        total_msgs_rcvd.yfilter = yfilter;
    }
    if(value_path == "init-msgs-sent")
    {
        init_msgs_sent.yfilter = yfilter;
    }
    if(value_path == "init-msgs-rcvd")
    {
        init_msgs_rcvd.yfilter = yfilter;
    }
    if(value_path == "address-msgs-sent")
    {
        address_msgs_sent.yfilter = yfilter;
    }
    if(value_path == "address-msgs-rcvd")
    {
        address_msgs_rcvd.yfilter = yfilter;
    }
    if(value_path == "address-withdraw-msgs-sent")
    {
        address_withdraw_msgs_sent.yfilter = yfilter;
    }
    if(value_path == "address-withdraw-msgs-rcvd")
    {
        address_withdraw_msgs_rcvd.yfilter = yfilter;
    }
    if(value_path == "label-mapping-msgs-sent")
    {
        label_mapping_msgs_sent.yfilter = yfilter;
    }
    if(value_path == "label-mapping-msgs-rcvd")
    {
        label_mapping_msgs_rcvd.yfilter = yfilter;
    }
    if(value_path == "label-withdraw-msgs-sent")
    {
        label_withdraw_msgs_sent.yfilter = yfilter;
    }
    if(value_path == "label-withdraw-msgs-rcvd")
    {
        label_withdraw_msgs_rcvd.yfilter = yfilter;
    }
    if(value_path == "label-release-msgs-sent")
    {
        label_release_msgs_sent.yfilter = yfilter;
    }
    if(value_path == "label-release-msgs-rcvd")
    {
        label_release_msgs_rcvd.yfilter = yfilter;
    }
    if(value_path == "notification-msgs-sent")
    {
        notification_msgs_sent.yfilter = yfilter;
    }
    if(value_path == "notification-msgs-rcvd")
    {
        notification_msgs_rcvd.yfilter = yfilter;
    }
    if(value_path == "keepalive-msgs-sent")
    {
        keepalive_msgs_sent.yfilter = yfilter;
    }
    if(value_path == "keepalive-msgs-rcvd")
    {
        keepalive_msgs_rcvd.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "total-msgs-sent" || name == "total-msgs-rcvd" || name == "init-msgs-sent" || name == "init-msgs-rcvd" || name == "address-msgs-sent" || name == "address-msgs-rcvd" || name == "address-withdraw-msgs-sent" || name == "address-withdraw-msgs-rcvd" || name == "label-mapping-msgs-sent" || name == "label-mapping-msgs-rcvd" || name == "label-withdraw-msgs-sent" || name == "label-withdraw-msgs-rcvd" || name == "label-release-msgs-sent" || name == "label-release-msgs-rcvd" || name == "notification-msgs-sent" || name == "notification-msgs-rcvd" || name == "keepalive-msgs-sent" || name == "keepalive-msgs-rcvd")
        return true;
    return false;
}

PerfMgmt::Periodic::Nodes::Nodes()
    :
    node(this, {"node_id"})
{

    yang_name = "nodes"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Nodes::~Nodes()
{
}

bool PerfMgmt::Periodic::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : node.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

PerfMgmt::Periodic::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"}
        ,
    sample_xr(std::make_shared<PerfMgmt::Periodic::Nodes::Node::SampleXr>())
    , processes(std::make_shared<PerfMgmt::Periodic::Nodes::Node::Processes>())
    , samples(std::make_shared<PerfMgmt::Periodic::Nodes::Node::Samples>())
{
    sample_xr->parent = this;
    processes->parent = this;
    samples->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Nodes::Node::~Node()
{
}

bool PerfMgmt::Periodic::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_id.is_set
	|| (sample_xr !=  nullptr && sample_xr->has_data())
	|| (processes !=  nullptr && processes->has_data())
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Periodic::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (sample_xr !=  nullptr && sample_xr->has_operation())
	|| (processes !=  nullptr && processes->has_operation())
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Periodic::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_id, "node-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample-xr")
    {
        if(sample_xr == nullptr)
        {
            sample_xr = std::make_shared<PerfMgmt::Periodic::Nodes::Node::SampleXr>();
        }
        return sample_xr;
    }

    if(child_yang_name == "processes")
    {
        if(processes == nullptr)
        {
            processes = std::make_shared<PerfMgmt::Periodic::Nodes::Node::Processes>();
        }
        return processes;
    }

    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<PerfMgmt::Periodic::Nodes::Node::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sample_xr != nullptr)
    {
        children["sample-xr"] = sample_xr;
    }

    if(processes != nullptr)
    {
        children["processes"] = processes;
    }

    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Periodic::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-xr" || name == "processes" || name == "samples" || name == "node-id")
        return true;
    return false;
}

PerfMgmt::Periodic::Nodes::Node::SampleXr::SampleXr()
    :
    sample(this, {"sample_id"})
{

    yang_name = "sample-xr"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Nodes::Node::SampleXr::~SampleXr()
{
}

bool PerfMgmt::Periodic::Nodes::Node::SampleXr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Nodes::Node::SampleXr::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Nodes::Node::SampleXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Nodes::Node::SampleXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::Node::SampleXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Nodes::Node::SampleXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Nodes::Node::SampleXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Nodes::Node::SampleXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Nodes::Node::SampleXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    no_processes{YType::uint32, "no-processes"},
    average_cpu_used{YType::uint32, "average-cpu-used"}
{

    yang_name = "sample"; yang_parent_name = "sample-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| no_processes.is_set
	|| average_cpu_used.is_set;
}

bool PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(no_processes.yfilter)
	|| ydk::is_set(average_cpu_used.yfilter);
}

std::string PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (no_processes.is_set || is_set(no_processes.yfilter)) leaf_name_data.push_back(no_processes.get_name_leafdata());
    if (average_cpu_used.is_set || is_set(average_cpu_used.yfilter)) leaf_name_data.push_back(average_cpu_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-processes")
    {
        no_processes = value;
        no_processes.value_namespace = name_space;
        no_processes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-cpu-used")
    {
        average_cpu_used = value;
        average_cpu_used.value_namespace = name_space;
        average_cpu_used.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "no-processes")
    {
        no_processes.yfilter = yfilter;
    }
    if(value_path == "average-cpu-used")
    {
        average_cpu_used.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "no-processes" || name == "average-cpu-used")
        return true;
    return false;
}

PerfMgmt::Periodic::Nodes::Node::Processes::Processes()
    :
    process(this, {"process_id"})
{

    yang_name = "processes"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Nodes::Node::Processes::~Processes()
{
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Nodes::Node::Processes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Nodes::Node::Processes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::Node::Processes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Nodes::Node::Processes::Process>();
        c->parent = this;
        process.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Nodes::Node::Processes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : process.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Nodes::Node::Processes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Nodes::Node::Processes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process")
        return true;
    return false;
}

PerfMgmt::Periodic::Nodes::Node::Processes::Process::Process()
    :
    process_id{YType::int32, "process-id"}
        ,
    samples(std::make_shared<PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples>())
{
    samples->parent = this;

    yang_name = "process"; yang_parent_name = "processes"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Nodes::Node::Processes::Process::~Process()
{
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::Process::has_data() const
{
    if (is_presence_container) return true;
    return process_id.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::Process::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Periodic::Nodes::Node::Processes::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    ADD_KEY_TOKEN(process_id, "process-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Nodes::Node::Processes::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::Node::Processes::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Nodes::Node::Processes::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Periodic::Nodes::Node::Processes::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Nodes::Node::Processes::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "process-id")
        return true;
    return false;
}

PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Samples()
    :
    sample(this, {"sample_id"})
{

    yang_name = "samples"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::~Samples()
{
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    peak_memory{YType::uint32, "peak-memory"},
    average_cpu_used{YType::uint32, "average-cpu-used"},
    no_threads{YType::uint32, "no-threads"}
{

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| peak_memory.is_set
	|| average_cpu_used.is_set
	|| no_threads.is_set;
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(peak_memory.yfilter)
	|| ydk::is_set(average_cpu_used.yfilter)
	|| ydk::is_set(no_threads.yfilter);
}

std::string PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (peak_memory.is_set || is_set(peak_memory.yfilter)) leaf_name_data.push_back(peak_memory.get_name_leafdata());
    if (average_cpu_used.is_set || is_set(average_cpu_used.yfilter)) leaf_name_data.push_back(average_cpu_used.get_name_leafdata());
    if (no_threads.is_set || is_set(no_threads.yfilter)) leaf_name_data.push_back(no_threads.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-memory")
    {
        peak_memory = value;
        peak_memory.value_namespace = name_space;
        peak_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-cpu-used")
    {
        average_cpu_used = value;
        average_cpu_used.value_namespace = name_space;
        average_cpu_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-threads")
    {
        no_threads = value;
        no_threads.value_namespace = name_space;
        no_threads.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "peak-memory")
    {
        peak_memory.yfilter = yfilter;
    }
    if(value_path == "average-cpu-used")
    {
        average_cpu_used.yfilter = yfilter;
    }
    if(value_path == "no-threads")
    {
        no_threads.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "peak-memory" || name == "average-cpu-used" || name == "no-threads")
        return true;
    return false;
}

PerfMgmt::Periodic::Nodes::Node::Samples::Samples()
    :
    sample(this, {"sample_id"})
{

    yang_name = "samples"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Nodes::Node::Samples::~Samples()
{
}

bool PerfMgmt::Periodic::Nodes::Node::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Nodes::Node::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Nodes::Node::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Nodes::Node::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::Node::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Nodes::Node::Samples::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Nodes::Node::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Nodes::Node::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Nodes::Node::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Nodes::Node::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Periodic::Nodes::Node::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    curr_memory{YType::uint32, "curr-memory"},
    peak_memory{YType::uint32, "peak-memory"}
{

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Nodes::Node::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Nodes::Node::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| curr_memory.is_set
	|| peak_memory.is_set;
}

bool PerfMgmt::Periodic::Nodes::Node::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(curr_memory.yfilter)
	|| ydk::is_set(peak_memory.yfilter);
}

std::string PerfMgmt::Periodic::Nodes::Node::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Nodes::Node::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (curr_memory.is_set || is_set(curr_memory.yfilter)) leaf_name_data.push_back(curr_memory.get_name_leafdata());
    if (peak_memory.is_set || is_set(peak_memory.yfilter)) leaf_name_data.push_back(peak_memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::Node::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Nodes::Node::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Periodic::Nodes::Node::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curr-memory")
    {
        curr_memory = value;
        curr_memory.value_namespace = name_space;
        curr_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-memory")
    {
        peak_memory = value;
        peak_memory.value_namespace = name_space;
        peak_memory.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Nodes::Node::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "curr-memory")
    {
        curr_memory.yfilter = yfilter;
    }
    if(value_path == "peak-memory")
    {
        peak_memory.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Nodes::Node::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "curr-memory" || name == "peak-memory")
        return true;
    return false;
}

PerfMgmt::Periodic::Bgp::Bgp()
    :
    bgp_neighbors(std::make_shared<PerfMgmt::Periodic::Bgp::BgpNeighbors>())
{
    bgp_neighbors->parent = this;

    yang_name = "bgp"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Bgp::~Bgp()
{
}

bool PerfMgmt::Periodic::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return (bgp_neighbors !=  nullptr && bgp_neighbors->has_data());
}

bool PerfMgmt::Periodic::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (bgp_neighbors !=  nullptr && bgp_neighbors->has_operation());
}

std::string PerfMgmt::Periodic::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-neighbors")
    {
        if(bgp_neighbors == nullptr)
        {
            bgp_neighbors = std::make_shared<PerfMgmt::Periodic::Bgp::BgpNeighbors>();
        }
        return bgp_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bgp_neighbors != nullptr)
    {
        children["bgp-neighbors"] = bgp_neighbors;
    }

    return children;
}

void PerfMgmt::Periodic::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-neighbors")
        return true;
    return false;
}

PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbors()
    :
    bgp_neighbor(this, {"ip_address"})
{

    yang_name = "bgp-neighbors"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Bgp::BgpNeighbors::~BgpNeighbors()
{
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_neighbor.len(); index++)
    {
        if(bgp_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::has_operation() const
{
    for (std::size_t index=0; index<bgp_neighbor.len(); index++)
    {
        if(bgp_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Bgp::BgpNeighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Bgp::BgpNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Bgp::BgpNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Bgp::BgpNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-neighbor")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor>();
        c->parent = this;
        bgp_neighbor.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Bgp::BgpNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bgp_neighbor.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Bgp::BgpNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Bgp::BgpNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-neighbor")
        return true;
    return false;
}

PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::BgpNeighbor()
    :
    ip_address{YType::str, "ip-address"}
        ,
    samples(std::make_shared<PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples>())
{
    samples->parent = this;

    yang_name = "bgp-neighbor"; yang_parent_name = "bgp-neighbors"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::~BgpNeighbor()
{
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/bgp/bgp-neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "ip-address")
        return true;
    return false;
}

PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Samples()
    :
    sample(this, {"sample_id"})
{

    yang_name = "samples"; yang_parent_name = "bgp-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::~Samples()
{
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    input_messages{YType::uint32, "input-messages"},
    output_messages{YType::uint32, "output-messages"},
    input_update_messages{YType::uint32, "input-update-messages"},
    output_update_messages{YType::uint32, "output-update-messages"},
    conn_established{YType::uint32, "conn-established"},
    conn_dropped{YType::uint32, "conn-dropped"},
    errors_received{YType::uint32, "errors-received"},
    errors_sent{YType::uint32, "errors-sent"}
{

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| input_messages.is_set
	|| output_messages.is_set
	|| input_update_messages.is_set
	|| output_update_messages.is_set
	|| conn_established.is_set
	|| conn_dropped.is_set
	|| errors_received.is_set
	|| errors_sent.is_set;
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(input_messages.yfilter)
	|| ydk::is_set(output_messages.yfilter)
	|| ydk::is_set(input_update_messages.yfilter)
	|| ydk::is_set(output_update_messages.yfilter)
	|| ydk::is_set(conn_established.yfilter)
	|| ydk::is_set(conn_dropped.yfilter)
	|| ydk::is_set(errors_received.yfilter)
	|| ydk::is_set(errors_sent.yfilter);
}

std::string PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (input_messages.is_set || is_set(input_messages.yfilter)) leaf_name_data.push_back(input_messages.get_name_leafdata());
    if (output_messages.is_set || is_set(output_messages.yfilter)) leaf_name_data.push_back(output_messages.get_name_leafdata());
    if (input_update_messages.is_set || is_set(input_update_messages.yfilter)) leaf_name_data.push_back(input_update_messages.get_name_leafdata());
    if (output_update_messages.is_set || is_set(output_update_messages.yfilter)) leaf_name_data.push_back(output_update_messages.get_name_leafdata());
    if (conn_established.is_set || is_set(conn_established.yfilter)) leaf_name_data.push_back(conn_established.get_name_leafdata());
    if (conn_dropped.is_set || is_set(conn_dropped.yfilter)) leaf_name_data.push_back(conn_dropped.get_name_leafdata());
    if (errors_received.is_set || is_set(errors_received.yfilter)) leaf_name_data.push_back(errors_received.get_name_leafdata());
    if (errors_sent.is_set || is_set(errors_sent.yfilter)) leaf_name_data.push_back(errors_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-messages")
    {
        input_messages = value;
        input_messages.value_namespace = name_space;
        input_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-messages")
    {
        output_messages = value;
        output_messages.value_namespace = name_space;
        output_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-update-messages")
    {
        input_update_messages = value;
        input_update_messages.value_namespace = name_space;
        input_update_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-update-messages")
    {
        output_update_messages = value;
        output_update_messages.value_namespace = name_space;
        output_update_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-established")
    {
        conn_established = value;
        conn_established.value_namespace = name_space;
        conn_established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-dropped")
    {
        conn_dropped = value;
        conn_dropped.value_namespace = name_space;
        conn_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors-received")
    {
        errors_received = value;
        errors_received.value_namespace = name_space;
        errors_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors-sent")
    {
        errors_sent = value;
        errors_sent.value_namespace = name_space;
        errors_sent.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "input-messages")
    {
        input_messages.yfilter = yfilter;
    }
    if(value_path == "output-messages")
    {
        output_messages.yfilter = yfilter;
    }
    if(value_path == "input-update-messages")
    {
        input_update_messages.yfilter = yfilter;
    }
    if(value_path == "output-update-messages")
    {
        output_update_messages.yfilter = yfilter;
    }
    if(value_path == "conn-established")
    {
        conn_established.yfilter = yfilter;
    }
    if(value_path == "conn-dropped")
    {
        conn_dropped.yfilter = yfilter;
    }
    if(value_path == "errors-received")
    {
        errors_received.yfilter = yfilter;
    }
    if(value_path == "errors-sent")
    {
        errors_sent.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "input-messages" || name == "output-messages" || name == "input-update-messages" || name == "output-update-messages" || name == "conn-established" || name == "conn-dropped" || name == "errors-received" || name == "errors-sent")
        return true;
    return false;
}

PerfMgmt::Periodic::Interface::Interface()
    :
    generic_counter_interfaces(std::make_shared<PerfMgmt::Periodic::Interface::GenericCounterInterfaces>())
    , basic_counter_interfaces(std::make_shared<PerfMgmt::Periodic::Interface::BasicCounterInterfaces>())
    , data_rate_interfaces(std::make_shared<PerfMgmt::Periodic::Interface::DataRateInterfaces>())
{
    generic_counter_interfaces->parent = this;
    basic_counter_interfaces->parent = this;
    data_rate_interfaces->parent = this;

    yang_name = "interface"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Interface::~Interface()
{
}

bool PerfMgmt::Periodic::Interface::has_data() const
{
    if (is_presence_container) return true;
    return (generic_counter_interfaces !=  nullptr && generic_counter_interfaces->has_data())
	|| (basic_counter_interfaces !=  nullptr && basic_counter_interfaces->has_data())
	|| (data_rate_interfaces !=  nullptr && data_rate_interfaces->has_data());
}

bool PerfMgmt::Periodic::Interface::has_operation() const
{
    return is_set(yfilter)
	|| (generic_counter_interfaces !=  nullptr && generic_counter_interfaces->has_operation())
	|| (basic_counter_interfaces !=  nullptr && basic_counter_interfaces->has_operation())
	|| (data_rate_interfaces !=  nullptr && data_rate_interfaces->has_operation());
}

std::string PerfMgmt::Periodic::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-counter-interfaces")
    {
        if(generic_counter_interfaces == nullptr)
        {
            generic_counter_interfaces = std::make_shared<PerfMgmt::Periodic::Interface::GenericCounterInterfaces>();
        }
        return generic_counter_interfaces;
    }

    if(child_yang_name == "basic-counter-interfaces")
    {
        if(basic_counter_interfaces == nullptr)
        {
            basic_counter_interfaces = std::make_shared<PerfMgmt::Periodic::Interface::BasicCounterInterfaces>();
        }
        return basic_counter_interfaces;
    }

    if(child_yang_name == "data-rate-interfaces")
    {
        if(data_rate_interfaces == nullptr)
        {
            data_rate_interfaces = std::make_shared<PerfMgmt::Periodic::Interface::DataRateInterfaces>();
        }
        return data_rate_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generic_counter_interfaces != nullptr)
    {
        children["generic-counter-interfaces"] = generic_counter_interfaces;
    }

    if(basic_counter_interfaces != nullptr)
    {
        children["basic-counter-interfaces"] = basic_counter_interfaces;
    }

    if(data_rate_interfaces != nullptr)
    {
        children["data-rate-interfaces"] = data_rate_interfaces;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-counter-interfaces" || name == "basic-counter-interfaces" || name == "data-rate-interfaces")
        return true;
    return false;
}

PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterfaces()
    :
    generic_counter_interface(this, {"interface_name"})
{

    yang_name = "generic-counter-interfaces"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Interface::GenericCounterInterfaces::~GenericCounterInterfaces()
{
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<generic_counter_interface.len(); index++)
    {
        if(generic_counter_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::has_operation() const
{
    for (std::size_t index=0; index<generic_counter_interface.len(); index++)
    {
        if(generic_counter_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Interface::GenericCounterInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Interface::GenericCounterInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Interface::GenericCounterInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::GenericCounterInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-counter-interface")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface>();
        c->parent = this;
        generic_counter_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::GenericCounterInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : generic_counter_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::GenericCounterInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Interface::GenericCounterInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-counter-interface")
        return true;
    return false;
}

PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::GenericCounterInterface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    samples(std::make_shared<PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples>())
{
    samples->parent = this;

    yang_name = "generic-counter-interface"; yang_parent_name = "generic-counter-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::~GenericCounterInterface()
{
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/interface/generic-counter-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "interface-name")
        return true;
    return false;
}

PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Samples()
    :
    sample(this, {"sample_id"})
{

    yang_name = "samples"; yang_parent_name = "generic-counter-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::~Samples()
{
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    in_packets{YType::uint64, "in-packets"},
    in_octets{YType::uint64, "in-octets"},
    out_packets{YType::uint64, "out-packets"},
    out_octets{YType::uint64, "out-octets"},
    in_ucast_pkts{YType::uint64, "in-ucast-pkts"},
    in_multicast_pkts{YType::uint64, "in-multicast-pkts"},
    in_broadcast_pkts{YType::uint64, "in-broadcast-pkts"},
    out_ucast_pkts{YType::uint64, "out-ucast-pkts"},
    out_multicast_pkts{YType::uint64, "out-multicast-pkts"},
    out_broadcast_pkts{YType::uint64, "out-broadcast-pkts"},
    output_total_drops{YType::uint32, "output-total-drops"},
    input_total_drops{YType::uint32, "input-total-drops"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    input_unknown_proto{YType::uint32, "input-unknown-proto"},
    output_total_errors{YType::uint32, "output-total-errors"},
    output_underrun{YType::uint32, "output-underrun"},
    input_total_errors{YType::uint32, "input-total-errors"},
    input_crc{YType::uint32, "input-crc"},
    input_overrun{YType::uint32, "input-overrun"},
    input_frame{YType::uint32, "input-frame"}
{

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| in_packets.is_set
	|| in_octets.is_set
	|| out_packets.is_set
	|| out_octets.is_set
	|| in_ucast_pkts.is_set
	|| in_multicast_pkts.is_set
	|| in_broadcast_pkts.is_set
	|| out_ucast_pkts.is_set
	|| out_multicast_pkts.is_set
	|| out_broadcast_pkts.is_set
	|| output_total_drops.is_set
	|| input_total_drops.is_set
	|| input_queue_drops.is_set
	|| input_unknown_proto.is_set
	|| output_total_errors.is_set
	|| output_underrun.is_set
	|| input_total_errors.is_set
	|| input_crc.is_set
	|| input_overrun.is_set
	|| input_frame.is_set;
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(in_packets.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(out_packets.yfilter)
	|| ydk::is_set(out_octets.yfilter)
	|| ydk::is_set(in_ucast_pkts.yfilter)
	|| ydk::is_set(in_multicast_pkts.yfilter)
	|| ydk::is_set(in_broadcast_pkts.yfilter)
	|| ydk::is_set(out_ucast_pkts.yfilter)
	|| ydk::is_set(out_multicast_pkts.yfilter)
	|| ydk::is_set(out_broadcast_pkts.yfilter)
	|| ydk::is_set(output_total_drops.yfilter)
	|| ydk::is_set(input_total_drops.yfilter)
	|| ydk::is_set(input_queue_drops.yfilter)
	|| ydk::is_set(input_unknown_proto.yfilter)
	|| ydk::is_set(output_total_errors.yfilter)
	|| ydk::is_set(output_underrun.yfilter)
	|| ydk::is_set(input_total_errors.yfilter)
	|| ydk::is_set(input_crc.yfilter)
	|| ydk::is_set(input_overrun.yfilter)
	|| ydk::is_set(input_frame.yfilter);
}

std::string PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (in_packets.is_set || is_set(in_packets.yfilter)) leaf_name_data.push_back(in_packets.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (out_packets.is_set || is_set(out_packets.yfilter)) leaf_name_data.push_back(out_packets.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (in_ucast_pkts.is_set || is_set(in_ucast_pkts.yfilter)) leaf_name_data.push_back(in_ucast_pkts.get_name_leafdata());
    if (in_multicast_pkts.is_set || is_set(in_multicast_pkts.yfilter)) leaf_name_data.push_back(in_multicast_pkts.get_name_leafdata());
    if (in_broadcast_pkts.is_set || is_set(in_broadcast_pkts.yfilter)) leaf_name_data.push_back(in_broadcast_pkts.get_name_leafdata());
    if (out_ucast_pkts.is_set || is_set(out_ucast_pkts.yfilter)) leaf_name_data.push_back(out_ucast_pkts.get_name_leafdata());
    if (out_multicast_pkts.is_set || is_set(out_multicast_pkts.yfilter)) leaf_name_data.push_back(out_multicast_pkts.get_name_leafdata());
    if (out_broadcast_pkts.is_set || is_set(out_broadcast_pkts.yfilter)) leaf_name_data.push_back(out_broadcast_pkts.get_name_leafdata());
    if (output_total_drops.is_set || is_set(output_total_drops.yfilter)) leaf_name_data.push_back(output_total_drops.get_name_leafdata());
    if (input_total_drops.is_set || is_set(input_total_drops.yfilter)) leaf_name_data.push_back(input_total_drops.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.yfilter)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (input_unknown_proto.is_set || is_set(input_unknown_proto.yfilter)) leaf_name_data.push_back(input_unknown_proto.get_name_leafdata());
    if (output_total_errors.is_set || is_set(output_total_errors.yfilter)) leaf_name_data.push_back(output_total_errors.get_name_leafdata());
    if (output_underrun.is_set || is_set(output_underrun.yfilter)) leaf_name_data.push_back(output_underrun.get_name_leafdata());
    if (input_total_errors.is_set || is_set(input_total_errors.yfilter)) leaf_name_data.push_back(input_total_errors.get_name_leafdata());
    if (input_crc.is_set || is_set(input_crc.yfilter)) leaf_name_data.push_back(input_crc.get_name_leafdata());
    if (input_overrun.is_set || is_set(input_overrun.yfilter)) leaf_name_data.push_back(input_overrun.get_name_leafdata());
    if (input_frame.is_set || is_set(input_frame.yfilter)) leaf_name_data.push_back(input_frame.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-packets")
    {
        in_packets = value;
        in_packets.value_namespace = name_space;
        in_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-packets")
    {
        out_packets = value;
        out_packets.value_namespace = name_space;
        out_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-ucast-pkts")
    {
        in_ucast_pkts = value;
        in_ucast_pkts.value_namespace = name_space;
        in_ucast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts = value;
        in_multicast_pkts.value_namespace = name_space;
        in_multicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts = value;
        in_broadcast_pkts.value_namespace = name_space;
        in_broadcast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ucast-pkts")
    {
        out_ucast_pkts = value;
        out_ucast_pkts.value_namespace = name_space;
        out_ucast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts = value;
        out_multicast_pkts.value_namespace = name_space;
        out_multicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts = value;
        out_broadcast_pkts.value_namespace = name_space;
        out_broadcast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-total-drops")
    {
        output_total_drops = value;
        output_total_drops.value_namespace = name_space;
        output_total_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-total-drops")
    {
        input_total_drops = value;
        input_total_drops.value_namespace = name_space;
        input_total_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
        input_queue_drops.value_namespace = name_space;
        input_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-unknown-proto")
    {
        input_unknown_proto = value;
        input_unknown_proto.value_namespace = name_space;
        input_unknown_proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-total-errors")
    {
        output_total_errors = value;
        output_total_errors.value_namespace = name_space;
        output_total_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-underrun")
    {
        output_underrun = value;
        output_underrun.value_namespace = name_space;
        output_underrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-total-errors")
    {
        input_total_errors = value;
        input_total_errors.value_namespace = name_space;
        input_total_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-crc")
    {
        input_crc = value;
        input_crc.value_namespace = name_space;
        input_crc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-overrun")
    {
        input_overrun = value;
        input_overrun.value_namespace = name_space;
        input_overrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-frame")
    {
        input_frame = value;
        input_frame.value_namespace = name_space;
        input_frame.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "in-packets")
    {
        in_packets.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "out-packets")
    {
        out_packets.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
    if(value_path == "in-ucast-pkts")
    {
        in_ucast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts.yfilter = yfilter;
    }
    if(value_path == "out-ucast-pkts")
    {
        out_ucast_pkts.yfilter = yfilter;
    }
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts.yfilter = yfilter;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts.yfilter = yfilter;
    }
    if(value_path == "output-total-drops")
    {
        output_total_drops.yfilter = yfilter;
    }
    if(value_path == "input-total-drops")
    {
        input_total_drops.yfilter = yfilter;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops.yfilter = yfilter;
    }
    if(value_path == "input-unknown-proto")
    {
        input_unknown_proto.yfilter = yfilter;
    }
    if(value_path == "output-total-errors")
    {
        output_total_errors.yfilter = yfilter;
    }
    if(value_path == "output-underrun")
    {
        output_underrun.yfilter = yfilter;
    }
    if(value_path == "input-total-errors")
    {
        input_total_errors.yfilter = yfilter;
    }
    if(value_path == "input-crc")
    {
        input_crc.yfilter = yfilter;
    }
    if(value_path == "input-overrun")
    {
        input_overrun.yfilter = yfilter;
    }
    if(value_path == "input-frame")
    {
        input_frame.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "in-packets" || name == "in-octets" || name == "out-packets" || name == "out-octets" || name == "in-ucast-pkts" || name == "in-multicast-pkts" || name == "in-broadcast-pkts" || name == "out-ucast-pkts" || name == "out-multicast-pkts" || name == "out-broadcast-pkts" || name == "output-total-drops" || name == "input-total-drops" || name == "input-queue-drops" || name == "input-unknown-proto" || name == "output-total-errors" || name == "output-underrun" || name == "input-total-errors" || name == "input-crc" || name == "input-overrun" || name == "input-frame")
        return true;
    return false;
}

PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterfaces()
    :
    basic_counter_interface(this, {"interface_name"})
{

    yang_name = "basic-counter-interfaces"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Interface::BasicCounterInterfaces::~BasicCounterInterfaces()
{
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<basic_counter_interface.len(); index++)
    {
        if(basic_counter_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::has_operation() const
{
    for (std::size_t index=0; index<basic_counter_interface.len(); index++)
    {
        if(basic_counter_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Interface::BasicCounterInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Interface::BasicCounterInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Interface::BasicCounterInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::BasicCounterInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-counter-interface")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface>();
        c->parent = this;
        basic_counter_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::BasicCounterInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : basic_counter_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::BasicCounterInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Interface::BasicCounterInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-counter-interface")
        return true;
    return false;
}

PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::BasicCounterInterface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    samples(std::make_shared<PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples>())
{
    samples->parent = this;

    yang_name = "basic-counter-interface"; yang_parent_name = "basic-counter-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::~BasicCounterInterface()
{
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/interface/basic-counter-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "interface-name")
        return true;
    return false;
}

PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Samples()
    :
    sample(this, {"sample_id"})
{

    yang_name = "samples"; yang_parent_name = "basic-counter-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::~Samples()
{
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    in_packets{YType::uint64, "in-packets"},
    in_octets{YType::uint64, "in-octets"},
    out_packets{YType::uint64, "out-packets"},
    out_octets{YType::uint64, "out-octets"},
    input_total_drops{YType::uint64, "input-total-drops"},
    input_queue_drops{YType::uint64, "input-queue-drops"},
    input_total_errors{YType::uint64, "input-total-errors"},
    output_total_drops{YType::uint64, "output-total-drops"},
    output_queue_drops{YType::uint64, "output-queue-drops"},
    output_total_errors{YType::uint64, "output-total-errors"}
{

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| in_packets.is_set
	|| in_octets.is_set
	|| out_packets.is_set
	|| out_octets.is_set
	|| input_total_drops.is_set
	|| input_queue_drops.is_set
	|| input_total_errors.is_set
	|| output_total_drops.is_set
	|| output_queue_drops.is_set
	|| output_total_errors.is_set;
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(in_packets.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(out_packets.yfilter)
	|| ydk::is_set(out_octets.yfilter)
	|| ydk::is_set(input_total_drops.yfilter)
	|| ydk::is_set(input_queue_drops.yfilter)
	|| ydk::is_set(input_total_errors.yfilter)
	|| ydk::is_set(output_total_drops.yfilter)
	|| ydk::is_set(output_queue_drops.yfilter)
	|| ydk::is_set(output_total_errors.yfilter);
}

std::string PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (in_packets.is_set || is_set(in_packets.yfilter)) leaf_name_data.push_back(in_packets.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (out_packets.is_set || is_set(out_packets.yfilter)) leaf_name_data.push_back(out_packets.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (input_total_drops.is_set || is_set(input_total_drops.yfilter)) leaf_name_data.push_back(input_total_drops.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.yfilter)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (input_total_errors.is_set || is_set(input_total_errors.yfilter)) leaf_name_data.push_back(input_total_errors.get_name_leafdata());
    if (output_total_drops.is_set || is_set(output_total_drops.yfilter)) leaf_name_data.push_back(output_total_drops.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.yfilter)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (output_total_errors.is_set || is_set(output_total_errors.yfilter)) leaf_name_data.push_back(output_total_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-packets")
    {
        in_packets = value;
        in_packets.value_namespace = name_space;
        in_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-packets")
    {
        out_packets = value;
        out_packets.value_namespace = name_space;
        out_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-total-drops")
    {
        input_total_drops = value;
        input_total_drops.value_namespace = name_space;
        input_total_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
        input_queue_drops.value_namespace = name_space;
        input_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-total-errors")
    {
        input_total_errors = value;
        input_total_errors.value_namespace = name_space;
        input_total_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-total-drops")
    {
        output_total_drops = value;
        output_total_drops.value_namespace = name_space;
        output_total_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
        output_queue_drops.value_namespace = name_space;
        output_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-total-errors")
    {
        output_total_errors = value;
        output_total_errors.value_namespace = name_space;
        output_total_errors.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "in-packets")
    {
        in_packets.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "out-packets")
    {
        out_packets.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
    if(value_path == "input-total-drops")
    {
        input_total_drops.yfilter = yfilter;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops.yfilter = yfilter;
    }
    if(value_path == "input-total-errors")
    {
        input_total_errors.yfilter = yfilter;
    }
    if(value_path == "output-total-drops")
    {
        output_total_drops.yfilter = yfilter;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops.yfilter = yfilter;
    }
    if(value_path == "output-total-errors")
    {
        output_total_errors.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "in-packets" || name == "in-octets" || name == "out-packets" || name == "out-octets" || name == "input-total-drops" || name == "input-queue-drops" || name == "input-total-errors" || name == "output-total-drops" || name == "output-queue-drops" || name == "output-total-errors")
        return true;
    return false;
}

PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterfaces()
    :
    data_rate_interface(this, {"interface_name"})
{

    yang_name = "data-rate-interfaces"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Interface::DataRateInterfaces::~DataRateInterfaces()
{
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_rate_interface.len(); index++)
    {
        if(data_rate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<data_rate_interface.len(); index++)
    {
        if(data_rate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Interface::DataRateInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Interface::DataRateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Interface::DataRateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::DataRateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-rate-interface")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface>();
        c->parent = this;
        data_rate_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::DataRateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : data_rate_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::DataRateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Interface::DataRateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-rate-interface")
        return true;
    return false;
}

PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::DataRateInterface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    samples(std::make_shared<PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples>())
{
    samples->parent = this;

    yang_name = "data-rate-interface"; yang_parent_name = "data-rate-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::~DataRateInterface()
{
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/interface/data-rate-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "interface-name")
        return true;
    return false;
}

PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Samples()
    :
    sample(this, {"sample_id"})
{

    yang_name = "samples"; yang_parent_name = "data-rate-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::~Samples()
{
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    input_data_rate{YType::uint32, "input-data-rate"},
    input_packet_rate{YType::uint32, "input-packet-rate"},
    output_data_rate{YType::uint32, "output-data-rate"},
    output_packet_rate{YType::uint32, "output-packet-rate"},
    input_peak_rate{YType::uint32, "input-peak-rate"},
    input_peak_pkts{YType::uint32, "input-peak-pkts"},
    output_peak_rate{YType::uint32, "output-peak-rate"},
    output_peak_pkts{YType::uint32, "output-peak-pkts"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| input_data_rate.is_set
	|| input_packet_rate.is_set
	|| output_data_rate.is_set
	|| output_packet_rate.is_set
	|| input_peak_rate.is_set
	|| input_peak_pkts.is_set
	|| output_peak_rate.is_set
	|| output_peak_pkts.is_set
	|| bandwidth.is_set;
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(input_data_rate.yfilter)
	|| ydk::is_set(input_packet_rate.yfilter)
	|| ydk::is_set(output_data_rate.yfilter)
	|| ydk::is_set(output_packet_rate.yfilter)
	|| ydk::is_set(input_peak_rate.yfilter)
	|| ydk::is_set(input_peak_pkts.yfilter)
	|| ydk::is_set(output_peak_rate.yfilter)
	|| ydk::is_set(output_peak_pkts.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (input_data_rate.is_set || is_set(input_data_rate.yfilter)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.yfilter)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.yfilter)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.yfilter)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());
    if (input_peak_rate.is_set || is_set(input_peak_rate.yfilter)) leaf_name_data.push_back(input_peak_rate.get_name_leafdata());
    if (input_peak_pkts.is_set || is_set(input_peak_pkts.yfilter)) leaf_name_data.push_back(input_peak_pkts.get_name_leafdata());
    if (output_peak_rate.is_set || is_set(output_peak_rate.yfilter)) leaf_name_data.push_back(output_peak_rate.get_name_leafdata());
    if (output_peak_pkts.is_set || is_set(output_peak_pkts.yfilter)) leaf_name_data.push_back(output_peak_pkts.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
        input_data_rate.value_namespace = name_space;
        input_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
        input_packet_rate.value_namespace = name_space;
        input_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
        output_data_rate.value_namespace = name_space;
        output_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
        output_packet_rate.value_namespace = name_space;
        output_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-peak-rate")
    {
        input_peak_rate = value;
        input_peak_rate.value_namespace = name_space;
        input_peak_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-peak-pkts")
    {
        input_peak_pkts = value;
        input_peak_pkts.value_namespace = name_space;
        input_peak_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-peak-rate")
    {
        output_peak_rate = value;
        output_peak_rate.value_namespace = name_space;
        output_peak_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-peak-pkts")
    {
        output_peak_pkts = value;
        output_peak_pkts.value_namespace = name_space;
        output_peak_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate.yfilter = yfilter;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate.yfilter = yfilter;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate.yfilter = yfilter;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate.yfilter = yfilter;
    }
    if(value_path == "input-peak-rate")
    {
        input_peak_rate.yfilter = yfilter;
    }
    if(value_path == "input-peak-pkts")
    {
        input_peak_pkts.yfilter = yfilter;
    }
    if(value_path == "output-peak-rate")
    {
        output_peak_rate.yfilter = yfilter;
    }
    if(value_path == "output-peak-pkts")
    {
        output_peak_pkts.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "input-data-rate" || name == "input-packet-rate" || name == "output-data-rate" || name == "output-packet-rate" || name == "input-peak-rate" || name == "input-peak-pkts" || name == "output-peak-rate" || name == "output-peak-pkts" || name == "bandwidth")
        return true;
    return false;
}

PerfMgmt::Monitor::Monitor()
    :
    ospf(std::make_shared<PerfMgmt::Monitor::Ospf>())
    , mpls(std::make_shared<PerfMgmt::Monitor::Mpls>())
    , nodes(std::make_shared<PerfMgmt::Monitor::Nodes>())
    , bgp(std::make_shared<PerfMgmt::Monitor::Bgp>())
    , interface(std::make_shared<PerfMgmt::Monitor::Interface>())
{
    ospf->parent = this;
    mpls->parent = this;
    nodes->parent = this;
    bgp->parent = this;
    interface->parent = this;

    yang_name = "monitor"; yang_parent_name = "perf-mgmt"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::~Monitor()
{
}

bool PerfMgmt::Monitor::has_data() const
{
    if (is_presence_container) return true;
    return (ospf !=  nullptr && ospf->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (nodes !=  nullptr && nodes->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (interface !=  nullptr && interface->has_data());
}

bool PerfMgmt::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (interface !=  nullptr && interface->has_operation());
}

std::string PerfMgmt::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PerfMgmt::Monitor::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<PerfMgmt::Monitor::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerfMgmt::Monitor::Nodes>();
        }
        return nodes;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PerfMgmt::Monitor::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<PerfMgmt::Monitor::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void PerfMgmt::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf" || name == "mpls" || name == "nodes" || name == "bgp" || name == "interface")
        return true;
    return false;
}

PerfMgmt::Monitor::Ospf::Ospf()
    :
    ospfv2_protocol_instances(std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances>())
    , ospfv3_protocol_instances(std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances>())
{
    ospfv2_protocol_instances->parent = this;
    ospfv3_protocol_instances->parent = this;

    yang_name = "ospf"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Ospf::~Ospf()
{
}

bool PerfMgmt::Monitor::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return (ospfv2_protocol_instances !=  nullptr && ospfv2_protocol_instances->has_data())
	|| (ospfv3_protocol_instances !=  nullptr && ospfv3_protocol_instances->has_data());
}

bool PerfMgmt::Monitor::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| (ospfv2_protocol_instances !=  nullptr && ospfv2_protocol_instances->has_operation())
	|| (ospfv3_protocol_instances !=  nullptr && ospfv3_protocol_instances->has_operation());
}

std::string PerfMgmt::Monitor::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-protocol-instances")
    {
        if(ospfv2_protocol_instances == nullptr)
        {
            ospfv2_protocol_instances = std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances>();
        }
        return ospfv2_protocol_instances;
    }

    if(child_yang_name == "ospfv3-protocol-instances")
    {
        if(ospfv3_protocol_instances == nullptr)
        {
            ospfv3_protocol_instances = std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances>();
        }
        return ospfv3_protocol_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ospfv2_protocol_instances != nullptr)
    {
        children["ospfv2-protocol-instances"] = ospfv2_protocol_instances;
    }

    if(ospfv3_protocol_instances != nullptr)
    {
        children["ospfv3-protocol-instances"] = ospfv3_protocol_instances;
    }

    return children;
}

void PerfMgmt::Monitor::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-protocol-instances" || name == "ospfv3-protocol-instances")
        return true;
    return false;
}

PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstances()
    :
    ospfv2_protocol_instance(this, {"instance_name"})
{

    yang_name = "ospfv2-protocol-instances"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::~Ospfv2ProtocolInstances()
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv2_protocol_instance.len(); index++)
    {
        if(ospfv2_protocol_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_protocol_instance.len(); index++)
    {
        if(ospfv2_protocol_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-protocol-instance")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance>();
        c->parent = this;
        ospfv2_protocol_instance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfv2_protocol_instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-protocol-instance")
        return true;
    return false;
}

PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Ospfv2ProtocolInstance()
    :
    instance_name{YType::str, "instance-name"}
        ,
    samples(std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples>())
{
    samples->parent = this;

    yang_name = "ospfv2-protocol-instance"; yang_parent_name = "ospfv2-protocol-instances"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::~Ospfv2ProtocolInstance()
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::has_data() const
{
    if (is_presence_container) return true;
    return instance_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/ospf/ospfv2-protocol-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol-instance";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "instance-name")
        return true;
    return false;
}

PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Samples()
    :
    sample(this, {"sample_id"})
{

    yang_name = "samples"; yang_parent_name = "ospfv2-protocol-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::~Samples()
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    input_packets{YType::uint32, "input-packets"},
    output_packets{YType::uint32, "output-packets"},
    input_hello_packets{YType::uint32, "input-hello-packets"},
    output_hello_packets{YType::uint32, "output-hello-packets"},
    input_db_ds{YType::uint32, "input-db-ds"},
    input_db_ds_lsa{YType::uint32, "input-db-ds-lsa"},
    output_db_ds{YType::uint32, "output-db-ds"},
    output_db_ds_lsa{YType::uint32, "output-db-ds-lsa"},
    input_ls_requests{YType::uint32, "input-ls-requests"},
    input_ls_requests_lsa{YType::uint32, "input-ls-requests-lsa"},
    output_ls_requests{YType::uint32, "output-ls-requests"},
    output_ls_requests_lsa{YType::uint32, "output-ls-requests-lsa"},
    input_lsa_updates{YType::uint32, "input-lsa-updates"},
    input_lsa_updates_lsa{YType::uint32, "input-lsa-updates-lsa"},
    output_lsa_updates{YType::uint32, "output-lsa-updates"},
    output_lsa_updates_lsa{YType::uint32, "output-lsa-updates-lsa"},
    input_lsa_acks{YType::uint32, "input-lsa-acks"},
    input_lsa_acks_lsa{YType::uint32, "input-lsa-acks-lsa"},
    output_lsa_acks{YType::uint32, "output-lsa-acks"},
    output_lsa_acks_lsa{YType::uint32, "output-lsa-acks-lsa"},
    checksum_errors{YType::uint32, "checksum-errors"}
{

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| input_packets.is_set
	|| output_packets.is_set
	|| input_hello_packets.is_set
	|| output_hello_packets.is_set
	|| input_db_ds.is_set
	|| input_db_ds_lsa.is_set
	|| output_db_ds.is_set
	|| output_db_ds_lsa.is_set
	|| input_ls_requests.is_set
	|| input_ls_requests_lsa.is_set
	|| output_ls_requests.is_set
	|| output_ls_requests_lsa.is_set
	|| input_lsa_updates.is_set
	|| input_lsa_updates_lsa.is_set
	|| output_lsa_updates.is_set
	|| output_lsa_updates_lsa.is_set
	|| input_lsa_acks.is_set
	|| input_lsa_acks_lsa.is_set
	|| output_lsa_acks.is_set
	|| output_lsa_acks_lsa.is_set
	|| checksum_errors.is_set;
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(input_packets.yfilter)
	|| ydk::is_set(output_packets.yfilter)
	|| ydk::is_set(input_hello_packets.yfilter)
	|| ydk::is_set(output_hello_packets.yfilter)
	|| ydk::is_set(input_db_ds.yfilter)
	|| ydk::is_set(input_db_ds_lsa.yfilter)
	|| ydk::is_set(output_db_ds.yfilter)
	|| ydk::is_set(output_db_ds_lsa.yfilter)
	|| ydk::is_set(input_ls_requests.yfilter)
	|| ydk::is_set(input_ls_requests_lsa.yfilter)
	|| ydk::is_set(output_ls_requests.yfilter)
	|| ydk::is_set(output_ls_requests_lsa.yfilter)
	|| ydk::is_set(input_lsa_updates.yfilter)
	|| ydk::is_set(input_lsa_updates_lsa.yfilter)
	|| ydk::is_set(output_lsa_updates.yfilter)
	|| ydk::is_set(output_lsa_updates_lsa.yfilter)
	|| ydk::is_set(input_lsa_acks.yfilter)
	|| ydk::is_set(input_lsa_acks_lsa.yfilter)
	|| ydk::is_set(output_lsa_acks.yfilter)
	|| ydk::is_set(output_lsa_acks_lsa.yfilter)
	|| ydk::is_set(checksum_errors.yfilter);
}

std::string PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (input_packets.is_set || is_set(input_packets.yfilter)) leaf_name_data.push_back(input_packets.get_name_leafdata());
    if (output_packets.is_set || is_set(output_packets.yfilter)) leaf_name_data.push_back(output_packets.get_name_leafdata());
    if (input_hello_packets.is_set || is_set(input_hello_packets.yfilter)) leaf_name_data.push_back(input_hello_packets.get_name_leafdata());
    if (output_hello_packets.is_set || is_set(output_hello_packets.yfilter)) leaf_name_data.push_back(output_hello_packets.get_name_leafdata());
    if (input_db_ds.is_set || is_set(input_db_ds.yfilter)) leaf_name_data.push_back(input_db_ds.get_name_leafdata());
    if (input_db_ds_lsa.is_set || is_set(input_db_ds_lsa.yfilter)) leaf_name_data.push_back(input_db_ds_lsa.get_name_leafdata());
    if (output_db_ds.is_set || is_set(output_db_ds.yfilter)) leaf_name_data.push_back(output_db_ds.get_name_leafdata());
    if (output_db_ds_lsa.is_set || is_set(output_db_ds_lsa.yfilter)) leaf_name_data.push_back(output_db_ds_lsa.get_name_leafdata());
    if (input_ls_requests.is_set || is_set(input_ls_requests.yfilter)) leaf_name_data.push_back(input_ls_requests.get_name_leafdata());
    if (input_ls_requests_lsa.is_set || is_set(input_ls_requests_lsa.yfilter)) leaf_name_data.push_back(input_ls_requests_lsa.get_name_leafdata());
    if (output_ls_requests.is_set || is_set(output_ls_requests.yfilter)) leaf_name_data.push_back(output_ls_requests.get_name_leafdata());
    if (output_ls_requests_lsa.is_set || is_set(output_ls_requests_lsa.yfilter)) leaf_name_data.push_back(output_ls_requests_lsa.get_name_leafdata());
    if (input_lsa_updates.is_set || is_set(input_lsa_updates.yfilter)) leaf_name_data.push_back(input_lsa_updates.get_name_leafdata());
    if (input_lsa_updates_lsa.is_set || is_set(input_lsa_updates_lsa.yfilter)) leaf_name_data.push_back(input_lsa_updates_lsa.get_name_leafdata());
    if (output_lsa_updates.is_set || is_set(output_lsa_updates.yfilter)) leaf_name_data.push_back(output_lsa_updates.get_name_leafdata());
    if (output_lsa_updates_lsa.is_set || is_set(output_lsa_updates_lsa.yfilter)) leaf_name_data.push_back(output_lsa_updates_lsa.get_name_leafdata());
    if (input_lsa_acks.is_set || is_set(input_lsa_acks.yfilter)) leaf_name_data.push_back(input_lsa_acks.get_name_leafdata());
    if (input_lsa_acks_lsa.is_set || is_set(input_lsa_acks_lsa.yfilter)) leaf_name_data.push_back(input_lsa_acks_lsa.get_name_leafdata());
    if (output_lsa_acks.is_set || is_set(output_lsa_acks.yfilter)) leaf_name_data.push_back(output_lsa_acks.get_name_leafdata());
    if (output_lsa_acks_lsa.is_set || is_set(output_lsa_acks_lsa.yfilter)) leaf_name_data.push_back(output_lsa_acks_lsa.get_name_leafdata());
    if (checksum_errors.is_set || is_set(checksum_errors.yfilter)) leaf_name_data.push_back(checksum_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-packets")
    {
        input_packets = value;
        input_packets.value_namespace = name_space;
        input_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-packets")
    {
        output_packets = value;
        output_packets.value_namespace = name_space;
        output_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-hello-packets")
    {
        input_hello_packets = value;
        input_hello_packets.value_namespace = name_space;
        input_hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello-packets")
    {
        output_hello_packets = value;
        output_hello_packets.value_namespace = name_space;
        output_hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-db-ds")
    {
        input_db_ds = value;
        input_db_ds.value_namespace = name_space;
        input_db_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-db-ds-lsa")
    {
        input_db_ds_lsa = value;
        input_db_ds_lsa.value_namespace = name_space;
        input_db_ds_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-db-ds")
    {
        output_db_ds = value;
        output_db_ds.value_namespace = name_space;
        output_db_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-db-ds-lsa")
    {
        output_db_ds_lsa = value;
        output_db_ds_lsa.value_namespace = name_space;
        output_db_ds_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ls-requests")
    {
        input_ls_requests = value;
        input_ls_requests.value_namespace = name_space;
        input_ls_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ls-requests-lsa")
    {
        input_ls_requests_lsa = value;
        input_ls_requests_lsa.value_namespace = name_space;
        input_ls_requests_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ls-requests")
    {
        output_ls_requests = value;
        output_ls_requests.value_namespace = name_space;
        output_ls_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ls-requests-lsa")
    {
        output_ls_requests_lsa = value;
        output_ls_requests_lsa.value_namespace = name_space;
        output_ls_requests_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsa-updates")
    {
        input_lsa_updates = value;
        input_lsa_updates.value_namespace = name_space;
        input_lsa_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsa-updates-lsa")
    {
        input_lsa_updates_lsa = value;
        input_lsa_updates_lsa.value_namespace = name_space;
        input_lsa_updates_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsa-updates")
    {
        output_lsa_updates = value;
        output_lsa_updates.value_namespace = name_space;
        output_lsa_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsa-updates-lsa")
    {
        output_lsa_updates_lsa = value;
        output_lsa_updates_lsa.value_namespace = name_space;
        output_lsa_updates_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsa-acks")
    {
        input_lsa_acks = value;
        input_lsa_acks.value_namespace = name_space;
        input_lsa_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsa-acks-lsa")
    {
        input_lsa_acks_lsa = value;
        input_lsa_acks_lsa.value_namespace = name_space;
        input_lsa_acks_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsa-acks")
    {
        output_lsa_acks = value;
        output_lsa_acks.value_namespace = name_space;
        output_lsa_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsa-acks-lsa")
    {
        output_lsa_acks_lsa = value;
        output_lsa_acks_lsa.value_namespace = name_space;
        output_lsa_acks_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum-errors")
    {
        checksum_errors = value;
        checksum_errors.value_namespace = name_space;
        checksum_errors.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "input-packets")
    {
        input_packets.yfilter = yfilter;
    }
    if(value_path == "output-packets")
    {
        output_packets.yfilter = yfilter;
    }
    if(value_path == "input-hello-packets")
    {
        input_hello_packets.yfilter = yfilter;
    }
    if(value_path == "output-hello-packets")
    {
        output_hello_packets.yfilter = yfilter;
    }
    if(value_path == "input-db-ds")
    {
        input_db_ds.yfilter = yfilter;
    }
    if(value_path == "input-db-ds-lsa")
    {
        input_db_ds_lsa.yfilter = yfilter;
    }
    if(value_path == "output-db-ds")
    {
        output_db_ds.yfilter = yfilter;
    }
    if(value_path == "output-db-ds-lsa")
    {
        output_db_ds_lsa.yfilter = yfilter;
    }
    if(value_path == "input-ls-requests")
    {
        input_ls_requests.yfilter = yfilter;
    }
    if(value_path == "input-ls-requests-lsa")
    {
        input_ls_requests_lsa.yfilter = yfilter;
    }
    if(value_path == "output-ls-requests")
    {
        output_ls_requests.yfilter = yfilter;
    }
    if(value_path == "output-ls-requests-lsa")
    {
        output_ls_requests_lsa.yfilter = yfilter;
    }
    if(value_path == "input-lsa-updates")
    {
        input_lsa_updates.yfilter = yfilter;
    }
    if(value_path == "input-lsa-updates-lsa")
    {
        input_lsa_updates_lsa.yfilter = yfilter;
    }
    if(value_path == "output-lsa-updates")
    {
        output_lsa_updates.yfilter = yfilter;
    }
    if(value_path == "output-lsa-updates-lsa")
    {
        output_lsa_updates_lsa.yfilter = yfilter;
    }
    if(value_path == "input-lsa-acks")
    {
        input_lsa_acks.yfilter = yfilter;
    }
    if(value_path == "input-lsa-acks-lsa")
    {
        input_lsa_acks_lsa.yfilter = yfilter;
    }
    if(value_path == "output-lsa-acks")
    {
        output_lsa_acks.yfilter = yfilter;
    }
    if(value_path == "output-lsa-acks-lsa")
    {
        output_lsa_acks_lsa.yfilter = yfilter;
    }
    if(value_path == "checksum-errors")
    {
        checksum_errors.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "input-packets" || name == "output-packets" || name == "input-hello-packets" || name == "output-hello-packets" || name == "input-db-ds" || name == "input-db-ds-lsa" || name == "output-db-ds" || name == "output-db-ds-lsa" || name == "input-ls-requests" || name == "input-ls-requests-lsa" || name == "output-ls-requests" || name == "output-ls-requests-lsa" || name == "input-lsa-updates" || name == "input-lsa-updates-lsa" || name == "output-lsa-updates" || name == "output-lsa-updates-lsa" || name == "input-lsa-acks" || name == "input-lsa-acks-lsa" || name == "output-lsa-acks" || name == "output-lsa-acks-lsa" || name == "checksum-errors")
        return true;
    return false;
}

PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstances()
    :
    ospfv3_protocol_instance(this, {"instance_name"})
{

    yang_name = "ospfv3-protocol-instances"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::~Ospfv3ProtocolInstances()
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv3_protocol_instance.len(); index++)
    {
        if(ospfv3_protocol_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::has_operation() const
{
    for (std::size_t index=0; index<ospfv3_protocol_instance.len(); index++)
    {
        if(ospfv3_protocol_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv3-protocol-instance")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance>();
        c->parent = this;
        ospfv3_protocol_instance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfv3_protocol_instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv3-protocol-instance")
        return true;
    return false;
}

PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Ospfv3ProtocolInstance()
    :
    instance_name{YType::str, "instance-name"}
        ,
    samples(std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples>())
{
    samples->parent = this;

    yang_name = "ospfv3-protocol-instance"; yang_parent_name = "ospfv3-protocol-instances"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::~Ospfv3ProtocolInstance()
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::has_data() const
{
    if (is_presence_container) return true;
    return instance_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/ospf/ospfv3-protocol-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol-instance";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "instance-name")
        return true;
    return false;
}

PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Samples()
    :
    sample(this, {"sample_id"})
{

    yang_name = "samples"; yang_parent_name = "ospfv3-protocol-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::~Samples()
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    input_packets{YType::uint32, "input-packets"},
    output_packets{YType::uint32, "output-packets"},
    input_hello_packets{YType::uint32, "input-hello-packets"},
    output_hello_packets{YType::uint32, "output-hello-packets"},
    input_db_ds{YType::uint32, "input-db-ds"},
    input_db_ds_lsa{YType::uint32, "input-db-ds-lsa"},
    output_db_ds{YType::uint32, "output-db-ds"},
    output_db_ds_lsa{YType::uint32, "output-db-ds-lsa"},
    input_ls_requests{YType::uint32, "input-ls-requests"},
    input_ls_requests_lsa{YType::uint32, "input-ls-requests-lsa"},
    output_ls_requests{YType::uint32, "output-ls-requests"},
    output_ls_requests_lsa{YType::uint32, "output-ls-requests-lsa"},
    input_lsa_updates{YType::uint32, "input-lsa-updates"},
    input_lsa_updates_lsa{YType::uint32, "input-lsa-updates-lsa"},
    output_lsa_updates{YType::uint32, "output-lsa-updates"},
    output_lsa_updates_lsa{YType::uint32, "output-lsa-updates-lsa"},
    input_lsa_acks{YType::uint32, "input-lsa-acks"},
    input_lsa_acks_lsa{YType::uint32, "input-lsa-acks-lsa"},
    output_lsa_acks{YType::uint32, "output-lsa-acks"},
    output_lsa_acks_lsa{YType::uint32, "output-lsa-acks-lsa"}
{

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| input_packets.is_set
	|| output_packets.is_set
	|| input_hello_packets.is_set
	|| output_hello_packets.is_set
	|| input_db_ds.is_set
	|| input_db_ds_lsa.is_set
	|| output_db_ds.is_set
	|| output_db_ds_lsa.is_set
	|| input_ls_requests.is_set
	|| input_ls_requests_lsa.is_set
	|| output_ls_requests.is_set
	|| output_ls_requests_lsa.is_set
	|| input_lsa_updates.is_set
	|| input_lsa_updates_lsa.is_set
	|| output_lsa_updates.is_set
	|| output_lsa_updates_lsa.is_set
	|| input_lsa_acks.is_set
	|| input_lsa_acks_lsa.is_set
	|| output_lsa_acks.is_set
	|| output_lsa_acks_lsa.is_set;
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(input_packets.yfilter)
	|| ydk::is_set(output_packets.yfilter)
	|| ydk::is_set(input_hello_packets.yfilter)
	|| ydk::is_set(output_hello_packets.yfilter)
	|| ydk::is_set(input_db_ds.yfilter)
	|| ydk::is_set(input_db_ds_lsa.yfilter)
	|| ydk::is_set(output_db_ds.yfilter)
	|| ydk::is_set(output_db_ds_lsa.yfilter)
	|| ydk::is_set(input_ls_requests.yfilter)
	|| ydk::is_set(input_ls_requests_lsa.yfilter)
	|| ydk::is_set(output_ls_requests.yfilter)
	|| ydk::is_set(output_ls_requests_lsa.yfilter)
	|| ydk::is_set(input_lsa_updates.yfilter)
	|| ydk::is_set(input_lsa_updates_lsa.yfilter)
	|| ydk::is_set(output_lsa_updates.yfilter)
	|| ydk::is_set(output_lsa_updates_lsa.yfilter)
	|| ydk::is_set(input_lsa_acks.yfilter)
	|| ydk::is_set(input_lsa_acks_lsa.yfilter)
	|| ydk::is_set(output_lsa_acks.yfilter)
	|| ydk::is_set(output_lsa_acks_lsa.yfilter);
}

std::string PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (input_packets.is_set || is_set(input_packets.yfilter)) leaf_name_data.push_back(input_packets.get_name_leafdata());
    if (output_packets.is_set || is_set(output_packets.yfilter)) leaf_name_data.push_back(output_packets.get_name_leafdata());
    if (input_hello_packets.is_set || is_set(input_hello_packets.yfilter)) leaf_name_data.push_back(input_hello_packets.get_name_leafdata());
    if (output_hello_packets.is_set || is_set(output_hello_packets.yfilter)) leaf_name_data.push_back(output_hello_packets.get_name_leafdata());
    if (input_db_ds.is_set || is_set(input_db_ds.yfilter)) leaf_name_data.push_back(input_db_ds.get_name_leafdata());
    if (input_db_ds_lsa.is_set || is_set(input_db_ds_lsa.yfilter)) leaf_name_data.push_back(input_db_ds_lsa.get_name_leafdata());
    if (output_db_ds.is_set || is_set(output_db_ds.yfilter)) leaf_name_data.push_back(output_db_ds.get_name_leafdata());
    if (output_db_ds_lsa.is_set || is_set(output_db_ds_lsa.yfilter)) leaf_name_data.push_back(output_db_ds_lsa.get_name_leafdata());
    if (input_ls_requests.is_set || is_set(input_ls_requests.yfilter)) leaf_name_data.push_back(input_ls_requests.get_name_leafdata());
    if (input_ls_requests_lsa.is_set || is_set(input_ls_requests_lsa.yfilter)) leaf_name_data.push_back(input_ls_requests_lsa.get_name_leafdata());
    if (output_ls_requests.is_set || is_set(output_ls_requests.yfilter)) leaf_name_data.push_back(output_ls_requests.get_name_leafdata());
    if (output_ls_requests_lsa.is_set || is_set(output_ls_requests_lsa.yfilter)) leaf_name_data.push_back(output_ls_requests_lsa.get_name_leafdata());
    if (input_lsa_updates.is_set || is_set(input_lsa_updates.yfilter)) leaf_name_data.push_back(input_lsa_updates.get_name_leafdata());
    if (input_lsa_updates_lsa.is_set || is_set(input_lsa_updates_lsa.yfilter)) leaf_name_data.push_back(input_lsa_updates_lsa.get_name_leafdata());
    if (output_lsa_updates.is_set || is_set(output_lsa_updates.yfilter)) leaf_name_data.push_back(output_lsa_updates.get_name_leafdata());
    if (output_lsa_updates_lsa.is_set || is_set(output_lsa_updates_lsa.yfilter)) leaf_name_data.push_back(output_lsa_updates_lsa.get_name_leafdata());
    if (input_lsa_acks.is_set || is_set(input_lsa_acks.yfilter)) leaf_name_data.push_back(input_lsa_acks.get_name_leafdata());
    if (input_lsa_acks_lsa.is_set || is_set(input_lsa_acks_lsa.yfilter)) leaf_name_data.push_back(input_lsa_acks_lsa.get_name_leafdata());
    if (output_lsa_acks.is_set || is_set(output_lsa_acks.yfilter)) leaf_name_data.push_back(output_lsa_acks.get_name_leafdata());
    if (output_lsa_acks_lsa.is_set || is_set(output_lsa_acks_lsa.yfilter)) leaf_name_data.push_back(output_lsa_acks_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-packets")
    {
        input_packets = value;
        input_packets.value_namespace = name_space;
        input_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-packets")
    {
        output_packets = value;
        output_packets.value_namespace = name_space;
        output_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-hello-packets")
    {
        input_hello_packets = value;
        input_hello_packets.value_namespace = name_space;
        input_hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello-packets")
    {
        output_hello_packets = value;
        output_hello_packets.value_namespace = name_space;
        output_hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-db-ds")
    {
        input_db_ds = value;
        input_db_ds.value_namespace = name_space;
        input_db_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-db-ds-lsa")
    {
        input_db_ds_lsa = value;
        input_db_ds_lsa.value_namespace = name_space;
        input_db_ds_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-db-ds")
    {
        output_db_ds = value;
        output_db_ds.value_namespace = name_space;
        output_db_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-db-ds-lsa")
    {
        output_db_ds_lsa = value;
        output_db_ds_lsa.value_namespace = name_space;
        output_db_ds_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ls-requests")
    {
        input_ls_requests = value;
        input_ls_requests.value_namespace = name_space;
        input_ls_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ls-requests-lsa")
    {
        input_ls_requests_lsa = value;
        input_ls_requests_lsa.value_namespace = name_space;
        input_ls_requests_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ls-requests")
    {
        output_ls_requests = value;
        output_ls_requests.value_namespace = name_space;
        output_ls_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ls-requests-lsa")
    {
        output_ls_requests_lsa = value;
        output_ls_requests_lsa.value_namespace = name_space;
        output_ls_requests_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsa-updates")
    {
        input_lsa_updates = value;
        input_lsa_updates.value_namespace = name_space;
        input_lsa_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsa-updates-lsa")
    {
        input_lsa_updates_lsa = value;
        input_lsa_updates_lsa.value_namespace = name_space;
        input_lsa_updates_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsa-updates")
    {
        output_lsa_updates = value;
        output_lsa_updates.value_namespace = name_space;
        output_lsa_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsa-updates-lsa")
    {
        output_lsa_updates_lsa = value;
        output_lsa_updates_lsa.value_namespace = name_space;
        output_lsa_updates_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsa-acks")
    {
        input_lsa_acks = value;
        input_lsa_acks.value_namespace = name_space;
        input_lsa_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsa-acks-lsa")
    {
        input_lsa_acks_lsa = value;
        input_lsa_acks_lsa.value_namespace = name_space;
        input_lsa_acks_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsa-acks")
    {
        output_lsa_acks = value;
        output_lsa_acks.value_namespace = name_space;
        output_lsa_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsa-acks-lsa")
    {
        output_lsa_acks_lsa = value;
        output_lsa_acks_lsa.value_namespace = name_space;
        output_lsa_acks_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "input-packets")
    {
        input_packets.yfilter = yfilter;
    }
    if(value_path == "output-packets")
    {
        output_packets.yfilter = yfilter;
    }
    if(value_path == "input-hello-packets")
    {
        input_hello_packets.yfilter = yfilter;
    }
    if(value_path == "output-hello-packets")
    {
        output_hello_packets.yfilter = yfilter;
    }
    if(value_path == "input-db-ds")
    {
        input_db_ds.yfilter = yfilter;
    }
    if(value_path == "input-db-ds-lsa")
    {
        input_db_ds_lsa.yfilter = yfilter;
    }
    if(value_path == "output-db-ds")
    {
        output_db_ds.yfilter = yfilter;
    }
    if(value_path == "output-db-ds-lsa")
    {
        output_db_ds_lsa.yfilter = yfilter;
    }
    if(value_path == "input-ls-requests")
    {
        input_ls_requests.yfilter = yfilter;
    }
    if(value_path == "input-ls-requests-lsa")
    {
        input_ls_requests_lsa.yfilter = yfilter;
    }
    if(value_path == "output-ls-requests")
    {
        output_ls_requests.yfilter = yfilter;
    }
    if(value_path == "output-ls-requests-lsa")
    {
        output_ls_requests_lsa.yfilter = yfilter;
    }
    if(value_path == "input-lsa-updates")
    {
        input_lsa_updates.yfilter = yfilter;
    }
    if(value_path == "input-lsa-updates-lsa")
    {
        input_lsa_updates_lsa.yfilter = yfilter;
    }
    if(value_path == "output-lsa-updates")
    {
        output_lsa_updates.yfilter = yfilter;
    }
    if(value_path == "output-lsa-updates-lsa")
    {
        output_lsa_updates_lsa.yfilter = yfilter;
    }
    if(value_path == "input-lsa-acks")
    {
        input_lsa_acks.yfilter = yfilter;
    }
    if(value_path == "input-lsa-acks-lsa")
    {
        input_lsa_acks_lsa.yfilter = yfilter;
    }
    if(value_path == "output-lsa-acks")
    {
        output_lsa_acks.yfilter = yfilter;
    }
    if(value_path == "output-lsa-acks-lsa")
    {
        output_lsa_acks_lsa.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "input-packets" || name == "output-packets" || name == "input-hello-packets" || name == "output-hello-packets" || name == "input-db-ds" || name == "input-db-ds-lsa" || name == "output-db-ds" || name == "output-db-ds-lsa" || name == "input-ls-requests" || name == "input-ls-requests-lsa" || name == "output-ls-requests" || name == "output-ls-requests-lsa" || name == "input-lsa-updates" || name == "input-lsa-updates-lsa" || name == "output-lsa-updates" || name == "output-lsa-updates-lsa" || name == "input-lsa-acks" || name == "input-lsa-acks-lsa" || name == "output-lsa-acks" || name == "output-lsa-acks-lsa")
        return true;
    return false;
}

PerfMgmt::Monitor::Mpls::Mpls()
    :
    ldp_neighbors(std::make_shared<PerfMgmt::Monitor::Mpls::LdpNeighbors>())
{
    ldp_neighbors->parent = this;

    yang_name = "mpls"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Mpls::~Mpls()
{
}

bool PerfMgmt::Monitor::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return (ldp_neighbors !=  nullptr && ldp_neighbors->has_data());
}

bool PerfMgmt::Monitor::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (ldp_neighbors !=  nullptr && ldp_neighbors->has_operation());
}

std::string PerfMgmt::Monitor::Mpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-neighbors")
    {
        if(ldp_neighbors == nullptr)
        {
            ldp_neighbors = std::make_shared<PerfMgmt::Monitor::Mpls::LdpNeighbors>();
        }
        return ldp_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ldp_neighbors != nullptr)
    {
        children["ldp-neighbors"] = ldp_neighbors;
    }

    return children;
}

void PerfMgmt::Monitor::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp-neighbors")
        return true;
    return false;
}

PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbors()
    :
    ldp_neighbor(this, {"nbr"})
{

    yang_name = "ldp-neighbors"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Mpls::LdpNeighbors::~LdpNeighbors()
{
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ldp_neighbor.len(); index++)
    {
        if(ldp_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::has_operation() const
{
    for (std::size_t index=0; index<ldp_neighbor.len(); index++)
    {
        if(ldp_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Mpls::LdpNeighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Mpls::LdpNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Mpls::LdpNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Mpls::LdpNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-neighbor")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor>();
        c->parent = this;
        ldp_neighbor.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Mpls::LdpNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ldp_neighbor.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Mpls::LdpNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Mpls::LdpNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp-neighbor")
        return true;
    return false;
}

PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::LdpNeighbor()
    :
    nbr{YType::str, "nbr"}
        ,
    samples(std::make_shared<PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples>())
{
    samples->parent = this;

    yang_name = "ldp-neighbor"; yang_parent_name = "ldp-neighbors"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::~LdpNeighbor()
{
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return nbr.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbr.yfilter)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/mpls/ldp-neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-neighbor";
    ADD_KEY_TOKEN(nbr, "nbr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbr.is_set || is_set(nbr.yfilter)) leaf_name_data.push_back(nbr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbr")
    {
        nbr = value;
        nbr.value_namespace = name_space;
        nbr.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbr")
    {
        nbr.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "nbr")
        return true;
    return false;
}

PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Samples()
    :
    sample(this, {"sample_id"})
{

    yang_name = "samples"; yang_parent_name = "ldp-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::~Samples()
{
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    total_msgs_sent{YType::uint16, "total-msgs-sent"},
    total_msgs_rcvd{YType::uint16, "total-msgs-rcvd"},
    init_msgs_sent{YType::uint16, "init-msgs-sent"},
    init_msgs_rcvd{YType::uint16, "init-msgs-rcvd"},
    address_msgs_sent{YType::uint16, "address-msgs-sent"},
    address_msgs_rcvd{YType::uint16, "address-msgs-rcvd"},
    address_withdraw_msgs_sent{YType::uint16, "address-withdraw-msgs-sent"},
    address_withdraw_msgs_rcvd{YType::uint16, "address-withdraw-msgs-rcvd"},
    label_mapping_msgs_sent{YType::uint16, "label-mapping-msgs-sent"},
    label_mapping_msgs_rcvd{YType::uint16, "label-mapping-msgs-rcvd"},
    label_withdraw_msgs_sent{YType::uint16, "label-withdraw-msgs-sent"},
    label_withdraw_msgs_rcvd{YType::uint16, "label-withdraw-msgs-rcvd"},
    label_release_msgs_sent{YType::uint16, "label-release-msgs-sent"},
    label_release_msgs_rcvd{YType::uint16, "label-release-msgs-rcvd"},
    notification_msgs_sent{YType::uint16, "notification-msgs-sent"},
    notification_msgs_rcvd{YType::uint16, "notification-msgs-rcvd"},
    keepalive_msgs_sent{YType::uint16, "keepalive-msgs-sent"},
    keepalive_msgs_rcvd{YType::uint16, "keepalive-msgs-rcvd"}
{

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| total_msgs_sent.is_set
	|| total_msgs_rcvd.is_set
	|| init_msgs_sent.is_set
	|| init_msgs_rcvd.is_set
	|| address_msgs_sent.is_set
	|| address_msgs_rcvd.is_set
	|| address_withdraw_msgs_sent.is_set
	|| address_withdraw_msgs_rcvd.is_set
	|| label_mapping_msgs_sent.is_set
	|| label_mapping_msgs_rcvd.is_set
	|| label_withdraw_msgs_sent.is_set
	|| label_withdraw_msgs_rcvd.is_set
	|| label_release_msgs_sent.is_set
	|| label_release_msgs_rcvd.is_set
	|| notification_msgs_sent.is_set
	|| notification_msgs_rcvd.is_set
	|| keepalive_msgs_sent.is_set
	|| keepalive_msgs_rcvd.is_set;
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(total_msgs_sent.yfilter)
	|| ydk::is_set(total_msgs_rcvd.yfilter)
	|| ydk::is_set(init_msgs_sent.yfilter)
	|| ydk::is_set(init_msgs_rcvd.yfilter)
	|| ydk::is_set(address_msgs_sent.yfilter)
	|| ydk::is_set(address_msgs_rcvd.yfilter)
	|| ydk::is_set(address_withdraw_msgs_sent.yfilter)
	|| ydk::is_set(address_withdraw_msgs_rcvd.yfilter)
	|| ydk::is_set(label_mapping_msgs_sent.yfilter)
	|| ydk::is_set(label_mapping_msgs_rcvd.yfilter)
	|| ydk::is_set(label_withdraw_msgs_sent.yfilter)
	|| ydk::is_set(label_withdraw_msgs_rcvd.yfilter)
	|| ydk::is_set(label_release_msgs_sent.yfilter)
	|| ydk::is_set(label_release_msgs_rcvd.yfilter)
	|| ydk::is_set(notification_msgs_sent.yfilter)
	|| ydk::is_set(notification_msgs_rcvd.yfilter)
	|| ydk::is_set(keepalive_msgs_sent.yfilter)
	|| ydk::is_set(keepalive_msgs_rcvd.yfilter);
}

std::string PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (total_msgs_sent.is_set || is_set(total_msgs_sent.yfilter)) leaf_name_data.push_back(total_msgs_sent.get_name_leafdata());
    if (total_msgs_rcvd.is_set || is_set(total_msgs_rcvd.yfilter)) leaf_name_data.push_back(total_msgs_rcvd.get_name_leafdata());
    if (init_msgs_sent.is_set || is_set(init_msgs_sent.yfilter)) leaf_name_data.push_back(init_msgs_sent.get_name_leafdata());
    if (init_msgs_rcvd.is_set || is_set(init_msgs_rcvd.yfilter)) leaf_name_data.push_back(init_msgs_rcvd.get_name_leafdata());
    if (address_msgs_sent.is_set || is_set(address_msgs_sent.yfilter)) leaf_name_data.push_back(address_msgs_sent.get_name_leafdata());
    if (address_msgs_rcvd.is_set || is_set(address_msgs_rcvd.yfilter)) leaf_name_data.push_back(address_msgs_rcvd.get_name_leafdata());
    if (address_withdraw_msgs_sent.is_set || is_set(address_withdraw_msgs_sent.yfilter)) leaf_name_data.push_back(address_withdraw_msgs_sent.get_name_leafdata());
    if (address_withdraw_msgs_rcvd.is_set || is_set(address_withdraw_msgs_rcvd.yfilter)) leaf_name_data.push_back(address_withdraw_msgs_rcvd.get_name_leafdata());
    if (label_mapping_msgs_sent.is_set || is_set(label_mapping_msgs_sent.yfilter)) leaf_name_data.push_back(label_mapping_msgs_sent.get_name_leafdata());
    if (label_mapping_msgs_rcvd.is_set || is_set(label_mapping_msgs_rcvd.yfilter)) leaf_name_data.push_back(label_mapping_msgs_rcvd.get_name_leafdata());
    if (label_withdraw_msgs_sent.is_set || is_set(label_withdraw_msgs_sent.yfilter)) leaf_name_data.push_back(label_withdraw_msgs_sent.get_name_leafdata());
    if (label_withdraw_msgs_rcvd.is_set || is_set(label_withdraw_msgs_rcvd.yfilter)) leaf_name_data.push_back(label_withdraw_msgs_rcvd.get_name_leafdata());
    if (label_release_msgs_sent.is_set || is_set(label_release_msgs_sent.yfilter)) leaf_name_data.push_back(label_release_msgs_sent.get_name_leafdata());
    if (label_release_msgs_rcvd.is_set || is_set(label_release_msgs_rcvd.yfilter)) leaf_name_data.push_back(label_release_msgs_rcvd.get_name_leafdata());
    if (notification_msgs_sent.is_set || is_set(notification_msgs_sent.yfilter)) leaf_name_data.push_back(notification_msgs_sent.get_name_leafdata());
    if (notification_msgs_rcvd.is_set || is_set(notification_msgs_rcvd.yfilter)) leaf_name_data.push_back(notification_msgs_rcvd.get_name_leafdata());
    if (keepalive_msgs_sent.is_set || is_set(keepalive_msgs_sent.yfilter)) leaf_name_data.push_back(keepalive_msgs_sent.get_name_leafdata());
    if (keepalive_msgs_rcvd.is_set || is_set(keepalive_msgs_rcvd.yfilter)) leaf_name_data.push_back(keepalive_msgs_rcvd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-msgs-sent")
    {
        total_msgs_sent = value;
        total_msgs_sent.value_namespace = name_space;
        total_msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-msgs-rcvd")
    {
        total_msgs_rcvd = value;
        total_msgs_rcvd.value_namespace = name_space;
        total_msgs_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-msgs-sent")
    {
        init_msgs_sent = value;
        init_msgs_sent.value_namespace = name_space;
        init_msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-msgs-rcvd")
    {
        init_msgs_rcvd = value;
        init_msgs_rcvd.value_namespace = name_space;
        init_msgs_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-msgs-sent")
    {
        address_msgs_sent = value;
        address_msgs_sent.value_namespace = name_space;
        address_msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-msgs-rcvd")
    {
        address_msgs_rcvd = value;
        address_msgs_rcvd.value_namespace = name_space;
        address_msgs_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-withdraw-msgs-sent")
    {
        address_withdraw_msgs_sent = value;
        address_withdraw_msgs_sent.value_namespace = name_space;
        address_withdraw_msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-withdraw-msgs-rcvd")
    {
        address_withdraw_msgs_rcvd = value;
        address_withdraw_msgs_rcvd.value_namespace = name_space;
        address_withdraw_msgs_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-mapping-msgs-sent")
    {
        label_mapping_msgs_sent = value;
        label_mapping_msgs_sent.value_namespace = name_space;
        label_mapping_msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-mapping-msgs-rcvd")
    {
        label_mapping_msgs_rcvd = value;
        label_mapping_msgs_rcvd.value_namespace = name_space;
        label_mapping_msgs_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-withdraw-msgs-sent")
    {
        label_withdraw_msgs_sent = value;
        label_withdraw_msgs_sent.value_namespace = name_space;
        label_withdraw_msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-withdraw-msgs-rcvd")
    {
        label_withdraw_msgs_rcvd = value;
        label_withdraw_msgs_rcvd.value_namespace = name_space;
        label_withdraw_msgs_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-release-msgs-sent")
    {
        label_release_msgs_sent = value;
        label_release_msgs_sent.value_namespace = name_space;
        label_release_msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-release-msgs-rcvd")
    {
        label_release_msgs_rcvd = value;
        label_release_msgs_rcvd.value_namespace = name_space;
        label_release_msgs_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-msgs-sent")
    {
        notification_msgs_sent = value;
        notification_msgs_sent.value_namespace = name_space;
        notification_msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-msgs-rcvd")
    {
        notification_msgs_rcvd = value;
        notification_msgs_rcvd.value_namespace = name_space;
        notification_msgs_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-msgs-sent")
    {
        keepalive_msgs_sent = value;
        keepalive_msgs_sent.value_namespace = name_space;
        keepalive_msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-msgs-rcvd")
    {
        keepalive_msgs_rcvd = value;
        keepalive_msgs_rcvd.value_namespace = name_space;
        keepalive_msgs_rcvd.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "total-msgs-sent")
    {
        total_msgs_sent.yfilter = yfilter;
    }
    if(value_path == "total-msgs-rcvd")
    {
        total_msgs_rcvd.yfilter = yfilter;
    }
    if(value_path == "init-msgs-sent")
    {
        init_msgs_sent.yfilter = yfilter;
    }
    if(value_path == "init-msgs-rcvd")
    {
        init_msgs_rcvd.yfilter = yfilter;
    }
    if(value_path == "address-msgs-sent")
    {
        address_msgs_sent.yfilter = yfilter;
    }
    if(value_path == "address-msgs-rcvd")
    {
        address_msgs_rcvd.yfilter = yfilter;
    }
    if(value_path == "address-withdraw-msgs-sent")
    {
        address_withdraw_msgs_sent.yfilter = yfilter;
    }
    if(value_path == "address-withdraw-msgs-rcvd")
    {
        address_withdraw_msgs_rcvd.yfilter = yfilter;
    }
    if(value_path == "label-mapping-msgs-sent")
    {
        label_mapping_msgs_sent.yfilter = yfilter;
    }
    if(value_path == "label-mapping-msgs-rcvd")
    {
        label_mapping_msgs_rcvd.yfilter = yfilter;
    }
    if(value_path == "label-withdraw-msgs-sent")
    {
        label_withdraw_msgs_sent.yfilter = yfilter;
    }
    if(value_path == "label-withdraw-msgs-rcvd")
    {
        label_withdraw_msgs_rcvd.yfilter = yfilter;
    }
    if(value_path == "label-release-msgs-sent")
    {
        label_release_msgs_sent.yfilter = yfilter;
    }
    if(value_path == "label-release-msgs-rcvd")
    {
        label_release_msgs_rcvd.yfilter = yfilter;
    }
    if(value_path == "notification-msgs-sent")
    {
        notification_msgs_sent.yfilter = yfilter;
    }
    if(value_path == "notification-msgs-rcvd")
    {
        notification_msgs_rcvd.yfilter = yfilter;
    }
    if(value_path == "keepalive-msgs-sent")
    {
        keepalive_msgs_sent.yfilter = yfilter;
    }
    if(value_path == "keepalive-msgs-rcvd")
    {
        keepalive_msgs_rcvd.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "total-msgs-sent" || name == "total-msgs-rcvd" || name == "init-msgs-sent" || name == "init-msgs-rcvd" || name == "address-msgs-sent" || name == "address-msgs-rcvd" || name == "address-withdraw-msgs-sent" || name == "address-withdraw-msgs-rcvd" || name == "label-mapping-msgs-sent" || name == "label-mapping-msgs-rcvd" || name == "label-withdraw-msgs-sent" || name == "label-withdraw-msgs-rcvd" || name == "label-release-msgs-sent" || name == "label-release-msgs-rcvd" || name == "notification-msgs-sent" || name == "notification-msgs-rcvd" || name == "keepalive-msgs-sent" || name == "keepalive-msgs-rcvd")
        return true;
    return false;
}

PerfMgmt::Monitor::Nodes::Nodes()
    :
    node(this, {"node_id"})
{

    yang_name = "nodes"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Nodes::~Nodes()
{
}

bool PerfMgmt::Monitor::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : node.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

PerfMgmt::Monitor::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"}
        ,
    sample_xr(std::make_shared<PerfMgmt::Monitor::Nodes::Node::SampleXr>())
    , processes(std::make_shared<PerfMgmt::Monitor::Nodes::Node::Processes>())
    , samples(std::make_shared<PerfMgmt::Monitor::Nodes::Node::Samples>())
{
    sample_xr->parent = this;
    processes->parent = this;
    samples->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Nodes::Node::~Node()
{
}

bool PerfMgmt::Monitor::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_id.is_set
	|| (sample_xr !=  nullptr && sample_xr->has_data())
	|| (processes !=  nullptr && processes->has_data())
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Monitor::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (sample_xr !=  nullptr && sample_xr->has_operation())
	|| (processes !=  nullptr && processes->has_operation())
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Monitor::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_id, "node-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample-xr")
    {
        if(sample_xr == nullptr)
        {
            sample_xr = std::make_shared<PerfMgmt::Monitor::Nodes::Node::SampleXr>();
        }
        return sample_xr;
    }

    if(child_yang_name == "processes")
    {
        if(processes == nullptr)
        {
            processes = std::make_shared<PerfMgmt::Monitor::Nodes::Node::Processes>();
        }
        return processes;
    }

    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<PerfMgmt::Monitor::Nodes::Node::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sample_xr != nullptr)
    {
        children["sample-xr"] = sample_xr;
    }

    if(processes != nullptr)
    {
        children["processes"] = processes;
    }

    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Monitor::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-xr" || name == "processes" || name == "samples" || name == "node-id")
        return true;
    return false;
}

PerfMgmt::Monitor::Nodes::Node::SampleXr::SampleXr()
    :
    sample(this, {"sample_id"})
{

    yang_name = "sample-xr"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Nodes::Node::SampleXr::~SampleXr()
{
}

bool PerfMgmt::Monitor::Nodes::Node::SampleXr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Nodes::Node::SampleXr::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Nodes::Node::SampleXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Nodes::Node::SampleXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::Node::SampleXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Nodes::Node::SampleXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Nodes::Node::SampleXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Nodes::Node::SampleXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Nodes::Node::SampleXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    no_processes{YType::uint32, "no-processes"},
    average_cpu_used{YType::uint32, "average-cpu-used"}
{

    yang_name = "sample"; yang_parent_name = "sample-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| no_processes.is_set
	|| average_cpu_used.is_set;
}

bool PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(no_processes.yfilter)
	|| ydk::is_set(average_cpu_used.yfilter);
}

std::string PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (no_processes.is_set || is_set(no_processes.yfilter)) leaf_name_data.push_back(no_processes.get_name_leafdata());
    if (average_cpu_used.is_set || is_set(average_cpu_used.yfilter)) leaf_name_data.push_back(average_cpu_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-processes")
    {
        no_processes = value;
        no_processes.value_namespace = name_space;
        no_processes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-cpu-used")
    {
        average_cpu_used = value;
        average_cpu_used.value_namespace = name_space;
        average_cpu_used.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "no-processes")
    {
        no_processes.yfilter = yfilter;
    }
    if(value_path == "average-cpu-used")
    {
        average_cpu_used.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "no-processes" || name == "average-cpu-used")
        return true;
    return false;
}

PerfMgmt::Monitor::Nodes::Node::Processes::Processes()
    :
    process(this, {"process_id"})
{

    yang_name = "processes"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Nodes::Node::Processes::~Processes()
{
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Nodes::Node::Processes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Nodes::Node::Processes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::Node::Processes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Nodes::Node::Processes::Process>();
        c->parent = this;
        process.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Nodes::Node::Processes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : process.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Nodes::Node::Processes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Nodes::Node::Processes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process")
        return true;
    return false;
}

PerfMgmt::Monitor::Nodes::Node::Processes::Process::Process()
    :
    process_id{YType::int32, "process-id"}
        ,
    samples(std::make_shared<PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples>())
{
    samples->parent = this;

    yang_name = "process"; yang_parent_name = "processes"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Nodes::Node::Processes::Process::~Process()
{
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::Process::has_data() const
{
    if (is_presence_container) return true;
    return process_id.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::Process::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Monitor::Nodes::Node::Processes::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    ADD_KEY_TOKEN(process_id, "process-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Nodes::Node::Processes::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::Node::Processes::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Nodes::Node::Processes::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Monitor::Nodes::Node::Processes::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Nodes::Node::Processes::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "process-id")
        return true;
    return false;
}

PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Samples()
    :
    sample(this, {"sample_id"})
{

    yang_name = "samples"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::~Samples()
{
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    peak_memory{YType::uint32, "peak-memory"},
    average_cpu_used{YType::uint32, "average-cpu-used"},
    no_threads{YType::uint32, "no-threads"}
{

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| peak_memory.is_set
	|| average_cpu_used.is_set
	|| no_threads.is_set;
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(peak_memory.yfilter)
	|| ydk::is_set(average_cpu_used.yfilter)
	|| ydk::is_set(no_threads.yfilter);
}

std::string PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (peak_memory.is_set || is_set(peak_memory.yfilter)) leaf_name_data.push_back(peak_memory.get_name_leafdata());
    if (average_cpu_used.is_set || is_set(average_cpu_used.yfilter)) leaf_name_data.push_back(average_cpu_used.get_name_leafdata());
    if (no_threads.is_set || is_set(no_threads.yfilter)) leaf_name_data.push_back(no_threads.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-memory")
    {
        peak_memory = value;
        peak_memory.value_namespace = name_space;
        peak_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-cpu-used")
    {
        average_cpu_used = value;
        average_cpu_used.value_namespace = name_space;
        average_cpu_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-threads")
    {
        no_threads = value;
        no_threads.value_namespace = name_space;
        no_threads.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "peak-memory")
    {
        peak_memory.yfilter = yfilter;
    }
    if(value_path == "average-cpu-used")
    {
        average_cpu_used.yfilter = yfilter;
    }
    if(value_path == "no-threads")
    {
        no_threads.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "peak-memory" || name == "average-cpu-used" || name == "no-threads")
        return true;
    return false;
}

PerfMgmt::Monitor::Nodes::Node::Samples::Samples()
    :
    sample(this, {"sample_id"})
{

    yang_name = "samples"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Nodes::Node::Samples::~Samples()
{
}

bool PerfMgmt::Monitor::Nodes::Node::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Nodes::Node::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Nodes::Node::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Nodes::Node::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::Node::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Nodes::Node::Samples::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Nodes::Node::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Nodes::Node::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Nodes::Node::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Nodes::Node::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Monitor::Nodes::Node::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    curr_memory{YType::uint32, "curr-memory"},
    peak_memory{YType::uint32, "peak-memory"}
{

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Nodes::Node::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Nodes::Node::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| curr_memory.is_set
	|| peak_memory.is_set;
}

bool PerfMgmt::Monitor::Nodes::Node::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(curr_memory.yfilter)
	|| ydk::is_set(peak_memory.yfilter);
}

std::string PerfMgmt::Monitor::Nodes::Node::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Nodes::Node::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (curr_memory.is_set || is_set(curr_memory.yfilter)) leaf_name_data.push_back(curr_memory.get_name_leafdata());
    if (peak_memory.is_set || is_set(peak_memory.yfilter)) leaf_name_data.push_back(peak_memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::Node::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Nodes::Node::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Monitor::Nodes::Node::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curr-memory")
    {
        curr_memory = value;
        curr_memory.value_namespace = name_space;
        curr_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-memory")
    {
        peak_memory = value;
        peak_memory.value_namespace = name_space;
        peak_memory.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Nodes::Node::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "curr-memory")
    {
        curr_memory.yfilter = yfilter;
    }
    if(value_path == "peak-memory")
    {
        peak_memory.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Nodes::Node::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "curr-memory" || name == "peak-memory")
        return true;
    return false;
}

PerfMgmt::Monitor::Bgp::Bgp()
    :
    bgp_neighbors(std::make_shared<PerfMgmt::Monitor::Bgp::BgpNeighbors>())
{
    bgp_neighbors->parent = this;

    yang_name = "bgp"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Bgp::~Bgp()
{
}

bool PerfMgmt::Monitor::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return (bgp_neighbors !=  nullptr && bgp_neighbors->has_data());
}

bool PerfMgmt::Monitor::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (bgp_neighbors !=  nullptr && bgp_neighbors->has_operation());
}

std::string PerfMgmt::Monitor::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-neighbors")
    {
        if(bgp_neighbors == nullptr)
        {
            bgp_neighbors = std::make_shared<PerfMgmt::Monitor::Bgp::BgpNeighbors>();
        }
        return bgp_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bgp_neighbors != nullptr)
    {
        children["bgp-neighbors"] = bgp_neighbors;
    }

    return children;
}

void PerfMgmt::Monitor::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-neighbors")
        return true;
    return false;
}

PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbors()
    :
    bgp_neighbor(this, {"ip_address"})
{

    yang_name = "bgp-neighbors"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Bgp::BgpNeighbors::~BgpNeighbors()
{
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_neighbor.len(); index++)
    {
        if(bgp_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::has_operation() const
{
    for (std::size_t index=0; index<bgp_neighbor.len(); index++)
    {
        if(bgp_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Bgp::BgpNeighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Bgp::BgpNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Bgp::BgpNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Bgp::BgpNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-neighbor")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor>();
        c->parent = this;
        bgp_neighbor.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Bgp::BgpNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bgp_neighbor.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Bgp::BgpNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Bgp::BgpNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-neighbor")
        return true;
    return false;
}

PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::BgpNeighbor()
    :
    ip_address{YType::str, "ip-address"}
        ,
    samples(std::make_shared<PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples>())
{
    samples->parent = this;

    yang_name = "bgp-neighbor"; yang_parent_name = "bgp-neighbors"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::~BgpNeighbor()
{
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/bgp/bgp-neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "ip-address")
        return true;
    return false;
}

PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Samples()
    :
    sample(this, {"sample_id"})
{

    yang_name = "samples"; yang_parent_name = "bgp-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::~Samples()
{
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    input_messages{YType::uint32, "input-messages"},
    output_messages{YType::uint32, "output-messages"},
    input_update_messages{YType::uint32, "input-update-messages"},
    output_update_messages{YType::uint32, "output-update-messages"},
    conn_established{YType::uint32, "conn-established"},
    conn_dropped{YType::uint32, "conn-dropped"},
    errors_received{YType::uint32, "errors-received"},
    errors_sent{YType::uint32, "errors-sent"}
{

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| input_messages.is_set
	|| output_messages.is_set
	|| input_update_messages.is_set
	|| output_update_messages.is_set
	|| conn_established.is_set
	|| conn_dropped.is_set
	|| errors_received.is_set
	|| errors_sent.is_set;
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(input_messages.yfilter)
	|| ydk::is_set(output_messages.yfilter)
	|| ydk::is_set(input_update_messages.yfilter)
	|| ydk::is_set(output_update_messages.yfilter)
	|| ydk::is_set(conn_established.yfilter)
	|| ydk::is_set(conn_dropped.yfilter)
	|| ydk::is_set(errors_received.yfilter)
	|| ydk::is_set(errors_sent.yfilter);
}

std::string PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (input_messages.is_set || is_set(input_messages.yfilter)) leaf_name_data.push_back(input_messages.get_name_leafdata());
    if (output_messages.is_set || is_set(output_messages.yfilter)) leaf_name_data.push_back(output_messages.get_name_leafdata());
    if (input_update_messages.is_set || is_set(input_update_messages.yfilter)) leaf_name_data.push_back(input_update_messages.get_name_leafdata());
    if (output_update_messages.is_set || is_set(output_update_messages.yfilter)) leaf_name_data.push_back(output_update_messages.get_name_leafdata());
    if (conn_established.is_set || is_set(conn_established.yfilter)) leaf_name_data.push_back(conn_established.get_name_leafdata());
    if (conn_dropped.is_set || is_set(conn_dropped.yfilter)) leaf_name_data.push_back(conn_dropped.get_name_leafdata());
    if (errors_received.is_set || is_set(errors_received.yfilter)) leaf_name_data.push_back(errors_received.get_name_leafdata());
    if (errors_sent.is_set || is_set(errors_sent.yfilter)) leaf_name_data.push_back(errors_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-messages")
    {
        input_messages = value;
        input_messages.value_namespace = name_space;
        input_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-messages")
    {
        output_messages = value;
        output_messages.value_namespace = name_space;
        output_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-update-messages")
    {
        input_update_messages = value;
        input_update_messages.value_namespace = name_space;
        input_update_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-update-messages")
    {
        output_update_messages = value;
        output_update_messages.value_namespace = name_space;
        output_update_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-established")
    {
        conn_established = value;
        conn_established.value_namespace = name_space;
        conn_established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-dropped")
    {
        conn_dropped = value;
        conn_dropped.value_namespace = name_space;
        conn_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors-received")
    {
        errors_received = value;
        errors_received.value_namespace = name_space;
        errors_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors-sent")
    {
        errors_sent = value;
        errors_sent.value_namespace = name_space;
        errors_sent.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "input-messages")
    {
        input_messages.yfilter = yfilter;
    }
    if(value_path == "output-messages")
    {
        output_messages.yfilter = yfilter;
    }
    if(value_path == "input-update-messages")
    {
        input_update_messages.yfilter = yfilter;
    }
    if(value_path == "output-update-messages")
    {
        output_update_messages.yfilter = yfilter;
    }
    if(value_path == "conn-established")
    {
        conn_established.yfilter = yfilter;
    }
    if(value_path == "conn-dropped")
    {
        conn_dropped.yfilter = yfilter;
    }
    if(value_path == "errors-received")
    {
        errors_received.yfilter = yfilter;
    }
    if(value_path == "errors-sent")
    {
        errors_sent.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "input-messages" || name == "output-messages" || name == "input-update-messages" || name == "output-update-messages" || name == "conn-established" || name == "conn-dropped" || name == "errors-received" || name == "errors-sent")
        return true;
    return false;
}

PerfMgmt::Monitor::Interface::Interface()
    :
    generic_counter_interfaces(std::make_shared<PerfMgmt::Monitor::Interface::GenericCounterInterfaces>())
    , basic_counter_interfaces(std::make_shared<PerfMgmt::Monitor::Interface::BasicCounterInterfaces>())
    , data_rate_interfaces(std::make_shared<PerfMgmt::Monitor::Interface::DataRateInterfaces>())
{
    generic_counter_interfaces->parent = this;
    basic_counter_interfaces->parent = this;
    data_rate_interfaces->parent = this;

    yang_name = "interface"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Interface::~Interface()
{
}

bool PerfMgmt::Monitor::Interface::has_data() const
{
    if (is_presence_container) return true;
    return (generic_counter_interfaces !=  nullptr && generic_counter_interfaces->has_data())
	|| (basic_counter_interfaces !=  nullptr && basic_counter_interfaces->has_data())
	|| (data_rate_interfaces !=  nullptr && data_rate_interfaces->has_data());
}

bool PerfMgmt::Monitor::Interface::has_operation() const
{
    return is_set(yfilter)
	|| (generic_counter_interfaces !=  nullptr && generic_counter_interfaces->has_operation())
	|| (basic_counter_interfaces !=  nullptr && basic_counter_interfaces->has_operation())
	|| (data_rate_interfaces !=  nullptr && data_rate_interfaces->has_operation());
}

std::string PerfMgmt::Monitor::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-counter-interfaces")
    {
        if(generic_counter_interfaces == nullptr)
        {
            generic_counter_interfaces = std::make_shared<PerfMgmt::Monitor::Interface::GenericCounterInterfaces>();
        }
        return generic_counter_interfaces;
    }

    if(child_yang_name == "basic-counter-interfaces")
    {
        if(basic_counter_interfaces == nullptr)
        {
            basic_counter_interfaces = std::make_shared<PerfMgmt::Monitor::Interface::BasicCounterInterfaces>();
        }
        return basic_counter_interfaces;
    }

    if(child_yang_name == "data-rate-interfaces")
    {
        if(data_rate_interfaces == nullptr)
        {
            data_rate_interfaces = std::make_shared<PerfMgmt::Monitor::Interface::DataRateInterfaces>();
        }
        return data_rate_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generic_counter_interfaces != nullptr)
    {
        children["generic-counter-interfaces"] = generic_counter_interfaces;
    }

    if(basic_counter_interfaces != nullptr)
    {
        children["basic-counter-interfaces"] = basic_counter_interfaces;
    }

    if(data_rate_interfaces != nullptr)
    {
        children["data-rate-interfaces"] = data_rate_interfaces;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-counter-interfaces" || name == "basic-counter-interfaces" || name == "data-rate-interfaces")
        return true;
    return false;
}

PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterfaces()
    :
    generic_counter_interface(this, {"interface_name"})
{

    yang_name = "generic-counter-interfaces"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Interface::GenericCounterInterfaces::~GenericCounterInterfaces()
{
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<generic_counter_interface.len(); index++)
    {
        if(generic_counter_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::has_operation() const
{
    for (std::size_t index=0; index<generic_counter_interface.len(); index++)
    {
        if(generic_counter_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Interface::GenericCounterInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Interface::GenericCounterInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Interface::GenericCounterInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::GenericCounterInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-counter-interface")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface>();
        c->parent = this;
        generic_counter_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::GenericCounterInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : generic_counter_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::GenericCounterInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Interface::GenericCounterInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-counter-interface")
        return true;
    return false;
}

PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::GenericCounterInterface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    samples(std::make_shared<PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples>())
{
    samples->parent = this;

    yang_name = "generic-counter-interface"; yang_parent_name = "generic-counter-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::~GenericCounterInterface()
{
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/interface/generic-counter-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "interface-name")
        return true;
    return false;
}

PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Samples()
    :
    sample(this, {"sample_id"})
{

    yang_name = "samples"; yang_parent_name = "generic-counter-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::~Samples()
{
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    in_packets{YType::uint64, "in-packets"},
    in_octets{YType::uint64, "in-octets"},
    out_packets{YType::uint64, "out-packets"},
    out_octets{YType::uint64, "out-octets"},
    in_ucast_pkts{YType::uint64, "in-ucast-pkts"},
    in_multicast_pkts{YType::uint64, "in-multicast-pkts"},
    in_broadcast_pkts{YType::uint64, "in-broadcast-pkts"},
    out_ucast_pkts{YType::uint64, "out-ucast-pkts"},
    out_multicast_pkts{YType::uint64, "out-multicast-pkts"},
    out_broadcast_pkts{YType::uint64, "out-broadcast-pkts"},
    output_total_drops{YType::uint32, "output-total-drops"},
    input_total_drops{YType::uint32, "input-total-drops"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    input_unknown_proto{YType::uint32, "input-unknown-proto"},
    output_total_errors{YType::uint32, "output-total-errors"},
    output_underrun{YType::uint32, "output-underrun"},
    input_total_errors{YType::uint32, "input-total-errors"},
    input_crc{YType::uint32, "input-crc"},
    input_overrun{YType::uint32, "input-overrun"},
    input_frame{YType::uint32, "input-frame"}
{

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| in_packets.is_set
	|| in_octets.is_set
	|| out_packets.is_set
	|| out_octets.is_set
	|| in_ucast_pkts.is_set
	|| in_multicast_pkts.is_set
	|| in_broadcast_pkts.is_set
	|| out_ucast_pkts.is_set
	|| out_multicast_pkts.is_set
	|| out_broadcast_pkts.is_set
	|| output_total_drops.is_set
	|| input_total_drops.is_set
	|| input_queue_drops.is_set
	|| input_unknown_proto.is_set
	|| output_total_errors.is_set
	|| output_underrun.is_set
	|| input_total_errors.is_set
	|| input_crc.is_set
	|| input_overrun.is_set
	|| input_frame.is_set;
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(in_packets.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(out_packets.yfilter)
	|| ydk::is_set(out_octets.yfilter)
	|| ydk::is_set(in_ucast_pkts.yfilter)
	|| ydk::is_set(in_multicast_pkts.yfilter)
	|| ydk::is_set(in_broadcast_pkts.yfilter)
	|| ydk::is_set(out_ucast_pkts.yfilter)
	|| ydk::is_set(out_multicast_pkts.yfilter)
	|| ydk::is_set(out_broadcast_pkts.yfilter)
	|| ydk::is_set(output_total_drops.yfilter)
	|| ydk::is_set(input_total_drops.yfilter)
	|| ydk::is_set(input_queue_drops.yfilter)
	|| ydk::is_set(input_unknown_proto.yfilter)
	|| ydk::is_set(output_total_errors.yfilter)
	|| ydk::is_set(output_underrun.yfilter)
	|| ydk::is_set(input_total_errors.yfilter)
	|| ydk::is_set(input_crc.yfilter)
	|| ydk::is_set(input_overrun.yfilter)
	|| ydk::is_set(input_frame.yfilter);
}

std::string PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (in_packets.is_set || is_set(in_packets.yfilter)) leaf_name_data.push_back(in_packets.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (out_packets.is_set || is_set(out_packets.yfilter)) leaf_name_data.push_back(out_packets.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (in_ucast_pkts.is_set || is_set(in_ucast_pkts.yfilter)) leaf_name_data.push_back(in_ucast_pkts.get_name_leafdata());
    if (in_multicast_pkts.is_set || is_set(in_multicast_pkts.yfilter)) leaf_name_data.push_back(in_multicast_pkts.get_name_leafdata());
    if (in_broadcast_pkts.is_set || is_set(in_broadcast_pkts.yfilter)) leaf_name_data.push_back(in_broadcast_pkts.get_name_leafdata());
    if (out_ucast_pkts.is_set || is_set(out_ucast_pkts.yfilter)) leaf_name_data.push_back(out_ucast_pkts.get_name_leafdata());
    if (out_multicast_pkts.is_set || is_set(out_multicast_pkts.yfilter)) leaf_name_data.push_back(out_multicast_pkts.get_name_leafdata());
    if (out_broadcast_pkts.is_set || is_set(out_broadcast_pkts.yfilter)) leaf_name_data.push_back(out_broadcast_pkts.get_name_leafdata());
    if (output_total_drops.is_set || is_set(output_total_drops.yfilter)) leaf_name_data.push_back(output_total_drops.get_name_leafdata());
    if (input_total_drops.is_set || is_set(input_total_drops.yfilter)) leaf_name_data.push_back(input_total_drops.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.yfilter)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (input_unknown_proto.is_set || is_set(input_unknown_proto.yfilter)) leaf_name_data.push_back(input_unknown_proto.get_name_leafdata());
    if (output_total_errors.is_set || is_set(output_total_errors.yfilter)) leaf_name_data.push_back(output_total_errors.get_name_leafdata());
    if (output_underrun.is_set || is_set(output_underrun.yfilter)) leaf_name_data.push_back(output_underrun.get_name_leafdata());
    if (input_total_errors.is_set || is_set(input_total_errors.yfilter)) leaf_name_data.push_back(input_total_errors.get_name_leafdata());
    if (input_crc.is_set || is_set(input_crc.yfilter)) leaf_name_data.push_back(input_crc.get_name_leafdata());
    if (input_overrun.is_set || is_set(input_overrun.yfilter)) leaf_name_data.push_back(input_overrun.get_name_leafdata());
    if (input_frame.is_set || is_set(input_frame.yfilter)) leaf_name_data.push_back(input_frame.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-packets")
    {
        in_packets = value;
        in_packets.value_namespace = name_space;
        in_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-packets")
    {
        out_packets = value;
        out_packets.value_namespace = name_space;
        out_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-ucast-pkts")
    {
        in_ucast_pkts = value;
        in_ucast_pkts.value_namespace = name_space;
        in_ucast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts = value;
        in_multicast_pkts.value_namespace = name_space;
        in_multicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts = value;
        in_broadcast_pkts.value_namespace = name_space;
        in_broadcast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ucast-pkts")
    {
        out_ucast_pkts = value;
        out_ucast_pkts.value_namespace = name_space;
        out_ucast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts = value;
        out_multicast_pkts.value_namespace = name_space;
        out_multicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts = value;
        out_broadcast_pkts.value_namespace = name_space;
        out_broadcast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-total-drops")
    {
        output_total_drops = value;
        output_total_drops.value_namespace = name_space;
        output_total_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-total-drops")
    {
        input_total_drops = value;
        input_total_drops.value_namespace = name_space;
        input_total_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
        input_queue_drops.value_namespace = name_space;
        input_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-unknown-proto")
    {
        input_unknown_proto = value;
        input_unknown_proto.value_namespace = name_space;
        input_unknown_proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-total-errors")
    {
        output_total_errors = value;
        output_total_errors.value_namespace = name_space;
        output_total_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-underrun")
    {
        output_underrun = value;
        output_underrun.value_namespace = name_space;
        output_underrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-total-errors")
    {
        input_total_errors = value;
        input_total_errors.value_namespace = name_space;
        input_total_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-crc")
    {
        input_crc = value;
        input_crc.value_namespace = name_space;
        input_crc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-overrun")
    {
        input_overrun = value;
        input_overrun.value_namespace = name_space;
        input_overrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-frame")
    {
        input_frame = value;
        input_frame.value_namespace = name_space;
        input_frame.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "in-packets")
    {
        in_packets.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "out-packets")
    {
        out_packets.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
    if(value_path == "in-ucast-pkts")
    {
        in_ucast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts.yfilter = yfilter;
    }
    if(value_path == "out-ucast-pkts")
    {
        out_ucast_pkts.yfilter = yfilter;
    }
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts.yfilter = yfilter;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts.yfilter = yfilter;
    }
    if(value_path == "output-total-drops")
    {
        output_total_drops.yfilter = yfilter;
    }
    if(value_path == "input-total-drops")
    {
        input_total_drops.yfilter = yfilter;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops.yfilter = yfilter;
    }
    if(value_path == "input-unknown-proto")
    {
        input_unknown_proto.yfilter = yfilter;
    }
    if(value_path == "output-total-errors")
    {
        output_total_errors.yfilter = yfilter;
    }
    if(value_path == "output-underrun")
    {
        output_underrun.yfilter = yfilter;
    }
    if(value_path == "input-total-errors")
    {
        input_total_errors.yfilter = yfilter;
    }
    if(value_path == "input-crc")
    {
        input_crc.yfilter = yfilter;
    }
    if(value_path == "input-overrun")
    {
        input_overrun.yfilter = yfilter;
    }
    if(value_path == "input-frame")
    {
        input_frame.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "in-packets" || name == "in-octets" || name == "out-packets" || name == "out-octets" || name == "in-ucast-pkts" || name == "in-multicast-pkts" || name == "in-broadcast-pkts" || name == "out-ucast-pkts" || name == "out-multicast-pkts" || name == "out-broadcast-pkts" || name == "output-total-drops" || name == "input-total-drops" || name == "input-queue-drops" || name == "input-unknown-proto" || name == "output-total-errors" || name == "output-underrun" || name == "input-total-errors" || name == "input-crc" || name == "input-overrun" || name == "input-frame")
        return true;
    return false;
}

PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterfaces()
    :
    basic_counter_interface(this, {"interface_name"})
{

    yang_name = "basic-counter-interfaces"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Interface::BasicCounterInterfaces::~BasicCounterInterfaces()
{
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<basic_counter_interface.len(); index++)
    {
        if(basic_counter_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::has_operation() const
{
    for (std::size_t index=0; index<basic_counter_interface.len(); index++)
    {
        if(basic_counter_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Interface::BasicCounterInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Interface::BasicCounterInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Interface::BasicCounterInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::BasicCounterInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-counter-interface")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface>();
        c->parent = this;
        basic_counter_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::BasicCounterInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : basic_counter_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::BasicCounterInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Interface::BasicCounterInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-counter-interface")
        return true;
    return false;
}

PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::BasicCounterInterface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    samples(std::make_shared<PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples>())
{
    samples->parent = this;

    yang_name = "basic-counter-interface"; yang_parent_name = "basic-counter-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::~BasicCounterInterface()
{
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/interface/basic-counter-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "interface-name")
        return true;
    return false;
}

PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Samples()
    :
    sample(this, {"sample_id"})
{

    yang_name = "samples"; yang_parent_name = "basic-counter-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::~Samples()
{
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    in_packets{YType::uint64, "in-packets"},
    in_octets{YType::uint64, "in-octets"},
    out_packets{YType::uint64, "out-packets"},
    out_octets{YType::uint64, "out-octets"},
    input_total_drops{YType::uint64, "input-total-drops"},
    input_queue_drops{YType::uint64, "input-queue-drops"},
    input_total_errors{YType::uint64, "input-total-errors"},
    output_total_drops{YType::uint64, "output-total-drops"},
    output_queue_drops{YType::uint64, "output-queue-drops"},
    output_total_errors{YType::uint64, "output-total-errors"}
{

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| in_packets.is_set
	|| in_octets.is_set
	|| out_packets.is_set
	|| out_octets.is_set
	|| input_total_drops.is_set
	|| input_queue_drops.is_set
	|| input_total_errors.is_set
	|| output_total_drops.is_set
	|| output_queue_drops.is_set
	|| output_total_errors.is_set;
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(in_packets.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(out_packets.yfilter)
	|| ydk::is_set(out_octets.yfilter)
	|| ydk::is_set(input_total_drops.yfilter)
	|| ydk::is_set(input_queue_drops.yfilter)
	|| ydk::is_set(input_total_errors.yfilter)
	|| ydk::is_set(output_total_drops.yfilter)
	|| ydk::is_set(output_queue_drops.yfilter)
	|| ydk::is_set(output_total_errors.yfilter);
}

std::string PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (in_packets.is_set || is_set(in_packets.yfilter)) leaf_name_data.push_back(in_packets.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (out_packets.is_set || is_set(out_packets.yfilter)) leaf_name_data.push_back(out_packets.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (input_total_drops.is_set || is_set(input_total_drops.yfilter)) leaf_name_data.push_back(input_total_drops.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.yfilter)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (input_total_errors.is_set || is_set(input_total_errors.yfilter)) leaf_name_data.push_back(input_total_errors.get_name_leafdata());
    if (output_total_drops.is_set || is_set(output_total_drops.yfilter)) leaf_name_data.push_back(output_total_drops.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.yfilter)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (output_total_errors.is_set || is_set(output_total_errors.yfilter)) leaf_name_data.push_back(output_total_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-packets")
    {
        in_packets = value;
        in_packets.value_namespace = name_space;
        in_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-packets")
    {
        out_packets = value;
        out_packets.value_namespace = name_space;
        out_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-total-drops")
    {
        input_total_drops = value;
        input_total_drops.value_namespace = name_space;
        input_total_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
        input_queue_drops.value_namespace = name_space;
        input_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-total-errors")
    {
        input_total_errors = value;
        input_total_errors.value_namespace = name_space;
        input_total_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-total-drops")
    {
        output_total_drops = value;
        output_total_drops.value_namespace = name_space;
        output_total_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
        output_queue_drops.value_namespace = name_space;
        output_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-total-errors")
    {
        output_total_errors = value;
        output_total_errors.value_namespace = name_space;
        output_total_errors.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "in-packets")
    {
        in_packets.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "out-packets")
    {
        out_packets.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
    if(value_path == "input-total-drops")
    {
        input_total_drops.yfilter = yfilter;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops.yfilter = yfilter;
    }
    if(value_path == "input-total-errors")
    {
        input_total_errors.yfilter = yfilter;
    }
    if(value_path == "output-total-drops")
    {
        output_total_drops.yfilter = yfilter;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops.yfilter = yfilter;
    }
    if(value_path == "output-total-errors")
    {
        output_total_errors.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "in-packets" || name == "in-octets" || name == "out-packets" || name == "out-octets" || name == "input-total-drops" || name == "input-queue-drops" || name == "input-total-errors" || name == "output-total-drops" || name == "output-queue-drops" || name == "output-total-errors")
        return true;
    return false;
}

PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterfaces()
    :
    data_rate_interface(this, {"interface_name"})
{

    yang_name = "data-rate-interfaces"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Interface::DataRateInterfaces::~DataRateInterfaces()
{
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_rate_interface.len(); index++)
    {
        if(data_rate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<data_rate_interface.len(); index++)
    {
        if(data_rate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Interface::DataRateInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Interface::DataRateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Interface::DataRateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::DataRateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-rate-interface")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface>();
        c->parent = this;
        data_rate_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::DataRateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : data_rate_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::DataRateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Interface::DataRateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-rate-interface")
        return true;
    return false;
}

PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::DataRateInterface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    samples(std::make_shared<PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples>())
{
    samples->parent = this;

    yang_name = "data-rate-interface"; yang_parent_name = "data-rate-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::~DataRateInterface()
{
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/interface/data-rate-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "interface-name")
        return true;
    return false;
}

PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Samples()
    :
    sample(this, {"sample_id"})
{

    yang_name = "samples"; yang_parent_name = "data-rate-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::~Samples()
{
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto c = std::make_shared<PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample>();
        c->parent = this;
        sample.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sample.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    time_stamp{YType::uint64, "time-stamp"},
    input_data_rate{YType::uint32, "input-data-rate"},
    input_packet_rate{YType::uint32, "input-packet-rate"},
    output_data_rate{YType::uint32, "output-data-rate"},
    output_packet_rate{YType::uint32, "output-packet-rate"},
    input_peak_rate{YType::uint32, "input-peak-rate"},
    input_peak_pkts{YType::uint32, "input-peak-pkts"},
    output_peak_rate{YType::uint32, "output-peak-rate"},
    output_peak_pkts{YType::uint32, "output-peak-pkts"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_id.is_set
	|| time_stamp.is_set
	|| input_data_rate.is_set
	|| input_packet_rate.is_set
	|| output_data_rate.is_set
	|| output_packet_rate.is_set
	|| input_peak_rate.is_set
	|| input_peak_pkts.is_set
	|| output_peak_rate.is_set
	|| output_peak_pkts.is_set
	|| bandwidth.is_set;
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_id.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(input_data_rate.yfilter)
	|| ydk::is_set(input_packet_rate.yfilter)
	|| ydk::is_set(output_data_rate.yfilter)
	|| ydk::is_set(output_packet_rate.yfilter)
	|| ydk::is_set(input_peak_rate.yfilter)
	|| ydk::is_set(input_peak_pkts.yfilter)
	|| ydk::is_set(output_peak_rate.yfilter)
	|| ydk::is_set(output_peak_pkts.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_id, "sample-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.yfilter)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (input_data_rate.is_set || is_set(input_data_rate.yfilter)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.yfilter)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.yfilter)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.yfilter)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());
    if (input_peak_rate.is_set || is_set(input_peak_rate.yfilter)) leaf_name_data.push_back(input_peak_rate.get_name_leafdata());
    if (input_peak_pkts.is_set || is_set(input_peak_pkts.yfilter)) leaf_name_data.push_back(input_peak_pkts.get_name_leafdata());
    if (output_peak_rate.is_set || is_set(output_peak_rate.yfilter)) leaf_name_data.push_back(output_peak_rate.get_name_leafdata());
    if (output_peak_pkts.is_set || is_set(output_peak_pkts.yfilter)) leaf_name_data.push_back(output_peak_pkts.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
        sample_id.value_namespace = name_space;
        sample_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
        input_data_rate.value_namespace = name_space;
        input_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
        input_packet_rate.value_namespace = name_space;
        input_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
        output_data_rate.value_namespace = name_space;
        output_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
        output_packet_rate.value_namespace = name_space;
        output_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-peak-rate")
    {
        input_peak_rate = value;
        input_peak_rate.value_namespace = name_space;
        input_peak_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-peak-pkts")
    {
        input_peak_pkts = value;
        input_peak_pkts.value_namespace = name_space;
        input_peak_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-peak-rate")
    {
        output_peak_rate = value;
        output_peak_rate.value_namespace = name_space;
        output_peak_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-peak-pkts")
    {
        output_peak_pkts = value;
        output_peak_pkts.value_namespace = name_space;
        output_peak_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-id")
    {
        sample_id.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate.yfilter = yfilter;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate.yfilter = yfilter;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate.yfilter = yfilter;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate.yfilter = yfilter;
    }
    if(value_path == "input-peak-rate")
    {
        input_peak_rate.yfilter = yfilter;
    }
    if(value_path == "input-peak-pkts")
    {
        input_peak_pkts.yfilter = yfilter;
    }
    if(value_path == "output-peak-rate")
    {
        output_peak_rate.yfilter = yfilter;
    }
    if(value_path == "output-peak-pkts")
    {
        output_peak_pkts.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-id" || name == "time-stamp" || name == "input-data-rate" || name == "input-packet-rate" || name == "output-data-rate" || name == "output-packet-rate" || name == "input-peak-rate" || name == "input-peak-pkts" || name == "output-peak-rate" || name == "output-peak-pkts" || name == "bandwidth")
        return true;
    return false;
}


}
}

