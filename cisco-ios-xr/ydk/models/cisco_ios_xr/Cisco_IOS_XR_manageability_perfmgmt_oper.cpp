
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_manageability_perfmgmt_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_manageability_perfmgmt_oper {

PerfMgmt::PerfMgmt()
    :
    monitor(std::make_shared<PerfMgmt::Monitor>())
	,periodic(std::make_shared<PerfMgmt::Periodic>())
{
    monitor->parent = this;

    periodic->parent = this;

    yang_name = "perf-mgmt"; yang_parent_name = "Cisco-IOS-XR-manageability-perfmgmt-oper";
}

PerfMgmt::~PerfMgmt()
{
}

bool PerfMgmt::has_data() const
{
    return (monitor !=  nullptr && monitor->has_data())
	|| (periodic !=  nullptr && periodic->has_data());
}

bool PerfMgmt::has_operation() const
{
    return is_set(operation)
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string PerfMgmt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt";

    return path_buffer.str();

}

const EntityPath PerfMgmt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerfMgmt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<PerfMgmt::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<PerfMgmt::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(periodic != nullptr)
    {
        children["periodic"] = periodic;
    }

    return children;
}

void PerfMgmt::set_value(const std::string & value_path, std::string value)
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

PerfMgmt::Periodic::Periodic()
    :
    bgp(std::make_shared<PerfMgmt::Periodic::Bgp>())
	,interface(std::make_shared<PerfMgmt::Periodic::Interface>())
	,mpls(std::make_shared<PerfMgmt::Periodic::Mpls>())
	,nodes(std::make_shared<PerfMgmt::Periodic::Nodes>())
	,ospf(std::make_shared<PerfMgmt::Periodic::Ospf>())
{
    bgp->parent = this;

    interface->parent = this;

    mpls->parent = this;

    nodes->parent = this;

    ospf->parent = this;

    yang_name = "periodic"; yang_parent_name = "perf-mgmt";
}

PerfMgmt::Periodic::~Periodic()
{
}

bool PerfMgmt::Periodic::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (nodes !=  nullptr && nodes->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool PerfMgmt::Periodic::has_operation() const
{
    return is_set(operation)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string PerfMgmt::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PerfMgmt::Periodic::Ospf>();
        }
        return ospf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    return children;
}

void PerfMgmt::Periodic::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Ospf::Ospf()
    :
    ospfv2_protocol_instances(std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances>())
	,ospfv3_protocol_instances(std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances>())
{
    ospfv2_protocol_instances->parent = this;

    ospfv3_protocol_instances->parent = this;

    yang_name = "ospf"; yang_parent_name = "periodic";
}

PerfMgmt::Periodic::Ospf::~Ospf()
{
}

bool PerfMgmt::Periodic::Ospf::has_data() const
{
    return (ospfv2_protocol_instances !=  nullptr && ospfv2_protocol_instances->has_data())
	|| (ospfv3_protocol_instances !=  nullptr && ospfv3_protocol_instances->has_data());
}

bool PerfMgmt::Periodic::Ospf::has_operation() const
{
    return is_set(operation)
	|| (ospfv2_protocol_instances !=  nullptr && ospfv2_protocol_instances->has_operation())
	|| (ospfv3_protocol_instances !=  nullptr && ospfv3_protocol_instances->has_operation());
}

std::string PerfMgmt::Periodic::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void PerfMgmt::Periodic::Ospf::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstances()
{
    yang_name = "ospfv2-protocol-instances"; yang_parent_name = "ospf";
}

PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::~Ospfv2ProtocolInstances()
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::has_data() const
{
    for (std::size_t index=0; index<ospfv2_protocol_instance.size(); index++)
    {
        if(ospfv2_protocol_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_protocol_instance.size(); index++)
    {
        if(ospfv2_protocol_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol-instances";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/ospf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-protocol-instance")
    {
        for(auto const & c : ospfv2_protocol_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance>();
        c->parent = this;
        ospfv2_protocol_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfv2_protocol_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Ospfv2ProtocolInstance()
    :
    instance_name{YType::str, "instance-name"}
    	,
    samples(std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples>())
{
    samples->parent = this;

    yang_name = "ospfv2-protocol-instance"; yang_parent_name = "ospfv2-protocol-instances";
}

PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::~Ospfv2ProtocolInstance()
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::has_data() const
{
    return instance_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol-instance" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/ospf/ospfv2-protocol-instances/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Samples()
{
    yang_name = "samples"; yang_parent_name = "ospfv2-protocol-instance";
}

PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::~Samples()
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Samples' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    checksum_errors{YType::uint32, "checksum-errors"},
    input_db_ds{YType::uint32, "input-db-ds"},
    input_db_ds_lsa{YType::uint32, "input-db-ds-lsa"},
    input_hello_packets{YType::uint32, "input-hello-packets"},
    input_ls_requests{YType::uint32, "input-ls-requests"},
    input_ls_requests_lsa{YType::uint32, "input-ls-requests-lsa"},
    input_lsa_acks{YType::uint32, "input-lsa-acks"},
    input_lsa_acks_lsa{YType::uint32, "input-lsa-acks-lsa"},
    input_lsa_updates{YType::uint32, "input-lsa-updates"},
    input_lsa_updates_lsa{YType::uint32, "input-lsa-updates-lsa"},
    input_packets{YType::uint32, "input-packets"},
    output_db_ds{YType::uint32, "output-db-ds"},
    output_db_ds_lsa{YType::uint32, "output-db-ds-lsa"},
    output_hello_packets{YType::uint32, "output-hello-packets"},
    output_ls_requests{YType::uint32, "output-ls-requests"},
    output_ls_requests_lsa{YType::uint32, "output-ls-requests-lsa"},
    output_lsa_acks{YType::uint32, "output-lsa-acks"},
    output_lsa_acks_lsa{YType::uint32, "output-lsa-acks-lsa"},
    output_lsa_updates{YType::uint32, "output-lsa-updates"},
    output_lsa_updates_lsa{YType::uint32, "output-lsa-updates-lsa"},
    output_packets{YType::uint32, "output-packets"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "sample"; yang_parent_name = "samples";
}

PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::has_data() const
{
    return sample_id.is_set
	|| checksum_errors.is_set
	|| input_db_ds.is_set
	|| input_db_ds_lsa.is_set
	|| input_hello_packets.is_set
	|| input_ls_requests.is_set
	|| input_ls_requests_lsa.is_set
	|| input_lsa_acks.is_set
	|| input_lsa_acks_lsa.is_set
	|| input_lsa_updates.is_set
	|| input_lsa_updates_lsa.is_set
	|| input_packets.is_set
	|| output_db_ds.is_set
	|| output_db_ds_lsa.is_set
	|| output_hello_packets.is_set
	|| output_ls_requests.is_set
	|| output_ls_requests_lsa.is_set
	|| output_lsa_acks.is_set
	|| output_lsa_acks_lsa.is_set
	|| output_lsa_updates.is_set
	|| output_lsa_updates_lsa.is_set
	|| output_packets.is_set
	|| time_stamp.is_set;
}

bool PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(checksum_errors.operation)
	|| is_set(input_db_ds.operation)
	|| is_set(input_db_ds_lsa.operation)
	|| is_set(input_hello_packets.operation)
	|| is_set(input_ls_requests.operation)
	|| is_set(input_ls_requests_lsa.operation)
	|| is_set(input_lsa_acks.operation)
	|| is_set(input_lsa_acks_lsa.operation)
	|| is_set(input_lsa_updates.operation)
	|| is_set(input_lsa_updates_lsa.operation)
	|| is_set(input_packets.operation)
	|| is_set(output_db_ds.operation)
	|| is_set(output_db_ds_lsa.operation)
	|| is_set(output_hello_packets.operation)
	|| is_set(output_ls_requests.operation)
	|| is_set(output_ls_requests_lsa.operation)
	|| is_set(output_lsa_acks.operation)
	|| is_set(output_lsa_acks_lsa.operation)
	|| is_set(output_lsa_updates.operation)
	|| is_set(output_lsa_updates_lsa.operation)
	|| is_set(output_packets.operation)
	|| is_set(time_stamp.operation);
}

std::string PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (checksum_errors.is_set || is_set(checksum_errors.operation)) leaf_name_data.push_back(checksum_errors.get_name_leafdata());
    if (input_db_ds.is_set || is_set(input_db_ds.operation)) leaf_name_data.push_back(input_db_ds.get_name_leafdata());
    if (input_db_ds_lsa.is_set || is_set(input_db_ds_lsa.operation)) leaf_name_data.push_back(input_db_ds_lsa.get_name_leafdata());
    if (input_hello_packets.is_set || is_set(input_hello_packets.operation)) leaf_name_data.push_back(input_hello_packets.get_name_leafdata());
    if (input_ls_requests.is_set || is_set(input_ls_requests.operation)) leaf_name_data.push_back(input_ls_requests.get_name_leafdata());
    if (input_ls_requests_lsa.is_set || is_set(input_ls_requests_lsa.operation)) leaf_name_data.push_back(input_ls_requests_lsa.get_name_leafdata());
    if (input_lsa_acks.is_set || is_set(input_lsa_acks.operation)) leaf_name_data.push_back(input_lsa_acks.get_name_leafdata());
    if (input_lsa_acks_lsa.is_set || is_set(input_lsa_acks_lsa.operation)) leaf_name_data.push_back(input_lsa_acks_lsa.get_name_leafdata());
    if (input_lsa_updates.is_set || is_set(input_lsa_updates.operation)) leaf_name_data.push_back(input_lsa_updates.get_name_leafdata());
    if (input_lsa_updates_lsa.is_set || is_set(input_lsa_updates_lsa.operation)) leaf_name_data.push_back(input_lsa_updates_lsa.get_name_leafdata());
    if (input_packets.is_set || is_set(input_packets.operation)) leaf_name_data.push_back(input_packets.get_name_leafdata());
    if (output_db_ds.is_set || is_set(output_db_ds.operation)) leaf_name_data.push_back(output_db_ds.get_name_leafdata());
    if (output_db_ds_lsa.is_set || is_set(output_db_ds_lsa.operation)) leaf_name_data.push_back(output_db_ds_lsa.get_name_leafdata());
    if (output_hello_packets.is_set || is_set(output_hello_packets.operation)) leaf_name_data.push_back(output_hello_packets.get_name_leafdata());
    if (output_ls_requests.is_set || is_set(output_ls_requests.operation)) leaf_name_data.push_back(output_ls_requests.get_name_leafdata());
    if (output_ls_requests_lsa.is_set || is_set(output_ls_requests_lsa.operation)) leaf_name_data.push_back(output_ls_requests_lsa.get_name_leafdata());
    if (output_lsa_acks.is_set || is_set(output_lsa_acks.operation)) leaf_name_data.push_back(output_lsa_acks.get_name_leafdata());
    if (output_lsa_acks_lsa.is_set || is_set(output_lsa_acks_lsa.operation)) leaf_name_data.push_back(output_lsa_acks_lsa.get_name_leafdata());
    if (output_lsa_updates.is_set || is_set(output_lsa_updates.operation)) leaf_name_data.push_back(output_lsa_updates.get_name_leafdata());
    if (output_lsa_updates_lsa.is_set || is_set(output_lsa_updates_lsa.operation)) leaf_name_data.push_back(output_lsa_updates_lsa.get_name_leafdata());
    if (output_packets.is_set || is_set(output_packets.operation)) leaf_name_data.push_back(output_packets.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "checksum-errors")
    {
        checksum_errors = value;
    }
    if(value_path == "input-db-ds")
    {
        input_db_ds = value;
    }
    if(value_path == "input-db-ds-lsa")
    {
        input_db_ds_lsa = value;
    }
    if(value_path == "input-hello-packets")
    {
        input_hello_packets = value;
    }
    if(value_path == "input-ls-requests")
    {
        input_ls_requests = value;
    }
    if(value_path == "input-ls-requests-lsa")
    {
        input_ls_requests_lsa = value;
    }
    if(value_path == "input-lsa-acks")
    {
        input_lsa_acks = value;
    }
    if(value_path == "input-lsa-acks-lsa")
    {
        input_lsa_acks_lsa = value;
    }
    if(value_path == "input-lsa-updates")
    {
        input_lsa_updates = value;
    }
    if(value_path == "input-lsa-updates-lsa")
    {
        input_lsa_updates_lsa = value;
    }
    if(value_path == "input-packets")
    {
        input_packets = value;
    }
    if(value_path == "output-db-ds")
    {
        output_db_ds = value;
    }
    if(value_path == "output-db-ds-lsa")
    {
        output_db_ds_lsa = value;
    }
    if(value_path == "output-hello-packets")
    {
        output_hello_packets = value;
    }
    if(value_path == "output-ls-requests")
    {
        output_ls_requests = value;
    }
    if(value_path == "output-ls-requests-lsa")
    {
        output_ls_requests_lsa = value;
    }
    if(value_path == "output-lsa-acks")
    {
        output_lsa_acks = value;
    }
    if(value_path == "output-lsa-acks-lsa")
    {
        output_lsa_acks_lsa = value;
    }
    if(value_path == "output-lsa-updates")
    {
        output_lsa_updates = value;
    }
    if(value_path == "output-lsa-updates-lsa")
    {
        output_lsa_updates_lsa = value;
    }
    if(value_path == "output-packets")
    {
        output_packets = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstances()
{
    yang_name = "ospfv3-protocol-instances"; yang_parent_name = "ospf";
}

PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::~Ospfv3ProtocolInstances()
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::has_data() const
{
    for (std::size_t index=0; index<ospfv3_protocol_instance.size(); index++)
    {
        if(ospfv3_protocol_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::has_operation() const
{
    for (std::size_t index=0; index<ospfv3_protocol_instance.size(); index++)
    {
        if(ospfv3_protocol_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol-instances";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/ospf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv3-protocol-instance")
    {
        for(auto const & c : ospfv3_protocol_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance>();
        c->parent = this;
        ospfv3_protocol_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfv3_protocol_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Ospfv3ProtocolInstance()
    :
    instance_name{YType::str, "instance-name"}
    	,
    samples(std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples>())
{
    samples->parent = this;

    yang_name = "ospfv3-protocol-instance"; yang_parent_name = "ospfv3-protocol-instances";
}

PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::~Ospfv3ProtocolInstance()
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::has_data() const
{
    return instance_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol-instance" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/ospf/ospfv3-protocol-instances/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Samples()
{
    yang_name = "samples"; yang_parent_name = "ospfv3-protocol-instance";
}

PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::~Samples()
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Samples' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    input_db_ds{YType::uint32, "input-db-ds"},
    input_db_ds_lsa{YType::uint32, "input-db-ds-lsa"},
    input_hello_packets{YType::uint32, "input-hello-packets"},
    input_ls_requests{YType::uint32, "input-ls-requests"},
    input_ls_requests_lsa{YType::uint32, "input-ls-requests-lsa"},
    input_lsa_acks{YType::uint32, "input-lsa-acks"},
    input_lsa_acks_lsa{YType::uint32, "input-lsa-acks-lsa"},
    input_lsa_updates{YType::uint32, "input-lsa-updates"},
    input_lsa_updates_lsa{YType::uint32, "input-lsa-updates-lsa"},
    input_packets{YType::uint32, "input-packets"},
    output_db_ds{YType::uint32, "output-db-ds"},
    output_db_ds_lsa{YType::uint32, "output-db-ds-lsa"},
    output_hello_packets{YType::uint32, "output-hello-packets"},
    output_ls_requests{YType::uint32, "output-ls-requests"},
    output_ls_requests_lsa{YType::uint32, "output-ls-requests-lsa"},
    output_lsa_acks{YType::uint32, "output-lsa-acks"},
    output_lsa_acks_lsa{YType::uint32, "output-lsa-acks-lsa"},
    output_lsa_updates{YType::uint32, "output-lsa-updates"},
    output_lsa_updates_lsa{YType::uint32, "output-lsa-updates-lsa"},
    output_packets{YType::uint32, "output-packets"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "sample"; yang_parent_name = "samples";
}

PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::has_data() const
{
    return sample_id.is_set
	|| input_db_ds.is_set
	|| input_db_ds_lsa.is_set
	|| input_hello_packets.is_set
	|| input_ls_requests.is_set
	|| input_ls_requests_lsa.is_set
	|| input_lsa_acks.is_set
	|| input_lsa_acks_lsa.is_set
	|| input_lsa_updates.is_set
	|| input_lsa_updates_lsa.is_set
	|| input_packets.is_set
	|| output_db_ds.is_set
	|| output_db_ds_lsa.is_set
	|| output_hello_packets.is_set
	|| output_ls_requests.is_set
	|| output_ls_requests_lsa.is_set
	|| output_lsa_acks.is_set
	|| output_lsa_acks_lsa.is_set
	|| output_lsa_updates.is_set
	|| output_lsa_updates_lsa.is_set
	|| output_packets.is_set
	|| time_stamp.is_set;
}

bool PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(input_db_ds.operation)
	|| is_set(input_db_ds_lsa.operation)
	|| is_set(input_hello_packets.operation)
	|| is_set(input_ls_requests.operation)
	|| is_set(input_ls_requests_lsa.operation)
	|| is_set(input_lsa_acks.operation)
	|| is_set(input_lsa_acks_lsa.operation)
	|| is_set(input_lsa_updates.operation)
	|| is_set(input_lsa_updates_lsa.operation)
	|| is_set(input_packets.operation)
	|| is_set(output_db_ds.operation)
	|| is_set(output_db_ds_lsa.operation)
	|| is_set(output_hello_packets.operation)
	|| is_set(output_ls_requests.operation)
	|| is_set(output_ls_requests_lsa.operation)
	|| is_set(output_lsa_acks.operation)
	|| is_set(output_lsa_acks_lsa.operation)
	|| is_set(output_lsa_updates.operation)
	|| is_set(output_lsa_updates_lsa.operation)
	|| is_set(output_packets.operation)
	|| is_set(time_stamp.operation);
}

std::string PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (input_db_ds.is_set || is_set(input_db_ds.operation)) leaf_name_data.push_back(input_db_ds.get_name_leafdata());
    if (input_db_ds_lsa.is_set || is_set(input_db_ds_lsa.operation)) leaf_name_data.push_back(input_db_ds_lsa.get_name_leafdata());
    if (input_hello_packets.is_set || is_set(input_hello_packets.operation)) leaf_name_data.push_back(input_hello_packets.get_name_leafdata());
    if (input_ls_requests.is_set || is_set(input_ls_requests.operation)) leaf_name_data.push_back(input_ls_requests.get_name_leafdata());
    if (input_ls_requests_lsa.is_set || is_set(input_ls_requests_lsa.operation)) leaf_name_data.push_back(input_ls_requests_lsa.get_name_leafdata());
    if (input_lsa_acks.is_set || is_set(input_lsa_acks.operation)) leaf_name_data.push_back(input_lsa_acks.get_name_leafdata());
    if (input_lsa_acks_lsa.is_set || is_set(input_lsa_acks_lsa.operation)) leaf_name_data.push_back(input_lsa_acks_lsa.get_name_leafdata());
    if (input_lsa_updates.is_set || is_set(input_lsa_updates.operation)) leaf_name_data.push_back(input_lsa_updates.get_name_leafdata());
    if (input_lsa_updates_lsa.is_set || is_set(input_lsa_updates_lsa.operation)) leaf_name_data.push_back(input_lsa_updates_lsa.get_name_leafdata());
    if (input_packets.is_set || is_set(input_packets.operation)) leaf_name_data.push_back(input_packets.get_name_leafdata());
    if (output_db_ds.is_set || is_set(output_db_ds.operation)) leaf_name_data.push_back(output_db_ds.get_name_leafdata());
    if (output_db_ds_lsa.is_set || is_set(output_db_ds_lsa.operation)) leaf_name_data.push_back(output_db_ds_lsa.get_name_leafdata());
    if (output_hello_packets.is_set || is_set(output_hello_packets.operation)) leaf_name_data.push_back(output_hello_packets.get_name_leafdata());
    if (output_ls_requests.is_set || is_set(output_ls_requests.operation)) leaf_name_data.push_back(output_ls_requests.get_name_leafdata());
    if (output_ls_requests_lsa.is_set || is_set(output_ls_requests_lsa.operation)) leaf_name_data.push_back(output_ls_requests_lsa.get_name_leafdata());
    if (output_lsa_acks.is_set || is_set(output_lsa_acks.operation)) leaf_name_data.push_back(output_lsa_acks.get_name_leafdata());
    if (output_lsa_acks_lsa.is_set || is_set(output_lsa_acks_lsa.operation)) leaf_name_data.push_back(output_lsa_acks_lsa.get_name_leafdata());
    if (output_lsa_updates.is_set || is_set(output_lsa_updates.operation)) leaf_name_data.push_back(output_lsa_updates.get_name_leafdata());
    if (output_lsa_updates_lsa.is_set || is_set(output_lsa_updates_lsa.operation)) leaf_name_data.push_back(output_lsa_updates_lsa.get_name_leafdata());
    if (output_packets.is_set || is_set(output_packets.operation)) leaf_name_data.push_back(output_packets.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "input-db-ds")
    {
        input_db_ds = value;
    }
    if(value_path == "input-db-ds-lsa")
    {
        input_db_ds_lsa = value;
    }
    if(value_path == "input-hello-packets")
    {
        input_hello_packets = value;
    }
    if(value_path == "input-ls-requests")
    {
        input_ls_requests = value;
    }
    if(value_path == "input-ls-requests-lsa")
    {
        input_ls_requests_lsa = value;
    }
    if(value_path == "input-lsa-acks")
    {
        input_lsa_acks = value;
    }
    if(value_path == "input-lsa-acks-lsa")
    {
        input_lsa_acks_lsa = value;
    }
    if(value_path == "input-lsa-updates")
    {
        input_lsa_updates = value;
    }
    if(value_path == "input-lsa-updates-lsa")
    {
        input_lsa_updates_lsa = value;
    }
    if(value_path == "input-packets")
    {
        input_packets = value;
    }
    if(value_path == "output-db-ds")
    {
        output_db_ds = value;
    }
    if(value_path == "output-db-ds-lsa")
    {
        output_db_ds_lsa = value;
    }
    if(value_path == "output-hello-packets")
    {
        output_hello_packets = value;
    }
    if(value_path == "output-ls-requests")
    {
        output_ls_requests = value;
    }
    if(value_path == "output-ls-requests-lsa")
    {
        output_ls_requests_lsa = value;
    }
    if(value_path == "output-lsa-acks")
    {
        output_lsa_acks = value;
    }
    if(value_path == "output-lsa-acks-lsa")
    {
        output_lsa_acks_lsa = value;
    }
    if(value_path == "output-lsa-updates")
    {
        output_lsa_updates = value;
    }
    if(value_path == "output-lsa-updates-lsa")
    {
        output_lsa_updates_lsa = value;
    }
    if(value_path == "output-packets")
    {
        output_packets = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

PerfMgmt::Periodic::Mpls::Mpls()
    :
    ldp_neighbors(std::make_shared<PerfMgmt::Periodic::Mpls::LdpNeighbors>())
{
    ldp_neighbors->parent = this;

    yang_name = "mpls"; yang_parent_name = "periodic";
}

PerfMgmt::Periodic::Mpls::~Mpls()
{
}

bool PerfMgmt::Periodic::Mpls::has_data() const
{
    return (ldp_neighbors !=  nullptr && ldp_neighbors->has_data());
}

bool PerfMgmt::Periodic::Mpls::has_operation() const
{
    return is_set(operation)
	|| (ldp_neighbors !=  nullptr && ldp_neighbors->has_operation());
}

std::string PerfMgmt::Periodic::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(ldp_neighbors != nullptr)
    {
        children["ldp-neighbors"] = ldp_neighbors;
    }

    return children;
}

void PerfMgmt::Periodic::Mpls::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbors()
{
    yang_name = "ldp-neighbors"; yang_parent_name = "mpls";
}

PerfMgmt::Periodic::Mpls::LdpNeighbors::~LdpNeighbors()
{
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::has_data() const
{
    for (std::size_t index=0; index<ldp_neighbor.size(); index++)
    {
        if(ldp_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::has_operation() const
{
    for (std::size_t index=0; index<ldp_neighbor.size(); index++)
    {
        if(ldp_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Mpls::LdpNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-neighbors";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Mpls::LdpNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Mpls::LdpNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-neighbor")
    {
        for(auto const & c : ldp_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor>();
        c->parent = this;
        ldp_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Mpls::LdpNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ldp_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Mpls::LdpNeighbors::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::LdpNeighbor()
    :
    nbr{YType::str, "nbr"}
    	,
    samples(std::make_shared<PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples>())
{
    samples->parent = this;

    yang_name = "ldp-neighbor"; yang_parent_name = "ldp-neighbors";
}

PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::~LdpNeighbor()
{
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::has_data() const
{
    return nbr.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(nbr.operation)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-neighbor" <<"[nbr='" <<nbr <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/mpls/ldp-neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbr.is_set || is_set(nbr.operation)) leaf_name_data.push_back(nbr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nbr")
    {
        nbr = value;
    }
}

PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Samples()
{
    yang_name = "samples"; yang_parent_name = "ldp-neighbor";
}

PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::~Samples()
{
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Samples' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    address_msgs_rcvd{YType::uint16, "address-msgs-rcvd"},
    address_msgs_sent{YType::uint16, "address-msgs-sent"},
    address_withdraw_msgs_rcvd{YType::uint16, "address-withdraw-msgs-rcvd"},
    address_withdraw_msgs_sent{YType::uint16, "address-withdraw-msgs-sent"},
    init_msgs_rcvd{YType::uint16, "init-msgs-rcvd"},
    init_msgs_sent{YType::uint16, "init-msgs-sent"},
    keepalive_msgs_rcvd{YType::uint16, "keepalive-msgs-rcvd"},
    keepalive_msgs_sent{YType::uint16, "keepalive-msgs-sent"},
    label_mapping_msgs_rcvd{YType::uint16, "label-mapping-msgs-rcvd"},
    label_mapping_msgs_sent{YType::uint16, "label-mapping-msgs-sent"},
    label_release_msgs_rcvd{YType::uint16, "label-release-msgs-rcvd"},
    label_release_msgs_sent{YType::uint16, "label-release-msgs-sent"},
    label_withdraw_msgs_rcvd{YType::uint16, "label-withdraw-msgs-rcvd"},
    label_withdraw_msgs_sent{YType::uint16, "label-withdraw-msgs-sent"},
    notification_msgs_rcvd{YType::uint16, "notification-msgs-rcvd"},
    notification_msgs_sent{YType::uint16, "notification-msgs-sent"},
    time_stamp{YType::uint64, "time-stamp"},
    total_msgs_rcvd{YType::uint16, "total-msgs-rcvd"},
    total_msgs_sent{YType::uint16, "total-msgs-sent"}
{
    yang_name = "sample"; yang_parent_name = "samples";
}

PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::has_data() const
{
    return sample_id.is_set
	|| address_msgs_rcvd.is_set
	|| address_msgs_sent.is_set
	|| address_withdraw_msgs_rcvd.is_set
	|| address_withdraw_msgs_sent.is_set
	|| init_msgs_rcvd.is_set
	|| init_msgs_sent.is_set
	|| keepalive_msgs_rcvd.is_set
	|| keepalive_msgs_sent.is_set
	|| label_mapping_msgs_rcvd.is_set
	|| label_mapping_msgs_sent.is_set
	|| label_release_msgs_rcvd.is_set
	|| label_release_msgs_sent.is_set
	|| label_withdraw_msgs_rcvd.is_set
	|| label_withdraw_msgs_sent.is_set
	|| notification_msgs_rcvd.is_set
	|| notification_msgs_sent.is_set
	|| time_stamp.is_set
	|| total_msgs_rcvd.is_set
	|| total_msgs_sent.is_set;
}

bool PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(address_msgs_rcvd.operation)
	|| is_set(address_msgs_sent.operation)
	|| is_set(address_withdraw_msgs_rcvd.operation)
	|| is_set(address_withdraw_msgs_sent.operation)
	|| is_set(init_msgs_rcvd.operation)
	|| is_set(init_msgs_sent.operation)
	|| is_set(keepalive_msgs_rcvd.operation)
	|| is_set(keepalive_msgs_sent.operation)
	|| is_set(label_mapping_msgs_rcvd.operation)
	|| is_set(label_mapping_msgs_sent.operation)
	|| is_set(label_release_msgs_rcvd.operation)
	|| is_set(label_release_msgs_sent.operation)
	|| is_set(label_withdraw_msgs_rcvd.operation)
	|| is_set(label_withdraw_msgs_sent.operation)
	|| is_set(notification_msgs_rcvd.operation)
	|| is_set(notification_msgs_sent.operation)
	|| is_set(time_stamp.operation)
	|| is_set(total_msgs_rcvd.operation)
	|| is_set(total_msgs_sent.operation);
}

std::string PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (address_msgs_rcvd.is_set || is_set(address_msgs_rcvd.operation)) leaf_name_data.push_back(address_msgs_rcvd.get_name_leafdata());
    if (address_msgs_sent.is_set || is_set(address_msgs_sent.operation)) leaf_name_data.push_back(address_msgs_sent.get_name_leafdata());
    if (address_withdraw_msgs_rcvd.is_set || is_set(address_withdraw_msgs_rcvd.operation)) leaf_name_data.push_back(address_withdraw_msgs_rcvd.get_name_leafdata());
    if (address_withdraw_msgs_sent.is_set || is_set(address_withdraw_msgs_sent.operation)) leaf_name_data.push_back(address_withdraw_msgs_sent.get_name_leafdata());
    if (init_msgs_rcvd.is_set || is_set(init_msgs_rcvd.operation)) leaf_name_data.push_back(init_msgs_rcvd.get_name_leafdata());
    if (init_msgs_sent.is_set || is_set(init_msgs_sent.operation)) leaf_name_data.push_back(init_msgs_sent.get_name_leafdata());
    if (keepalive_msgs_rcvd.is_set || is_set(keepalive_msgs_rcvd.operation)) leaf_name_data.push_back(keepalive_msgs_rcvd.get_name_leafdata());
    if (keepalive_msgs_sent.is_set || is_set(keepalive_msgs_sent.operation)) leaf_name_data.push_back(keepalive_msgs_sent.get_name_leafdata());
    if (label_mapping_msgs_rcvd.is_set || is_set(label_mapping_msgs_rcvd.operation)) leaf_name_data.push_back(label_mapping_msgs_rcvd.get_name_leafdata());
    if (label_mapping_msgs_sent.is_set || is_set(label_mapping_msgs_sent.operation)) leaf_name_data.push_back(label_mapping_msgs_sent.get_name_leafdata());
    if (label_release_msgs_rcvd.is_set || is_set(label_release_msgs_rcvd.operation)) leaf_name_data.push_back(label_release_msgs_rcvd.get_name_leafdata());
    if (label_release_msgs_sent.is_set || is_set(label_release_msgs_sent.operation)) leaf_name_data.push_back(label_release_msgs_sent.get_name_leafdata());
    if (label_withdraw_msgs_rcvd.is_set || is_set(label_withdraw_msgs_rcvd.operation)) leaf_name_data.push_back(label_withdraw_msgs_rcvd.get_name_leafdata());
    if (label_withdraw_msgs_sent.is_set || is_set(label_withdraw_msgs_sent.operation)) leaf_name_data.push_back(label_withdraw_msgs_sent.get_name_leafdata());
    if (notification_msgs_rcvd.is_set || is_set(notification_msgs_rcvd.operation)) leaf_name_data.push_back(notification_msgs_rcvd.get_name_leafdata());
    if (notification_msgs_sent.is_set || is_set(notification_msgs_sent.operation)) leaf_name_data.push_back(notification_msgs_sent.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (total_msgs_rcvd.is_set || is_set(total_msgs_rcvd.operation)) leaf_name_data.push_back(total_msgs_rcvd.get_name_leafdata());
    if (total_msgs_sent.is_set || is_set(total_msgs_sent.operation)) leaf_name_data.push_back(total_msgs_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "address-msgs-rcvd")
    {
        address_msgs_rcvd = value;
    }
    if(value_path == "address-msgs-sent")
    {
        address_msgs_sent = value;
    }
    if(value_path == "address-withdraw-msgs-rcvd")
    {
        address_withdraw_msgs_rcvd = value;
    }
    if(value_path == "address-withdraw-msgs-sent")
    {
        address_withdraw_msgs_sent = value;
    }
    if(value_path == "init-msgs-rcvd")
    {
        init_msgs_rcvd = value;
    }
    if(value_path == "init-msgs-sent")
    {
        init_msgs_sent = value;
    }
    if(value_path == "keepalive-msgs-rcvd")
    {
        keepalive_msgs_rcvd = value;
    }
    if(value_path == "keepalive-msgs-sent")
    {
        keepalive_msgs_sent = value;
    }
    if(value_path == "label-mapping-msgs-rcvd")
    {
        label_mapping_msgs_rcvd = value;
    }
    if(value_path == "label-mapping-msgs-sent")
    {
        label_mapping_msgs_sent = value;
    }
    if(value_path == "label-release-msgs-rcvd")
    {
        label_release_msgs_rcvd = value;
    }
    if(value_path == "label-release-msgs-sent")
    {
        label_release_msgs_sent = value;
    }
    if(value_path == "label-withdraw-msgs-rcvd")
    {
        label_withdraw_msgs_rcvd = value;
    }
    if(value_path == "label-withdraw-msgs-sent")
    {
        label_withdraw_msgs_sent = value;
    }
    if(value_path == "notification-msgs-rcvd")
    {
        notification_msgs_rcvd = value;
    }
    if(value_path == "notification-msgs-sent")
    {
        notification_msgs_sent = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
    if(value_path == "total-msgs-rcvd")
    {
        total_msgs_rcvd = value;
    }
    if(value_path == "total-msgs-sent")
    {
        total_msgs_sent = value;
    }
}

PerfMgmt::Periodic::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "periodic";
}

PerfMgmt::Periodic::Nodes::~Nodes()
{
}

bool PerfMgmt::Periodic::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Nodes::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"}
    	,
    processes(std::make_shared<PerfMgmt::Periodic::Nodes::Node::Processes>())
	,sample_xr(std::make_shared<PerfMgmt::Periodic::Nodes::Node::SampleXr>())
	,samples(std::make_shared<PerfMgmt::Periodic::Nodes::Node::Samples>())
{
    processes->parent = this;

    sample_xr->parent = this;

    samples->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

PerfMgmt::Periodic::Nodes::Node::~Node()
{
}

bool PerfMgmt::Periodic::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| (processes !=  nullptr && processes->has_data())
	|| (sample_xr !=  nullptr && sample_xr->has_data())
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Periodic::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| (processes !=  nullptr && processes->has_operation())
	|| (sample_xr !=  nullptr && sample_xr->has_operation())
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Periodic::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "processes")
    {
        if(processes == nullptr)
        {
            processes = std::make_shared<PerfMgmt::Periodic::Nodes::Node::Processes>();
        }
        return processes;
    }

    if(child_yang_name == "sample-xr")
    {
        if(sample_xr == nullptr)
        {
            sample_xr = std::make_shared<PerfMgmt::Periodic::Nodes::Node::SampleXr>();
        }
        return sample_xr;
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
    if(processes != nullptr)
    {
        children["processes"] = processes;
    }

    if(sample_xr != nullptr)
    {
        children["sample-xr"] = sample_xr;
    }

    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Periodic::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

PerfMgmt::Periodic::Nodes::Node::SampleXr::SampleXr()
{
    yang_name = "sample-xr"; yang_parent_name = "node";
}

PerfMgmt::Periodic::Nodes::Node::SampleXr::~SampleXr()
{
}

bool PerfMgmt::Periodic::Nodes::Node::SampleXr::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Nodes::Node::SampleXr::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Nodes::Node::SampleXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample-xr";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Nodes::Node::SampleXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SampleXr' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::Node::SampleXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Nodes::Node::SampleXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Nodes::Node::SampleXr::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    average_cpu_used{YType::uint32, "average-cpu-used"},
    no_processes{YType::uint32, "no-processes"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "sample"; yang_parent_name = "sample-xr";
}

PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::has_data() const
{
    return sample_id.is_set
	|| average_cpu_used.is_set
	|| no_processes.is_set
	|| time_stamp.is_set;
}

bool PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(average_cpu_used.operation)
	|| is_set(no_processes.operation)
	|| is_set(time_stamp.operation);
}

std::string PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (average_cpu_used.is_set || is_set(average_cpu_used.operation)) leaf_name_data.push_back(average_cpu_used.get_name_leafdata());
    if (no_processes.is_set || is_set(no_processes.operation)) leaf_name_data.push_back(no_processes.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "average-cpu-used")
    {
        average_cpu_used = value;
    }
    if(value_path == "no-processes")
    {
        no_processes = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

PerfMgmt::Periodic::Nodes::Node::Processes::Processes()
{
    yang_name = "processes"; yang_parent_name = "node";
}

PerfMgmt::Periodic::Nodes::Node::Processes::~Processes()
{
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::has_data() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::has_operation() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Nodes::Node::Processes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processes";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Nodes::Node::Processes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Processes' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::Node::Processes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        for(auto const & c : process)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Nodes::Node::Processes::Process>();
        c->parent = this;
        process.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Nodes::Node::Processes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : process)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Nodes::Node::Processes::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Nodes::Node::Processes::Process::Process()
    :
    process_id{YType::int32, "process-id"}
    	,
    samples(std::make_shared<PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples>())
{
    samples->parent = this;

    yang_name = "process"; yang_parent_name = "processes";
}

PerfMgmt::Periodic::Nodes::Node::Processes::Process::~Process()
{
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::Process::has_data() const
{
    return process_id.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::Process::has_operation() const
{
    return is_set(operation)
	|| is_set(process_id.operation)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Periodic::Nodes::Node::Processes::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process" <<"[process-id='" <<process_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Nodes::Node::Processes::Process::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Process' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.operation)) leaf_name_data.push_back(process_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Periodic::Nodes::Node::Processes::Process::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-id")
    {
        process_id = value;
    }
}

PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Samples()
{
    yang_name = "samples"; yang_parent_name = "process";
}

PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::~Samples()
{
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Samples' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    average_cpu_used{YType::uint32, "average-cpu-used"},
    no_threads{YType::uint32, "no-threads"},
    peak_memory{YType::uint32, "peak-memory"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "sample"; yang_parent_name = "samples";
}

PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::has_data() const
{
    return sample_id.is_set
	|| average_cpu_used.is_set
	|| no_threads.is_set
	|| peak_memory.is_set
	|| time_stamp.is_set;
}

bool PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(average_cpu_used.operation)
	|| is_set(no_threads.operation)
	|| is_set(peak_memory.operation)
	|| is_set(time_stamp.operation);
}

std::string PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (average_cpu_used.is_set || is_set(average_cpu_used.operation)) leaf_name_data.push_back(average_cpu_used.get_name_leafdata());
    if (no_threads.is_set || is_set(no_threads.operation)) leaf_name_data.push_back(no_threads.get_name_leafdata());
    if (peak_memory.is_set || is_set(peak_memory.operation)) leaf_name_data.push_back(peak_memory.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "average-cpu-used")
    {
        average_cpu_used = value;
    }
    if(value_path == "no-threads")
    {
        no_threads = value;
    }
    if(value_path == "peak-memory")
    {
        peak_memory = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

PerfMgmt::Periodic::Nodes::Node::Samples::Samples()
{
    yang_name = "samples"; yang_parent_name = "node";
}

PerfMgmt::Periodic::Nodes::Node::Samples::~Samples()
{
}

bool PerfMgmt::Periodic::Nodes::Node::Samples::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Nodes::Node::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Nodes::Node::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Nodes::Node::Samples::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Samples' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::Node::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Nodes::Node::Samples::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Nodes::Node::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Nodes::Node::Samples::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Nodes::Node::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    curr_memory{YType::uint32, "curr-memory"},
    peak_memory{YType::uint32, "peak-memory"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "sample"; yang_parent_name = "samples";
}

PerfMgmt::Periodic::Nodes::Node::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Nodes::Node::Samples::Sample::has_data() const
{
    return sample_id.is_set
	|| curr_memory.is_set
	|| peak_memory.is_set
	|| time_stamp.is_set;
}

bool PerfMgmt::Periodic::Nodes::Node::Samples::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(curr_memory.operation)
	|| is_set(peak_memory.operation)
	|| is_set(time_stamp.operation);
}

std::string PerfMgmt::Periodic::Nodes::Node::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Nodes::Node::Samples::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (curr_memory.is_set || is_set(curr_memory.operation)) leaf_name_data.push_back(curr_memory.get_name_leafdata());
    if (peak_memory.is_set || is_set(peak_memory.operation)) leaf_name_data.push_back(peak_memory.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Nodes::Node::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Nodes::Node::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Periodic::Nodes::Node::Samples::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "curr-memory")
    {
        curr_memory = value;
    }
    if(value_path == "peak-memory")
    {
        peak_memory = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

PerfMgmt::Periodic::Bgp::Bgp()
    :
    bgp_neighbors(std::make_shared<PerfMgmt::Periodic::Bgp::BgpNeighbors>())
{
    bgp_neighbors->parent = this;

    yang_name = "bgp"; yang_parent_name = "periodic";
}

PerfMgmt::Periodic::Bgp::~Bgp()
{
}

bool PerfMgmt::Periodic::Bgp::has_data() const
{
    return (bgp_neighbors !=  nullptr && bgp_neighbors->has_data());
}

bool PerfMgmt::Periodic::Bgp::has_operation() const
{
    return is_set(operation)
	|| (bgp_neighbors !=  nullptr && bgp_neighbors->has_operation());
}

std::string PerfMgmt::Periodic::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(bgp_neighbors != nullptr)
    {
        children["bgp-neighbors"] = bgp_neighbors;
    }

    return children;
}

void PerfMgmt::Periodic::Bgp::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbors()
{
    yang_name = "bgp-neighbors"; yang_parent_name = "bgp";
}

PerfMgmt::Periodic::Bgp::BgpNeighbors::~BgpNeighbors()
{
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::has_data() const
{
    for (std::size_t index=0; index<bgp_neighbor.size(); index++)
    {
        if(bgp_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::has_operation() const
{
    for (std::size_t index=0; index<bgp_neighbor.size(); index++)
    {
        if(bgp_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Bgp::BgpNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbors";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Bgp::BgpNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/bgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Bgp::BgpNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-neighbor")
    {
        for(auto const & c : bgp_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor>();
        c->parent = this;
        bgp_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Bgp::BgpNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Bgp::BgpNeighbors::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::BgpNeighbor()
    :
    ip_address{YType::str, "ip-address"}
    	,
    samples(std::make_shared<PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples>())
{
    samples->parent = this;

    yang_name = "bgp-neighbor"; yang_parent_name = "bgp-neighbors";
}

PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::~BgpNeighbor()
{
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::has_data() const
{
    return ip_address.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/bgp/bgp-neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Samples()
{
    yang_name = "samples"; yang_parent_name = "bgp-neighbor";
}

PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::~Samples()
{
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Samples' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    conn_dropped{YType::uint32, "conn-dropped"},
    conn_established{YType::uint32, "conn-established"},
    errors_received{YType::uint32, "errors-received"},
    errors_sent{YType::uint32, "errors-sent"},
    input_messages{YType::uint32, "input-messages"},
    input_update_messages{YType::uint32, "input-update-messages"},
    output_messages{YType::uint32, "output-messages"},
    output_update_messages{YType::uint32, "output-update-messages"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "sample"; yang_parent_name = "samples";
}

PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::has_data() const
{
    return sample_id.is_set
	|| conn_dropped.is_set
	|| conn_established.is_set
	|| errors_received.is_set
	|| errors_sent.is_set
	|| input_messages.is_set
	|| input_update_messages.is_set
	|| output_messages.is_set
	|| output_update_messages.is_set
	|| time_stamp.is_set;
}

bool PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(conn_dropped.operation)
	|| is_set(conn_established.operation)
	|| is_set(errors_received.operation)
	|| is_set(errors_sent.operation)
	|| is_set(input_messages.operation)
	|| is_set(input_update_messages.operation)
	|| is_set(output_messages.operation)
	|| is_set(output_update_messages.operation)
	|| is_set(time_stamp.operation);
}

std::string PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (conn_dropped.is_set || is_set(conn_dropped.operation)) leaf_name_data.push_back(conn_dropped.get_name_leafdata());
    if (conn_established.is_set || is_set(conn_established.operation)) leaf_name_data.push_back(conn_established.get_name_leafdata());
    if (errors_received.is_set || is_set(errors_received.operation)) leaf_name_data.push_back(errors_received.get_name_leafdata());
    if (errors_sent.is_set || is_set(errors_sent.operation)) leaf_name_data.push_back(errors_sent.get_name_leafdata());
    if (input_messages.is_set || is_set(input_messages.operation)) leaf_name_data.push_back(input_messages.get_name_leafdata());
    if (input_update_messages.is_set || is_set(input_update_messages.operation)) leaf_name_data.push_back(input_update_messages.get_name_leafdata());
    if (output_messages.is_set || is_set(output_messages.operation)) leaf_name_data.push_back(output_messages.get_name_leafdata());
    if (output_update_messages.is_set || is_set(output_update_messages.operation)) leaf_name_data.push_back(output_update_messages.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "conn-dropped")
    {
        conn_dropped = value;
    }
    if(value_path == "conn-established")
    {
        conn_established = value;
    }
    if(value_path == "errors-received")
    {
        errors_received = value;
    }
    if(value_path == "errors-sent")
    {
        errors_sent = value;
    }
    if(value_path == "input-messages")
    {
        input_messages = value;
    }
    if(value_path == "input-update-messages")
    {
        input_update_messages = value;
    }
    if(value_path == "output-messages")
    {
        output_messages = value;
    }
    if(value_path == "output-update-messages")
    {
        output_update_messages = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

PerfMgmt::Periodic::Interface::Interface()
    :
    basic_counter_interfaces(std::make_shared<PerfMgmt::Periodic::Interface::BasicCounterInterfaces>())
	,data_rate_interfaces(std::make_shared<PerfMgmt::Periodic::Interface::DataRateInterfaces>())
	,generic_counter_interfaces(std::make_shared<PerfMgmt::Periodic::Interface::GenericCounterInterfaces>())
{
    basic_counter_interfaces->parent = this;

    data_rate_interfaces->parent = this;

    generic_counter_interfaces->parent = this;

    yang_name = "interface"; yang_parent_name = "periodic";
}

PerfMgmt::Periodic::Interface::~Interface()
{
}

bool PerfMgmt::Periodic::Interface::has_data() const
{
    return (basic_counter_interfaces !=  nullptr && basic_counter_interfaces->has_data())
	|| (data_rate_interfaces !=  nullptr && data_rate_interfaces->has_data())
	|| (generic_counter_interfaces !=  nullptr && generic_counter_interfaces->has_data());
}

bool PerfMgmt::Periodic::Interface::has_operation() const
{
    return is_set(operation)
	|| (basic_counter_interfaces !=  nullptr && basic_counter_interfaces->has_operation())
	|| (data_rate_interfaces !=  nullptr && data_rate_interfaces->has_operation())
	|| (generic_counter_interfaces !=  nullptr && generic_counter_interfaces->has_operation());
}

std::string PerfMgmt::Periodic::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "generic-counter-interfaces")
    {
        if(generic_counter_interfaces == nullptr)
        {
            generic_counter_interfaces = std::make_shared<PerfMgmt::Periodic::Interface::GenericCounterInterfaces>();
        }
        return generic_counter_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_counter_interfaces != nullptr)
    {
        children["basic-counter-interfaces"] = basic_counter_interfaces;
    }

    if(data_rate_interfaces != nullptr)
    {
        children["data-rate-interfaces"] = data_rate_interfaces;
    }

    if(generic_counter_interfaces != nullptr)
    {
        children["generic-counter-interfaces"] = generic_counter_interfaces;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterfaces()
{
    yang_name = "generic-counter-interfaces"; yang_parent_name = "interface";
}

PerfMgmt::Periodic::Interface::GenericCounterInterfaces::~GenericCounterInterfaces()
{
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::has_data() const
{
    for (std::size_t index=0; index<generic_counter_interface.size(); index++)
    {
        if(generic_counter_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::has_operation() const
{
    for (std::size_t index=0; index<generic_counter_interface.size(); index++)
    {
        if(generic_counter_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Interface::GenericCounterInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interfaces";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Interface::GenericCounterInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::GenericCounterInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-counter-interface")
    {
        for(auto const & c : generic_counter_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface>();
        c->parent = this;
        generic_counter_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::GenericCounterInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : generic_counter_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::GenericCounterInterfaces::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::GenericCounterInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    samples(std::make_shared<PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples>())
{
    samples->parent = this;

    yang_name = "generic-counter-interface"; yang_parent_name = "generic-counter-interfaces";
}

PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::~GenericCounterInterface()
{
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::has_data() const
{
    return interface_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/interface/generic-counter-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Samples()
{
    yang_name = "samples"; yang_parent_name = "generic-counter-interface";
}

PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::~Samples()
{
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Samples' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    in_broadcast_pkts{YType::uint64, "in-broadcast-pkts"},
    in_multicast_pkts{YType::uint64, "in-multicast-pkts"},
    in_octets{YType::uint64, "in-octets"},
    in_packets{YType::uint64, "in-packets"},
    in_ucast_pkts{YType::uint64, "in-ucast-pkts"},
    input_crc{YType::uint32, "input-crc"},
    input_frame{YType::uint32, "input-frame"},
    input_overrun{YType::uint32, "input-overrun"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    input_total_drops{YType::uint32, "input-total-drops"},
    input_total_errors{YType::uint32, "input-total-errors"},
    input_unknown_proto{YType::uint32, "input-unknown-proto"},
    out_broadcast_pkts{YType::uint64, "out-broadcast-pkts"},
    out_multicast_pkts{YType::uint64, "out-multicast-pkts"},
    out_octets{YType::uint64, "out-octets"},
    out_packets{YType::uint64, "out-packets"},
    out_ucast_pkts{YType::uint64, "out-ucast-pkts"},
    output_total_drops{YType::uint32, "output-total-drops"},
    output_total_errors{YType::uint32, "output-total-errors"},
    output_underrun{YType::uint32, "output-underrun"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "sample"; yang_parent_name = "samples";
}

PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::has_data() const
{
    return sample_id.is_set
	|| in_broadcast_pkts.is_set
	|| in_multicast_pkts.is_set
	|| in_octets.is_set
	|| in_packets.is_set
	|| in_ucast_pkts.is_set
	|| input_crc.is_set
	|| input_frame.is_set
	|| input_overrun.is_set
	|| input_queue_drops.is_set
	|| input_total_drops.is_set
	|| input_total_errors.is_set
	|| input_unknown_proto.is_set
	|| out_broadcast_pkts.is_set
	|| out_multicast_pkts.is_set
	|| out_octets.is_set
	|| out_packets.is_set
	|| out_ucast_pkts.is_set
	|| output_total_drops.is_set
	|| output_total_errors.is_set
	|| output_underrun.is_set
	|| time_stamp.is_set;
}

bool PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(in_broadcast_pkts.operation)
	|| is_set(in_multicast_pkts.operation)
	|| is_set(in_octets.operation)
	|| is_set(in_packets.operation)
	|| is_set(in_ucast_pkts.operation)
	|| is_set(input_crc.operation)
	|| is_set(input_frame.operation)
	|| is_set(input_overrun.operation)
	|| is_set(input_queue_drops.operation)
	|| is_set(input_total_drops.operation)
	|| is_set(input_total_errors.operation)
	|| is_set(input_unknown_proto.operation)
	|| is_set(out_broadcast_pkts.operation)
	|| is_set(out_multicast_pkts.operation)
	|| is_set(out_octets.operation)
	|| is_set(out_packets.operation)
	|| is_set(out_ucast_pkts.operation)
	|| is_set(output_total_drops.operation)
	|| is_set(output_total_errors.operation)
	|| is_set(output_underrun.operation)
	|| is_set(time_stamp.operation);
}

std::string PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (in_broadcast_pkts.is_set || is_set(in_broadcast_pkts.operation)) leaf_name_data.push_back(in_broadcast_pkts.get_name_leafdata());
    if (in_multicast_pkts.is_set || is_set(in_multicast_pkts.operation)) leaf_name_data.push_back(in_multicast_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.operation)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (in_packets.is_set || is_set(in_packets.operation)) leaf_name_data.push_back(in_packets.get_name_leafdata());
    if (in_ucast_pkts.is_set || is_set(in_ucast_pkts.operation)) leaf_name_data.push_back(in_ucast_pkts.get_name_leafdata());
    if (input_crc.is_set || is_set(input_crc.operation)) leaf_name_data.push_back(input_crc.get_name_leafdata());
    if (input_frame.is_set || is_set(input_frame.operation)) leaf_name_data.push_back(input_frame.get_name_leafdata());
    if (input_overrun.is_set || is_set(input_overrun.operation)) leaf_name_data.push_back(input_overrun.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.operation)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (input_total_drops.is_set || is_set(input_total_drops.operation)) leaf_name_data.push_back(input_total_drops.get_name_leafdata());
    if (input_total_errors.is_set || is_set(input_total_errors.operation)) leaf_name_data.push_back(input_total_errors.get_name_leafdata());
    if (input_unknown_proto.is_set || is_set(input_unknown_proto.operation)) leaf_name_data.push_back(input_unknown_proto.get_name_leafdata());
    if (out_broadcast_pkts.is_set || is_set(out_broadcast_pkts.operation)) leaf_name_data.push_back(out_broadcast_pkts.get_name_leafdata());
    if (out_multicast_pkts.is_set || is_set(out_multicast_pkts.operation)) leaf_name_data.push_back(out_multicast_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.operation)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_packets.is_set || is_set(out_packets.operation)) leaf_name_data.push_back(out_packets.get_name_leafdata());
    if (out_ucast_pkts.is_set || is_set(out_ucast_pkts.operation)) leaf_name_data.push_back(out_ucast_pkts.get_name_leafdata());
    if (output_total_drops.is_set || is_set(output_total_drops.operation)) leaf_name_data.push_back(output_total_drops.get_name_leafdata());
    if (output_total_errors.is_set || is_set(output_total_errors.operation)) leaf_name_data.push_back(output_total_errors.get_name_leafdata());
    if (output_underrun.is_set || is_set(output_underrun.operation)) leaf_name_data.push_back(output_underrun.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts = value;
    }
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts = value;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
    }
    if(value_path == "in-packets")
    {
        in_packets = value;
    }
    if(value_path == "in-ucast-pkts")
    {
        in_ucast_pkts = value;
    }
    if(value_path == "input-crc")
    {
        input_crc = value;
    }
    if(value_path == "input-frame")
    {
        input_frame = value;
    }
    if(value_path == "input-overrun")
    {
        input_overrun = value;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
    }
    if(value_path == "input-total-drops")
    {
        input_total_drops = value;
    }
    if(value_path == "input-total-errors")
    {
        input_total_errors = value;
    }
    if(value_path == "input-unknown-proto")
    {
        input_unknown_proto = value;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts = value;
    }
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts = value;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
    }
    if(value_path == "out-packets")
    {
        out_packets = value;
    }
    if(value_path == "out-ucast-pkts")
    {
        out_ucast_pkts = value;
    }
    if(value_path == "output-total-drops")
    {
        output_total_drops = value;
    }
    if(value_path == "output-total-errors")
    {
        output_total_errors = value;
    }
    if(value_path == "output-underrun")
    {
        output_underrun = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterfaces()
{
    yang_name = "basic-counter-interfaces"; yang_parent_name = "interface";
}

PerfMgmt::Periodic::Interface::BasicCounterInterfaces::~BasicCounterInterfaces()
{
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::has_data() const
{
    for (std::size_t index=0; index<basic_counter_interface.size(); index++)
    {
        if(basic_counter_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::has_operation() const
{
    for (std::size_t index=0; index<basic_counter_interface.size(); index++)
    {
        if(basic_counter_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Interface::BasicCounterInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interfaces";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Interface::BasicCounterInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::BasicCounterInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-counter-interface")
    {
        for(auto const & c : basic_counter_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface>();
        c->parent = this;
        basic_counter_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::BasicCounterInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : basic_counter_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::BasicCounterInterfaces::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::BasicCounterInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    samples(std::make_shared<PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples>())
{
    samples->parent = this;

    yang_name = "basic-counter-interface"; yang_parent_name = "basic-counter-interfaces";
}

PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::~BasicCounterInterface()
{
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::has_data() const
{
    return interface_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/interface/basic-counter-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Samples()
{
    yang_name = "samples"; yang_parent_name = "basic-counter-interface";
}

PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::~Samples()
{
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Samples' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    in_octets{YType::uint64, "in-octets"},
    in_packets{YType::uint64, "in-packets"},
    input_queue_drops{YType::uint64, "input-queue-drops"},
    input_total_drops{YType::uint64, "input-total-drops"},
    input_total_errors{YType::uint64, "input-total-errors"},
    out_octets{YType::uint64, "out-octets"},
    out_packets{YType::uint64, "out-packets"},
    output_queue_drops{YType::uint64, "output-queue-drops"},
    output_total_drops{YType::uint64, "output-total-drops"},
    output_total_errors{YType::uint64, "output-total-errors"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "sample"; yang_parent_name = "samples";
}

PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::has_data() const
{
    return sample_id.is_set
	|| in_octets.is_set
	|| in_packets.is_set
	|| input_queue_drops.is_set
	|| input_total_drops.is_set
	|| input_total_errors.is_set
	|| out_octets.is_set
	|| out_packets.is_set
	|| output_queue_drops.is_set
	|| output_total_drops.is_set
	|| output_total_errors.is_set
	|| time_stamp.is_set;
}

bool PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(in_octets.operation)
	|| is_set(in_packets.operation)
	|| is_set(input_queue_drops.operation)
	|| is_set(input_total_drops.operation)
	|| is_set(input_total_errors.operation)
	|| is_set(out_octets.operation)
	|| is_set(out_packets.operation)
	|| is_set(output_queue_drops.operation)
	|| is_set(output_total_drops.operation)
	|| is_set(output_total_errors.operation)
	|| is_set(time_stamp.operation);
}

std::string PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.operation)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (in_packets.is_set || is_set(in_packets.operation)) leaf_name_data.push_back(in_packets.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.operation)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (input_total_drops.is_set || is_set(input_total_drops.operation)) leaf_name_data.push_back(input_total_drops.get_name_leafdata());
    if (input_total_errors.is_set || is_set(input_total_errors.operation)) leaf_name_data.push_back(input_total_errors.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.operation)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_packets.is_set || is_set(out_packets.operation)) leaf_name_data.push_back(out_packets.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.operation)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (output_total_drops.is_set || is_set(output_total_drops.operation)) leaf_name_data.push_back(output_total_drops.get_name_leafdata());
    if (output_total_errors.is_set || is_set(output_total_errors.operation)) leaf_name_data.push_back(output_total_errors.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
    }
    if(value_path == "in-packets")
    {
        in_packets = value;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
    }
    if(value_path == "input-total-drops")
    {
        input_total_drops = value;
    }
    if(value_path == "input-total-errors")
    {
        input_total_errors = value;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
    }
    if(value_path == "out-packets")
    {
        out_packets = value;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
    }
    if(value_path == "output-total-drops")
    {
        output_total_drops = value;
    }
    if(value_path == "output-total-errors")
    {
        output_total_errors = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterfaces()
{
    yang_name = "data-rate-interfaces"; yang_parent_name = "interface";
}

PerfMgmt::Periodic::Interface::DataRateInterfaces::~DataRateInterfaces()
{
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::has_data() const
{
    for (std::size_t index=0; index<data_rate_interface.size(); index++)
    {
        if(data_rate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<data_rate_interface.size(); index++)
    {
        if(data_rate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Interface::DataRateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interfaces";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Interface::DataRateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::DataRateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-rate-interface")
    {
        for(auto const & c : data_rate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface>();
        c->parent = this;
        data_rate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::DataRateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : data_rate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::DataRateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::DataRateInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    samples(std::make_shared<PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples>())
{
    samples->parent = this;

    yang_name = "data-rate-interface"; yang_parent_name = "data-rate-interfaces";
}

PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::~DataRateInterface()
{
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::has_data() const
{
    return interface_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/periodic/interface/data-rate-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Samples()
{
    yang_name = "samples"; yang_parent_name = "data-rate-interface";
}

PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::~Samples()
{
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Samples' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    bandwidth{YType::uint32, "bandwidth"},
    input_data_rate{YType::uint32, "input-data-rate"},
    input_packet_rate{YType::uint32, "input-packet-rate"},
    input_peak_pkts{YType::uint32, "input-peak-pkts"},
    input_peak_rate{YType::uint32, "input-peak-rate"},
    output_data_rate{YType::uint32, "output-data-rate"},
    output_packet_rate{YType::uint32, "output-packet-rate"},
    output_peak_pkts{YType::uint32, "output-peak-pkts"},
    output_peak_rate{YType::uint32, "output-peak-rate"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "sample"; yang_parent_name = "samples";
}

PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::has_data() const
{
    return sample_id.is_set
	|| bandwidth.is_set
	|| input_data_rate.is_set
	|| input_packet_rate.is_set
	|| input_peak_pkts.is_set
	|| input_peak_rate.is_set
	|| output_data_rate.is_set
	|| output_packet_rate.is_set
	|| output_peak_pkts.is_set
	|| output_peak_rate.is_set
	|| time_stamp.is_set;
}

bool PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(bandwidth.operation)
	|| is_set(input_data_rate.operation)
	|| is_set(input_packet_rate.operation)
	|| is_set(input_peak_pkts.operation)
	|| is_set(input_peak_rate.operation)
	|| is_set(output_data_rate.operation)
	|| is_set(output_packet_rate.operation)
	|| is_set(output_peak_pkts.operation)
	|| is_set(output_peak_rate.operation)
	|| is_set(time_stamp.operation);
}

std::string PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (input_data_rate.is_set || is_set(input_data_rate.operation)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.operation)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (input_peak_pkts.is_set || is_set(input_peak_pkts.operation)) leaf_name_data.push_back(input_peak_pkts.get_name_leafdata());
    if (input_peak_rate.is_set || is_set(input_peak_rate.operation)) leaf_name_data.push_back(input_peak_rate.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.operation)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.operation)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());
    if (output_peak_pkts.is_set || is_set(output_peak_pkts.operation)) leaf_name_data.push_back(output_peak_pkts.get_name_leafdata());
    if (output_peak_rate.is_set || is_set(output_peak_rate.operation)) leaf_name_data.push_back(output_peak_rate.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
    }
    if(value_path == "input-peak-pkts")
    {
        input_peak_pkts = value;
    }
    if(value_path == "input-peak-rate")
    {
        input_peak_rate = value;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
    }
    if(value_path == "output-peak-pkts")
    {
        output_peak_pkts = value;
    }
    if(value_path == "output-peak-rate")
    {
        output_peak_rate = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

PerfMgmt::Monitor::Monitor()
    :
    bgp(std::make_shared<PerfMgmt::Monitor::Bgp>())
	,interface(std::make_shared<PerfMgmt::Monitor::Interface>())
	,mpls(std::make_shared<PerfMgmt::Monitor::Mpls>())
	,nodes(std::make_shared<PerfMgmt::Monitor::Nodes>())
	,ospf(std::make_shared<PerfMgmt::Monitor::Ospf>())
{
    bgp->parent = this;

    interface->parent = this;

    mpls->parent = this;

    nodes->parent = this;

    ospf->parent = this;

    yang_name = "monitor"; yang_parent_name = "perf-mgmt";
}

PerfMgmt::Monitor::~Monitor()
{
}

bool PerfMgmt::Monitor::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (nodes !=  nullptr && nodes->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool PerfMgmt::Monitor::has_operation() const
{
    return is_set(operation)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string PerfMgmt::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PerfMgmt::Monitor::Ospf>();
        }
        return ospf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    return children;
}

void PerfMgmt::Monitor::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Ospf::Ospf()
    :
    ospfv2_protocol_instances(std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances>())
	,ospfv3_protocol_instances(std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances>())
{
    ospfv2_protocol_instances->parent = this;

    ospfv3_protocol_instances->parent = this;

    yang_name = "ospf"; yang_parent_name = "monitor";
}

PerfMgmt::Monitor::Ospf::~Ospf()
{
}

bool PerfMgmt::Monitor::Ospf::has_data() const
{
    return (ospfv2_protocol_instances !=  nullptr && ospfv2_protocol_instances->has_data())
	|| (ospfv3_protocol_instances !=  nullptr && ospfv3_protocol_instances->has_data());
}

bool PerfMgmt::Monitor::Ospf::has_operation() const
{
    return is_set(operation)
	|| (ospfv2_protocol_instances !=  nullptr && ospfv2_protocol_instances->has_operation())
	|| (ospfv3_protocol_instances !=  nullptr && ospfv3_protocol_instances->has_operation());
}

std::string PerfMgmt::Monitor::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void PerfMgmt::Monitor::Ospf::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstances()
{
    yang_name = "ospfv2-protocol-instances"; yang_parent_name = "ospf";
}

PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::~Ospfv2ProtocolInstances()
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::has_data() const
{
    for (std::size_t index=0; index<ospfv2_protocol_instance.size(); index++)
    {
        if(ospfv2_protocol_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_protocol_instance.size(); index++)
    {
        if(ospfv2_protocol_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol-instances";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/ospf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-protocol-instance")
    {
        for(auto const & c : ospfv2_protocol_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance>();
        c->parent = this;
        ospfv2_protocol_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfv2_protocol_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Ospfv2ProtocolInstance()
    :
    instance_name{YType::str, "instance-name"}
    	,
    samples(std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples>())
{
    samples->parent = this;

    yang_name = "ospfv2-protocol-instance"; yang_parent_name = "ospfv2-protocol-instances";
}

PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::~Ospfv2ProtocolInstance()
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::has_data() const
{
    return instance_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol-instance" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/ospf/ospfv2-protocol-instances/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Samples()
{
    yang_name = "samples"; yang_parent_name = "ospfv2-protocol-instance";
}

PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::~Samples()
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Samples' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    checksum_errors{YType::uint32, "checksum-errors"},
    input_db_ds{YType::uint32, "input-db-ds"},
    input_db_ds_lsa{YType::uint32, "input-db-ds-lsa"},
    input_hello_packets{YType::uint32, "input-hello-packets"},
    input_ls_requests{YType::uint32, "input-ls-requests"},
    input_ls_requests_lsa{YType::uint32, "input-ls-requests-lsa"},
    input_lsa_acks{YType::uint32, "input-lsa-acks"},
    input_lsa_acks_lsa{YType::uint32, "input-lsa-acks-lsa"},
    input_lsa_updates{YType::uint32, "input-lsa-updates"},
    input_lsa_updates_lsa{YType::uint32, "input-lsa-updates-lsa"},
    input_packets{YType::uint32, "input-packets"},
    output_db_ds{YType::uint32, "output-db-ds"},
    output_db_ds_lsa{YType::uint32, "output-db-ds-lsa"},
    output_hello_packets{YType::uint32, "output-hello-packets"},
    output_ls_requests{YType::uint32, "output-ls-requests"},
    output_ls_requests_lsa{YType::uint32, "output-ls-requests-lsa"},
    output_lsa_acks{YType::uint32, "output-lsa-acks"},
    output_lsa_acks_lsa{YType::uint32, "output-lsa-acks-lsa"},
    output_lsa_updates{YType::uint32, "output-lsa-updates"},
    output_lsa_updates_lsa{YType::uint32, "output-lsa-updates-lsa"},
    output_packets{YType::uint32, "output-packets"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "sample"; yang_parent_name = "samples";
}

PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::has_data() const
{
    return sample_id.is_set
	|| checksum_errors.is_set
	|| input_db_ds.is_set
	|| input_db_ds_lsa.is_set
	|| input_hello_packets.is_set
	|| input_ls_requests.is_set
	|| input_ls_requests_lsa.is_set
	|| input_lsa_acks.is_set
	|| input_lsa_acks_lsa.is_set
	|| input_lsa_updates.is_set
	|| input_lsa_updates_lsa.is_set
	|| input_packets.is_set
	|| output_db_ds.is_set
	|| output_db_ds_lsa.is_set
	|| output_hello_packets.is_set
	|| output_ls_requests.is_set
	|| output_ls_requests_lsa.is_set
	|| output_lsa_acks.is_set
	|| output_lsa_acks_lsa.is_set
	|| output_lsa_updates.is_set
	|| output_lsa_updates_lsa.is_set
	|| output_packets.is_set
	|| time_stamp.is_set;
}

bool PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(checksum_errors.operation)
	|| is_set(input_db_ds.operation)
	|| is_set(input_db_ds_lsa.operation)
	|| is_set(input_hello_packets.operation)
	|| is_set(input_ls_requests.operation)
	|| is_set(input_ls_requests_lsa.operation)
	|| is_set(input_lsa_acks.operation)
	|| is_set(input_lsa_acks_lsa.operation)
	|| is_set(input_lsa_updates.operation)
	|| is_set(input_lsa_updates_lsa.operation)
	|| is_set(input_packets.operation)
	|| is_set(output_db_ds.operation)
	|| is_set(output_db_ds_lsa.operation)
	|| is_set(output_hello_packets.operation)
	|| is_set(output_ls_requests.operation)
	|| is_set(output_ls_requests_lsa.operation)
	|| is_set(output_lsa_acks.operation)
	|| is_set(output_lsa_acks_lsa.operation)
	|| is_set(output_lsa_updates.operation)
	|| is_set(output_lsa_updates_lsa.operation)
	|| is_set(output_packets.operation)
	|| is_set(time_stamp.operation);
}

std::string PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (checksum_errors.is_set || is_set(checksum_errors.operation)) leaf_name_data.push_back(checksum_errors.get_name_leafdata());
    if (input_db_ds.is_set || is_set(input_db_ds.operation)) leaf_name_data.push_back(input_db_ds.get_name_leafdata());
    if (input_db_ds_lsa.is_set || is_set(input_db_ds_lsa.operation)) leaf_name_data.push_back(input_db_ds_lsa.get_name_leafdata());
    if (input_hello_packets.is_set || is_set(input_hello_packets.operation)) leaf_name_data.push_back(input_hello_packets.get_name_leafdata());
    if (input_ls_requests.is_set || is_set(input_ls_requests.operation)) leaf_name_data.push_back(input_ls_requests.get_name_leafdata());
    if (input_ls_requests_lsa.is_set || is_set(input_ls_requests_lsa.operation)) leaf_name_data.push_back(input_ls_requests_lsa.get_name_leafdata());
    if (input_lsa_acks.is_set || is_set(input_lsa_acks.operation)) leaf_name_data.push_back(input_lsa_acks.get_name_leafdata());
    if (input_lsa_acks_lsa.is_set || is_set(input_lsa_acks_lsa.operation)) leaf_name_data.push_back(input_lsa_acks_lsa.get_name_leafdata());
    if (input_lsa_updates.is_set || is_set(input_lsa_updates.operation)) leaf_name_data.push_back(input_lsa_updates.get_name_leafdata());
    if (input_lsa_updates_lsa.is_set || is_set(input_lsa_updates_lsa.operation)) leaf_name_data.push_back(input_lsa_updates_lsa.get_name_leafdata());
    if (input_packets.is_set || is_set(input_packets.operation)) leaf_name_data.push_back(input_packets.get_name_leafdata());
    if (output_db_ds.is_set || is_set(output_db_ds.operation)) leaf_name_data.push_back(output_db_ds.get_name_leafdata());
    if (output_db_ds_lsa.is_set || is_set(output_db_ds_lsa.operation)) leaf_name_data.push_back(output_db_ds_lsa.get_name_leafdata());
    if (output_hello_packets.is_set || is_set(output_hello_packets.operation)) leaf_name_data.push_back(output_hello_packets.get_name_leafdata());
    if (output_ls_requests.is_set || is_set(output_ls_requests.operation)) leaf_name_data.push_back(output_ls_requests.get_name_leafdata());
    if (output_ls_requests_lsa.is_set || is_set(output_ls_requests_lsa.operation)) leaf_name_data.push_back(output_ls_requests_lsa.get_name_leafdata());
    if (output_lsa_acks.is_set || is_set(output_lsa_acks.operation)) leaf_name_data.push_back(output_lsa_acks.get_name_leafdata());
    if (output_lsa_acks_lsa.is_set || is_set(output_lsa_acks_lsa.operation)) leaf_name_data.push_back(output_lsa_acks_lsa.get_name_leafdata());
    if (output_lsa_updates.is_set || is_set(output_lsa_updates.operation)) leaf_name_data.push_back(output_lsa_updates.get_name_leafdata());
    if (output_lsa_updates_lsa.is_set || is_set(output_lsa_updates_lsa.operation)) leaf_name_data.push_back(output_lsa_updates_lsa.get_name_leafdata());
    if (output_packets.is_set || is_set(output_packets.operation)) leaf_name_data.push_back(output_packets.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "checksum-errors")
    {
        checksum_errors = value;
    }
    if(value_path == "input-db-ds")
    {
        input_db_ds = value;
    }
    if(value_path == "input-db-ds-lsa")
    {
        input_db_ds_lsa = value;
    }
    if(value_path == "input-hello-packets")
    {
        input_hello_packets = value;
    }
    if(value_path == "input-ls-requests")
    {
        input_ls_requests = value;
    }
    if(value_path == "input-ls-requests-lsa")
    {
        input_ls_requests_lsa = value;
    }
    if(value_path == "input-lsa-acks")
    {
        input_lsa_acks = value;
    }
    if(value_path == "input-lsa-acks-lsa")
    {
        input_lsa_acks_lsa = value;
    }
    if(value_path == "input-lsa-updates")
    {
        input_lsa_updates = value;
    }
    if(value_path == "input-lsa-updates-lsa")
    {
        input_lsa_updates_lsa = value;
    }
    if(value_path == "input-packets")
    {
        input_packets = value;
    }
    if(value_path == "output-db-ds")
    {
        output_db_ds = value;
    }
    if(value_path == "output-db-ds-lsa")
    {
        output_db_ds_lsa = value;
    }
    if(value_path == "output-hello-packets")
    {
        output_hello_packets = value;
    }
    if(value_path == "output-ls-requests")
    {
        output_ls_requests = value;
    }
    if(value_path == "output-ls-requests-lsa")
    {
        output_ls_requests_lsa = value;
    }
    if(value_path == "output-lsa-acks")
    {
        output_lsa_acks = value;
    }
    if(value_path == "output-lsa-acks-lsa")
    {
        output_lsa_acks_lsa = value;
    }
    if(value_path == "output-lsa-updates")
    {
        output_lsa_updates = value;
    }
    if(value_path == "output-lsa-updates-lsa")
    {
        output_lsa_updates_lsa = value;
    }
    if(value_path == "output-packets")
    {
        output_packets = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstances()
{
    yang_name = "ospfv3-protocol-instances"; yang_parent_name = "ospf";
}

PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::~Ospfv3ProtocolInstances()
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::has_data() const
{
    for (std::size_t index=0; index<ospfv3_protocol_instance.size(); index++)
    {
        if(ospfv3_protocol_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::has_operation() const
{
    for (std::size_t index=0; index<ospfv3_protocol_instance.size(); index++)
    {
        if(ospfv3_protocol_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol-instances";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/ospf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv3-protocol-instance")
    {
        for(auto const & c : ospfv3_protocol_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance>();
        c->parent = this;
        ospfv3_protocol_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfv3_protocol_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Ospfv3ProtocolInstance()
    :
    instance_name{YType::str, "instance-name"}
    	,
    samples(std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples>())
{
    samples->parent = this;

    yang_name = "ospfv3-protocol-instance"; yang_parent_name = "ospfv3-protocol-instances";
}

PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::~Ospfv3ProtocolInstance()
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::has_data() const
{
    return instance_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol-instance" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/ospf/ospfv3-protocol-instances/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Samples()
{
    yang_name = "samples"; yang_parent_name = "ospfv3-protocol-instance";
}

PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::~Samples()
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Samples' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    input_db_ds{YType::uint32, "input-db-ds"},
    input_db_ds_lsa{YType::uint32, "input-db-ds-lsa"},
    input_hello_packets{YType::uint32, "input-hello-packets"},
    input_ls_requests{YType::uint32, "input-ls-requests"},
    input_ls_requests_lsa{YType::uint32, "input-ls-requests-lsa"},
    input_lsa_acks{YType::uint32, "input-lsa-acks"},
    input_lsa_acks_lsa{YType::uint32, "input-lsa-acks-lsa"},
    input_lsa_updates{YType::uint32, "input-lsa-updates"},
    input_lsa_updates_lsa{YType::uint32, "input-lsa-updates-lsa"},
    input_packets{YType::uint32, "input-packets"},
    output_db_ds{YType::uint32, "output-db-ds"},
    output_db_ds_lsa{YType::uint32, "output-db-ds-lsa"},
    output_hello_packets{YType::uint32, "output-hello-packets"},
    output_ls_requests{YType::uint32, "output-ls-requests"},
    output_ls_requests_lsa{YType::uint32, "output-ls-requests-lsa"},
    output_lsa_acks{YType::uint32, "output-lsa-acks"},
    output_lsa_acks_lsa{YType::uint32, "output-lsa-acks-lsa"},
    output_lsa_updates{YType::uint32, "output-lsa-updates"},
    output_lsa_updates_lsa{YType::uint32, "output-lsa-updates-lsa"},
    output_packets{YType::uint32, "output-packets"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "sample"; yang_parent_name = "samples";
}

PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::has_data() const
{
    return sample_id.is_set
	|| input_db_ds.is_set
	|| input_db_ds_lsa.is_set
	|| input_hello_packets.is_set
	|| input_ls_requests.is_set
	|| input_ls_requests_lsa.is_set
	|| input_lsa_acks.is_set
	|| input_lsa_acks_lsa.is_set
	|| input_lsa_updates.is_set
	|| input_lsa_updates_lsa.is_set
	|| input_packets.is_set
	|| output_db_ds.is_set
	|| output_db_ds_lsa.is_set
	|| output_hello_packets.is_set
	|| output_ls_requests.is_set
	|| output_ls_requests_lsa.is_set
	|| output_lsa_acks.is_set
	|| output_lsa_acks_lsa.is_set
	|| output_lsa_updates.is_set
	|| output_lsa_updates_lsa.is_set
	|| output_packets.is_set
	|| time_stamp.is_set;
}

bool PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(input_db_ds.operation)
	|| is_set(input_db_ds_lsa.operation)
	|| is_set(input_hello_packets.operation)
	|| is_set(input_ls_requests.operation)
	|| is_set(input_ls_requests_lsa.operation)
	|| is_set(input_lsa_acks.operation)
	|| is_set(input_lsa_acks_lsa.operation)
	|| is_set(input_lsa_updates.operation)
	|| is_set(input_lsa_updates_lsa.operation)
	|| is_set(input_packets.operation)
	|| is_set(output_db_ds.operation)
	|| is_set(output_db_ds_lsa.operation)
	|| is_set(output_hello_packets.operation)
	|| is_set(output_ls_requests.operation)
	|| is_set(output_ls_requests_lsa.operation)
	|| is_set(output_lsa_acks.operation)
	|| is_set(output_lsa_acks_lsa.operation)
	|| is_set(output_lsa_updates.operation)
	|| is_set(output_lsa_updates_lsa.operation)
	|| is_set(output_packets.operation)
	|| is_set(time_stamp.operation);
}

std::string PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (input_db_ds.is_set || is_set(input_db_ds.operation)) leaf_name_data.push_back(input_db_ds.get_name_leafdata());
    if (input_db_ds_lsa.is_set || is_set(input_db_ds_lsa.operation)) leaf_name_data.push_back(input_db_ds_lsa.get_name_leafdata());
    if (input_hello_packets.is_set || is_set(input_hello_packets.operation)) leaf_name_data.push_back(input_hello_packets.get_name_leafdata());
    if (input_ls_requests.is_set || is_set(input_ls_requests.operation)) leaf_name_data.push_back(input_ls_requests.get_name_leafdata());
    if (input_ls_requests_lsa.is_set || is_set(input_ls_requests_lsa.operation)) leaf_name_data.push_back(input_ls_requests_lsa.get_name_leafdata());
    if (input_lsa_acks.is_set || is_set(input_lsa_acks.operation)) leaf_name_data.push_back(input_lsa_acks.get_name_leafdata());
    if (input_lsa_acks_lsa.is_set || is_set(input_lsa_acks_lsa.operation)) leaf_name_data.push_back(input_lsa_acks_lsa.get_name_leafdata());
    if (input_lsa_updates.is_set || is_set(input_lsa_updates.operation)) leaf_name_data.push_back(input_lsa_updates.get_name_leafdata());
    if (input_lsa_updates_lsa.is_set || is_set(input_lsa_updates_lsa.operation)) leaf_name_data.push_back(input_lsa_updates_lsa.get_name_leafdata());
    if (input_packets.is_set || is_set(input_packets.operation)) leaf_name_data.push_back(input_packets.get_name_leafdata());
    if (output_db_ds.is_set || is_set(output_db_ds.operation)) leaf_name_data.push_back(output_db_ds.get_name_leafdata());
    if (output_db_ds_lsa.is_set || is_set(output_db_ds_lsa.operation)) leaf_name_data.push_back(output_db_ds_lsa.get_name_leafdata());
    if (output_hello_packets.is_set || is_set(output_hello_packets.operation)) leaf_name_data.push_back(output_hello_packets.get_name_leafdata());
    if (output_ls_requests.is_set || is_set(output_ls_requests.operation)) leaf_name_data.push_back(output_ls_requests.get_name_leafdata());
    if (output_ls_requests_lsa.is_set || is_set(output_ls_requests_lsa.operation)) leaf_name_data.push_back(output_ls_requests_lsa.get_name_leafdata());
    if (output_lsa_acks.is_set || is_set(output_lsa_acks.operation)) leaf_name_data.push_back(output_lsa_acks.get_name_leafdata());
    if (output_lsa_acks_lsa.is_set || is_set(output_lsa_acks_lsa.operation)) leaf_name_data.push_back(output_lsa_acks_lsa.get_name_leafdata());
    if (output_lsa_updates.is_set || is_set(output_lsa_updates.operation)) leaf_name_data.push_back(output_lsa_updates.get_name_leafdata());
    if (output_lsa_updates_lsa.is_set || is_set(output_lsa_updates_lsa.operation)) leaf_name_data.push_back(output_lsa_updates_lsa.get_name_leafdata());
    if (output_packets.is_set || is_set(output_packets.operation)) leaf_name_data.push_back(output_packets.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "input-db-ds")
    {
        input_db_ds = value;
    }
    if(value_path == "input-db-ds-lsa")
    {
        input_db_ds_lsa = value;
    }
    if(value_path == "input-hello-packets")
    {
        input_hello_packets = value;
    }
    if(value_path == "input-ls-requests")
    {
        input_ls_requests = value;
    }
    if(value_path == "input-ls-requests-lsa")
    {
        input_ls_requests_lsa = value;
    }
    if(value_path == "input-lsa-acks")
    {
        input_lsa_acks = value;
    }
    if(value_path == "input-lsa-acks-lsa")
    {
        input_lsa_acks_lsa = value;
    }
    if(value_path == "input-lsa-updates")
    {
        input_lsa_updates = value;
    }
    if(value_path == "input-lsa-updates-lsa")
    {
        input_lsa_updates_lsa = value;
    }
    if(value_path == "input-packets")
    {
        input_packets = value;
    }
    if(value_path == "output-db-ds")
    {
        output_db_ds = value;
    }
    if(value_path == "output-db-ds-lsa")
    {
        output_db_ds_lsa = value;
    }
    if(value_path == "output-hello-packets")
    {
        output_hello_packets = value;
    }
    if(value_path == "output-ls-requests")
    {
        output_ls_requests = value;
    }
    if(value_path == "output-ls-requests-lsa")
    {
        output_ls_requests_lsa = value;
    }
    if(value_path == "output-lsa-acks")
    {
        output_lsa_acks = value;
    }
    if(value_path == "output-lsa-acks-lsa")
    {
        output_lsa_acks_lsa = value;
    }
    if(value_path == "output-lsa-updates")
    {
        output_lsa_updates = value;
    }
    if(value_path == "output-lsa-updates-lsa")
    {
        output_lsa_updates_lsa = value;
    }
    if(value_path == "output-packets")
    {
        output_packets = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

PerfMgmt::Monitor::Mpls::Mpls()
    :
    ldp_neighbors(std::make_shared<PerfMgmt::Monitor::Mpls::LdpNeighbors>())
{
    ldp_neighbors->parent = this;

    yang_name = "mpls"; yang_parent_name = "monitor";
}

PerfMgmt::Monitor::Mpls::~Mpls()
{
}

bool PerfMgmt::Monitor::Mpls::has_data() const
{
    return (ldp_neighbors !=  nullptr && ldp_neighbors->has_data());
}

bool PerfMgmt::Monitor::Mpls::has_operation() const
{
    return is_set(operation)
	|| (ldp_neighbors !=  nullptr && ldp_neighbors->has_operation());
}

std::string PerfMgmt::Monitor::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(ldp_neighbors != nullptr)
    {
        children["ldp-neighbors"] = ldp_neighbors;
    }

    return children;
}

void PerfMgmt::Monitor::Mpls::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbors()
{
    yang_name = "ldp-neighbors"; yang_parent_name = "mpls";
}

PerfMgmt::Monitor::Mpls::LdpNeighbors::~LdpNeighbors()
{
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::has_data() const
{
    for (std::size_t index=0; index<ldp_neighbor.size(); index++)
    {
        if(ldp_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::has_operation() const
{
    for (std::size_t index=0; index<ldp_neighbor.size(); index++)
    {
        if(ldp_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Mpls::LdpNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-neighbors";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Mpls::LdpNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Mpls::LdpNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-neighbor")
    {
        for(auto const & c : ldp_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor>();
        c->parent = this;
        ldp_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Mpls::LdpNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ldp_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Mpls::LdpNeighbors::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::LdpNeighbor()
    :
    nbr{YType::str, "nbr"}
    	,
    samples(std::make_shared<PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples>())
{
    samples->parent = this;

    yang_name = "ldp-neighbor"; yang_parent_name = "ldp-neighbors";
}

PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::~LdpNeighbor()
{
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::has_data() const
{
    return nbr.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(nbr.operation)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-neighbor" <<"[nbr='" <<nbr <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/mpls/ldp-neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbr.is_set || is_set(nbr.operation)) leaf_name_data.push_back(nbr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nbr")
    {
        nbr = value;
    }
}

PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Samples()
{
    yang_name = "samples"; yang_parent_name = "ldp-neighbor";
}

PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::~Samples()
{
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Samples' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    address_msgs_rcvd{YType::uint16, "address-msgs-rcvd"},
    address_msgs_sent{YType::uint16, "address-msgs-sent"},
    address_withdraw_msgs_rcvd{YType::uint16, "address-withdraw-msgs-rcvd"},
    address_withdraw_msgs_sent{YType::uint16, "address-withdraw-msgs-sent"},
    init_msgs_rcvd{YType::uint16, "init-msgs-rcvd"},
    init_msgs_sent{YType::uint16, "init-msgs-sent"},
    keepalive_msgs_rcvd{YType::uint16, "keepalive-msgs-rcvd"},
    keepalive_msgs_sent{YType::uint16, "keepalive-msgs-sent"},
    label_mapping_msgs_rcvd{YType::uint16, "label-mapping-msgs-rcvd"},
    label_mapping_msgs_sent{YType::uint16, "label-mapping-msgs-sent"},
    label_release_msgs_rcvd{YType::uint16, "label-release-msgs-rcvd"},
    label_release_msgs_sent{YType::uint16, "label-release-msgs-sent"},
    label_withdraw_msgs_rcvd{YType::uint16, "label-withdraw-msgs-rcvd"},
    label_withdraw_msgs_sent{YType::uint16, "label-withdraw-msgs-sent"},
    notification_msgs_rcvd{YType::uint16, "notification-msgs-rcvd"},
    notification_msgs_sent{YType::uint16, "notification-msgs-sent"},
    time_stamp{YType::uint64, "time-stamp"},
    total_msgs_rcvd{YType::uint16, "total-msgs-rcvd"},
    total_msgs_sent{YType::uint16, "total-msgs-sent"}
{
    yang_name = "sample"; yang_parent_name = "samples";
}

PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::has_data() const
{
    return sample_id.is_set
	|| address_msgs_rcvd.is_set
	|| address_msgs_sent.is_set
	|| address_withdraw_msgs_rcvd.is_set
	|| address_withdraw_msgs_sent.is_set
	|| init_msgs_rcvd.is_set
	|| init_msgs_sent.is_set
	|| keepalive_msgs_rcvd.is_set
	|| keepalive_msgs_sent.is_set
	|| label_mapping_msgs_rcvd.is_set
	|| label_mapping_msgs_sent.is_set
	|| label_release_msgs_rcvd.is_set
	|| label_release_msgs_sent.is_set
	|| label_withdraw_msgs_rcvd.is_set
	|| label_withdraw_msgs_sent.is_set
	|| notification_msgs_rcvd.is_set
	|| notification_msgs_sent.is_set
	|| time_stamp.is_set
	|| total_msgs_rcvd.is_set
	|| total_msgs_sent.is_set;
}

bool PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(address_msgs_rcvd.operation)
	|| is_set(address_msgs_sent.operation)
	|| is_set(address_withdraw_msgs_rcvd.operation)
	|| is_set(address_withdraw_msgs_sent.operation)
	|| is_set(init_msgs_rcvd.operation)
	|| is_set(init_msgs_sent.operation)
	|| is_set(keepalive_msgs_rcvd.operation)
	|| is_set(keepalive_msgs_sent.operation)
	|| is_set(label_mapping_msgs_rcvd.operation)
	|| is_set(label_mapping_msgs_sent.operation)
	|| is_set(label_release_msgs_rcvd.operation)
	|| is_set(label_release_msgs_sent.operation)
	|| is_set(label_withdraw_msgs_rcvd.operation)
	|| is_set(label_withdraw_msgs_sent.operation)
	|| is_set(notification_msgs_rcvd.operation)
	|| is_set(notification_msgs_sent.operation)
	|| is_set(time_stamp.operation)
	|| is_set(total_msgs_rcvd.operation)
	|| is_set(total_msgs_sent.operation);
}

std::string PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (address_msgs_rcvd.is_set || is_set(address_msgs_rcvd.operation)) leaf_name_data.push_back(address_msgs_rcvd.get_name_leafdata());
    if (address_msgs_sent.is_set || is_set(address_msgs_sent.operation)) leaf_name_data.push_back(address_msgs_sent.get_name_leafdata());
    if (address_withdraw_msgs_rcvd.is_set || is_set(address_withdraw_msgs_rcvd.operation)) leaf_name_data.push_back(address_withdraw_msgs_rcvd.get_name_leafdata());
    if (address_withdraw_msgs_sent.is_set || is_set(address_withdraw_msgs_sent.operation)) leaf_name_data.push_back(address_withdraw_msgs_sent.get_name_leafdata());
    if (init_msgs_rcvd.is_set || is_set(init_msgs_rcvd.operation)) leaf_name_data.push_back(init_msgs_rcvd.get_name_leafdata());
    if (init_msgs_sent.is_set || is_set(init_msgs_sent.operation)) leaf_name_data.push_back(init_msgs_sent.get_name_leafdata());
    if (keepalive_msgs_rcvd.is_set || is_set(keepalive_msgs_rcvd.operation)) leaf_name_data.push_back(keepalive_msgs_rcvd.get_name_leafdata());
    if (keepalive_msgs_sent.is_set || is_set(keepalive_msgs_sent.operation)) leaf_name_data.push_back(keepalive_msgs_sent.get_name_leafdata());
    if (label_mapping_msgs_rcvd.is_set || is_set(label_mapping_msgs_rcvd.operation)) leaf_name_data.push_back(label_mapping_msgs_rcvd.get_name_leafdata());
    if (label_mapping_msgs_sent.is_set || is_set(label_mapping_msgs_sent.operation)) leaf_name_data.push_back(label_mapping_msgs_sent.get_name_leafdata());
    if (label_release_msgs_rcvd.is_set || is_set(label_release_msgs_rcvd.operation)) leaf_name_data.push_back(label_release_msgs_rcvd.get_name_leafdata());
    if (label_release_msgs_sent.is_set || is_set(label_release_msgs_sent.operation)) leaf_name_data.push_back(label_release_msgs_sent.get_name_leafdata());
    if (label_withdraw_msgs_rcvd.is_set || is_set(label_withdraw_msgs_rcvd.operation)) leaf_name_data.push_back(label_withdraw_msgs_rcvd.get_name_leafdata());
    if (label_withdraw_msgs_sent.is_set || is_set(label_withdraw_msgs_sent.operation)) leaf_name_data.push_back(label_withdraw_msgs_sent.get_name_leafdata());
    if (notification_msgs_rcvd.is_set || is_set(notification_msgs_rcvd.operation)) leaf_name_data.push_back(notification_msgs_rcvd.get_name_leafdata());
    if (notification_msgs_sent.is_set || is_set(notification_msgs_sent.operation)) leaf_name_data.push_back(notification_msgs_sent.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (total_msgs_rcvd.is_set || is_set(total_msgs_rcvd.operation)) leaf_name_data.push_back(total_msgs_rcvd.get_name_leafdata());
    if (total_msgs_sent.is_set || is_set(total_msgs_sent.operation)) leaf_name_data.push_back(total_msgs_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "address-msgs-rcvd")
    {
        address_msgs_rcvd = value;
    }
    if(value_path == "address-msgs-sent")
    {
        address_msgs_sent = value;
    }
    if(value_path == "address-withdraw-msgs-rcvd")
    {
        address_withdraw_msgs_rcvd = value;
    }
    if(value_path == "address-withdraw-msgs-sent")
    {
        address_withdraw_msgs_sent = value;
    }
    if(value_path == "init-msgs-rcvd")
    {
        init_msgs_rcvd = value;
    }
    if(value_path == "init-msgs-sent")
    {
        init_msgs_sent = value;
    }
    if(value_path == "keepalive-msgs-rcvd")
    {
        keepalive_msgs_rcvd = value;
    }
    if(value_path == "keepalive-msgs-sent")
    {
        keepalive_msgs_sent = value;
    }
    if(value_path == "label-mapping-msgs-rcvd")
    {
        label_mapping_msgs_rcvd = value;
    }
    if(value_path == "label-mapping-msgs-sent")
    {
        label_mapping_msgs_sent = value;
    }
    if(value_path == "label-release-msgs-rcvd")
    {
        label_release_msgs_rcvd = value;
    }
    if(value_path == "label-release-msgs-sent")
    {
        label_release_msgs_sent = value;
    }
    if(value_path == "label-withdraw-msgs-rcvd")
    {
        label_withdraw_msgs_rcvd = value;
    }
    if(value_path == "label-withdraw-msgs-sent")
    {
        label_withdraw_msgs_sent = value;
    }
    if(value_path == "notification-msgs-rcvd")
    {
        notification_msgs_rcvd = value;
    }
    if(value_path == "notification-msgs-sent")
    {
        notification_msgs_sent = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
    if(value_path == "total-msgs-rcvd")
    {
        total_msgs_rcvd = value;
    }
    if(value_path == "total-msgs-sent")
    {
        total_msgs_sent = value;
    }
}

PerfMgmt::Monitor::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "monitor";
}

PerfMgmt::Monitor::Nodes::~Nodes()
{
}

bool PerfMgmt::Monitor::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Nodes::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"}
    	,
    processes(std::make_shared<PerfMgmt::Monitor::Nodes::Node::Processes>())
	,sample_xr(std::make_shared<PerfMgmt::Monitor::Nodes::Node::SampleXr>())
	,samples(std::make_shared<PerfMgmt::Monitor::Nodes::Node::Samples>())
{
    processes->parent = this;

    sample_xr->parent = this;

    samples->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

PerfMgmt::Monitor::Nodes::Node::~Node()
{
}

bool PerfMgmt::Monitor::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| (processes !=  nullptr && processes->has_data())
	|| (sample_xr !=  nullptr && sample_xr->has_data())
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Monitor::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| (processes !=  nullptr && processes->has_operation())
	|| (sample_xr !=  nullptr && sample_xr->has_operation())
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Monitor::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "processes")
    {
        if(processes == nullptr)
        {
            processes = std::make_shared<PerfMgmt::Monitor::Nodes::Node::Processes>();
        }
        return processes;
    }

    if(child_yang_name == "sample-xr")
    {
        if(sample_xr == nullptr)
        {
            sample_xr = std::make_shared<PerfMgmt::Monitor::Nodes::Node::SampleXr>();
        }
        return sample_xr;
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
    if(processes != nullptr)
    {
        children["processes"] = processes;
    }

    if(sample_xr != nullptr)
    {
        children["sample-xr"] = sample_xr;
    }

    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Monitor::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

PerfMgmt::Monitor::Nodes::Node::SampleXr::SampleXr()
{
    yang_name = "sample-xr"; yang_parent_name = "node";
}

PerfMgmt::Monitor::Nodes::Node::SampleXr::~SampleXr()
{
}

bool PerfMgmt::Monitor::Nodes::Node::SampleXr::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Nodes::Node::SampleXr::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Nodes::Node::SampleXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample-xr";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Nodes::Node::SampleXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SampleXr' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::Node::SampleXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Nodes::Node::SampleXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Nodes::Node::SampleXr::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    average_cpu_used{YType::uint32, "average-cpu-used"},
    no_processes{YType::uint32, "no-processes"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "sample"; yang_parent_name = "sample-xr";
}

PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::has_data() const
{
    return sample_id.is_set
	|| average_cpu_used.is_set
	|| no_processes.is_set
	|| time_stamp.is_set;
}

bool PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(average_cpu_used.operation)
	|| is_set(no_processes.operation)
	|| is_set(time_stamp.operation);
}

std::string PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (average_cpu_used.is_set || is_set(average_cpu_used.operation)) leaf_name_data.push_back(average_cpu_used.get_name_leafdata());
    if (no_processes.is_set || is_set(no_processes.operation)) leaf_name_data.push_back(no_processes.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "average-cpu-used")
    {
        average_cpu_used = value;
    }
    if(value_path == "no-processes")
    {
        no_processes = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

PerfMgmt::Monitor::Nodes::Node::Processes::Processes()
{
    yang_name = "processes"; yang_parent_name = "node";
}

PerfMgmt::Monitor::Nodes::Node::Processes::~Processes()
{
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::has_data() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::has_operation() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Nodes::Node::Processes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processes";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Nodes::Node::Processes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Processes' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::Node::Processes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        for(auto const & c : process)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Nodes::Node::Processes::Process>();
        c->parent = this;
        process.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Nodes::Node::Processes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : process)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Nodes::Node::Processes::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Nodes::Node::Processes::Process::Process()
    :
    process_id{YType::int32, "process-id"}
    	,
    samples(std::make_shared<PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples>())
{
    samples->parent = this;

    yang_name = "process"; yang_parent_name = "processes";
}

PerfMgmt::Monitor::Nodes::Node::Processes::Process::~Process()
{
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::Process::has_data() const
{
    return process_id.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::Process::has_operation() const
{
    return is_set(operation)
	|| is_set(process_id.operation)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Monitor::Nodes::Node::Processes::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process" <<"[process-id='" <<process_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Nodes::Node::Processes::Process::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Process' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.operation)) leaf_name_data.push_back(process_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Monitor::Nodes::Node::Processes::Process::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-id")
    {
        process_id = value;
    }
}

PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Samples()
{
    yang_name = "samples"; yang_parent_name = "process";
}

PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::~Samples()
{
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Samples' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    average_cpu_used{YType::uint32, "average-cpu-used"},
    no_threads{YType::uint32, "no-threads"},
    peak_memory{YType::uint32, "peak-memory"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "sample"; yang_parent_name = "samples";
}

PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::has_data() const
{
    return sample_id.is_set
	|| average_cpu_used.is_set
	|| no_threads.is_set
	|| peak_memory.is_set
	|| time_stamp.is_set;
}

bool PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(average_cpu_used.operation)
	|| is_set(no_threads.operation)
	|| is_set(peak_memory.operation)
	|| is_set(time_stamp.operation);
}

std::string PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (average_cpu_used.is_set || is_set(average_cpu_used.operation)) leaf_name_data.push_back(average_cpu_used.get_name_leafdata());
    if (no_threads.is_set || is_set(no_threads.operation)) leaf_name_data.push_back(no_threads.get_name_leafdata());
    if (peak_memory.is_set || is_set(peak_memory.operation)) leaf_name_data.push_back(peak_memory.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "average-cpu-used")
    {
        average_cpu_used = value;
    }
    if(value_path == "no-threads")
    {
        no_threads = value;
    }
    if(value_path == "peak-memory")
    {
        peak_memory = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

PerfMgmt::Monitor::Nodes::Node::Samples::Samples()
{
    yang_name = "samples"; yang_parent_name = "node";
}

PerfMgmt::Monitor::Nodes::Node::Samples::~Samples()
{
}

bool PerfMgmt::Monitor::Nodes::Node::Samples::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Nodes::Node::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Nodes::Node::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Nodes::Node::Samples::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Samples' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::Node::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Nodes::Node::Samples::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Nodes::Node::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Nodes::Node::Samples::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Nodes::Node::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    curr_memory{YType::uint32, "curr-memory"},
    peak_memory{YType::uint32, "peak-memory"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "sample"; yang_parent_name = "samples";
}

PerfMgmt::Monitor::Nodes::Node::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Nodes::Node::Samples::Sample::has_data() const
{
    return sample_id.is_set
	|| curr_memory.is_set
	|| peak_memory.is_set
	|| time_stamp.is_set;
}

bool PerfMgmt::Monitor::Nodes::Node::Samples::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(curr_memory.operation)
	|| is_set(peak_memory.operation)
	|| is_set(time_stamp.operation);
}

std::string PerfMgmt::Monitor::Nodes::Node::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Nodes::Node::Samples::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (curr_memory.is_set || is_set(curr_memory.operation)) leaf_name_data.push_back(curr_memory.get_name_leafdata());
    if (peak_memory.is_set || is_set(peak_memory.operation)) leaf_name_data.push_back(peak_memory.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Nodes::Node::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Nodes::Node::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Monitor::Nodes::Node::Samples::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "curr-memory")
    {
        curr_memory = value;
    }
    if(value_path == "peak-memory")
    {
        peak_memory = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

PerfMgmt::Monitor::Bgp::Bgp()
    :
    bgp_neighbors(std::make_shared<PerfMgmt::Monitor::Bgp::BgpNeighbors>())
{
    bgp_neighbors->parent = this;

    yang_name = "bgp"; yang_parent_name = "monitor";
}

PerfMgmt::Monitor::Bgp::~Bgp()
{
}

bool PerfMgmt::Monitor::Bgp::has_data() const
{
    return (bgp_neighbors !=  nullptr && bgp_neighbors->has_data());
}

bool PerfMgmt::Monitor::Bgp::has_operation() const
{
    return is_set(operation)
	|| (bgp_neighbors !=  nullptr && bgp_neighbors->has_operation());
}

std::string PerfMgmt::Monitor::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(bgp_neighbors != nullptr)
    {
        children["bgp-neighbors"] = bgp_neighbors;
    }

    return children;
}

void PerfMgmt::Monitor::Bgp::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbors()
{
    yang_name = "bgp-neighbors"; yang_parent_name = "bgp";
}

PerfMgmt::Monitor::Bgp::BgpNeighbors::~BgpNeighbors()
{
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::has_data() const
{
    for (std::size_t index=0; index<bgp_neighbor.size(); index++)
    {
        if(bgp_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::has_operation() const
{
    for (std::size_t index=0; index<bgp_neighbor.size(); index++)
    {
        if(bgp_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Bgp::BgpNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbors";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Bgp::BgpNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/bgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Bgp::BgpNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-neighbor")
    {
        for(auto const & c : bgp_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor>();
        c->parent = this;
        bgp_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Bgp::BgpNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Bgp::BgpNeighbors::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::BgpNeighbor()
    :
    ip_address{YType::str, "ip-address"}
    	,
    samples(std::make_shared<PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples>())
{
    samples->parent = this;

    yang_name = "bgp-neighbor"; yang_parent_name = "bgp-neighbors";
}

PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::~BgpNeighbor()
{
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::has_data() const
{
    return ip_address.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/bgp/bgp-neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Samples()
{
    yang_name = "samples"; yang_parent_name = "bgp-neighbor";
}

PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::~Samples()
{
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Samples' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    conn_dropped{YType::uint32, "conn-dropped"},
    conn_established{YType::uint32, "conn-established"},
    errors_received{YType::uint32, "errors-received"},
    errors_sent{YType::uint32, "errors-sent"},
    input_messages{YType::uint32, "input-messages"},
    input_update_messages{YType::uint32, "input-update-messages"},
    output_messages{YType::uint32, "output-messages"},
    output_update_messages{YType::uint32, "output-update-messages"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "sample"; yang_parent_name = "samples";
}

PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::has_data() const
{
    return sample_id.is_set
	|| conn_dropped.is_set
	|| conn_established.is_set
	|| errors_received.is_set
	|| errors_sent.is_set
	|| input_messages.is_set
	|| input_update_messages.is_set
	|| output_messages.is_set
	|| output_update_messages.is_set
	|| time_stamp.is_set;
}

bool PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(conn_dropped.operation)
	|| is_set(conn_established.operation)
	|| is_set(errors_received.operation)
	|| is_set(errors_sent.operation)
	|| is_set(input_messages.operation)
	|| is_set(input_update_messages.operation)
	|| is_set(output_messages.operation)
	|| is_set(output_update_messages.operation)
	|| is_set(time_stamp.operation);
}

std::string PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (conn_dropped.is_set || is_set(conn_dropped.operation)) leaf_name_data.push_back(conn_dropped.get_name_leafdata());
    if (conn_established.is_set || is_set(conn_established.operation)) leaf_name_data.push_back(conn_established.get_name_leafdata());
    if (errors_received.is_set || is_set(errors_received.operation)) leaf_name_data.push_back(errors_received.get_name_leafdata());
    if (errors_sent.is_set || is_set(errors_sent.operation)) leaf_name_data.push_back(errors_sent.get_name_leafdata());
    if (input_messages.is_set || is_set(input_messages.operation)) leaf_name_data.push_back(input_messages.get_name_leafdata());
    if (input_update_messages.is_set || is_set(input_update_messages.operation)) leaf_name_data.push_back(input_update_messages.get_name_leafdata());
    if (output_messages.is_set || is_set(output_messages.operation)) leaf_name_data.push_back(output_messages.get_name_leafdata());
    if (output_update_messages.is_set || is_set(output_update_messages.operation)) leaf_name_data.push_back(output_update_messages.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "conn-dropped")
    {
        conn_dropped = value;
    }
    if(value_path == "conn-established")
    {
        conn_established = value;
    }
    if(value_path == "errors-received")
    {
        errors_received = value;
    }
    if(value_path == "errors-sent")
    {
        errors_sent = value;
    }
    if(value_path == "input-messages")
    {
        input_messages = value;
    }
    if(value_path == "input-update-messages")
    {
        input_update_messages = value;
    }
    if(value_path == "output-messages")
    {
        output_messages = value;
    }
    if(value_path == "output-update-messages")
    {
        output_update_messages = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

PerfMgmt::Monitor::Interface::Interface()
    :
    basic_counter_interfaces(std::make_shared<PerfMgmt::Monitor::Interface::BasicCounterInterfaces>())
	,data_rate_interfaces(std::make_shared<PerfMgmt::Monitor::Interface::DataRateInterfaces>())
	,generic_counter_interfaces(std::make_shared<PerfMgmt::Monitor::Interface::GenericCounterInterfaces>())
{
    basic_counter_interfaces->parent = this;

    data_rate_interfaces->parent = this;

    generic_counter_interfaces->parent = this;

    yang_name = "interface"; yang_parent_name = "monitor";
}

PerfMgmt::Monitor::Interface::~Interface()
{
}

bool PerfMgmt::Monitor::Interface::has_data() const
{
    return (basic_counter_interfaces !=  nullptr && basic_counter_interfaces->has_data())
	|| (data_rate_interfaces !=  nullptr && data_rate_interfaces->has_data())
	|| (generic_counter_interfaces !=  nullptr && generic_counter_interfaces->has_data());
}

bool PerfMgmt::Monitor::Interface::has_operation() const
{
    return is_set(operation)
	|| (basic_counter_interfaces !=  nullptr && basic_counter_interfaces->has_operation())
	|| (data_rate_interfaces !=  nullptr && data_rate_interfaces->has_operation())
	|| (generic_counter_interfaces !=  nullptr && generic_counter_interfaces->has_operation());
}

std::string PerfMgmt::Monitor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "generic-counter-interfaces")
    {
        if(generic_counter_interfaces == nullptr)
        {
            generic_counter_interfaces = std::make_shared<PerfMgmt::Monitor::Interface::GenericCounterInterfaces>();
        }
        return generic_counter_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_counter_interfaces != nullptr)
    {
        children["basic-counter-interfaces"] = basic_counter_interfaces;
    }

    if(data_rate_interfaces != nullptr)
    {
        children["data-rate-interfaces"] = data_rate_interfaces;
    }

    if(generic_counter_interfaces != nullptr)
    {
        children["generic-counter-interfaces"] = generic_counter_interfaces;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterfaces()
{
    yang_name = "generic-counter-interfaces"; yang_parent_name = "interface";
}

PerfMgmt::Monitor::Interface::GenericCounterInterfaces::~GenericCounterInterfaces()
{
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::has_data() const
{
    for (std::size_t index=0; index<generic_counter_interface.size(); index++)
    {
        if(generic_counter_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::has_operation() const
{
    for (std::size_t index=0; index<generic_counter_interface.size(); index++)
    {
        if(generic_counter_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Interface::GenericCounterInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interfaces";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Interface::GenericCounterInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::GenericCounterInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-counter-interface")
    {
        for(auto const & c : generic_counter_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface>();
        c->parent = this;
        generic_counter_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::GenericCounterInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : generic_counter_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::GenericCounterInterfaces::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::GenericCounterInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    samples(std::make_shared<PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples>())
{
    samples->parent = this;

    yang_name = "generic-counter-interface"; yang_parent_name = "generic-counter-interfaces";
}

PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::~GenericCounterInterface()
{
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::has_data() const
{
    return interface_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/interface/generic-counter-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Samples()
{
    yang_name = "samples"; yang_parent_name = "generic-counter-interface";
}

PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::~Samples()
{
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Samples' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    in_broadcast_pkts{YType::uint64, "in-broadcast-pkts"},
    in_multicast_pkts{YType::uint64, "in-multicast-pkts"},
    in_octets{YType::uint64, "in-octets"},
    in_packets{YType::uint64, "in-packets"},
    in_ucast_pkts{YType::uint64, "in-ucast-pkts"},
    input_crc{YType::uint32, "input-crc"},
    input_frame{YType::uint32, "input-frame"},
    input_overrun{YType::uint32, "input-overrun"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    input_total_drops{YType::uint32, "input-total-drops"},
    input_total_errors{YType::uint32, "input-total-errors"},
    input_unknown_proto{YType::uint32, "input-unknown-proto"},
    out_broadcast_pkts{YType::uint64, "out-broadcast-pkts"},
    out_multicast_pkts{YType::uint64, "out-multicast-pkts"},
    out_octets{YType::uint64, "out-octets"},
    out_packets{YType::uint64, "out-packets"},
    out_ucast_pkts{YType::uint64, "out-ucast-pkts"},
    output_total_drops{YType::uint32, "output-total-drops"},
    output_total_errors{YType::uint32, "output-total-errors"},
    output_underrun{YType::uint32, "output-underrun"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "sample"; yang_parent_name = "samples";
}

PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::has_data() const
{
    return sample_id.is_set
	|| in_broadcast_pkts.is_set
	|| in_multicast_pkts.is_set
	|| in_octets.is_set
	|| in_packets.is_set
	|| in_ucast_pkts.is_set
	|| input_crc.is_set
	|| input_frame.is_set
	|| input_overrun.is_set
	|| input_queue_drops.is_set
	|| input_total_drops.is_set
	|| input_total_errors.is_set
	|| input_unknown_proto.is_set
	|| out_broadcast_pkts.is_set
	|| out_multicast_pkts.is_set
	|| out_octets.is_set
	|| out_packets.is_set
	|| out_ucast_pkts.is_set
	|| output_total_drops.is_set
	|| output_total_errors.is_set
	|| output_underrun.is_set
	|| time_stamp.is_set;
}

bool PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(in_broadcast_pkts.operation)
	|| is_set(in_multicast_pkts.operation)
	|| is_set(in_octets.operation)
	|| is_set(in_packets.operation)
	|| is_set(in_ucast_pkts.operation)
	|| is_set(input_crc.operation)
	|| is_set(input_frame.operation)
	|| is_set(input_overrun.operation)
	|| is_set(input_queue_drops.operation)
	|| is_set(input_total_drops.operation)
	|| is_set(input_total_errors.operation)
	|| is_set(input_unknown_proto.operation)
	|| is_set(out_broadcast_pkts.operation)
	|| is_set(out_multicast_pkts.operation)
	|| is_set(out_octets.operation)
	|| is_set(out_packets.operation)
	|| is_set(out_ucast_pkts.operation)
	|| is_set(output_total_drops.operation)
	|| is_set(output_total_errors.operation)
	|| is_set(output_underrun.operation)
	|| is_set(time_stamp.operation);
}

std::string PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (in_broadcast_pkts.is_set || is_set(in_broadcast_pkts.operation)) leaf_name_data.push_back(in_broadcast_pkts.get_name_leafdata());
    if (in_multicast_pkts.is_set || is_set(in_multicast_pkts.operation)) leaf_name_data.push_back(in_multicast_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.operation)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (in_packets.is_set || is_set(in_packets.operation)) leaf_name_data.push_back(in_packets.get_name_leafdata());
    if (in_ucast_pkts.is_set || is_set(in_ucast_pkts.operation)) leaf_name_data.push_back(in_ucast_pkts.get_name_leafdata());
    if (input_crc.is_set || is_set(input_crc.operation)) leaf_name_data.push_back(input_crc.get_name_leafdata());
    if (input_frame.is_set || is_set(input_frame.operation)) leaf_name_data.push_back(input_frame.get_name_leafdata());
    if (input_overrun.is_set || is_set(input_overrun.operation)) leaf_name_data.push_back(input_overrun.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.operation)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (input_total_drops.is_set || is_set(input_total_drops.operation)) leaf_name_data.push_back(input_total_drops.get_name_leafdata());
    if (input_total_errors.is_set || is_set(input_total_errors.operation)) leaf_name_data.push_back(input_total_errors.get_name_leafdata());
    if (input_unknown_proto.is_set || is_set(input_unknown_proto.operation)) leaf_name_data.push_back(input_unknown_proto.get_name_leafdata());
    if (out_broadcast_pkts.is_set || is_set(out_broadcast_pkts.operation)) leaf_name_data.push_back(out_broadcast_pkts.get_name_leafdata());
    if (out_multicast_pkts.is_set || is_set(out_multicast_pkts.operation)) leaf_name_data.push_back(out_multicast_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.operation)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_packets.is_set || is_set(out_packets.operation)) leaf_name_data.push_back(out_packets.get_name_leafdata());
    if (out_ucast_pkts.is_set || is_set(out_ucast_pkts.operation)) leaf_name_data.push_back(out_ucast_pkts.get_name_leafdata());
    if (output_total_drops.is_set || is_set(output_total_drops.operation)) leaf_name_data.push_back(output_total_drops.get_name_leafdata());
    if (output_total_errors.is_set || is_set(output_total_errors.operation)) leaf_name_data.push_back(output_total_errors.get_name_leafdata());
    if (output_underrun.is_set || is_set(output_underrun.operation)) leaf_name_data.push_back(output_underrun.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts = value;
    }
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts = value;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
    }
    if(value_path == "in-packets")
    {
        in_packets = value;
    }
    if(value_path == "in-ucast-pkts")
    {
        in_ucast_pkts = value;
    }
    if(value_path == "input-crc")
    {
        input_crc = value;
    }
    if(value_path == "input-frame")
    {
        input_frame = value;
    }
    if(value_path == "input-overrun")
    {
        input_overrun = value;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
    }
    if(value_path == "input-total-drops")
    {
        input_total_drops = value;
    }
    if(value_path == "input-total-errors")
    {
        input_total_errors = value;
    }
    if(value_path == "input-unknown-proto")
    {
        input_unknown_proto = value;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts = value;
    }
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts = value;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
    }
    if(value_path == "out-packets")
    {
        out_packets = value;
    }
    if(value_path == "out-ucast-pkts")
    {
        out_ucast_pkts = value;
    }
    if(value_path == "output-total-drops")
    {
        output_total_drops = value;
    }
    if(value_path == "output-total-errors")
    {
        output_total_errors = value;
    }
    if(value_path == "output-underrun")
    {
        output_underrun = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterfaces()
{
    yang_name = "basic-counter-interfaces"; yang_parent_name = "interface";
}

PerfMgmt::Monitor::Interface::BasicCounterInterfaces::~BasicCounterInterfaces()
{
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::has_data() const
{
    for (std::size_t index=0; index<basic_counter_interface.size(); index++)
    {
        if(basic_counter_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::has_operation() const
{
    for (std::size_t index=0; index<basic_counter_interface.size(); index++)
    {
        if(basic_counter_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Interface::BasicCounterInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interfaces";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Interface::BasicCounterInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::BasicCounterInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-counter-interface")
    {
        for(auto const & c : basic_counter_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface>();
        c->parent = this;
        basic_counter_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::BasicCounterInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : basic_counter_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::BasicCounterInterfaces::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::BasicCounterInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    samples(std::make_shared<PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples>())
{
    samples->parent = this;

    yang_name = "basic-counter-interface"; yang_parent_name = "basic-counter-interfaces";
}

PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::~BasicCounterInterface()
{
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::has_data() const
{
    return interface_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/interface/basic-counter-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Samples()
{
    yang_name = "samples"; yang_parent_name = "basic-counter-interface";
}

PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::~Samples()
{
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Samples' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    in_octets{YType::uint64, "in-octets"},
    in_packets{YType::uint64, "in-packets"},
    input_queue_drops{YType::uint64, "input-queue-drops"},
    input_total_drops{YType::uint64, "input-total-drops"},
    input_total_errors{YType::uint64, "input-total-errors"},
    out_octets{YType::uint64, "out-octets"},
    out_packets{YType::uint64, "out-packets"},
    output_queue_drops{YType::uint64, "output-queue-drops"},
    output_total_drops{YType::uint64, "output-total-drops"},
    output_total_errors{YType::uint64, "output-total-errors"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "sample"; yang_parent_name = "samples";
}

PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::has_data() const
{
    return sample_id.is_set
	|| in_octets.is_set
	|| in_packets.is_set
	|| input_queue_drops.is_set
	|| input_total_drops.is_set
	|| input_total_errors.is_set
	|| out_octets.is_set
	|| out_packets.is_set
	|| output_queue_drops.is_set
	|| output_total_drops.is_set
	|| output_total_errors.is_set
	|| time_stamp.is_set;
}

bool PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(in_octets.operation)
	|| is_set(in_packets.operation)
	|| is_set(input_queue_drops.operation)
	|| is_set(input_total_drops.operation)
	|| is_set(input_total_errors.operation)
	|| is_set(out_octets.operation)
	|| is_set(out_packets.operation)
	|| is_set(output_queue_drops.operation)
	|| is_set(output_total_drops.operation)
	|| is_set(output_total_errors.operation)
	|| is_set(time_stamp.operation);
}

std::string PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.operation)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (in_packets.is_set || is_set(in_packets.operation)) leaf_name_data.push_back(in_packets.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.operation)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (input_total_drops.is_set || is_set(input_total_drops.operation)) leaf_name_data.push_back(input_total_drops.get_name_leafdata());
    if (input_total_errors.is_set || is_set(input_total_errors.operation)) leaf_name_data.push_back(input_total_errors.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.operation)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_packets.is_set || is_set(out_packets.operation)) leaf_name_data.push_back(out_packets.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.operation)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (output_total_drops.is_set || is_set(output_total_drops.operation)) leaf_name_data.push_back(output_total_drops.get_name_leafdata());
    if (output_total_errors.is_set || is_set(output_total_errors.operation)) leaf_name_data.push_back(output_total_errors.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
    }
    if(value_path == "in-packets")
    {
        in_packets = value;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
    }
    if(value_path == "input-total-drops")
    {
        input_total_drops = value;
    }
    if(value_path == "input-total-errors")
    {
        input_total_errors = value;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
    }
    if(value_path == "out-packets")
    {
        out_packets = value;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
    }
    if(value_path == "output-total-drops")
    {
        output_total_drops = value;
    }
    if(value_path == "output-total-errors")
    {
        output_total_errors = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterfaces()
{
    yang_name = "data-rate-interfaces"; yang_parent_name = "interface";
}

PerfMgmt::Monitor::Interface::DataRateInterfaces::~DataRateInterfaces()
{
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::has_data() const
{
    for (std::size_t index=0; index<data_rate_interface.size(); index++)
    {
        if(data_rate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<data_rate_interface.size(); index++)
    {
        if(data_rate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Interface::DataRateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interfaces";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Interface::DataRateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::DataRateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-rate-interface")
    {
        for(auto const & c : data_rate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface>();
        c->parent = this;
        data_rate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::DataRateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : data_rate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::DataRateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::DataRateInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    samples(std::make_shared<PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples>())
{
    samples->parent = this;

    yang_name = "data-rate-interface"; yang_parent_name = "data-rate-interfaces";
}

PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::~DataRateInterface()
{
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::has_data() const
{
    return interface_name.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt/monitor/interface/data-rate-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(samples != nullptr)
    {
        children["samples"] = samples;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Samples()
{
    yang_name = "samples"; yang_parent_name = "data-rate-interface";
}

PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::~Samples()
{
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Samples' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::Sample()
    :
    sample_id{YType::int32, "sample-id"},
    bandwidth{YType::uint32, "bandwidth"},
    input_data_rate{YType::uint32, "input-data-rate"},
    input_packet_rate{YType::uint32, "input-packet-rate"},
    input_peak_pkts{YType::uint32, "input-peak-pkts"},
    input_peak_rate{YType::uint32, "input-peak-rate"},
    output_data_rate{YType::uint32, "output-data-rate"},
    output_packet_rate{YType::uint32, "output-packet-rate"},
    output_peak_pkts{YType::uint32, "output-peak-pkts"},
    output_peak_rate{YType::uint32, "output-peak-rate"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "sample"; yang_parent_name = "samples";
}

PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::~Sample()
{
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::has_data() const
{
    return sample_id.is_set
	|| bandwidth.is_set
	|| input_data_rate.is_set
	|| input_packet_rate.is_set
	|| input_peak_pkts.is_set
	|| input_peak_rate.is_set
	|| output_data_rate.is_set
	|| output_packet_rate.is_set
	|| output_peak_pkts.is_set
	|| output_peak_rate.is_set
	|| time_stamp.is_set;
}

bool PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::has_operation() const
{
    return is_set(operation)
	|| is_set(sample_id.operation)
	|| is_set(bandwidth.operation)
	|| is_set(input_data_rate.operation)
	|| is_set(input_packet_rate.operation)
	|| is_set(input_peak_pkts.operation)
	|| is_set(input_peak_rate.operation)
	|| is_set(output_data_rate.operation)
	|| is_set(output_packet_rate.operation)
	|| is_set(output_peak_pkts.operation)
	|| is_set(output_peak_rate.operation)
	|| is_set(time_stamp.operation);
}

std::string PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample" <<"[sample-id='" <<sample_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sample' in Cisco_IOS_XR_manageability_perfmgmt_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_id.is_set || is_set(sample_id.operation)) leaf_name_data.push_back(sample_id.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (input_data_rate.is_set || is_set(input_data_rate.operation)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.operation)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (input_peak_pkts.is_set || is_set(input_peak_pkts.operation)) leaf_name_data.push_back(input_peak_pkts.get_name_leafdata());
    if (input_peak_rate.is_set || is_set(input_peak_rate.operation)) leaf_name_data.push_back(input_peak_rate.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.operation)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.operation)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());
    if (output_peak_pkts.is_set || is_set(output_peak_pkts.operation)) leaf_name_data.push_back(output_peak_pkts.get_name_leafdata());
    if (output_peak_rate.is_set || is_set(output_peak_rate.operation)) leaf_name_data.push_back(output_peak_rate.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sample-id")
    {
        sample_id = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
    }
    if(value_path == "input-peak-pkts")
    {
        input_peak_pkts = value;
    }
    if(value_path == "input-peak-rate")
    {
        input_peak_rate = value;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
    }
    if(value_path == "output-peak-pkts")
    {
        output_peak_pkts = value;
    }
    if(value_path == "output-peak-rate")
    {
        output_peak_rate = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}


}
}

