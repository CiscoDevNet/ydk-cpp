
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_6.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_7.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolArea()
    :
    area_id{YType::int32, "area-id"},
    address{YType::str, "address"},
    protcol_area{YType::str, "protcol-area"},
    protocol_mpls{YType::boolean, "protocol-mpls"},
    protocol_area_dist_list_in{YType::str, "protocol-area-dist-list-in"}
{

    yang_name = "protocol-area"; yang_parent_name = "protocol-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::~ProtocolArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::has_data() const
{
    for (std::size_t index=0; index<protocol_interface.size(); index++)
    {
        if(protocol_interface[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| address.is_set
	|| protcol_area.is_set
	|| protocol_mpls.is_set
	|| protocol_area_dist_list_in.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::has_operation() const
{
    for (std::size_t index=0; index<protocol_interface.size(); index++)
    {
        if(protocol_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(protcol_area.yfilter)
	|| ydk::is_set(protocol_mpls.yfilter)
	|| ydk::is_set(protocol_area_dist_list_in.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (protcol_area.is_set || is_set(protcol_area.yfilter)) leaf_name_data.push_back(protcol_area.get_name_leafdata());
    if (protocol_mpls.is_set || is_set(protocol_mpls.yfilter)) leaf_name_data.push_back(protocol_mpls.get_name_leafdata());
    if (protocol_area_dist_list_in.is_set || is_set(protocol_area_dist_list_in.yfilter)) leaf_name_data.push_back(protocol_area_dist_list_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-interface")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface>();
        c->parent = this;
        protocol_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : protocol_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protcol-area")
    {
        protcol_area = value;
        protcol_area.value_namespace = name_space;
        protcol_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-mpls")
    {
        protocol_mpls = value;
        protocol_mpls.value_namespace = name_space;
        protocol_mpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-area-dist-list-in")
    {
        protocol_area_dist_list_in = value;
        protocol_area_dist_list_in.value_namespace = name_space;
        protocol_area_dist_list_in.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "protcol-area")
    {
        protcol_area.yfilter = yfilter;
    }
    if(value_path == "protocol-mpls")
    {
        protocol_mpls.yfilter = yfilter;
    }
    if(value_path == "protocol-area-dist-list-in")
    {
        protocol_area_dist_list_in.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-interface" || name == "area-id" || name == "address" || name == "protcol-area" || name == "protocol-mpls" || name == "protocol-area-dist-list-in")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::ProtocolInterface()
    :
    protocol_interface_name{YType::str, "protocol-interface-name"},
    protocol_authentication_type{YType::enumeration, "protocol-authentication-type"},
    protocol_interface_dist_list_in{YType::str, "protocol-interface-dist-list-in"}
{

    yang_name = "protocol-interface"; yang_parent_name = "protocol-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::~ProtocolInterface()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::has_data() const
{
    return protocol_interface_name.is_set
	|| protocol_authentication_type.is_set
	|| protocol_interface_dist_list_in.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_interface_name.yfilter)
	|| ydk::is_set(protocol_authentication_type.yfilter)
	|| ydk::is_set(protocol_interface_dist_list_in.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_interface_name.is_set || is_set(protocol_interface_name.yfilter)) leaf_name_data.push_back(protocol_interface_name.get_name_leafdata());
    if (protocol_authentication_type.is_set || is_set(protocol_authentication_type.yfilter)) leaf_name_data.push_back(protocol_authentication_type.get_name_leafdata());
    if (protocol_interface_dist_list_in.is_set || is_set(protocol_interface_dist_list_in.yfilter)) leaf_name_data.push_back(protocol_interface_dist_list_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-interface-name")
    {
        protocol_interface_name = value;
        protocol_interface_name.value_namespace = name_space;
        protocol_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-authentication-type")
    {
        protocol_authentication_type = value;
        protocol_authentication_type.value_namespace = name_space;
        protocol_authentication_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-interface-dist-list-in")
    {
        protocol_interface_dist_list_in = value;
        protocol_interface_dist_list_in.value_namespace = name_space;
        protocol_interface_dist_list_in.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-interface-name")
    {
        protocol_interface_name.yfilter = yfilter;
    }
    if(value_path == "protocol-authentication-type")
    {
        protocol_authentication_type.yfilter = yfilter;
    }
    if(value_path == "protocol-interface-dist-list-in")
    {
        protocol_interface_dist_list_in.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-interface-name" || name == "protocol-authentication-type" || name == "protocol-interface-dist-list-in")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::ProtocolSummary()
    :
    protocol_router_id{YType::str, "protocol-router-id"},
    protocol_distance{YType::uint32, "protocol-distance"},
    administrative_distance_inter_area{YType::uint32, "administrative-distance-inter-area"},
    administrative_distance_external{YType::uint32, "administrative-distance-external"},
    protocol_nsf{YType::boolean, "protocol-nsf"},
    dist_list_in{YType::str, "dist-list-in"}
{

    yang_name = "protocol-summary"; yang_parent_name = "process-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::~ProtocolSummary()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::has_data() const
{
    return protocol_router_id.is_set
	|| protocol_distance.is_set
	|| administrative_distance_inter_area.is_set
	|| administrative_distance_external.is_set
	|| protocol_nsf.is_set
	|| dist_list_in.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_router_id.yfilter)
	|| ydk::is_set(protocol_distance.yfilter)
	|| ydk::is_set(administrative_distance_inter_area.yfilter)
	|| ydk::is_set(administrative_distance_external.yfilter)
	|| ydk::is_set(protocol_nsf.yfilter)
	|| ydk::is_set(dist_list_in.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_router_id.is_set || is_set(protocol_router_id.yfilter)) leaf_name_data.push_back(protocol_router_id.get_name_leafdata());
    if (protocol_distance.is_set || is_set(protocol_distance.yfilter)) leaf_name_data.push_back(protocol_distance.get_name_leafdata());
    if (administrative_distance_inter_area.is_set || is_set(administrative_distance_inter_area.yfilter)) leaf_name_data.push_back(administrative_distance_inter_area.get_name_leafdata());
    if (administrative_distance_external.is_set || is_set(administrative_distance_external.yfilter)) leaf_name_data.push_back(administrative_distance_external.get_name_leafdata());
    if (protocol_nsf.is_set || is_set(protocol_nsf.yfilter)) leaf_name_data.push_back(protocol_nsf.get_name_leafdata());
    if (dist_list_in.is_set || is_set(dist_list_in.yfilter)) leaf_name_data.push_back(dist_list_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-router-id")
    {
        protocol_router_id = value;
        protocol_router_id.value_namespace = name_space;
        protocol_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-distance")
    {
        protocol_distance = value;
        protocol_distance.value_namespace = name_space;
        protocol_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-distance-inter-area")
    {
        administrative_distance_inter_area = value;
        administrative_distance_inter_area.value_namespace = name_space;
        administrative_distance_inter_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-distance-external")
    {
        administrative_distance_external = value;
        administrative_distance_external.value_namespace = name_space;
        administrative_distance_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-nsf")
    {
        protocol_nsf = value;
        protocol_nsf.value_namespace = name_space;
        protocol_nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist-list-in")
    {
        dist_list_in = value;
        dist_list_in.value_namespace = name_space;
        dist_list_in.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-router-id")
    {
        protocol_router_id.yfilter = yfilter;
    }
    if(value_path == "protocol-distance")
    {
        protocol_distance.yfilter = yfilter;
    }
    if(value_path == "administrative-distance-inter-area")
    {
        administrative_distance_inter_area.yfilter = yfilter;
    }
    if(value_path == "administrative-distance-external")
    {
        administrative_distance_external.yfilter = yfilter;
    }
    if(value_path == "protocol-nsf")
    {
        protocol_nsf.yfilter = yfilter;
    }
    if(value_path == "dist-list-in")
    {
        dist_list_in.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-router-id" || name == "protocol-distance" || name == "administrative-distance-inter-area" || name == "administrative-distance-external" || name == "protocol-nsf" || name == "dist-list-in")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistributions()
{

    yang_name = "redistributions"; yang_parent_name = "process-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::~Redistributions()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::has_data() const
{
    for (std::size_t index=0; index<redistribution.size(); index++)
    {
        if(redistribution[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::has_operation() const
{
    for (std::size_t index=0; index<redistribution.size(); index++)
    {
        if(redistribution[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribution")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution>();
        c->parent = this;
        redistribution.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : redistribution)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistribution")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::Redistribution()
    :
    protocol_name{YType::str, "protocol-name"},
    process_name{YType::str, "process-name"},
    metric_flag{YType::boolean, "metric-flag"},
    metric{YType::uint32, "metric"},
    classless{YType::boolean, "classless"},
    nssa_only{YType::boolean, "nssa-only"}
    	,
    redistribution_protocol(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol>())
{
    redistribution_protocol->parent = this;

    yang_name = "redistribution"; yang_parent_name = "redistributions"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::~Redistribution()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::has_data() const
{
    return protocol_name.is_set
	|| process_name.is_set
	|| metric_flag.is_set
	|| metric.is_set
	|| classless.is_set
	|| nssa_only.is_set
	|| (redistribution_protocol !=  nullptr && redistribution_protocol->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(metric_flag.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(classless.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| (redistribution_protocol !=  nullptr && redistribution_protocol->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (metric_flag.is_set || is_set(metric_flag.yfilter)) leaf_name_data.push_back(metric_flag.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (classless.is_set || is_set(classless.yfilter)) leaf_name_data.push_back(classless.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribution-protocol")
    {
        if(redistribution_protocol == nullptr)
        {
            redistribution_protocol = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol>();
        }
        return redistribution_protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redistribution_protocol != nullptr)
    {
        children["redistribution-protocol"] = redistribution_protocol;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-flag")
    {
        metric_flag = value;
        metric_flag.value_namespace = name_space;
        metric_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classless")
    {
        classless = value;
        classless.value_namespace = name_space;
        classless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "metric-flag")
    {
        metric_flag.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "classless")
    {
        classless.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistribution-protocol" || name == "protocol-name" || name == "process-name" || name == "metric-flag" || name == "metric" || name == "classless" || name == "nssa-only")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::RedistributionProtocol()
    :
    protocol_type{YType::enumeration, "protocol-type"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    bgp_as_number{YType::str, "bgp-as-number"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    connected_instance{YType::str, "connected-instance"}
{

    yang_name = "redistribution-protocol"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::~RedistributionProtocol()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::has_data() const
{
    return protocol_type.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| bgp_as_number.is_set
	|| eigrp_as_number.is_set
	|| connected_instance.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_type.yfilter)
	|| ydk::is_set(isis_instance_id.yfilter)
	|| ydk::is_set(ospf_process_id.yfilter)
	|| ydk::is_set(bgp_as_number.yfilter)
	|| ydk::is_set(eigrp_as_number.yfilter)
	|| ydk::is_set(connected_instance.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_type.is_set || is_set(protocol_type.yfilter)) leaf_name_data.push_back(protocol_type.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.yfilter)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.yfilter)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (bgp_as_number.is_set || is_set(bgp_as_number.yfilter)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.yfilter)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (connected_instance.is_set || is_set(connected_instance.yfilter)) leaf_name_data.push_back(connected_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-type")
    {
        protocol_type = value;
        protocol_type.value_namespace = name_space;
        protocol_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id = value;
        isis_instance_id.value_namespace = name_space;
        isis_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id = value;
        ospf_process_id.value_namespace = name_space;
        ospf_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
        bgp_as_number.value_namespace = name_space;
        bgp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
        eigrp_as_number.value_namespace = name_space;
        eigrp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-instance")
    {
        connected_instance = value;
        connected_instance.value_namespace = name_space;
        connected_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-type")
    {
        protocol_type.yfilter = yfilter;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id.yfilter = yfilter;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id.yfilter = yfilter;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number.yfilter = yfilter;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number.yfilter = yfilter;
    }
    if(value_path == "connected-instance")
    {
        connected_instance.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-type" || name == "isis-instance-id" || name == "ospf-process-id" || name == "bgp-as-number" || name == "eigrp-as-number" || name == "connected-instance")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessAreas()
{

    yang_name = "process-areas"; yang_parent_name = "process-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::~ProcessAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::has_data() const
{
    for (std::size_t index=0; index<process_area.size(); index++)
    {
        if(process_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::has_operation() const
{
    for (std::size_t index=0; index<process_area.size(); index++)
    {
        if(process_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-area")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea>();
        c->parent = this;
        process_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : process_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-area")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::ProcessArea()
    :
    area_id{YType::int32, "area-id"},
    address{YType::str, "address"},
    area_id_string{YType::str, "area-id-string"},
    backbone_area_active{YType::boolean, "backbone-area-active"},
    area_interface_count{YType::uint16, "area-interface-count"},
    area_stub{YType::boolean, "area-stub"},
    area_total_stub{YType::boolean, "area-total-stub"},
    stub_default_cost{YType::uint16, "stub-default-cost"},
    area_nssa{YType::boolean, "area-nssa"},
    nssa_no_redistribution{YType::boolean, "nssa-no-redistribution"},
    nssa_translate{YType::boolean, "nssa-translate"},
    nssa_default{YType::boolean, "nssa-default"},
    te_enabled{YType::boolean, "te-enabled"},
    te_topology_version{YType::uint32, "te-topology-version"},
    external_out{YType::boolean, "external-out"},
    summary_in{YType::boolean, "summary-in"},
    segment_routing{YType::uint32, "segment-routing"},
    sr_strict_spf_cap{YType::boolean, "sr-strict-spf-cap"},
    sr_strict_spfsids_available{YType::boolean, "sr-strict-spfsids-available"},
    sr_microloop_avoidance_active{YType::boolean, "sr-microloop-avoidance-active"},
    sr_microloop_avoidance_event_type{YType::enumeration, "sr-microloop-avoidance-event-type"},
    sr_microloop_avoidance_near_end_id{YType::str, "sr-microloop-avoidance-near-end-id"},
    sr_microloop_avoidance_far_end_id{YType::str, "sr-microloop-avoidance-far-end-id"},
    sr_microloop_avoidance_pseudonode_id{YType::str, "sr-microloop-avoidance-pseudonode-id"},
    authentication_type{YType::enumeration, "authentication-type"},
    spf_count{YType::uint32, "spf-count"},
    area_policy_in{YType::boolean, "area-policy-in"},
    area_policy_in_name{YType::str, "area-policy-in-name"},
    area_policy_out{YType::boolean, "area-policy-out"},
    area_policy_out_name{YType::str, "area-policy-out-name"},
    area_lsa_count{YType::uint32, "area-lsa-count"},
    area_lsa_checksum{YType::uint32, "area-lsa-checksum"},
    area_opaque_lsa_count{YType::uint32, "area-opaque-lsa-count"},
    area_opaque_lsa_checksum{YType::uint32, "area-opaque-lsa-checksum"},
    area_dc_bitless_lsa_count{YType::uint32, "area-dc-bitless-lsa-count"},
    indication_lsa_count{YType::uint32, "indication-lsa-count"},
    dna_lsa_count{YType::uint32, "dna-lsa-count"},
    flood_list_length{YType::uint32, "flood-list-length"},
    area_lfa_interface_count{YType::uint32, "area-lfa-interface-count"},
    area_per_prefix_lfa_interface_count{YType::uint32, "area-per-prefix-lfa-interface-count"},
    area_lfa_revision{YType::uint32, "area-lfa-revision"},
    area_adj_stag_num_nbr_forming{YType::uint16, "area-adj-stag-num-nbr-forming"},
    area_num_nbr_full{YType::uint16, "area-num-nbr-full"}
{

    yang_name = "process-area"; yang_parent_name = "process-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::~ProcessArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::has_data() const
{
    for (std::size_t index=0; index<area_range.size(); index++)
    {
        if(area_range[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| address.is_set
	|| area_id_string.is_set
	|| backbone_area_active.is_set
	|| area_interface_count.is_set
	|| area_stub.is_set
	|| area_total_stub.is_set
	|| stub_default_cost.is_set
	|| area_nssa.is_set
	|| nssa_no_redistribution.is_set
	|| nssa_translate.is_set
	|| nssa_default.is_set
	|| te_enabled.is_set
	|| te_topology_version.is_set
	|| external_out.is_set
	|| summary_in.is_set
	|| segment_routing.is_set
	|| sr_strict_spf_cap.is_set
	|| sr_strict_spfsids_available.is_set
	|| sr_microloop_avoidance_active.is_set
	|| sr_microloop_avoidance_event_type.is_set
	|| sr_microloop_avoidance_near_end_id.is_set
	|| sr_microloop_avoidance_far_end_id.is_set
	|| sr_microloop_avoidance_pseudonode_id.is_set
	|| authentication_type.is_set
	|| spf_count.is_set
	|| area_policy_in.is_set
	|| area_policy_in_name.is_set
	|| area_policy_out.is_set
	|| area_policy_out_name.is_set
	|| area_lsa_count.is_set
	|| area_lsa_checksum.is_set
	|| area_opaque_lsa_count.is_set
	|| area_opaque_lsa_checksum.is_set
	|| area_dc_bitless_lsa_count.is_set
	|| indication_lsa_count.is_set
	|| dna_lsa_count.is_set
	|| flood_list_length.is_set
	|| area_lfa_interface_count.is_set
	|| area_per_prefix_lfa_interface_count.is_set
	|| area_lfa_revision.is_set
	|| area_adj_stag_num_nbr_forming.is_set
	|| area_num_nbr_full.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::has_operation() const
{
    for (std::size_t index=0; index<area_range.size(); index++)
    {
        if(area_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(area_id_string.yfilter)
	|| ydk::is_set(backbone_area_active.yfilter)
	|| ydk::is_set(area_interface_count.yfilter)
	|| ydk::is_set(area_stub.yfilter)
	|| ydk::is_set(area_total_stub.yfilter)
	|| ydk::is_set(stub_default_cost.yfilter)
	|| ydk::is_set(area_nssa.yfilter)
	|| ydk::is_set(nssa_no_redistribution.yfilter)
	|| ydk::is_set(nssa_translate.yfilter)
	|| ydk::is_set(nssa_default.yfilter)
	|| ydk::is_set(te_enabled.yfilter)
	|| ydk::is_set(te_topology_version.yfilter)
	|| ydk::is_set(external_out.yfilter)
	|| ydk::is_set(summary_in.yfilter)
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(sr_strict_spf_cap.yfilter)
	|| ydk::is_set(sr_strict_spfsids_available.yfilter)
	|| ydk::is_set(sr_microloop_avoidance_active.yfilter)
	|| ydk::is_set(sr_microloop_avoidance_event_type.yfilter)
	|| ydk::is_set(sr_microloop_avoidance_near_end_id.yfilter)
	|| ydk::is_set(sr_microloop_avoidance_far_end_id.yfilter)
	|| ydk::is_set(sr_microloop_avoidance_pseudonode_id.yfilter)
	|| ydk::is_set(authentication_type.yfilter)
	|| ydk::is_set(spf_count.yfilter)
	|| ydk::is_set(area_policy_in.yfilter)
	|| ydk::is_set(area_policy_in_name.yfilter)
	|| ydk::is_set(area_policy_out.yfilter)
	|| ydk::is_set(area_policy_out_name.yfilter)
	|| ydk::is_set(area_lsa_count.yfilter)
	|| ydk::is_set(area_lsa_checksum.yfilter)
	|| ydk::is_set(area_opaque_lsa_count.yfilter)
	|| ydk::is_set(area_opaque_lsa_checksum.yfilter)
	|| ydk::is_set(area_dc_bitless_lsa_count.yfilter)
	|| ydk::is_set(indication_lsa_count.yfilter)
	|| ydk::is_set(dna_lsa_count.yfilter)
	|| ydk::is_set(flood_list_length.yfilter)
	|| ydk::is_set(area_lfa_interface_count.yfilter)
	|| ydk::is_set(area_per_prefix_lfa_interface_count.yfilter)
	|| ydk::is_set(area_lfa_revision.yfilter)
	|| ydk::is_set(area_adj_stag_num_nbr_forming.yfilter)
	|| ydk::is_set(area_num_nbr_full.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (area_id_string.is_set || is_set(area_id_string.yfilter)) leaf_name_data.push_back(area_id_string.get_name_leafdata());
    if (backbone_area_active.is_set || is_set(backbone_area_active.yfilter)) leaf_name_data.push_back(backbone_area_active.get_name_leafdata());
    if (area_interface_count.is_set || is_set(area_interface_count.yfilter)) leaf_name_data.push_back(area_interface_count.get_name_leafdata());
    if (area_stub.is_set || is_set(area_stub.yfilter)) leaf_name_data.push_back(area_stub.get_name_leafdata());
    if (area_total_stub.is_set || is_set(area_total_stub.yfilter)) leaf_name_data.push_back(area_total_stub.get_name_leafdata());
    if (stub_default_cost.is_set || is_set(stub_default_cost.yfilter)) leaf_name_data.push_back(stub_default_cost.get_name_leafdata());
    if (area_nssa.is_set || is_set(area_nssa.yfilter)) leaf_name_data.push_back(area_nssa.get_name_leafdata());
    if (nssa_no_redistribution.is_set || is_set(nssa_no_redistribution.yfilter)) leaf_name_data.push_back(nssa_no_redistribution.get_name_leafdata());
    if (nssa_translate.is_set || is_set(nssa_translate.yfilter)) leaf_name_data.push_back(nssa_translate.get_name_leafdata());
    if (nssa_default.is_set || is_set(nssa_default.yfilter)) leaf_name_data.push_back(nssa_default.get_name_leafdata());
    if (te_enabled.is_set || is_set(te_enabled.yfilter)) leaf_name_data.push_back(te_enabled.get_name_leafdata());
    if (te_topology_version.is_set || is_set(te_topology_version.yfilter)) leaf_name_data.push_back(te_topology_version.get_name_leafdata());
    if (external_out.is_set || is_set(external_out.yfilter)) leaf_name_data.push_back(external_out.get_name_leafdata());
    if (summary_in.is_set || is_set(summary_in.yfilter)) leaf_name_data.push_back(summary_in.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (sr_strict_spf_cap.is_set || is_set(sr_strict_spf_cap.yfilter)) leaf_name_data.push_back(sr_strict_spf_cap.get_name_leafdata());
    if (sr_strict_spfsids_available.is_set || is_set(sr_strict_spfsids_available.yfilter)) leaf_name_data.push_back(sr_strict_spfsids_available.get_name_leafdata());
    if (sr_microloop_avoidance_active.is_set || is_set(sr_microloop_avoidance_active.yfilter)) leaf_name_data.push_back(sr_microloop_avoidance_active.get_name_leafdata());
    if (sr_microloop_avoidance_event_type.is_set || is_set(sr_microloop_avoidance_event_type.yfilter)) leaf_name_data.push_back(sr_microloop_avoidance_event_type.get_name_leafdata());
    if (sr_microloop_avoidance_near_end_id.is_set || is_set(sr_microloop_avoidance_near_end_id.yfilter)) leaf_name_data.push_back(sr_microloop_avoidance_near_end_id.get_name_leafdata());
    if (sr_microloop_avoidance_far_end_id.is_set || is_set(sr_microloop_avoidance_far_end_id.yfilter)) leaf_name_data.push_back(sr_microloop_avoidance_far_end_id.get_name_leafdata());
    if (sr_microloop_avoidance_pseudonode_id.is_set || is_set(sr_microloop_avoidance_pseudonode_id.yfilter)) leaf_name_data.push_back(sr_microloop_avoidance_pseudonode_id.get_name_leafdata());
    if (authentication_type.is_set || is_set(authentication_type.yfilter)) leaf_name_data.push_back(authentication_type.get_name_leafdata());
    if (spf_count.is_set || is_set(spf_count.yfilter)) leaf_name_data.push_back(spf_count.get_name_leafdata());
    if (area_policy_in.is_set || is_set(area_policy_in.yfilter)) leaf_name_data.push_back(area_policy_in.get_name_leafdata());
    if (area_policy_in_name.is_set || is_set(area_policy_in_name.yfilter)) leaf_name_data.push_back(area_policy_in_name.get_name_leafdata());
    if (area_policy_out.is_set || is_set(area_policy_out.yfilter)) leaf_name_data.push_back(area_policy_out.get_name_leafdata());
    if (area_policy_out_name.is_set || is_set(area_policy_out_name.yfilter)) leaf_name_data.push_back(area_policy_out_name.get_name_leafdata());
    if (area_lsa_count.is_set || is_set(area_lsa_count.yfilter)) leaf_name_data.push_back(area_lsa_count.get_name_leafdata());
    if (area_lsa_checksum.is_set || is_set(area_lsa_checksum.yfilter)) leaf_name_data.push_back(area_lsa_checksum.get_name_leafdata());
    if (area_opaque_lsa_count.is_set || is_set(area_opaque_lsa_count.yfilter)) leaf_name_data.push_back(area_opaque_lsa_count.get_name_leafdata());
    if (area_opaque_lsa_checksum.is_set || is_set(area_opaque_lsa_checksum.yfilter)) leaf_name_data.push_back(area_opaque_lsa_checksum.get_name_leafdata());
    if (area_dc_bitless_lsa_count.is_set || is_set(area_dc_bitless_lsa_count.yfilter)) leaf_name_data.push_back(area_dc_bitless_lsa_count.get_name_leafdata());
    if (indication_lsa_count.is_set || is_set(indication_lsa_count.yfilter)) leaf_name_data.push_back(indication_lsa_count.get_name_leafdata());
    if (dna_lsa_count.is_set || is_set(dna_lsa_count.yfilter)) leaf_name_data.push_back(dna_lsa_count.get_name_leafdata());
    if (flood_list_length.is_set || is_set(flood_list_length.yfilter)) leaf_name_data.push_back(flood_list_length.get_name_leafdata());
    if (area_lfa_interface_count.is_set || is_set(area_lfa_interface_count.yfilter)) leaf_name_data.push_back(area_lfa_interface_count.get_name_leafdata());
    if (area_per_prefix_lfa_interface_count.is_set || is_set(area_per_prefix_lfa_interface_count.yfilter)) leaf_name_data.push_back(area_per_prefix_lfa_interface_count.get_name_leafdata());
    if (area_lfa_revision.is_set || is_set(area_lfa_revision.yfilter)) leaf_name_data.push_back(area_lfa_revision.get_name_leafdata());
    if (area_adj_stag_num_nbr_forming.is_set || is_set(area_adj_stag_num_nbr_forming.yfilter)) leaf_name_data.push_back(area_adj_stag_num_nbr_forming.get_name_leafdata());
    if (area_num_nbr_full.is_set || is_set(area_num_nbr_full.yfilter)) leaf_name_data.push_back(area_num_nbr_full.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-range")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange>();
        c->parent = this;
        area_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : area_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id-string")
    {
        area_id_string = value;
        area_id_string.value_namespace = name_space;
        area_id_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backbone-area-active")
    {
        backbone_area_active = value;
        backbone_area_active.value_namespace = name_space;
        backbone_area_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-interface-count")
    {
        area_interface_count = value;
        area_interface_count.value_namespace = name_space;
        area_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-stub")
    {
        area_stub = value;
        area_stub.value_namespace = name_space;
        area_stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-total-stub")
    {
        area_total_stub = value;
        area_total_stub.value_namespace = name_space;
        area_total_stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-default-cost")
    {
        stub_default_cost = value;
        stub_default_cost.value_namespace = name_space;
        stub_default_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-nssa")
    {
        area_nssa = value;
        area_nssa.value_namespace = name_space;
        area_nssa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-no-redistribution")
    {
        nssa_no_redistribution = value;
        nssa_no_redistribution.value_namespace = name_space;
        nssa_no_redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-translate")
    {
        nssa_translate = value;
        nssa_translate.value_namespace = name_space;
        nssa_translate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-default")
    {
        nssa_default = value;
        nssa_default.value_namespace = name_space;
        nssa_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-enabled")
    {
        te_enabled = value;
        te_enabled.value_namespace = name_space;
        te_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-topology-version")
    {
        te_topology_version = value;
        te_topology_version.value_namespace = name_space;
        te_topology_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-out")
    {
        external_out = value;
        external_out.value_namespace = name_space;
        external_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-in")
    {
        summary_in = value;
        summary_in.value_namespace = name_space;
        summary_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-strict-spf-cap")
    {
        sr_strict_spf_cap = value;
        sr_strict_spf_cap.value_namespace = name_space;
        sr_strict_spf_cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-strict-spfsids-available")
    {
        sr_strict_spfsids_available = value;
        sr_strict_spfsids_available.value_namespace = name_space;
        sr_strict_spfsids_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-microloop-avoidance-active")
    {
        sr_microloop_avoidance_active = value;
        sr_microloop_avoidance_active.value_namespace = name_space;
        sr_microloop_avoidance_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-microloop-avoidance-event-type")
    {
        sr_microloop_avoidance_event_type = value;
        sr_microloop_avoidance_event_type.value_namespace = name_space;
        sr_microloop_avoidance_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-microloop-avoidance-near-end-id")
    {
        sr_microloop_avoidance_near_end_id = value;
        sr_microloop_avoidance_near_end_id.value_namespace = name_space;
        sr_microloop_avoidance_near_end_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-microloop-avoidance-far-end-id")
    {
        sr_microloop_avoidance_far_end_id = value;
        sr_microloop_avoidance_far_end_id.value_namespace = name_space;
        sr_microloop_avoidance_far_end_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-microloop-avoidance-pseudonode-id")
    {
        sr_microloop_avoidance_pseudonode_id = value;
        sr_microloop_avoidance_pseudonode_id.value_namespace = name_space;
        sr_microloop_avoidance_pseudonode_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-type")
    {
        authentication_type = value;
        authentication_type.value_namespace = name_space;
        authentication_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-count")
    {
        spf_count = value;
        spf_count.value_namespace = name_space;
        spf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-policy-in")
    {
        area_policy_in = value;
        area_policy_in.value_namespace = name_space;
        area_policy_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-policy-in-name")
    {
        area_policy_in_name = value;
        area_policy_in_name.value_namespace = name_space;
        area_policy_in_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-policy-out")
    {
        area_policy_out = value;
        area_policy_out.value_namespace = name_space;
        area_policy_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-policy-out-name")
    {
        area_policy_out_name = value;
        area_policy_out_name.value_namespace = name_space;
        area_policy_out_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-count")
    {
        area_lsa_count = value;
        area_lsa_count.value_namespace = name_space;
        area_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-checksum")
    {
        area_lsa_checksum = value;
        area_lsa_checksum.value_namespace = name_space;
        area_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-opaque-lsa-count")
    {
        area_opaque_lsa_count = value;
        area_opaque_lsa_count.value_namespace = name_space;
        area_opaque_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-opaque-lsa-checksum")
    {
        area_opaque_lsa_checksum = value;
        area_opaque_lsa_checksum.value_namespace = name_space;
        area_opaque_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-dc-bitless-lsa-count")
    {
        area_dc_bitless_lsa_count = value;
        area_dc_bitless_lsa_count.value_namespace = name_space;
        area_dc_bitless_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "indication-lsa-count")
    {
        indication_lsa_count = value;
        indication_lsa_count.value_namespace = name_space;
        indication_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dna-lsa-count")
    {
        dna_lsa_count = value;
        dna_lsa_count.value_namespace = name_space;
        dna_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-list-length")
    {
        flood_list_length = value;
        flood_list_length.value_namespace = name_space;
        flood_list_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lfa-interface-count")
    {
        area_lfa_interface_count = value;
        area_lfa_interface_count.value_namespace = name_space;
        area_lfa_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-per-prefix-lfa-interface-count")
    {
        area_per_prefix_lfa_interface_count = value;
        area_per_prefix_lfa_interface_count.value_namespace = name_space;
        area_per_prefix_lfa_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lfa-revision")
    {
        area_lfa_revision = value;
        area_lfa_revision.value_namespace = name_space;
        area_lfa_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-adj-stag-num-nbr-forming")
    {
        area_adj_stag_num_nbr_forming = value;
        area_adj_stag_num_nbr_forming.value_namespace = name_space;
        area_adj_stag_num_nbr_forming.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-num-nbr-full")
    {
        area_num_nbr_full = value;
        area_num_nbr_full.value_namespace = name_space;
        area_num_nbr_full.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "area-id-string")
    {
        area_id_string.yfilter = yfilter;
    }
    if(value_path == "backbone-area-active")
    {
        backbone_area_active.yfilter = yfilter;
    }
    if(value_path == "area-interface-count")
    {
        area_interface_count.yfilter = yfilter;
    }
    if(value_path == "area-stub")
    {
        area_stub.yfilter = yfilter;
    }
    if(value_path == "area-total-stub")
    {
        area_total_stub.yfilter = yfilter;
    }
    if(value_path == "stub-default-cost")
    {
        stub_default_cost.yfilter = yfilter;
    }
    if(value_path == "area-nssa")
    {
        area_nssa.yfilter = yfilter;
    }
    if(value_path == "nssa-no-redistribution")
    {
        nssa_no_redistribution.yfilter = yfilter;
    }
    if(value_path == "nssa-translate")
    {
        nssa_translate.yfilter = yfilter;
    }
    if(value_path == "nssa-default")
    {
        nssa_default.yfilter = yfilter;
    }
    if(value_path == "te-enabled")
    {
        te_enabled.yfilter = yfilter;
    }
    if(value_path == "te-topology-version")
    {
        te_topology_version.yfilter = yfilter;
    }
    if(value_path == "external-out")
    {
        external_out.yfilter = yfilter;
    }
    if(value_path == "summary-in")
    {
        summary_in.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "sr-strict-spf-cap")
    {
        sr_strict_spf_cap.yfilter = yfilter;
    }
    if(value_path == "sr-strict-spfsids-available")
    {
        sr_strict_spfsids_available.yfilter = yfilter;
    }
    if(value_path == "sr-microloop-avoidance-active")
    {
        sr_microloop_avoidance_active.yfilter = yfilter;
    }
    if(value_path == "sr-microloop-avoidance-event-type")
    {
        sr_microloop_avoidance_event_type.yfilter = yfilter;
    }
    if(value_path == "sr-microloop-avoidance-near-end-id")
    {
        sr_microloop_avoidance_near_end_id.yfilter = yfilter;
    }
    if(value_path == "sr-microloop-avoidance-far-end-id")
    {
        sr_microloop_avoidance_far_end_id.yfilter = yfilter;
    }
    if(value_path == "sr-microloop-avoidance-pseudonode-id")
    {
        sr_microloop_avoidance_pseudonode_id.yfilter = yfilter;
    }
    if(value_path == "authentication-type")
    {
        authentication_type.yfilter = yfilter;
    }
    if(value_path == "spf-count")
    {
        spf_count.yfilter = yfilter;
    }
    if(value_path == "area-policy-in")
    {
        area_policy_in.yfilter = yfilter;
    }
    if(value_path == "area-policy-in-name")
    {
        area_policy_in_name.yfilter = yfilter;
    }
    if(value_path == "area-policy-out")
    {
        area_policy_out.yfilter = yfilter;
    }
    if(value_path == "area-policy-out-name")
    {
        area_policy_out_name.yfilter = yfilter;
    }
    if(value_path == "area-lsa-count")
    {
        area_lsa_count.yfilter = yfilter;
    }
    if(value_path == "area-lsa-checksum")
    {
        area_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "area-opaque-lsa-count")
    {
        area_opaque_lsa_count.yfilter = yfilter;
    }
    if(value_path == "area-opaque-lsa-checksum")
    {
        area_opaque_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "area-dc-bitless-lsa-count")
    {
        area_dc_bitless_lsa_count.yfilter = yfilter;
    }
    if(value_path == "indication-lsa-count")
    {
        indication_lsa_count.yfilter = yfilter;
    }
    if(value_path == "dna-lsa-count")
    {
        dna_lsa_count.yfilter = yfilter;
    }
    if(value_path == "flood-list-length")
    {
        flood_list_length.yfilter = yfilter;
    }
    if(value_path == "area-lfa-interface-count")
    {
        area_lfa_interface_count.yfilter = yfilter;
    }
    if(value_path == "area-per-prefix-lfa-interface-count")
    {
        area_per_prefix_lfa_interface_count.yfilter = yfilter;
    }
    if(value_path == "area-lfa-revision")
    {
        area_lfa_revision.yfilter = yfilter;
    }
    if(value_path == "area-adj-stag-num-nbr-forming")
    {
        area_adj_stag_num_nbr_forming.yfilter = yfilter;
    }
    if(value_path == "area-num-nbr-full")
    {
        area_num_nbr_full.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-range" || name == "area-id" || name == "address" || name == "area-id-string" || name == "backbone-area-active" || name == "area-interface-count" || name == "area-stub" || name == "area-total-stub" || name == "stub-default-cost" || name == "area-nssa" || name == "nssa-no-redistribution" || name == "nssa-translate" || name == "nssa-default" || name == "te-enabled" || name == "te-topology-version" || name == "external-out" || name == "summary-in" || name == "segment-routing" || name == "sr-strict-spf-cap" || name == "sr-strict-spfsids-available" || name == "sr-microloop-avoidance-active" || name == "sr-microloop-avoidance-event-type" || name == "sr-microloop-avoidance-near-end-id" || name == "sr-microloop-avoidance-far-end-id" || name == "sr-microloop-avoidance-pseudonode-id" || name == "authentication-type" || name == "spf-count" || name == "area-policy-in" || name == "area-policy-in-name" || name == "area-policy-out" || name == "area-policy-out-name" || name == "area-lsa-count" || name == "area-lsa-checksum" || name == "area-opaque-lsa-count" || name == "area-opaque-lsa-checksum" || name == "area-dc-bitless-lsa-count" || name == "indication-lsa-count" || name == "dna-lsa-count" || name == "flood-list-length" || name == "area-lfa-interface-count" || name == "area-per-prefix-lfa-interface-count" || name == "area-lfa-revision" || name == "area-adj-stag-num-nbr-forming" || name == "area-num-nbr-full")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::AreaRange()
    :
    range_prefix{YType::str, "range-prefix"},
    range_mask{YType::str, "range-mask"},
    cost{YType::uint32, "cost"},
    advertise_flag{YType::boolean, "advertise-flag"}
{

    yang_name = "area-range"; yang_parent_name = "process-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::~AreaRange()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::has_data() const
{
    return range_prefix.is_set
	|| range_mask.is_set
	|| cost.is_set
	|| advertise_flag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_prefix.yfilter)
	|| ydk::is_set(range_mask.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(advertise_flag.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_prefix.is_set || is_set(range_prefix.yfilter)) leaf_name_data.push_back(range_prefix.get_name_leafdata());
    if (range_mask.is_set || is_set(range_mask.yfilter)) leaf_name_data.push_back(range_mask.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (advertise_flag.is_set || is_set(advertise_flag.yfilter)) leaf_name_data.push_back(advertise_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-prefix")
    {
        range_prefix = value;
        range_prefix.value_namespace = name_space;
        range_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-mask")
    {
        range_mask = value;
        range_mask.value_namespace = name_space;
        range_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-flag")
    {
        advertise_flag = value;
        advertise_flag.value_namespace = name_space;
        advertise_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-prefix")
    {
        range_prefix.yfilter = yfilter;
    }
    if(value_path == "range-mask")
    {
        range_mask.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "advertise-flag")
    {
        advertise_flag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-prefix" || name == "range-mask" || name == "cost" || name == "advertise-flag")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::ProcessSummary()
    :
    role_standby{YType::boolean, "role-standby"},
    role{YType::uint32, "role"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    nsr_switchover_on_restart{YType::boolean, "nsr-switchover-on-restart"},
    igp_intact_on{YType::boolean, "igp-intact-on"},
    router_id{YType::str, "router-id"},
    tos_options{YType::uint8, "tos-options"},
    opaque_capable{YType::boolean, "opaque-capable"},
    area_border_router{YType::boolean, "area-border-router"},
    as_border_router{YType::boolean, "as-border-router"},
    vrf_lite_enabled{YType::boolean, "vrf-lite-enabled"},
    maximum_metric_start{YType::boolean, "maximum-metric-start"},
    maximum_metric_start_timer{YType::uint32, "maximum-metric-start-timer"},
    maximum_metric_set_reason{YType::enumeration, "maximum-metric-set-reason"},
    maximum_metric_abr_off_mode{YType::boolean, "maximum-metric-abr-off-mode"},
    maximum_metric_abr_off_reasons{YType::enumeration, "maximum-metric-abr-off-reasons"},
    maximum_metric_abr_off_buffer_time{YType::uint32, "maximum-metric-abr-off-buffer-time"},
    spf_start_time{YType::uint16, "spf-start-time"},
    spf_hold_time{YType::uint16, "spf-hold-time"},
    spf_maximum_time{YType::uint16, "spf-maximum-time"},
    spf_start_time_u32{YType::uint32, "spf-start-time-u32"},
    spf_hold_time_u32{YType::uint32, "spf-hold-time-u32"},
    spf_maximum_time_u32{YType::uint32, "spf-maximum-time-u32"},
    spf_prefix_priority{YType::boolean, "spf-prefix-priority"},
    spf_prefix_priority_route_policy{YType::str, "spf-prefix-priority-route-policy"},
    lsa_start_time{YType::int32, "lsa-start-time"},
    lsa_hold_time{YType::uint32, "lsa-hold-time"},
    lsa_maximum_time{YType::uint32, "lsa-maximum-time"},
    minimum_lsa_interval{YType::uint16, "minimum-lsa-interval"},
    minimum_lsa_interval_u32{YType::uint32, "minimum-lsa-interval-u32"},
    lsa_refresh_interval{YType::uint32, "lsa-refresh-interval"},
    minimum_lsa_arrival_interval{YType::uint16, "minimum-lsa-arrival-interval"},
    minimum_lsa_arrival_interval_u32{YType::uint32, "minimum-lsa-arrival-interval-u32"},
    if_flood_pacing_interval{YType::uint16, "if-flood-pacing-interval"},
    if_retrans_pacing_interval{YType::uint16, "if-retrans-pacing-interval"},
    adj_stag_init_num_nbr{YType::uint16, "adj-stag-init-num-nbr"},
    adj_stag_max_num_nbr{YType::uint16, "adj-stag-max-num-nbr"},
    adj_stagger_enabled{YType::boolean, "adj-stagger-enabled"},
    adj_stag_num_nbr_forming{YType::uint16, "adj-stag-num-nbr-forming"},
    number_nbrs_full{YType::uint16, "number-nbrs-full"},
    as_lsa_count{YType::uint32, "as-lsa-count"},
    as_lsa_checksum{YType::uint32, "as-lsa-checksum"},
    opaque_lsa_count{YType::uint32, "opaque-lsa-count"},
    opaque_lsa_checksum{YType::uint32, "opaque-lsa-checksum"},
    as_dc_bitless_lsa_count{YType::uint32, "as-dc-bitless-lsa-count"},
    as_dna_lsa_count{YType::uint32, "as-dna-lsa-count"},
    area_count{YType::uint16, "area-count"},
    normal_area_count{YType::uint16, "normal-area-count"},
    stub_area_count{YType::uint16, "stub-area-count"},
    nssa_area_count{YType::uint16, "nssa-area-count"},
    maximum_interfaces{YType::uint32, "maximum-interfaces"},
    as_lsa_flood_list_length{YType::uint32, "as-lsa-flood-list-length"},
    nsf_enabled{YType::boolean, "nsf-enabled"},
    last_nsf_time{YType::uint32, "last-nsf-time"},
    nsf_time{YType::uint32, "nsf-time"},
    redistribution_limit{YType::uint32, "redistribution-limit"},
    redistribution_threshold{YType::uint32, "redistribution-threshold"},
    redistribution_limit_warn{YType::boolean, "redistribution-limit-warn"},
    graceful_shutdown_retention_time{YType::uint32, "graceful-shutdown-retention-time"},
    graceful_shutdown_state{YType::enumeration, "graceful-shutdown-state"},
    table_prefix_limit_reached{YType::boolean, "table-prefix-limit-reached"},
    non_self_lsa_count{YType::uint32, "non-self-lsa-count"},
    max_lsa_enabled{YType::boolean, "max-lsa-enabled"},
    max_lsa_limit{YType::uint32, "max-lsa-limit"},
    max_lsa_treshold{YType::uint32, "max-lsa-treshold"},
    max_lsa_warning_only{YType::boolean, "max-lsa-warning-only"},
    max_lsa_ignore_time{YType::uint32, "max-lsa-ignore-time"},
    max_lsa_reset_time{YType::uint32, "max-lsa-reset-time"},
    max_lsa_ignore_limit{YType::uint32, "max-lsa-ignore-limit"},
    max_lsa_ignore_count{YType::uint32, "max-lsa-ignore-count"},
    max_lsa_ignore_timer{YType::uint32, "max-lsa-ignore-timer"},
    max_lsa_reset_timer{YType::uint32, "max-lsa-reset-timer"},
    context_name{YType::str, "context-name"},
    snmp_trap_enabled{YType::boolean, "snmp-trap-enabled"},
    ucmp{YType::boolean, "ucmp"},
    ucmp_prefix_list{YType::str, "ucmp-prefix-list"},
    ucmp_variance{YType::int32, "ucmp-variance"},
    ucmp_delay{YType::uint32, "ucmp-delay"},
    microloop_avoidance_type{YType::enumeration, "microloop-avoidance-type"},
    microloop_avoidance_delay{YType::uint32, "microloop-avoidance-delay"},
    microloop_avoidance_active{YType::boolean, "microloop-avoidance-active"},
    microloop_avoidance_delay_expiry{YType::uint32, "microloop-avoidance-delay-expiry"},
    lsd_connected{YType::boolean, "lsd-connected"},
    lsd_registered{YType::boolean, "lsd-registered"},
    lsd_bound{YType::boolean, "lsd-bound"},
    lsd_connection_revision{YType::uint32, "lsd-connection-revision"},
    srgb_configured{YType::boolean, "srgb-configured"},
    srgb_start{YType::uint32, "srgb-start"},
    srgb_end{YType::uint32, "srgb-end"},
    srgb_status{YType::enumeration, "srgb-status"},
    sr_strict_spf_cap{YType::boolean, "sr-strict-spf-cap"}
    	,
    domain_id(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId>())
{
    domain_id->parent = this;

    yang_name = "process-summary"; yang_parent_name = "process-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::~ProcessSummary()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::has_data() const
{
    for (std::size_t index=0; index<maximum_metric.size(); index++)
    {
        if(maximum_metric[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redistribution.size(); index++)
    {
        if(redistribution[index]->has_data())
            return true;
    }
    return role_standby.is_set
	|| role.is_set
	|| nsr_enabled.is_set
	|| nsr_switchover_on_restart.is_set
	|| igp_intact_on.is_set
	|| router_id.is_set
	|| tos_options.is_set
	|| opaque_capable.is_set
	|| area_border_router.is_set
	|| as_border_router.is_set
	|| vrf_lite_enabled.is_set
	|| maximum_metric_start.is_set
	|| maximum_metric_start_timer.is_set
	|| maximum_metric_set_reason.is_set
	|| maximum_metric_abr_off_mode.is_set
	|| maximum_metric_abr_off_reasons.is_set
	|| maximum_metric_abr_off_buffer_time.is_set
	|| spf_start_time.is_set
	|| spf_hold_time.is_set
	|| spf_maximum_time.is_set
	|| spf_start_time_u32.is_set
	|| spf_hold_time_u32.is_set
	|| spf_maximum_time_u32.is_set
	|| spf_prefix_priority.is_set
	|| spf_prefix_priority_route_policy.is_set
	|| lsa_start_time.is_set
	|| lsa_hold_time.is_set
	|| lsa_maximum_time.is_set
	|| minimum_lsa_interval.is_set
	|| minimum_lsa_interval_u32.is_set
	|| lsa_refresh_interval.is_set
	|| minimum_lsa_arrival_interval.is_set
	|| minimum_lsa_arrival_interval_u32.is_set
	|| if_flood_pacing_interval.is_set
	|| if_retrans_pacing_interval.is_set
	|| adj_stag_init_num_nbr.is_set
	|| adj_stag_max_num_nbr.is_set
	|| adj_stagger_enabled.is_set
	|| adj_stag_num_nbr_forming.is_set
	|| number_nbrs_full.is_set
	|| as_lsa_count.is_set
	|| as_lsa_checksum.is_set
	|| opaque_lsa_count.is_set
	|| opaque_lsa_checksum.is_set
	|| as_dc_bitless_lsa_count.is_set
	|| as_dna_lsa_count.is_set
	|| area_count.is_set
	|| normal_area_count.is_set
	|| stub_area_count.is_set
	|| nssa_area_count.is_set
	|| maximum_interfaces.is_set
	|| as_lsa_flood_list_length.is_set
	|| nsf_enabled.is_set
	|| last_nsf_time.is_set
	|| nsf_time.is_set
	|| redistribution_limit.is_set
	|| redistribution_threshold.is_set
	|| redistribution_limit_warn.is_set
	|| graceful_shutdown_retention_time.is_set
	|| graceful_shutdown_state.is_set
	|| table_prefix_limit_reached.is_set
	|| non_self_lsa_count.is_set
	|| max_lsa_enabled.is_set
	|| max_lsa_limit.is_set
	|| max_lsa_treshold.is_set
	|| max_lsa_warning_only.is_set
	|| max_lsa_ignore_time.is_set
	|| max_lsa_reset_time.is_set
	|| max_lsa_ignore_limit.is_set
	|| max_lsa_ignore_count.is_set
	|| max_lsa_ignore_timer.is_set
	|| max_lsa_reset_timer.is_set
	|| context_name.is_set
	|| snmp_trap_enabled.is_set
	|| ucmp.is_set
	|| ucmp_prefix_list.is_set
	|| ucmp_variance.is_set
	|| ucmp_delay.is_set
	|| microloop_avoidance_type.is_set
	|| microloop_avoidance_delay.is_set
	|| microloop_avoidance_active.is_set
	|| microloop_avoidance_delay_expiry.is_set
	|| lsd_connected.is_set
	|| lsd_registered.is_set
	|| lsd_bound.is_set
	|| lsd_connection_revision.is_set
	|| srgb_configured.is_set
	|| srgb_start.is_set
	|| srgb_end.is_set
	|| srgb_status.is_set
	|| sr_strict_spf_cap.is_set
	|| (domain_id !=  nullptr && domain_id->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::has_operation() const
{
    for (std::size_t index=0; index<maximum_metric.size(); index++)
    {
        if(maximum_metric[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redistribution.size(); index++)
    {
        if(redistribution[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(role_standby.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(nsr_enabled.yfilter)
	|| ydk::is_set(nsr_switchover_on_restart.yfilter)
	|| ydk::is_set(igp_intact_on.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(tos_options.yfilter)
	|| ydk::is_set(opaque_capable.yfilter)
	|| ydk::is_set(area_border_router.yfilter)
	|| ydk::is_set(as_border_router.yfilter)
	|| ydk::is_set(vrf_lite_enabled.yfilter)
	|| ydk::is_set(maximum_metric_start.yfilter)
	|| ydk::is_set(maximum_metric_start_timer.yfilter)
	|| ydk::is_set(maximum_metric_set_reason.yfilter)
	|| ydk::is_set(maximum_metric_abr_off_mode.yfilter)
	|| ydk::is_set(maximum_metric_abr_off_reasons.yfilter)
	|| ydk::is_set(maximum_metric_abr_off_buffer_time.yfilter)
	|| ydk::is_set(spf_start_time.yfilter)
	|| ydk::is_set(spf_hold_time.yfilter)
	|| ydk::is_set(spf_maximum_time.yfilter)
	|| ydk::is_set(spf_start_time_u32.yfilter)
	|| ydk::is_set(spf_hold_time_u32.yfilter)
	|| ydk::is_set(spf_maximum_time_u32.yfilter)
	|| ydk::is_set(spf_prefix_priority.yfilter)
	|| ydk::is_set(spf_prefix_priority_route_policy.yfilter)
	|| ydk::is_set(lsa_start_time.yfilter)
	|| ydk::is_set(lsa_hold_time.yfilter)
	|| ydk::is_set(lsa_maximum_time.yfilter)
	|| ydk::is_set(minimum_lsa_interval.yfilter)
	|| ydk::is_set(minimum_lsa_interval_u32.yfilter)
	|| ydk::is_set(lsa_refresh_interval.yfilter)
	|| ydk::is_set(minimum_lsa_arrival_interval.yfilter)
	|| ydk::is_set(minimum_lsa_arrival_interval_u32.yfilter)
	|| ydk::is_set(if_flood_pacing_interval.yfilter)
	|| ydk::is_set(if_retrans_pacing_interval.yfilter)
	|| ydk::is_set(adj_stag_init_num_nbr.yfilter)
	|| ydk::is_set(adj_stag_max_num_nbr.yfilter)
	|| ydk::is_set(adj_stagger_enabled.yfilter)
	|| ydk::is_set(adj_stag_num_nbr_forming.yfilter)
	|| ydk::is_set(number_nbrs_full.yfilter)
	|| ydk::is_set(as_lsa_count.yfilter)
	|| ydk::is_set(as_lsa_checksum.yfilter)
	|| ydk::is_set(opaque_lsa_count.yfilter)
	|| ydk::is_set(opaque_lsa_checksum.yfilter)
	|| ydk::is_set(as_dc_bitless_lsa_count.yfilter)
	|| ydk::is_set(as_dna_lsa_count.yfilter)
	|| ydk::is_set(area_count.yfilter)
	|| ydk::is_set(normal_area_count.yfilter)
	|| ydk::is_set(stub_area_count.yfilter)
	|| ydk::is_set(nssa_area_count.yfilter)
	|| ydk::is_set(maximum_interfaces.yfilter)
	|| ydk::is_set(as_lsa_flood_list_length.yfilter)
	|| ydk::is_set(nsf_enabled.yfilter)
	|| ydk::is_set(last_nsf_time.yfilter)
	|| ydk::is_set(nsf_time.yfilter)
	|| ydk::is_set(redistribution_limit.yfilter)
	|| ydk::is_set(redistribution_threshold.yfilter)
	|| ydk::is_set(redistribution_limit_warn.yfilter)
	|| ydk::is_set(graceful_shutdown_retention_time.yfilter)
	|| ydk::is_set(graceful_shutdown_state.yfilter)
	|| ydk::is_set(table_prefix_limit_reached.yfilter)
	|| ydk::is_set(non_self_lsa_count.yfilter)
	|| ydk::is_set(max_lsa_enabled.yfilter)
	|| ydk::is_set(max_lsa_limit.yfilter)
	|| ydk::is_set(max_lsa_treshold.yfilter)
	|| ydk::is_set(max_lsa_warning_only.yfilter)
	|| ydk::is_set(max_lsa_ignore_time.yfilter)
	|| ydk::is_set(max_lsa_reset_time.yfilter)
	|| ydk::is_set(max_lsa_ignore_limit.yfilter)
	|| ydk::is_set(max_lsa_ignore_count.yfilter)
	|| ydk::is_set(max_lsa_ignore_timer.yfilter)
	|| ydk::is_set(max_lsa_reset_timer.yfilter)
	|| ydk::is_set(context_name.yfilter)
	|| ydk::is_set(snmp_trap_enabled.yfilter)
	|| ydk::is_set(ucmp.yfilter)
	|| ydk::is_set(ucmp_prefix_list.yfilter)
	|| ydk::is_set(ucmp_variance.yfilter)
	|| ydk::is_set(ucmp_delay.yfilter)
	|| ydk::is_set(microloop_avoidance_type.yfilter)
	|| ydk::is_set(microloop_avoidance_delay.yfilter)
	|| ydk::is_set(microloop_avoidance_active.yfilter)
	|| ydk::is_set(microloop_avoidance_delay_expiry.yfilter)
	|| ydk::is_set(lsd_connected.yfilter)
	|| ydk::is_set(lsd_registered.yfilter)
	|| ydk::is_set(lsd_bound.yfilter)
	|| ydk::is_set(lsd_connection_revision.yfilter)
	|| ydk::is_set(srgb_configured.yfilter)
	|| ydk::is_set(srgb_start.yfilter)
	|| ydk::is_set(srgb_end.yfilter)
	|| ydk::is_set(srgb_status.yfilter)
	|| ydk::is_set(sr_strict_spf_cap.yfilter)
	|| (domain_id !=  nullptr && domain_id->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role_standby.is_set || is_set(role_standby.yfilter)) leaf_name_data.push_back(role_standby.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.yfilter)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (nsr_switchover_on_restart.is_set || is_set(nsr_switchover_on_restart.yfilter)) leaf_name_data.push_back(nsr_switchover_on_restart.get_name_leafdata());
    if (igp_intact_on.is_set || is_set(igp_intact_on.yfilter)) leaf_name_data.push_back(igp_intact_on.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (tos_options.is_set || is_set(tos_options.yfilter)) leaf_name_data.push_back(tos_options.get_name_leafdata());
    if (opaque_capable.is_set || is_set(opaque_capable.yfilter)) leaf_name_data.push_back(opaque_capable.get_name_leafdata());
    if (area_border_router.is_set || is_set(area_border_router.yfilter)) leaf_name_data.push_back(area_border_router.get_name_leafdata());
    if (as_border_router.is_set || is_set(as_border_router.yfilter)) leaf_name_data.push_back(as_border_router.get_name_leafdata());
    if (vrf_lite_enabled.is_set || is_set(vrf_lite_enabled.yfilter)) leaf_name_data.push_back(vrf_lite_enabled.get_name_leafdata());
    if (maximum_metric_start.is_set || is_set(maximum_metric_start.yfilter)) leaf_name_data.push_back(maximum_metric_start.get_name_leafdata());
    if (maximum_metric_start_timer.is_set || is_set(maximum_metric_start_timer.yfilter)) leaf_name_data.push_back(maximum_metric_start_timer.get_name_leafdata());
    if (maximum_metric_set_reason.is_set || is_set(maximum_metric_set_reason.yfilter)) leaf_name_data.push_back(maximum_metric_set_reason.get_name_leafdata());
    if (maximum_metric_abr_off_mode.is_set || is_set(maximum_metric_abr_off_mode.yfilter)) leaf_name_data.push_back(maximum_metric_abr_off_mode.get_name_leafdata());
    if (maximum_metric_abr_off_reasons.is_set || is_set(maximum_metric_abr_off_reasons.yfilter)) leaf_name_data.push_back(maximum_metric_abr_off_reasons.get_name_leafdata());
    if (maximum_metric_abr_off_buffer_time.is_set || is_set(maximum_metric_abr_off_buffer_time.yfilter)) leaf_name_data.push_back(maximum_metric_abr_off_buffer_time.get_name_leafdata());
    if (spf_start_time.is_set || is_set(spf_start_time.yfilter)) leaf_name_data.push_back(spf_start_time.get_name_leafdata());
    if (spf_hold_time.is_set || is_set(spf_hold_time.yfilter)) leaf_name_data.push_back(spf_hold_time.get_name_leafdata());
    if (spf_maximum_time.is_set || is_set(spf_maximum_time.yfilter)) leaf_name_data.push_back(spf_maximum_time.get_name_leafdata());
    if (spf_start_time_u32.is_set || is_set(spf_start_time_u32.yfilter)) leaf_name_data.push_back(spf_start_time_u32.get_name_leafdata());
    if (spf_hold_time_u32.is_set || is_set(spf_hold_time_u32.yfilter)) leaf_name_data.push_back(spf_hold_time_u32.get_name_leafdata());
    if (spf_maximum_time_u32.is_set || is_set(spf_maximum_time_u32.yfilter)) leaf_name_data.push_back(spf_maximum_time_u32.get_name_leafdata());
    if (spf_prefix_priority.is_set || is_set(spf_prefix_priority.yfilter)) leaf_name_data.push_back(spf_prefix_priority.get_name_leafdata());
    if (spf_prefix_priority_route_policy.is_set || is_set(spf_prefix_priority_route_policy.yfilter)) leaf_name_data.push_back(spf_prefix_priority_route_policy.get_name_leafdata());
    if (lsa_start_time.is_set || is_set(lsa_start_time.yfilter)) leaf_name_data.push_back(lsa_start_time.get_name_leafdata());
    if (lsa_hold_time.is_set || is_set(lsa_hold_time.yfilter)) leaf_name_data.push_back(lsa_hold_time.get_name_leafdata());
    if (lsa_maximum_time.is_set || is_set(lsa_maximum_time.yfilter)) leaf_name_data.push_back(lsa_maximum_time.get_name_leafdata());
    if (minimum_lsa_interval.is_set || is_set(minimum_lsa_interval.yfilter)) leaf_name_data.push_back(minimum_lsa_interval.get_name_leafdata());
    if (minimum_lsa_interval_u32.is_set || is_set(minimum_lsa_interval_u32.yfilter)) leaf_name_data.push_back(minimum_lsa_interval_u32.get_name_leafdata());
    if (lsa_refresh_interval.is_set || is_set(lsa_refresh_interval.yfilter)) leaf_name_data.push_back(lsa_refresh_interval.get_name_leafdata());
    if (minimum_lsa_arrival_interval.is_set || is_set(minimum_lsa_arrival_interval.yfilter)) leaf_name_data.push_back(minimum_lsa_arrival_interval.get_name_leafdata());
    if (minimum_lsa_arrival_interval_u32.is_set || is_set(minimum_lsa_arrival_interval_u32.yfilter)) leaf_name_data.push_back(minimum_lsa_arrival_interval_u32.get_name_leafdata());
    if (if_flood_pacing_interval.is_set || is_set(if_flood_pacing_interval.yfilter)) leaf_name_data.push_back(if_flood_pacing_interval.get_name_leafdata());
    if (if_retrans_pacing_interval.is_set || is_set(if_retrans_pacing_interval.yfilter)) leaf_name_data.push_back(if_retrans_pacing_interval.get_name_leafdata());
    if (adj_stag_init_num_nbr.is_set || is_set(adj_stag_init_num_nbr.yfilter)) leaf_name_data.push_back(adj_stag_init_num_nbr.get_name_leafdata());
    if (adj_stag_max_num_nbr.is_set || is_set(adj_stag_max_num_nbr.yfilter)) leaf_name_data.push_back(adj_stag_max_num_nbr.get_name_leafdata());
    if (adj_stagger_enabled.is_set || is_set(adj_stagger_enabled.yfilter)) leaf_name_data.push_back(adj_stagger_enabled.get_name_leafdata());
    if (adj_stag_num_nbr_forming.is_set || is_set(adj_stag_num_nbr_forming.yfilter)) leaf_name_data.push_back(adj_stag_num_nbr_forming.get_name_leafdata());
    if (number_nbrs_full.is_set || is_set(number_nbrs_full.yfilter)) leaf_name_data.push_back(number_nbrs_full.get_name_leafdata());
    if (as_lsa_count.is_set || is_set(as_lsa_count.yfilter)) leaf_name_data.push_back(as_lsa_count.get_name_leafdata());
    if (as_lsa_checksum.is_set || is_set(as_lsa_checksum.yfilter)) leaf_name_data.push_back(as_lsa_checksum.get_name_leafdata());
    if (opaque_lsa_count.is_set || is_set(opaque_lsa_count.yfilter)) leaf_name_data.push_back(opaque_lsa_count.get_name_leafdata());
    if (opaque_lsa_checksum.is_set || is_set(opaque_lsa_checksum.yfilter)) leaf_name_data.push_back(opaque_lsa_checksum.get_name_leafdata());
    if (as_dc_bitless_lsa_count.is_set || is_set(as_dc_bitless_lsa_count.yfilter)) leaf_name_data.push_back(as_dc_bitless_lsa_count.get_name_leafdata());
    if (as_dna_lsa_count.is_set || is_set(as_dna_lsa_count.yfilter)) leaf_name_data.push_back(as_dna_lsa_count.get_name_leafdata());
    if (area_count.is_set || is_set(area_count.yfilter)) leaf_name_data.push_back(area_count.get_name_leafdata());
    if (normal_area_count.is_set || is_set(normal_area_count.yfilter)) leaf_name_data.push_back(normal_area_count.get_name_leafdata());
    if (stub_area_count.is_set || is_set(stub_area_count.yfilter)) leaf_name_data.push_back(stub_area_count.get_name_leafdata());
    if (nssa_area_count.is_set || is_set(nssa_area_count.yfilter)) leaf_name_data.push_back(nssa_area_count.get_name_leafdata());
    if (maximum_interfaces.is_set || is_set(maximum_interfaces.yfilter)) leaf_name_data.push_back(maximum_interfaces.get_name_leafdata());
    if (as_lsa_flood_list_length.is_set || is_set(as_lsa_flood_list_length.yfilter)) leaf_name_data.push_back(as_lsa_flood_list_length.get_name_leafdata());
    if (nsf_enabled.is_set || is_set(nsf_enabled.yfilter)) leaf_name_data.push_back(nsf_enabled.get_name_leafdata());
    if (last_nsf_time.is_set || is_set(last_nsf_time.yfilter)) leaf_name_data.push_back(last_nsf_time.get_name_leafdata());
    if (nsf_time.is_set || is_set(nsf_time.yfilter)) leaf_name_data.push_back(nsf_time.get_name_leafdata());
    if (redistribution_limit.is_set || is_set(redistribution_limit.yfilter)) leaf_name_data.push_back(redistribution_limit.get_name_leafdata());
    if (redistribution_threshold.is_set || is_set(redistribution_threshold.yfilter)) leaf_name_data.push_back(redistribution_threshold.get_name_leafdata());
    if (redistribution_limit_warn.is_set || is_set(redistribution_limit_warn.yfilter)) leaf_name_data.push_back(redistribution_limit_warn.get_name_leafdata());
    if (graceful_shutdown_retention_time.is_set || is_set(graceful_shutdown_retention_time.yfilter)) leaf_name_data.push_back(graceful_shutdown_retention_time.get_name_leafdata());
    if (graceful_shutdown_state.is_set || is_set(graceful_shutdown_state.yfilter)) leaf_name_data.push_back(graceful_shutdown_state.get_name_leafdata());
    if (table_prefix_limit_reached.is_set || is_set(table_prefix_limit_reached.yfilter)) leaf_name_data.push_back(table_prefix_limit_reached.get_name_leafdata());
    if (non_self_lsa_count.is_set || is_set(non_self_lsa_count.yfilter)) leaf_name_data.push_back(non_self_lsa_count.get_name_leafdata());
    if (max_lsa_enabled.is_set || is_set(max_lsa_enabled.yfilter)) leaf_name_data.push_back(max_lsa_enabled.get_name_leafdata());
    if (max_lsa_limit.is_set || is_set(max_lsa_limit.yfilter)) leaf_name_data.push_back(max_lsa_limit.get_name_leafdata());
    if (max_lsa_treshold.is_set || is_set(max_lsa_treshold.yfilter)) leaf_name_data.push_back(max_lsa_treshold.get_name_leafdata());
    if (max_lsa_warning_only.is_set || is_set(max_lsa_warning_only.yfilter)) leaf_name_data.push_back(max_lsa_warning_only.get_name_leafdata());
    if (max_lsa_ignore_time.is_set || is_set(max_lsa_ignore_time.yfilter)) leaf_name_data.push_back(max_lsa_ignore_time.get_name_leafdata());
    if (max_lsa_reset_time.is_set || is_set(max_lsa_reset_time.yfilter)) leaf_name_data.push_back(max_lsa_reset_time.get_name_leafdata());
    if (max_lsa_ignore_limit.is_set || is_set(max_lsa_ignore_limit.yfilter)) leaf_name_data.push_back(max_lsa_ignore_limit.get_name_leafdata());
    if (max_lsa_ignore_count.is_set || is_set(max_lsa_ignore_count.yfilter)) leaf_name_data.push_back(max_lsa_ignore_count.get_name_leafdata());
    if (max_lsa_ignore_timer.is_set || is_set(max_lsa_ignore_timer.yfilter)) leaf_name_data.push_back(max_lsa_ignore_timer.get_name_leafdata());
    if (max_lsa_reset_timer.is_set || is_set(max_lsa_reset_timer.yfilter)) leaf_name_data.push_back(max_lsa_reset_timer.get_name_leafdata());
    if (context_name.is_set || is_set(context_name.yfilter)) leaf_name_data.push_back(context_name.get_name_leafdata());
    if (snmp_trap_enabled.is_set || is_set(snmp_trap_enabled.yfilter)) leaf_name_data.push_back(snmp_trap_enabled.get_name_leafdata());
    if (ucmp.is_set || is_set(ucmp.yfilter)) leaf_name_data.push_back(ucmp.get_name_leafdata());
    if (ucmp_prefix_list.is_set || is_set(ucmp_prefix_list.yfilter)) leaf_name_data.push_back(ucmp_prefix_list.get_name_leafdata());
    if (ucmp_variance.is_set || is_set(ucmp_variance.yfilter)) leaf_name_data.push_back(ucmp_variance.get_name_leafdata());
    if (ucmp_delay.is_set || is_set(ucmp_delay.yfilter)) leaf_name_data.push_back(ucmp_delay.get_name_leafdata());
    if (microloop_avoidance_type.is_set || is_set(microloop_avoidance_type.yfilter)) leaf_name_data.push_back(microloop_avoidance_type.get_name_leafdata());
    if (microloop_avoidance_delay.is_set || is_set(microloop_avoidance_delay.yfilter)) leaf_name_data.push_back(microloop_avoidance_delay.get_name_leafdata());
    if (microloop_avoidance_active.is_set || is_set(microloop_avoidance_active.yfilter)) leaf_name_data.push_back(microloop_avoidance_active.get_name_leafdata());
    if (microloop_avoidance_delay_expiry.is_set || is_set(microloop_avoidance_delay_expiry.yfilter)) leaf_name_data.push_back(microloop_avoidance_delay_expiry.get_name_leafdata());
    if (lsd_connected.is_set || is_set(lsd_connected.yfilter)) leaf_name_data.push_back(lsd_connected.get_name_leafdata());
    if (lsd_registered.is_set || is_set(lsd_registered.yfilter)) leaf_name_data.push_back(lsd_registered.get_name_leafdata());
    if (lsd_bound.is_set || is_set(lsd_bound.yfilter)) leaf_name_data.push_back(lsd_bound.get_name_leafdata());
    if (lsd_connection_revision.is_set || is_set(lsd_connection_revision.yfilter)) leaf_name_data.push_back(lsd_connection_revision.get_name_leafdata());
    if (srgb_configured.is_set || is_set(srgb_configured.yfilter)) leaf_name_data.push_back(srgb_configured.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.yfilter)) leaf_name_data.push_back(srgb_start.get_name_leafdata());
    if (srgb_end.is_set || is_set(srgb_end.yfilter)) leaf_name_data.push_back(srgb_end.get_name_leafdata());
    if (srgb_status.is_set || is_set(srgb_status.yfilter)) leaf_name_data.push_back(srgb_status.get_name_leafdata());
    if (sr_strict_spf_cap.is_set || is_set(sr_strict_spf_cap.yfilter)) leaf_name_data.push_back(sr_strict_spf_cap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-id")
    {
        if(domain_id == nullptr)
        {
            domain_id = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId>();
        }
        return domain_id;
    }

    if(child_yang_name == "maximum-metric")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric>();
        c->parent = this;
        maximum_metric.push_back(c);
        return c;
    }

    if(child_yang_name == "redistribution")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution>();
        c->parent = this;
        redistribution.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(domain_id != nullptr)
    {
        children["domain-id"] = domain_id;
    }

    count = 0;
    for (auto const & c : maximum_metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : redistribution)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role-standby")
    {
        role_standby = value;
        role_standby.value_namespace = name_space;
        role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled = value;
        nsr_enabled.value_namespace = name_space;
        nsr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-switchover-on-restart")
    {
        nsr_switchover_on_restart = value;
        nsr_switchover_on_restart.value_namespace = name_space;
        nsr_switchover_on_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-intact-on")
    {
        igp_intact_on = value;
        igp_intact_on.value_namespace = name_space;
        igp_intact_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-options")
    {
        tos_options = value;
        tos_options.value_namespace = name_space;
        tos_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-capable")
    {
        opaque_capable = value;
        opaque_capable.value_namespace = name_space;
        opaque_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-border-router")
    {
        area_border_router = value;
        area_border_router.value_namespace = name_space;
        area_border_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-border-router")
    {
        as_border_router = value;
        as_border_router.value_namespace = name_space;
        as_border_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lite-enabled")
    {
        vrf_lite_enabled = value;
        vrf_lite_enabled.value_namespace = name_space;
        vrf_lite_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-metric-start")
    {
        maximum_metric_start = value;
        maximum_metric_start.value_namespace = name_space;
        maximum_metric_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-metric-start-timer")
    {
        maximum_metric_start_timer = value;
        maximum_metric_start_timer.value_namespace = name_space;
        maximum_metric_start_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-metric-set-reason")
    {
        maximum_metric_set_reason = value;
        maximum_metric_set_reason.value_namespace = name_space;
        maximum_metric_set_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-metric-abr-off-mode")
    {
        maximum_metric_abr_off_mode = value;
        maximum_metric_abr_off_mode.value_namespace = name_space;
        maximum_metric_abr_off_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-metric-abr-off-reasons")
    {
        maximum_metric_abr_off_reasons = value;
        maximum_metric_abr_off_reasons.value_namespace = name_space;
        maximum_metric_abr_off_reasons.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-metric-abr-off-buffer-time")
    {
        maximum_metric_abr_off_buffer_time = value;
        maximum_metric_abr_off_buffer_time.value_namespace = name_space;
        maximum_metric_abr_off_buffer_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-start-time")
    {
        spf_start_time = value;
        spf_start_time.value_namespace = name_space;
        spf_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-hold-time")
    {
        spf_hold_time = value;
        spf_hold_time.value_namespace = name_space;
        spf_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-maximum-time")
    {
        spf_maximum_time = value;
        spf_maximum_time.value_namespace = name_space;
        spf_maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-start-time-u32")
    {
        spf_start_time_u32 = value;
        spf_start_time_u32.value_namespace = name_space;
        spf_start_time_u32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-hold-time-u32")
    {
        spf_hold_time_u32 = value;
        spf_hold_time_u32.value_namespace = name_space;
        spf_hold_time_u32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-maximum-time-u32")
    {
        spf_maximum_time_u32 = value;
        spf_maximum_time_u32.value_namespace = name_space;
        spf_maximum_time_u32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-prefix-priority")
    {
        spf_prefix_priority = value;
        spf_prefix_priority.value_namespace = name_space;
        spf_prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-prefix-priority-route-policy")
    {
        spf_prefix_priority_route_policy = value;
        spf_prefix_priority_route_policy.value_namespace = name_space;
        spf_prefix_priority_route_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-start-time")
    {
        lsa_start_time = value;
        lsa_start_time.value_namespace = name_space;
        lsa_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-hold-time")
    {
        lsa_hold_time = value;
        lsa_hold_time.value_namespace = name_space;
        lsa_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-maximum-time")
    {
        lsa_maximum_time = value;
        lsa_maximum_time.value_namespace = name_space;
        lsa_maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsa-interval")
    {
        minimum_lsa_interval = value;
        minimum_lsa_interval.value_namespace = name_space;
        minimum_lsa_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsa-interval-u32")
    {
        minimum_lsa_interval_u32 = value;
        minimum_lsa_interval_u32.value_namespace = name_space;
        minimum_lsa_interval_u32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-refresh-interval")
    {
        lsa_refresh_interval = value;
        lsa_refresh_interval.value_namespace = name_space;
        lsa_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsa-arrival-interval")
    {
        minimum_lsa_arrival_interval = value;
        minimum_lsa_arrival_interval.value_namespace = name_space;
        minimum_lsa_arrival_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsa-arrival-interval-u32")
    {
        minimum_lsa_arrival_interval_u32 = value;
        minimum_lsa_arrival_interval_u32.value_namespace = name_space;
        minimum_lsa_arrival_interval_u32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-flood-pacing-interval")
    {
        if_flood_pacing_interval = value;
        if_flood_pacing_interval.value_namespace = name_space;
        if_flood_pacing_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-retrans-pacing-interval")
    {
        if_retrans_pacing_interval = value;
        if_retrans_pacing_interval.value_namespace = name_space;
        if_retrans_pacing_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-stag-init-num-nbr")
    {
        adj_stag_init_num_nbr = value;
        adj_stag_init_num_nbr.value_namespace = name_space;
        adj_stag_init_num_nbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-stag-max-num-nbr")
    {
        adj_stag_max_num_nbr = value;
        adj_stag_max_num_nbr.value_namespace = name_space;
        adj_stag_max_num_nbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-stagger-enabled")
    {
        adj_stagger_enabled = value;
        adj_stagger_enabled.value_namespace = name_space;
        adj_stagger_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-stag-num-nbr-forming")
    {
        adj_stag_num_nbr_forming = value;
        adj_stag_num_nbr_forming.value_namespace = name_space;
        adj_stag_num_nbr_forming.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-nbrs-full")
    {
        number_nbrs_full = value;
        number_nbrs_full.value_namespace = name_space;
        number_nbrs_full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-lsa-count")
    {
        as_lsa_count = value;
        as_lsa_count.value_namespace = name_space;
        as_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-lsa-checksum")
    {
        as_lsa_checksum = value;
        as_lsa_checksum.value_namespace = name_space;
        as_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-lsa-count")
    {
        opaque_lsa_count = value;
        opaque_lsa_count.value_namespace = name_space;
        opaque_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-lsa-checksum")
    {
        opaque_lsa_checksum = value;
        opaque_lsa_checksum.value_namespace = name_space;
        opaque_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-dc-bitless-lsa-count")
    {
        as_dc_bitless_lsa_count = value;
        as_dc_bitless_lsa_count.value_namespace = name_space;
        as_dc_bitless_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-dna-lsa-count")
    {
        as_dna_lsa_count = value;
        as_dna_lsa_count.value_namespace = name_space;
        as_dna_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-count")
    {
        area_count = value;
        area_count.value_namespace = name_space;
        area_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "normal-area-count")
    {
        normal_area_count = value;
        normal_area_count.value_namespace = name_space;
        normal_area_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-area-count")
    {
        stub_area_count = value;
        stub_area_count.value_namespace = name_space;
        stub_area_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-area-count")
    {
        nssa_area_count = value;
        nssa_area_count.value_namespace = name_space;
        nssa_area_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-interfaces")
    {
        maximum_interfaces = value;
        maximum_interfaces.value_namespace = name_space;
        maximum_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-lsa-flood-list-length")
    {
        as_lsa_flood_list_length = value;
        as_lsa_flood_list_length.value_namespace = name_space;
        as_lsa_flood_list_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-enabled")
    {
        nsf_enabled = value;
        nsf_enabled.value_namespace = name_space;
        nsf_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-nsf-time")
    {
        last_nsf_time = value;
        last_nsf_time.value_namespace = name_space;
        last_nsf_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-time")
    {
        nsf_time = value;
        nsf_time.value_namespace = name_space;
        nsf_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-limit")
    {
        redistribution_limit = value;
        redistribution_limit.value_namespace = name_space;
        redistribution_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-threshold")
    {
        redistribution_threshold = value;
        redistribution_threshold.value_namespace = name_space;
        redistribution_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-limit-warn")
    {
        redistribution_limit_warn = value;
        redistribution_limit_warn.value_namespace = name_space;
        redistribution_limit_warn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-shutdown-retention-time")
    {
        graceful_shutdown_retention_time = value;
        graceful_shutdown_retention_time.value_namespace = name_space;
        graceful_shutdown_retention_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-shutdown-state")
    {
        graceful_shutdown_state = value;
        graceful_shutdown_state.value_namespace = name_space;
        graceful_shutdown_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-prefix-limit-reached")
    {
        table_prefix_limit_reached = value;
        table_prefix_limit_reached.value_namespace = name_space;
        table_prefix_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-self-lsa-count")
    {
        non_self_lsa_count = value;
        non_self_lsa_count.value_namespace = name_space;
        non_self_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-enabled")
    {
        max_lsa_enabled = value;
        max_lsa_enabled.value_namespace = name_space;
        max_lsa_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-limit")
    {
        max_lsa_limit = value;
        max_lsa_limit.value_namespace = name_space;
        max_lsa_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-treshold")
    {
        max_lsa_treshold = value;
        max_lsa_treshold.value_namespace = name_space;
        max_lsa_treshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-warning-only")
    {
        max_lsa_warning_only = value;
        max_lsa_warning_only.value_namespace = name_space;
        max_lsa_warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-ignore-time")
    {
        max_lsa_ignore_time = value;
        max_lsa_ignore_time.value_namespace = name_space;
        max_lsa_ignore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-reset-time")
    {
        max_lsa_reset_time = value;
        max_lsa_reset_time.value_namespace = name_space;
        max_lsa_reset_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-ignore-limit")
    {
        max_lsa_ignore_limit = value;
        max_lsa_ignore_limit.value_namespace = name_space;
        max_lsa_ignore_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-ignore-count")
    {
        max_lsa_ignore_count = value;
        max_lsa_ignore_count.value_namespace = name_space;
        max_lsa_ignore_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-ignore-timer")
    {
        max_lsa_ignore_timer = value;
        max_lsa_ignore_timer.value_namespace = name_space;
        max_lsa_ignore_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-reset-timer")
    {
        max_lsa_reset_timer = value;
        max_lsa_reset_timer.value_namespace = name_space;
        max_lsa_reset_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context-name")
    {
        context_name = value;
        context_name.value_namespace = name_space;
        context_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-trap-enabled")
    {
        snmp_trap_enabled = value;
        snmp_trap_enabled.value_namespace = name_space;
        snmp_trap_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucmp")
    {
        ucmp = value;
        ucmp.value_namespace = name_space;
        ucmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucmp-prefix-list")
    {
        ucmp_prefix_list = value;
        ucmp_prefix_list.value_namespace = name_space;
        ucmp_prefix_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucmp-variance")
    {
        ucmp_variance = value;
        ucmp_variance.value_namespace = name_space;
        ucmp_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucmp-delay")
    {
        ucmp_delay = value;
        ucmp_delay.value_namespace = name_space;
        ucmp_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-avoidance-type")
    {
        microloop_avoidance_type = value;
        microloop_avoidance_type.value_namespace = name_space;
        microloop_avoidance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-avoidance-delay")
    {
        microloop_avoidance_delay = value;
        microloop_avoidance_delay.value_namespace = name_space;
        microloop_avoidance_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-avoidance-active")
    {
        microloop_avoidance_active = value;
        microloop_avoidance_active.value_namespace = name_space;
        microloop_avoidance_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-avoidance-delay-expiry")
    {
        microloop_avoidance_delay_expiry = value;
        microloop_avoidance_delay_expiry.value_namespace = name_space;
        microloop_avoidance_delay_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-connected")
    {
        lsd_connected = value;
        lsd_connected.value_namespace = name_space;
        lsd_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-registered")
    {
        lsd_registered = value;
        lsd_registered.value_namespace = name_space;
        lsd_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-bound")
    {
        lsd_bound = value;
        lsd_bound.value_namespace = name_space;
        lsd_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-connection-revision")
    {
        lsd_connection_revision = value;
        lsd_connection_revision.value_namespace = name_space;
        lsd_connection_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-configured")
    {
        srgb_configured = value;
        srgb_configured.value_namespace = name_space;
        srgb_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-start")
    {
        srgb_start = value;
        srgb_start.value_namespace = name_space;
        srgb_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-end")
    {
        srgb_end = value;
        srgb_end.value_namespace = name_space;
        srgb_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-status")
    {
        srgb_status = value;
        srgb_status.value_namespace = name_space;
        srgb_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-strict-spf-cap")
    {
        sr_strict_spf_cap = value;
        sr_strict_spf_cap.value_namespace = name_space;
        sr_strict_spf_cap.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role-standby")
    {
        role_standby.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled.yfilter = yfilter;
    }
    if(value_path == "nsr-switchover-on-restart")
    {
        nsr_switchover_on_restart.yfilter = yfilter;
    }
    if(value_path == "igp-intact-on")
    {
        igp_intact_on.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "tos-options")
    {
        tos_options.yfilter = yfilter;
    }
    if(value_path == "opaque-capable")
    {
        opaque_capable.yfilter = yfilter;
    }
    if(value_path == "area-border-router")
    {
        area_border_router.yfilter = yfilter;
    }
    if(value_path == "as-border-router")
    {
        as_border_router.yfilter = yfilter;
    }
    if(value_path == "vrf-lite-enabled")
    {
        vrf_lite_enabled.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-start")
    {
        maximum_metric_start.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-start-timer")
    {
        maximum_metric_start_timer.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-set-reason")
    {
        maximum_metric_set_reason.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-abr-off-mode")
    {
        maximum_metric_abr_off_mode.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-abr-off-reasons")
    {
        maximum_metric_abr_off_reasons.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-abr-off-buffer-time")
    {
        maximum_metric_abr_off_buffer_time.yfilter = yfilter;
    }
    if(value_path == "spf-start-time")
    {
        spf_start_time.yfilter = yfilter;
    }
    if(value_path == "spf-hold-time")
    {
        spf_hold_time.yfilter = yfilter;
    }
    if(value_path == "spf-maximum-time")
    {
        spf_maximum_time.yfilter = yfilter;
    }
    if(value_path == "spf-start-time-u32")
    {
        spf_start_time_u32.yfilter = yfilter;
    }
    if(value_path == "spf-hold-time-u32")
    {
        spf_hold_time_u32.yfilter = yfilter;
    }
    if(value_path == "spf-maximum-time-u32")
    {
        spf_maximum_time_u32.yfilter = yfilter;
    }
    if(value_path == "spf-prefix-priority")
    {
        spf_prefix_priority.yfilter = yfilter;
    }
    if(value_path == "spf-prefix-priority-route-policy")
    {
        spf_prefix_priority_route_policy.yfilter = yfilter;
    }
    if(value_path == "lsa-start-time")
    {
        lsa_start_time.yfilter = yfilter;
    }
    if(value_path == "lsa-hold-time")
    {
        lsa_hold_time.yfilter = yfilter;
    }
    if(value_path == "lsa-maximum-time")
    {
        lsa_maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-lsa-interval")
    {
        minimum_lsa_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-lsa-interval-u32")
    {
        minimum_lsa_interval_u32.yfilter = yfilter;
    }
    if(value_path == "lsa-refresh-interval")
    {
        lsa_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-lsa-arrival-interval")
    {
        minimum_lsa_arrival_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-lsa-arrival-interval-u32")
    {
        minimum_lsa_arrival_interval_u32.yfilter = yfilter;
    }
    if(value_path == "if-flood-pacing-interval")
    {
        if_flood_pacing_interval.yfilter = yfilter;
    }
    if(value_path == "if-retrans-pacing-interval")
    {
        if_retrans_pacing_interval.yfilter = yfilter;
    }
    if(value_path == "adj-stag-init-num-nbr")
    {
        adj_stag_init_num_nbr.yfilter = yfilter;
    }
    if(value_path == "adj-stag-max-num-nbr")
    {
        adj_stag_max_num_nbr.yfilter = yfilter;
    }
    if(value_path == "adj-stagger-enabled")
    {
        adj_stagger_enabled.yfilter = yfilter;
    }
    if(value_path == "adj-stag-num-nbr-forming")
    {
        adj_stag_num_nbr_forming.yfilter = yfilter;
    }
    if(value_path == "number-nbrs-full")
    {
        number_nbrs_full.yfilter = yfilter;
    }
    if(value_path == "as-lsa-count")
    {
        as_lsa_count.yfilter = yfilter;
    }
    if(value_path == "as-lsa-checksum")
    {
        as_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "opaque-lsa-count")
    {
        opaque_lsa_count.yfilter = yfilter;
    }
    if(value_path == "opaque-lsa-checksum")
    {
        opaque_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "as-dc-bitless-lsa-count")
    {
        as_dc_bitless_lsa_count.yfilter = yfilter;
    }
    if(value_path == "as-dna-lsa-count")
    {
        as_dna_lsa_count.yfilter = yfilter;
    }
    if(value_path == "area-count")
    {
        area_count.yfilter = yfilter;
    }
    if(value_path == "normal-area-count")
    {
        normal_area_count.yfilter = yfilter;
    }
    if(value_path == "stub-area-count")
    {
        stub_area_count.yfilter = yfilter;
    }
    if(value_path == "nssa-area-count")
    {
        nssa_area_count.yfilter = yfilter;
    }
    if(value_path == "maximum-interfaces")
    {
        maximum_interfaces.yfilter = yfilter;
    }
    if(value_path == "as-lsa-flood-list-length")
    {
        as_lsa_flood_list_length.yfilter = yfilter;
    }
    if(value_path == "nsf-enabled")
    {
        nsf_enabled.yfilter = yfilter;
    }
    if(value_path == "last-nsf-time")
    {
        last_nsf_time.yfilter = yfilter;
    }
    if(value_path == "nsf-time")
    {
        nsf_time.yfilter = yfilter;
    }
    if(value_path == "redistribution-limit")
    {
        redistribution_limit.yfilter = yfilter;
    }
    if(value_path == "redistribution-threshold")
    {
        redistribution_threshold.yfilter = yfilter;
    }
    if(value_path == "redistribution-limit-warn")
    {
        redistribution_limit_warn.yfilter = yfilter;
    }
    if(value_path == "graceful-shutdown-retention-time")
    {
        graceful_shutdown_retention_time.yfilter = yfilter;
    }
    if(value_path == "graceful-shutdown-state")
    {
        graceful_shutdown_state.yfilter = yfilter;
    }
    if(value_path == "table-prefix-limit-reached")
    {
        table_prefix_limit_reached.yfilter = yfilter;
    }
    if(value_path == "non-self-lsa-count")
    {
        non_self_lsa_count.yfilter = yfilter;
    }
    if(value_path == "max-lsa-enabled")
    {
        max_lsa_enabled.yfilter = yfilter;
    }
    if(value_path == "max-lsa-limit")
    {
        max_lsa_limit.yfilter = yfilter;
    }
    if(value_path == "max-lsa-treshold")
    {
        max_lsa_treshold.yfilter = yfilter;
    }
    if(value_path == "max-lsa-warning-only")
    {
        max_lsa_warning_only.yfilter = yfilter;
    }
    if(value_path == "max-lsa-ignore-time")
    {
        max_lsa_ignore_time.yfilter = yfilter;
    }
    if(value_path == "max-lsa-reset-time")
    {
        max_lsa_reset_time.yfilter = yfilter;
    }
    if(value_path == "max-lsa-ignore-limit")
    {
        max_lsa_ignore_limit.yfilter = yfilter;
    }
    if(value_path == "max-lsa-ignore-count")
    {
        max_lsa_ignore_count.yfilter = yfilter;
    }
    if(value_path == "max-lsa-ignore-timer")
    {
        max_lsa_ignore_timer.yfilter = yfilter;
    }
    if(value_path == "max-lsa-reset-timer")
    {
        max_lsa_reset_timer.yfilter = yfilter;
    }
    if(value_path == "context-name")
    {
        context_name.yfilter = yfilter;
    }
    if(value_path == "snmp-trap-enabled")
    {
        snmp_trap_enabled.yfilter = yfilter;
    }
    if(value_path == "ucmp")
    {
        ucmp.yfilter = yfilter;
    }
    if(value_path == "ucmp-prefix-list")
    {
        ucmp_prefix_list.yfilter = yfilter;
    }
    if(value_path == "ucmp-variance")
    {
        ucmp_variance.yfilter = yfilter;
    }
    if(value_path == "ucmp-delay")
    {
        ucmp_delay.yfilter = yfilter;
    }
    if(value_path == "microloop-avoidance-type")
    {
        microloop_avoidance_type.yfilter = yfilter;
    }
    if(value_path == "microloop-avoidance-delay")
    {
        microloop_avoidance_delay.yfilter = yfilter;
    }
    if(value_path == "microloop-avoidance-active")
    {
        microloop_avoidance_active.yfilter = yfilter;
    }
    if(value_path == "microloop-avoidance-delay-expiry")
    {
        microloop_avoidance_delay_expiry.yfilter = yfilter;
    }
    if(value_path == "lsd-connected")
    {
        lsd_connected.yfilter = yfilter;
    }
    if(value_path == "lsd-registered")
    {
        lsd_registered.yfilter = yfilter;
    }
    if(value_path == "lsd-bound")
    {
        lsd_bound.yfilter = yfilter;
    }
    if(value_path == "lsd-connection-revision")
    {
        lsd_connection_revision.yfilter = yfilter;
    }
    if(value_path == "srgb-configured")
    {
        srgb_configured.yfilter = yfilter;
    }
    if(value_path == "srgb-start")
    {
        srgb_start.yfilter = yfilter;
    }
    if(value_path == "srgb-end")
    {
        srgb_end.yfilter = yfilter;
    }
    if(value_path == "srgb-status")
    {
        srgb_status.yfilter = yfilter;
    }
    if(value_path == "sr-strict-spf-cap")
    {
        sr_strict_spf_cap.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-id" || name == "maximum-metric" || name == "redistribution" || name == "role-standby" || name == "role" || name == "nsr-enabled" || name == "nsr-switchover-on-restart" || name == "igp-intact-on" || name == "router-id" || name == "tos-options" || name == "opaque-capable" || name == "area-border-router" || name == "as-border-router" || name == "vrf-lite-enabled" || name == "maximum-metric-start" || name == "maximum-metric-start-timer" || name == "maximum-metric-set-reason" || name == "maximum-metric-abr-off-mode" || name == "maximum-metric-abr-off-reasons" || name == "maximum-metric-abr-off-buffer-time" || name == "spf-start-time" || name == "spf-hold-time" || name == "spf-maximum-time" || name == "spf-start-time-u32" || name == "spf-hold-time-u32" || name == "spf-maximum-time-u32" || name == "spf-prefix-priority" || name == "spf-prefix-priority-route-policy" || name == "lsa-start-time" || name == "lsa-hold-time" || name == "lsa-maximum-time" || name == "minimum-lsa-interval" || name == "minimum-lsa-interval-u32" || name == "lsa-refresh-interval" || name == "minimum-lsa-arrival-interval" || name == "minimum-lsa-arrival-interval-u32" || name == "if-flood-pacing-interval" || name == "if-retrans-pacing-interval" || name == "adj-stag-init-num-nbr" || name == "adj-stag-max-num-nbr" || name == "adj-stagger-enabled" || name == "adj-stag-num-nbr-forming" || name == "number-nbrs-full" || name == "as-lsa-count" || name == "as-lsa-checksum" || name == "opaque-lsa-count" || name == "opaque-lsa-checksum" || name == "as-dc-bitless-lsa-count" || name == "as-dna-lsa-count" || name == "area-count" || name == "normal-area-count" || name == "stub-area-count" || name == "nssa-area-count" || name == "maximum-interfaces" || name == "as-lsa-flood-list-length" || name == "nsf-enabled" || name == "last-nsf-time" || name == "nsf-time" || name == "redistribution-limit" || name == "redistribution-threshold" || name == "redistribution-limit-warn" || name == "graceful-shutdown-retention-time" || name == "graceful-shutdown-state" || name == "table-prefix-limit-reached" || name == "non-self-lsa-count" || name == "max-lsa-enabled" || name == "max-lsa-limit" || name == "max-lsa-treshold" || name == "max-lsa-warning-only" || name == "max-lsa-ignore-time" || name == "max-lsa-reset-time" || name == "max-lsa-ignore-limit" || name == "max-lsa-ignore-count" || name == "max-lsa-ignore-timer" || name == "max-lsa-reset-timer" || name == "context-name" || name == "snmp-trap-enabled" || name == "ucmp" || name == "ucmp-prefix-list" || name == "ucmp-variance" || name == "ucmp-delay" || name == "microloop-avoidance-type" || name == "microloop-avoidance-delay" || name == "microloop-avoidance-active" || name == "microloop-avoidance-delay-expiry" || name == "lsd-connected" || name == "lsd-registered" || name == "lsd-bound" || name == "lsd-connection-revision" || name == "srgb-configured" || name == "srgb-start" || name == "srgb-end" || name == "srgb-status" || name == "sr-strict-spf-cap")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::DomainId()
    :
    primary_domain_id(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId>())
{
    primary_domain_id->parent = this;

    yang_name = "domain-id"; yang_parent_name = "process-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::~DomainId()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::has_data() const
{
    for (std::size_t index=0; index<secondary_domain_id.size(); index++)
    {
        if(secondary_domain_id[index]->has_data())
            return true;
    }
    return (primary_domain_id !=  nullptr && primary_domain_id->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::has_operation() const
{
    for (std::size_t index=0; index<secondary_domain_id.size(); index++)
    {
        if(secondary_domain_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (primary_domain_id !=  nullptr && primary_domain_id->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-domain-id")
    {
        if(primary_domain_id == nullptr)
        {
            primary_domain_id = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId>();
        }
        return primary_domain_id;
    }

    if(child_yang_name == "secondary-domain-id")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId>();
        c->parent = this;
        secondary_domain_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(primary_domain_id != nullptr)
    {
        children["primary-domain-id"] = primary_domain_id;
    }

    count = 0;
    for (auto const & c : secondary_domain_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-domain-id" || name == "secondary-domain-id")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::PrimaryDomainId()
    :
    domain_id_type{YType::uint16, "domain-id-type"},
    domain_id_value{YType::str, "domain-id-value"}
{

    yang_name = "primary-domain-id"; yang_parent_name = "domain-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::~PrimaryDomainId()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::has_data() const
{
    return domain_id_type.is_set
	|| domain_id_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_id_type.yfilter)
	|| ydk::is_set(domain_id_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-domain-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_id_type.is_set || is_set(domain_id_type.yfilter)) leaf_name_data.push_back(domain_id_type.get_name_leafdata());
    if (domain_id_value.is_set || is_set(domain_id_value.yfilter)) leaf_name_data.push_back(domain_id_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-id-type")
    {
        domain_id_type = value;
        domain_id_type.value_namespace = name_space;
        domain_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-id-value")
    {
        domain_id_value = value;
        domain_id_value.value_namespace = name_space;
        domain_id_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-id-type")
    {
        domain_id_type.yfilter = yfilter;
    }
    if(value_path == "domain-id-value")
    {
        domain_id_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-id-type" || name == "domain-id-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::SecondaryDomainId()
    :
    domain_id_type{YType::uint16, "domain-id-type"},
    domain_id_value{YType::str, "domain-id-value"}
{

    yang_name = "secondary-domain-id"; yang_parent_name = "domain-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::~SecondaryDomainId()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::has_data() const
{
    return domain_id_type.is_set
	|| domain_id_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_id_type.yfilter)
	|| ydk::is_set(domain_id_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-domain-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_id_type.is_set || is_set(domain_id_type.yfilter)) leaf_name_data.push_back(domain_id_type.get_name_leafdata());
    if (domain_id_value.is_set || is_set(domain_id_value.yfilter)) leaf_name_data.push_back(domain_id_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-id-type")
    {
        domain_id_type = value;
        domain_id_type.value_namespace = name_space;
        domain_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-id-value")
    {
        domain_id_value = value;
        domain_id_value.value_namespace = name_space;
        domain_id_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-id-type")
    {
        domain_id_type.yfilter = yfilter;
    }
    if(value_path == "domain-id-value")
    {
        domain_id_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-id-type" || name == "domain-id-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetric()
    :
    max_metric_reason{YType::uint8, "max-metric-reason"},
    max_metric_enabled{YType::boolean, "max-metric-enabled"},
    unset_maximum_metric{YType::boolean, "unset-maximum-metric"},
    saved_unset_maximum_metric{YType::boolean, "saved-unset-maximum-metric"},
    maximum_metric_start_time{YType::uint32, "maximum-metric-start-time"},
    saved_startup_time{YType::uint32, "saved-startup-time"},
    maximum_metric_include_stubs{YType::boolean, "maximum-metric-include-stubs"},
    maximum_metric_summary_lsa{YType::boolean, "maximum-metric-summary-lsa"},
    maximum_metric_summary_lsa_metric{YType::uint32, "maximum-metric-summary-lsa-metric"},
    maximum_metric_external_lsa{YType::boolean, "maximum-metric-external-lsa"},
    maximum_metric_external_lsa_metric{YType::uint32, "maximum-metric-external-lsa-metric"},
    maximum_metric_originated_for{YType::uint32, "maximum-metric-originated-for"},
    maximum_metric_unset_reason{YType::enumeration, "maximum-metric-unset-reason"}
    	,
    maximum_metric_time_unset(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset>())
{
    maximum_metric_time_unset->parent = this;

    yang_name = "maximum-metric"; yang_parent_name = "process-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::~MaximumMetric()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::has_data() const
{
    return max_metric_reason.is_set
	|| max_metric_enabled.is_set
	|| unset_maximum_metric.is_set
	|| saved_unset_maximum_metric.is_set
	|| maximum_metric_start_time.is_set
	|| saved_startup_time.is_set
	|| maximum_metric_include_stubs.is_set
	|| maximum_metric_summary_lsa.is_set
	|| maximum_metric_summary_lsa_metric.is_set
	|| maximum_metric_external_lsa.is_set
	|| maximum_metric_external_lsa_metric.is_set
	|| maximum_metric_originated_for.is_set
	|| maximum_metric_unset_reason.is_set
	|| (maximum_metric_time_unset !=  nullptr && maximum_metric_time_unset->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_metric_reason.yfilter)
	|| ydk::is_set(max_metric_enabled.yfilter)
	|| ydk::is_set(unset_maximum_metric.yfilter)
	|| ydk::is_set(saved_unset_maximum_metric.yfilter)
	|| ydk::is_set(maximum_metric_start_time.yfilter)
	|| ydk::is_set(saved_startup_time.yfilter)
	|| ydk::is_set(maximum_metric_include_stubs.yfilter)
	|| ydk::is_set(maximum_metric_summary_lsa.yfilter)
	|| ydk::is_set(maximum_metric_summary_lsa_metric.yfilter)
	|| ydk::is_set(maximum_metric_external_lsa.yfilter)
	|| ydk::is_set(maximum_metric_external_lsa_metric.yfilter)
	|| ydk::is_set(maximum_metric_originated_for.yfilter)
	|| ydk::is_set(maximum_metric_unset_reason.yfilter)
	|| (maximum_metric_time_unset !=  nullptr && maximum_metric_time_unset->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_metric_reason.is_set || is_set(max_metric_reason.yfilter)) leaf_name_data.push_back(max_metric_reason.get_name_leafdata());
    if (max_metric_enabled.is_set || is_set(max_metric_enabled.yfilter)) leaf_name_data.push_back(max_metric_enabled.get_name_leafdata());
    if (unset_maximum_metric.is_set || is_set(unset_maximum_metric.yfilter)) leaf_name_data.push_back(unset_maximum_metric.get_name_leafdata());
    if (saved_unset_maximum_metric.is_set || is_set(saved_unset_maximum_metric.yfilter)) leaf_name_data.push_back(saved_unset_maximum_metric.get_name_leafdata());
    if (maximum_metric_start_time.is_set || is_set(maximum_metric_start_time.yfilter)) leaf_name_data.push_back(maximum_metric_start_time.get_name_leafdata());
    if (saved_startup_time.is_set || is_set(saved_startup_time.yfilter)) leaf_name_data.push_back(saved_startup_time.get_name_leafdata());
    if (maximum_metric_include_stubs.is_set || is_set(maximum_metric_include_stubs.yfilter)) leaf_name_data.push_back(maximum_metric_include_stubs.get_name_leafdata());
    if (maximum_metric_summary_lsa.is_set || is_set(maximum_metric_summary_lsa.yfilter)) leaf_name_data.push_back(maximum_metric_summary_lsa.get_name_leafdata());
    if (maximum_metric_summary_lsa_metric.is_set || is_set(maximum_metric_summary_lsa_metric.yfilter)) leaf_name_data.push_back(maximum_metric_summary_lsa_metric.get_name_leafdata());
    if (maximum_metric_external_lsa.is_set || is_set(maximum_metric_external_lsa.yfilter)) leaf_name_data.push_back(maximum_metric_external_lsa.get_name_leafdata());
    if (maximum_metric_external_lsa_metric.is_set || is_set(maximum_metric_external_lsa_metric.yfilter)) leaf_name_data.push_back(maximum_metric_external_lsa_metric.get_name_leafdata());
    if (maximum_metric_originated_for.is_set || is_set(maximum_metric_originated_for.yfilter)) leaf_name_data.push_back(maximum_metric_originated_for.get_name_leafdata());
    if (maximum_metric_unset_reason.is_set || is_set(maximum_metric_unset_reason.yfilter)) leaf_name_data.push_back(maximum_metric_unset_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-metric-time-unset")
    {
        if(maximum_metric_time_unset == nullptr)
        {
            maximum_metric_time_unset = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset>();
        }
        return maximum_metric_time_unset;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(maximum_metric_time_unset != nullptr)
    {
        children["maximum-metric-time-unset"] = maximum_metric_time_unset;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-metric-reason")
    {
        max_metric_reason = value;
        max_metric_reason.value_namespace = name_space;
        max_metric_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-metric-enabled")
    {
        max_metric_enabled = value;
        max_metric_enabled.value_namespace = name_space;
        max_metric_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unset-maximum-metric")
    {
        unset_maximum_metric = value;
        unset_maximum_metric.value_namespace = name_space;
        unset_maximum_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saved-unset-maximum-metric")
    {
        saved_unset_maximum_metric = value;
        saved_unset_maximum_metric.value_namespace = name_space;
        saved_unset_maximum_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-metric-start-time")
    {
        maximum_metric_start_time = value;
        maximum_metric_start_time.value_namespace = name_space;
        maximum_metric_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saved-startup-time")
    {
        saved_startup_time = value;
        saved_startup_time.value_namespace = name_space;
        saved_startup_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-metric-include-stubs")
    {
        maximum_metric_include_stubs = value;
        maximum_metric_include_stubs.value_namespace = name_space;
        maximum_metric_include_stubs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-metric-summary-lsa")
    {
        maximum_metric_summary_lsa = value;
        maximum_metric_summary_lsa.value_namespace = name_space;
        maximum_metric_summary_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-metric-summary-lsa-metric")
    {
        maximum_metric_summary_lsa_metric = value;
        maximum_metric_summary_lsa_metric.value_namespace = name_space;
        maximum_metric_summary_lsa_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-metric-external-lsa")
    {
        maximum_metric_external_lsa = value;
        maximum_metric_external_lsa.value_namespace = name_space;
        maximum_metric_external_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-metric-external-lsa-metric")
    {
        maximum_metric_external_lsa_metric = value;
        maximum_metric_external_lsa_metric.value_namespace = name_space;
        maximum_metric_external_lsa_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-metric-originated-for")
    {
        maximum_metric_originated_for = value;
        maximum_metric_originated_for.value_namespace = name_space;
        maximum_metric_originated_for.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-metric-unset-reason")
    {
        maximum_metric_unset_reason = value;
        maximum_metric_unset_reason.value_namespace = name_space;
        maximum_metric_unset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-metric-reason")
    {
        max_metric_reason.yfilter = yfilter;
    }
    if(value_path == "max-metric-enabled")
    {
        max_metric_enabled.yfilter = yfilter;
    }
    if(value_path == "unset-maximum-metric")
    {
        unset_maximum_metric.yfilter = yfilter;
    }
    if(value_path == "saved-unset-maximum-metric")
    {
        saved_unset_maximum_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-start-time")
    {
        maximum_metric_start_time.yfilter = yfilter;
    }
    if(value_path == "saved-startup-time")
    {
        saved_startup_time.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-include-stubs")
    {
        maximum_metric_include_stubs.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-summary-lsa")
    {
        maximum_metric_summary_lsa.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-summary-lsa-metric")
    {
        maximum_metric_summary_lsa_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-external-lsa")
    {
        maximum_metric_external_lsa.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-external-lsa-metric")
    {
        maximum_metric_external_lsa_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-originated-for")
    {
        maximum_metric_originated_for.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-unset-reason")
    {
        maximum_metric_unset_reason.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-metric-time-unset" || name == "max-metric-reason" || name == "max-metric-enabled" || name == "unset-maximum-metric" || name == "saved-unset-maximum-metric" || name == "maximum-metric-start-time" || name == "saved-startup-time" || name == "maximum-metric-include-stubs" || name == "maximum-metric-summary-lsa" || name == "maximum-metric-summary-lsa-metric" || name == "maximum-metric-external-lsa" || name == "maximum-metric-external-lsa-metric" || name == "maximum-metric-originated-for" || name == "maximum-metric-unset-reason")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::MaximumMetricTimeUnset()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "maximum-metric-time-unset"; yang_parent_name = "maximum-metric"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::~MaximumMetricTimeUnset()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric-time-unset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::Redistribution()
    :
    metric_flag{YType::boolean, "metric-flag"},
    metric{YType::uint32, "metric"},
    classless{YType::boolean, "classless"},
    nssa_only{YType::boolean, "nssa-only"}
    	,
    redistribution_protocol(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol>())
{
    redistribution_protocol->parent = this;

    yang_name = "redistribution"; yang_parent_name = "process-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::~Redistribution()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::has_data() const
{
    return metric_flag.is_set
	|| metric.is_set
	|| classless.is_set
	|| nssa_only.is_set
	|| (redistribution_protocol !=  nullptr && redistribution_protocol->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_flag.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(classless.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| (redistribution_protocol !=  nullptr && redistribution_protocol->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_flag.is_set || is_set(metric_flag.yfilter)) leaf_name_data.push_back(metric_flag.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (classless.is_set || is_set(classless.yfilter)) leaf_name_data.push_back(classless.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribution-protocol")
    {
        if(redistribution_protocol == nullptr)
        {
            redistribution_protocol = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol>();
        }
        return redistribution_protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redistribution_protocol != nullptr)
    {
        children["redistribution-protocol"] = redistribution_protocol;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-flag")
    {
        metric_flag = value;
        metric_flag.value_namespace = name_space;
        metric_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classless")
    {
        classless = value;
        classless.value_namespace = name_space;
        classless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-flag")
    {
        metric_flag.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "classless")
    {
        classless.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistribution-protocol" || name == "metric-flag" || name == "metric" || name == "classless" || name == "nssa-only")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::RedistributionProtocol()
    :
    protocol_type{YType::enumeration, "protocol-type"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    bgp_as_number{YType::str, "bgp-as-number"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    connected_instance{YType::str, "connected-instance"}
{

    yang_name = "redistribution-protocol"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::~RedistributionProtocol()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::has_data() const
{
    return protocol_type.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| bgp_as_number.is_set
	|| eigrp_as_number.is_set
	|| connected_instance.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_type.yfilter)
	|| ydk::is_set(isis_instance_id.yfilter)
	|| ydk::is_set(ospf_process_id.yfilter)
	|| ydk::is_set(bgp_as_number.yfilter)
	|| ydk::is_set(eigrp_as_number.yfilter)
	|| ydk::is_set(connected_instance.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_type.is_set || is_set(protocol_type.yfilter)) leaf_name_data.push_back(protocol_type.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.yfilter)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.yfilter)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (bgp_as_number.is_set || is_set(bgp_as_number.yfilter)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.yfilter)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (connected_instance.is_set || is_set(connected_instance.yfilter)) leaf_name_data.push_back(connected_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-type")
    {
        protocol_type = value;
        protocol_type.value_namespace = name_space;
        protocol_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id = value;
        isis_instance_id.value_namespace = name_space;
        isis_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id = value;
        ospf_process_id.value_namespace = name_space;
        ospf_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
        bgp_as_number.value_namespace = name_space;
        bgp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
        eigrp_as_number.value_namespace = name_space;
        eigrp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-instance")
    {
        connected_instance = value;
        connected_instance.value_namespace = name_space;
        connected_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-type")
    {
        protocol_type.yfilter = yfilter;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id.yfilter = yfilter;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id.yfilter = yfilter;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number.yfilter = yfilter;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number.yfilter = yfilter;
    }
    if(value_path == "connected-instance")
    {
        connected_instance.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-type" || name == "isis-instance-id" || name == "ospf-process-id" || name == "bgp-as-number" || name == "eigrp-as-number" || name == "connected-instance")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Areas()
{

    yang_name = "areas"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::~Areas()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Area()
    :
    area_id{YType::int32, "area-id"}
    	,
    flood_list_area_table(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable>())
	,neighbors(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors>())
	,interface_briefs(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs>())
	,requests(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests>())
	,retransmissions(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions>())
	,area_statistics(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics>())
	,neighbor_details(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails>())
	,interfaces(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces>())
{
    flood_list_area_table->parent = this;
    neighbors->parent = this;
    interface_briefs->parent = this;
    requests->parent = this;
    retransmissions->parent = this;
    area_statistics->parent = this;
    neighbor_details->parent = this;
    interfaces->parent = this;

    yang_name = "area"; yang_parent_name = "areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::~Area()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::has_data() const
{
    return area_id.is_set
	|| (flood_list_area_table !=  nullptr && flood_list_area_table->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (interface_briefs !=  nullptr && interface_briefs->has_data())
	|| (requests !=  nullptr && requests->has_data())
	|| (retransmissions !=  nullptr && retransmissions->has_data())
	|| (area_statistics !=  nullptr && area_statistics->has_data())
	|| (neighbor_details !=  nullptr && neighbor_details->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| (flood_list_area_table !=  nullptr && flood_list_area_table->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (interface_briefs !=  nullptr && interface_briefs->has_operation())
	|| (requests !=  nullptr && requests->has_operation())
	|| (retransmissions !=  nullptr && retransmissions->has_operation())
	|| (area_statistics !=  nullptr && area_statistics->has_operation())
	|| (neighbor_details !=  nullptr && neighbor_details->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flood-list-area-table")
    {
        if(flood_list_area_table == nullptr)
        {
            flood_list_area_table = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable>();
        }
        return flood_list_area_table;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "interface-briefs")
    {
        if(interface_briefs == nullptr)
        {
            interface_briefs = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs>();
        }
        return interface_briefs;
    }

    if(child_yang_name == "requests")
    {
        if(requests == nullptr)
        {
            requests = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests>();
        }
        return requests;
    }

    if(child_yang_name == "retransmissions")
    {
        if(retransmissions == nullptr)
        {
            retransmissions = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions>();
        }
        return retransmissions;
    }

    if(child_yang_name == "area-statistics")
    {
        if(area_statistics == nullptr)
        {
            area_statistics = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics>();
        }
        return area_statistics;
    }

    if(child_yang_name == "neighbor-details")
    {
        if(neighbor_details == nullptr)
        {
            neighbor_details = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails>();
        }
        return neighbor_details;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flood_list_area_table != nullptr)
    {
        children["flood-list-area-table"] = flood_list_area_table;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(interface_briefs != nullptr)
    {
        children["interface-briefs"] = interface_briefs;
    }

    if(requests != nullptr)
    {
        children["requests"] = requests;
    }

    if(retransmissions != nullptr)
    {
        children["retransmissions"] = retransmissions;
    }

    if(area_statistics != nullptr)
    {
        children["area-statistics"] = area_statistics;
    }

    if(neighbor_details != nullptr)
    {
        children["neighbor-details"] = neighbor_details;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flood-list-area-table" || name == "neighbors" || name == "interface-briefs" || name == "requests" || name == "retransmissions" || name == "area-statistics" || name == "neighbor-details" || name == "interfaces" || name == "area-id")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::FloodListAreaTable()
{

    yang_name = "flood-list-area-table"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::~FloodListAreaTable()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::has_data() const
{
    for (std::size_t index=0; index<flood.size(); index++)
    {
        if(flood[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::has_operation() const
{
    for (std::size_t index=0; index<flood.size(); index++)
    {
        if(flood[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-list-area-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flood")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood>();
        c->parent = this;
        flood.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : flood)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flood")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::Flood()
    :
    interface_name{YType::str, "interface-name"},
    flood_interface_name{YType::str, "flood-interface-name"},
    flood_pacing_timer{YType::uint32, "flood-pacing-timer"},
    flood_lsa_count{YType::uint32, "flood-lsa-count"}
{

    yang_name = "flood"; yang_parent_name = "flood-list-area-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::~Flood()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::has_data() const
{
    for (std::size_t index=0; index<area_flood.size(); index++)
    {
        if(area_flood[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<as_flood.size(); index++)
    {
        if(as_flood[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| flood_interface_name.is_set
	|| flood_pacing_timer.is_set
	|| flood_lsa_count.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::has_operation() const
{
    for (std::size_t index=0; index<area_flood.size(); index++)
    {
        if(area_flood[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<as_flood.size(); index++)
    {
        if(as_flood[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(flood_interface_name.yfilter)
	|| ydk::is_set(flood_pacing_timer.yfilter)
	|| ydk::is_set(flood_lsa_count.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (flood_interface_name.is_set || is_set(flood_interface_name.yfilter)) leaf_name_data.push_back(flood_interface_name.get_name_leafdata());
    if (flood_pacing_timer.is_set || is_set(flood_pacing_timer.yfilter)) leaf_name_data.push_back(flood_pacing_timer.get_name_leafdata());
    if (flood_lsa_count.is_set || is_set(flood_lsa_count.yfilter)) leaf_name_data.push_back(flood_lsa_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-flood")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood>();
        c->parent = this;
        area_flood.push_back(c);
        return c;
    }

    if(child_yang_name == "as-flood")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood>();
        c->parent = this;
        as_flood.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : area_flood)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : as_flood)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-interface-name")
    {
        flood_interface_name = value;
        flood_interface_name.value_namespace = name_space;
        flood_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-pacing-timer")
    {
        flood_pacing_timer = value;
        flood_pacing_timer.value_namespace = name_space;
        flood_pacing_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-lsa-count")
    {
        flood_lsa_count = value;
        flood_lsa_count.value_namespace = name_space;
        flood_lsa_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "flood-interface-name")
    {
        flood_interface_name.yfilter = yfilter;
    }
    if(value_path == "flood-pacing-timer")
    {
        flood_pacing_timer.yfilter = yfilter;
    }
    if(value_path == "flood-lsa-count")
    {
        flood_lsa_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-flood" || name == "as-flood" || name == "interface-name" || name == "flood-interface-name" || name == "flood-pacing-timer" || name == "flood-lsa-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::AreaFlood()
    :
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_ls_id{YType::str, "header-ls-id"},
    header_advertising_router{YType::str, "header-advertising-router"},
    header_sequence_number{YType::uint32, "header-sequence-number"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"}
{

    yang_name = "area-flood"; yang_parent_name = "flood"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::~AreaFlood()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::has_data() const
{
    return header_lsa_type.is_set
	|| header_lsa_age.is_set
	|| header_ls_id.is_set
	|| header_advertising_router.is_set
	|| header_sequence_number.is_set
	|| header_lsa_checksum.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-lsa-type" || name == "header-lsa-age" || name == "header-ls-id" || name == "header-advertising-router" || name == "header-sequence-number" || name == "header-lsa-checksum")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::AsFlood()
    :
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_ls_id{YType::str, "header-ls-id"},
    header_advertising_router{YType::str, "header-advertising-router"},
    header_sequence_number{YType::uint32, "header-sequence-number"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"}
{

    yang_name = "as-flood"; yang_parent_name = "flood"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::~AsFlood()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::has_data() const
{
    return header_lsa_type.is_set
	|| header_lsa_age.is_set
	|| header_ls_id.is_set
	|| header_advertising_router.is_set
	|| header_sequence_number.is_set
	|| header_lsa_checksum.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-lsa-type" || name == "header-lsa-age" || name == "header-ls-id" || name == "header-advertising-router" || name == "header-sequence-number" || name == "header-lsa-checksum")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::~Neighbors()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    dr_bdr_state{YType::enumeration, "dr-bdr-state"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"},
    neighbor_madj_interface{YType::boolean, "neighbor-madj-interface"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::has_data() const
{
    return interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_interface_name.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_state.is_set
	|| dr_bdr_state.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_up_time.is_set
	|| neighbor_madj_interface.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_address_xr.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter)
	|| ydk::is_set(neighbor_dr_priority.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(dr_bdr_state.yfilter)
	|| ydk::is_set(neighbor_dead_timer.yfilter)
	|| ydk::is_set(neighbor_up_time.yfilter)
	|| ydk::is_set(neighbor_madj_interface.yfilter)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.yfilter)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.yfilter)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (dr_bdr_state.is_set || is_set(dr_bdr_state.yfilter)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.yfilter)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.yfilter)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.yfilter)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
        neighbor_address_xr.value_namespace = name_space;
        neighbor_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
        neighbor_dr_priority.value_namespace = name_space;
        neighbor_dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
        dr_bdr_state.value_namespace = name_space;
        dr_bdr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
        neighbor_dead_timer.value_namespace = name_space;
        neighbor_dead_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
        neighbor_up_time.value_namespace = name_space;
        neighbor_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
        neighbor_madj_interface.value_namespace = name_space;
        neighbor_madj_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "interface-name" || name == "neighbor-address" || name == "neighbor-id" || name == "neighbor-address-xr" || name == "neighbor-interface-name" || name == "neighbor-dr-priority" || name == "neighbor-state" || name == "dr-bdr-state" || name == "neighbor-dead-timer" || name == "neighbor-up-time" || name == "neighbor-madj-interface")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
        bfd_status_flag.value_namespace = name_space;
        bfd_status_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBriefs()
{

    yang_name = "interface-briefs"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::~InterfaceBriefs()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::has_data() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::has_operation() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-brief")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief>();
        c->parent = this;
        interface_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-brief")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceBrief()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_area{YType::str, "interface-area"},
    interface_address{YType::str, "interface-address"},
    interface_mask{YType::uint32, "interface-mask"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"},
    interface_fast_detect_hold_down{YType::boolean, "interface-fast-detect-hold-down"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interfaceis_madj{YType::boolean, "interfaceis-madj"},
    interface_madj_count{YType::uint16, "interface-madj-count"}
{

    yang_name = "interface-brief"; yang_parent_name = "interface-briefs"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::~InterfaceBrief()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::has_data() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_area.is_set
	|| interface_address.is_set
	|| interface_mask.is_set
	|| interface_link_cost.is_set
	|| ospf_interface_state.is_set
	|| interface_fast_detect_hold_down.is_set
	|| interface_neighbor_count.is_set
	|| interface_adj_neighbor_count.is_set
	|| interfaceis_madj.is_set
	|| interface_madj_count.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::has_operation() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_mask.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter)
	|| ydk::is_set(interface_fast_detect_hold_down.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(interface_adj_neighbor_count.yfilter)
	|| ydk::is_set(interfaceis_madj.yfilter)
	|| ydk::is_set(interface_madj_count.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_mask.is_set || is_set(interface_mask.yfilter)) leaf_name_data.push_back(interface_mask.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());
    if (interface_fast_detect_hold_down.is_set || is_set(interface_fast_detect_hold_down.yfilter)) leaf_name_data.push_back(interface_fast_detect_hold_down.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.yfilter)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interfaceis_madj.is_set || is_set(interfaceis_madj.yfilter)) leaf_name_data.push_back(interfaceis_madj.get_name_leafdata());
    if (interface_madj_count.is_set || is_set(interface_madj_count.yfilter)) leaf_name_data.push_back(interface_madj_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-madj")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj>();
        c->parent = this;
        interface_madj.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_madj)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mask")
    {
        interface_mask = value;
        interface_mask.value_namespace = name_space;
        interface_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down = value;
        interface_fast_detect_hold_down.value_namespace = name_space;
        interface_fast_detect_hold_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
        interface_adj_neighbor_count.value_namespace = name_space;
        interface_adj_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj = value;
        interfaceis_madj.value_namespace = name_space;
        interfaceis_madj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count = value;
        interface_madj_count.value_namespace = name_space;
        interface_madj_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-mask")
    {
        interface_mask.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj.yfilter = yfilter;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-madj" || name == "interface-name" || name == "interface-name-xr" || name == "interface-area" || name == "interface-address" || name == "interface-mask" || name == "interface-link-cost" || name == "ospf-interface-state" || name == "interface-fast-detect-hold-down" || name == "interface-neighbor-count" || name == "interface-adj-neighbor-count" || name == "interfaceis-madj" || name == "interface-madj-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::InterfaceMadj()
    :
    interface_area{YType::str, "interface-area"},
    madj_area_id{YType::uint32, "madj-area-id"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{

    yang_name = "interface-madj"; yang_parent_name = "interface-brief"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::~InterfaceMadj()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_data() const
{
    return interface_area.is_set
	|| madj_area_id.is_set
	|| interface_neighbor_count.is_set
	|| interface_adj_neighbor_count.is_set
	|| interface_link_cost.is_set
	|| ospf_interface_state.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(madj_area_id.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(interface_adj_neighbor_count.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-madj";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (madj_area_id.is_set || is_set(madj_area_id.yfilter)) leaf_name_data.push_back(madj_area_id.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.yfilter)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id = value;
        madj_area_id.value_namespace = name_space;
        madj_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
        interface_adj_neighbor_count.value_namespace = name_space;
        interface_adj_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-area" || name == "madj-area-id" || name == "interface-neighbor-count" || name == "interface-adj-neighbor-count" || name == "interface-link-cost" || name == "ospf-interface-state")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Requests()
{

    yang_name = "requests"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::~Requests()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request>();
        c->parent = this;
        request.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : request)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    request_neighbor_id{YType::str, "request-neighbor-id"},
    request_neighbor_address{YType::str, "request-neighbor-address"},
    request_interface_name{YType::str, "request-interface-name"}
{

    yang_name = "request"; yang_parent_name = "requests"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::~Request()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| request_neighbor_id.is_set
	|| request_neighbor_address.is_set
	|| request_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(request_neighbor_id.yfilter)
	|| ydk::is_set(request_neighbor_address.yfilter)
	|| ydk::is_set(request_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (request_neighbor_id.is_set || is_set(request_neighbor_id.yfilter)) leaf_name_data.push_back(request_neighbor_id.get_name_leafdata());
    if (request_neighbor_address.is_set || is_set(request_neighbor_address.yfilter)) leaf_name_data.push_back(request_neighbor_address.get_name_leafdata());
    if (request_interface_name.is_set || is_set(request_interface_name.yfilter)) leaf_name_data.push_back(request_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_>();
        c->parent = this;
        request.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : request)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-neighbor-id")
    {
        request_neighbor_id = value;
        request_neighbor_id.value_namespace = name_space;
        request_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-neighbor-address")
    {
        request_neighbor_address = value;
        request_neighbor_address.value_namespace = name_space;
        request_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-interface-name")
    {
        request_interface_name = value;
        request_interface_name.value_namespace = name_space;
        request_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "request-neighbor-id")
    {
        request_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "request-neighbor-address")
    {
        request_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "request-interface-name")
    {
        request_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request" || name == "interface-name" || name == "neighbor-address" || name == "request-neighbor-id" || name == "request-neighbor-address" || name == "request-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::Request_()
    :
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_ls_id{YType::str, "header-ls-id"},
    header_advertising_router{YType::str, "header-advertising-router"},
    header_sequence_number{YType::uint32, "header-sequence-number"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"}
{

    yang_name = "request"; yang_parent_name = "request"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::~Request_()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::has_data() const
{
    return header_lsa_type.is_set
	|| header_lsa_age.is_set
	|| header_ls_id.is_set
	|| header_advertising_router.is_set
	|| header_sequence_number.is_set
	|| header_lsa_checksum.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-lsa-type" || name == "header-lsa-age" || name == "header-ls-id" || name == "header-advertising-router" || name == "header-sequence-number" || name == "header-lsa-checksum")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmissions()
{

    yang_name = "retransmissions"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::~Retransmissions()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::has_data() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::has_operation() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmissions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retransmission")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission>();
        c->parent = this;
        retransmission.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : retransmission)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmission")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::Retransmission()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    retransmission_neighbor_id{YType::str, "retransmission-neighbor-id"},
    retransmission_neighbor_ip_address{YType::str, "retransmission-neighbor-ip-address"},
    retransmission_interface_name{YType::str, "retransmission-interface-name"},
    retransmission_timer{YType::uint32, "retransmission-timer"},
    retransmission_count{YType::uint32, "retransmission-count"}
{

    yang_name = "retransmission"; yang_parent_name = "retransmissions"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::~Retransmission()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::has_data() const
{
    for (std::size_t index=0; index<retransmission_area_db.size(); index++)
    {
        if(retransmission_area_db[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<retransmission_asdb.size(); index++)
    {
        if(retransmission_asdb[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| retransmission_neighbor_id.is_set
	|| retransmission_neighbor_ip_address.is_set
	|| retransmission_interface_name.is_set
	|| retransmission_timer.is_set
	|| retransmission_count.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::has_operation() const
{
    for (std::size_t index=0; index<retransmission_area_db.size(); index++)
    {
        if(retransmission_area_db[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<retransmission_asdb.size(); index++)
    {
        if(retransmission_asdb[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(retransmission_neighbor_id.yfilter)
	|| ydk::is_set(retransmission_neighbor_ip_address.yfilter)
	|| ydk::is_set(retransmission_interface_name.yfilter)
	|| ydk::is_set(retransmission_timer.yfilter)
	|| ydk::is_set(retransmission_count.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (retransmission_neighbor_id.is_set || is_set(retransmission_neighbor_id.yfilter)) leaf_name_data.push_back(retransmission_neighbor_id.get_name_leafdata());
    if (retransmission_neighbor_ip_address.is_set || is_set(retransmission_neighbor_ip_address.yfilter)) leaf_name_data.push_back(retransmission_neighbor_ip_address.get_name_leafdata());
    if (retransmission_interface_name.is_set || is_set(retransmission_interface_name.yfilter)) leaf_name_data.push_back(retransmission_interface_name.get_name_leafdata());
    if (retransmission_timer.is_set || is_set(retransmission_timer.yfilter)) leaf_name_data.push_back(retransmission_timer.get_name_leafdata());
    if (retransmission_count.is_set || is_set(retransmission_count.yfilter)) leaf_name_data.push_back(retransmission_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retransmission-area-db")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb>();
        c->parent = this;
        retransmission_area_db.push_back(c);
        return c;
    }

    if(child_yang_name == "retransmission-asdb")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb>();
        c->parent = this;
        retransmission_asdb.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : retransmission_area_db)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : retransmission_asdb)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-neighbor-id")
    {
        retransmission_neighbor_id = value;
        retransmission_neighbor_id.value_namespace = name_space;
        retransmission_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-neighbor-ip-address")
    {
        retransmission_neighbor_ip_address = value;
        retransmission_neighbor_ip_address.value_namespace = name_space;
        retransmission_neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-interface-name")
    {
        retransmission_interface_name = value;
        retransmission_interface_name.value_namespace = name_space;
        retransmission_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer = value;
        retransmission_timer.value_namespace = name_space;
        retransmission_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-count")
    {
        retransmission_count = value;
        retransmission_count.value_namespace = name_space;
        retransmission_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "retransmission-neighbor-id")
    {
        retransmission_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "retransmission-neighbor-ip-address")
    {
        retransmission_neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "retransmission-interface-name")
    {
        retransmission_interface_name.yfilter = yfilter;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer.yfilter = yfilter;
    }
    if(value_path == "retransmission-count")
    {
        retransmission_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmission-area-db" || name == "retransmission-asdb" || name == "interface-name" || name == "neighbor-address" || name == "retransmission-neighbor-id" || name == "retransmission-neighbor-ip-address" || name == "retransmission-interface-name" || name == "retransmission-timer" || name == "retransmission-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::RetransmissionAreaDb()
    :
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_ls_id{YType::str, "header-ls-id"},
    header_advertising_router{YType::str, "header-advertising-router"},
    header_sequence_number{YType::uint32, "header-sequence-number"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"}
{

    yang_name = "retransmission-area-db"; yang_parent_name = "retransmission"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::~RetransmissionAreaDb()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::has_data() const
{
    return header_lsa_type.is_set
	|| header_lsa_age.is_set
	|| header_ls_id.is_set
	|| header_advertising_router.is_set
	|| header_sequence_number.is_set
	|| header_lsa_checksum.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-area-db";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-lsa-type" || name == "header-lsa-age" || name == "header-ls-id" || name == "header-advertising-router" || name == "header-sequence-number" || name == "header-lsa-checksum")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::RetransmissionAsdb()
    :
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_ls_id{YType::str, "header-ls-id"},
    header_advertising_router{YType::str, "header-advertising-router"},
    header_sequence_number{YType::uint32, "header-sequence-number"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"}
{

    yang_name = "retransmission-asdb"; yang_parent_name = "retransmission"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::~RetransmissionAsdb()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::has_data() const
{
    return header_lsa_type.is_set
	|| header_lsa_age.is_set
	|| header_ls_id.is_set
	|| header_advertising_router.is_set
	|| header_sequence_number.is_set
	|| header_lsa_checksum.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-asdb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-lsa-type" || name == "header-lsa-age" || name == "header-ls-id" || name == "header-advertising-router" || name == "header-sequence-number" || name == "header-lsa-checksum")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::AreaStatistics()
    :
    interface_stats_entries(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries>())
{
    interface_stats_entries->parent = this;

    yang_name = "area-statistics"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::~AreaStatistics()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::has_data() const
{
    return (interface_stats_entries !=  nullptr && interface_stats_entries->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (interface_stats_entries !=  nullptr && interface_stats_entries->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entries")
    {
        if(interface_stats_entries == nullptr)
        {
            interface_stats_entries = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries>();
        }
        return interface_stats_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_stats_entries != nullptr)
    {
        children["interface-stats-entries"] = interface_stats_entries;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entries")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntries()
{

    yang_name = "interface-stats-entries"; yang_parent_name = "area-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::~InterfaceStatsEntries()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::has_data() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::has_operation() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entry")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry>();
        c->parent = this;
        interface_stats_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_stats_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::InterfaceStatsEntry()
    :
    interface_name{YType::str, "interface-name"},
    handle{YType::str, "handle"},
    if_name_str{YType::str, "if-name-str"}
{

    yang_name = "interface-stats-entry"; yang_parent_name = "interface-stats-entries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::~InterfaceStatsEntry()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_data() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| handle.is_set
	|| if_name_str.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_operation() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(if_name_str.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entry" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (if_name_str.is_set || is_set(if_name_str.yfilter)) leaf_name_data.push_back(if_name_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-entry")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry>();
        c->parent = this;
        if_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : if_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-name-str")
    {
        if_name_str = value;
        if_name_str.value_namespace = name_space;
        if_name_str.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
    if(value_path == "if-name-str")
    {
        if_name_str.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-entry" || name == "interface-name" || name == "handle" || name == "if-name-str")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfEntry()
    :
    madj_intf{YType::boolean, "madj-intf"},
    area_id{YType::uint32, "area-id"},
    area_id_str{YType::str, "area-id-str"}
{

    yang_name = "if-entry"; yang_parent_name = "interface-stats-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::~IfEntry()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_data() const
{
    for (std::size_t index=0; index<if_stat.size(); index++)
    {
        if(if_stat[index]->has_data())
            return true;
    }
    return madj_intf.is_set
	|| area_id.is_set
	|| area_id_str.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_operation() const
{
    for (std::size_t index=0; index<if_stat.size(); index++)
    {
        if(if_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(madj_intf.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_id_str.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (madj_intf.is_set || is_set(madj_intf.yfilter)) leaf_name_data.push_back(madj_intf.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_id_str.is_set || is_set(area_id_str.yfilter)) leaf_name_data.push_back(area_id_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-stat")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat>();
        c->parent = this;
        if_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : if_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "madj-intf")
    {
        madj_intf = value;
        madj_intf.value_namespace = name_space;
        madj_intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id-str")
    {
        area_id_str = value;
        area_id_str.value_namespace = name_space;
        area_id_str.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "madj-intf")
    {
        madj_intf.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-id-str")
    {
        area_id_str.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-stat" || name == "madj-intf" || name == "area-id" || name == "area-id-str")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::IfStat()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "if-stat"; yang_parent_name = "if-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::~IfStat()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetails()
{

    yang_name = "neighbor-details"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::~NeighborDetails()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::has_data() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::has_operation() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-detail")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail>();
        c->parent = this;
        neighbor_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-detail")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborDetail()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_area_id{YType::str, "neighbor-area-id"},
    state_change_count{YType::uint16, "state-change-count"},
    neighbor_cost{YType::uint16, "neighbor-cost"},
    neighbor_filter{YType::boolean, "neighbor-filter"},
    neighbor_designated_router_address{YType::str, "neighbor-designated-router-address"},
    neighbor_backup_designated_router_address{YType::str, "neighbor-backup-designated-router-address"},
    interface_type{YType::enumeration, "interface-type"},
    poll_interval{YType::uint32, "poll-interval"},
    next_poll_interval{YType::uint32, "next-poll-interval"},
    neighbor_option{YType::uint8, "neighbor-option"},
    pending_events{YType::uint16, "pending-events"},
    neighbor_lls_option{YType::uint32, "neighbor-lls-option"},
    oob_resynchronization{YType::boolean, "oob-resynchronization"},
    nsf_router_state{YType::enumeration, "nsf-router-state"},
    last_oob_time{YType::uint32, "last-oob-time"},
    lfa_interface{YType::str, "lfa-interface"},
    lfa_next_hop{YType::str, "lfa-next-hop"},
    lfa_neighbor_id{YType::str, "lfa-neighbor-id"},
    lfa_neighbor_revision{YType::uint32, "lfa-neighbor-revision"},
    neighbor_ack_list_count{YType::uint32, "neighbor-ack-list-count"},
    neighbor_ack_list_high_watermark{YType::uint32, "neighbor-ack-list-high-watermark"},
    adjacency_sid_label{YType::uint32, "adjacency-sid-label"},
    adjacency_sid_protected{YType::boolean, "adjacency-sid-protected"},
    adjacency_sid_unprotected_label{YType::uint32, "adjacency-sid-unprotected-label"},
    neighbor_interface_id{YType::uint16, "neighbor-interface-id"}
    	,
    neighbor_summary(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary>())
	,neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation>())
	,neighbor_retransmission_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>())
{
    neighbor_summary->parent = this;
    neighbor_bfd_information->parent = this;
    neighbor_retransmission_information->parent = this;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor-details"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::~NeighborDetail()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::has_data() const
{
    return interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_area_id.is_set
	|| state_change_count.is_set
	|| neighbor_cost.is_set
	|| neighbor_filter.is_set
	|| neighbor_designated_router_address.is_set
	|| neighbor_backup_designated_router_address.is_set
	|| interface_type.is_set
	|| poll_interval.is_set
	|| next_poll_interval.is_set
	|| neighbor_option.is_set
	|| pending_events.is_set
	|| neighbor_lls_option.is_set
	|| oob_resynchronization.is_set
	|| nsf_router_state.is_set
	|| last_oob_time.is_set
	|| lfa_interface.is_set
	|| lfa_next_hop.is_set
	|| lfa_neighbor_id.is_set
	|| lfa_neighbor_revision.is_set
	|| neighbor_ack_list_count.is_set
	|| neighbor_ack_list_high_watermark.is_set
	|| adjacency_sid_label.is_set
	|| adjacency_sid_protected.is_set
	|| adjacency_sid_unprotected_label.is_set
	|| neighbor_interface_id.is_set
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_data())
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data())
	|| (neighbor_retransmission_information !=  nullptr && neighbor_retransmission_information->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_area_id.yfilter)
	|| ydk::is_set(state_change_count.yfilter)
	|| ydk::is_set(neighbor_cost.yfilter)
	|| ydk::is_set(neighbor_filter.yfilter)
	|| ydk::is_set(neighbor_designated_router_address.yfilter)
	|| ydk::is_set(neighbor_backup_designated_router_address.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(next_poll_interval.yfilter)
	|| ydk::is_set(neighbor_option.yfilter)
	|| ydk::is_set(pending_events.yfilter)
	|| ydk::is_set(neighbor_lls_option.yfilter)
	|| ydk::is_set(oob_resynchronization.yfilter)
	|| ydk::is_set(nsf_router_state.yfilter)
	|| ydk::is_set(last_oob_time.yfilter)
	|| ydk::is_set(lfa_interface.yfilter)
	|| ydk::is_set(lfa_next_hop.yfilter)
	|| ydk::is_set(lfa_neighbor_id.yfilter)
	|| ydk::is_set(lfa_neighbor_revision.yfilter)
	|| ydk::is_set(neighbor_ack_list_count.yfilter)
	|| ydk::is_set(neighbor_ack_list_high_watermark.yfilter)
	|| ydk::is_set(adjacency_sid_label.yfilter)
	|| ydk::is_set(adjacency_sid_protected.yfilter)
	|| ydk::is_set(adjacency_sid_unprotected_label.yfilter)
	|| ydk::is_set(neighbor_interface_id.yfilter)
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_operation())
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation())
	|| (neighbor_retransmission_information !=  nullptr && neighbor_retransmission_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_area_id.is_set || is_set(neighbor_area_id.yfilter)) leaf_name_data.push_back(neighbor_area_id.get_name_leafdata());
    if (state_change_count.is_set || is_set(state_change_count.yfilter)) leaf_name_data.push_back(state_change_count.get_name_leafdata());
    if (neighbor_cost.is_set || is_set(neighbor_cost.yfilter)) leaf_name_data.push_back(neighbor_cost.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.yfilter)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (neighbor_designated_router_address.is_set || is_set(neighbor_designated_router_address.yfilter)) leaf_name_data.push_back(neighbor_designated_router_address.get_name_leafdata());
    if (neighbor_backup_designated_router_address.is_set || is_set(neighbor_backup_designated_router_address.yfilter)) leaf_name_data.push_back(neighbor_backup_designated_router_address.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (next_poll_interval.is_set || is_set(next_poll_interval.yfilter)) leaf_name_data.push_back(next_poll_interval.get_name_leafdata());
    if (neighbor_option.is_set || is_set(neighbor_option.yfilter)) leaf_name_data.push_back(neighbor_option.get_name_leafdata());
    if (pending_events.is_set || is_set(pending_events.yfilter)) leaf_name_data.push_back(pending_events.get_name_leafdata());
    if (neighbor_lls_option.is_set || is_set(neighbor_lls_option.yfilter)) leaf_name_data.push_back(neighbor_lls_option.get_name_leafdata());
    if (oob_resynchronization.is_set || is_set(oob_resynchronization.yfilter)) leaf_name_data.push_back(oob_resynchronization.get_name_leafdata());
    if (nsf_router_state.is_set || is_set(nsf_router_state.yfilter)) leaf_name_data.push_back(nsf_router_state.get_name_leafdata());
    if (last_oob_time.is_set || is_set(last_oob_time.yfilter)) leaf_name_data.push_back(last_oob_time.get_name_leafdata());
    if (lfa_interface.is_set || is_set(lfa_interface.yfilter)) leaf_name_data.push_back(lfa_interface.get_name_leafdata());
    if (lfa_next_hop.is_set || is_set(lfa_next_hop.yfilter)) leaf_name_data.push_back(lfa_next_hop.get_name_leafdata());
    if (lfa_neighbor_id.is_set || is_set(lfa_neighbor_id.yfilter)) leaf_name_data.push_back(lfa_neighbor_id.get_name_leafdata());
    if (lfa_neighbor_revision.is_set || is_set(lfa_neighbor_revision.yfilter)) leaf_name_data.push_back(lfa_neighbor_revision.get_name_leafdata());
    if (neighbor_ack_list_count.is_set || is_set(neighbor_ack_list_count.yfilter)) leaf_name_data.push_back(neighbor_ack_list_count.get_name_leafdata());
    if (neighbor_ack_list_high_watermark.is_set || is_set(neighbor_ack_list_high_watermark.yfilter)) leaf_name_data.push_back(neighbor_ack_list_high_watermark.get_name_leafdata());
    if (adjacency_sid_label.is_set || is_set(adjacency_sid_label.yfilter)) leaf_name_data.push_back(adjacency_sid_label.get_name_leafdata());
    if (adjacency_sid_protected.is_set || is_set(adjacency_sid_protected.yfilter)) leaf_name_data.push_back(adjacency_sid_protected.get_name_leafdata());
    if (adjacency_sid_unprotected_label.is_set || is_set(adjacency_sid_unprotected_label.yfilter)) leaf_name_data.push_back(adjacency_sid_unprotected_label.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.yfilter)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-summary")
    {
        if(neighbor_summary == nullptr)
        {
            neighbor_summary = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary>();
        }
        return neighbor_summary;
    }

    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    if(child_yang_name == "neighbor-retransmission-information")
    {
        if(neighbor_retransmission_information == nullptr)
        {
            neighbor_retransmission_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>();
        }
        return neighbor_retransmission_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_summary != nullptr)
    {
        children["neighbor-summary"] = neighbor_summary;
    }

    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    if(neighbor_retransmission_information != nullptr)
    {
        children["neighbor-retransmission-information"] = neighbor_retransmission_information;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-area-id")
    {
        neighbor_area_id = value;
        neighbor_area_id.value_namespace = name_space;
        neighbor_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-count")
    {
        state_change_count = value;
        state_change_count.value_namespace = name_space;
        state_change_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost = value;
        neighbor_cost.value_namespace = name_space;
        neighbor_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
        neighbor_filter.value_namespace = name_space;
        neighbor_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address = value;
        neighbor_designated_router_address.value_namespace = name_space;
        neighbor_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address = value;
        neighbor_backup_designated_router_address.value_namespace = name_space;
        neighbor_backup_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval = value;
        next_poll_interval.value_namespace = name_space;
        next_poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option = value;
        neighbor_option.value_namespace = name_space;
        neighbor_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-events")
    {
        pending_events = value;
        pending_events.value_namespace = name_space;
        pending_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-lls-option")
    {
        neighbor_lls_option = value;
        neighbor_lls_option.value_namespace = name_space;
        neighbor_lls_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oob-resynchronization")
    {
        oob_resynchronization = value;
        oob_resynchronization.value_namespace = name_space;
        oob_resynchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-router-state")
    {
        nsf_router_state = value;
        nsf_router_state.value_namespace = name_space;
        nsf_router_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-oob-time")
    {
        last_oob_time = value;
        last_oob_time.value_namespace = name_space;
        last_oob_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-interface")
    {
        lfa_interface = value;
        lfa_interface.value_namespace = name_space;
        lfa_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-next-hop")
    {
        lfa_next_hop = value;
        lfa_next_hop.value_namespace = name_space;
        lfa_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-neighbor-id")
    {
        lfa_neighbor_id = value;
        lfa_neighbor_id.value_namespace = name_space;
        lfa_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-neighbor-revision")
    {
        lfa_neighbor_revision = value;
        lfa_neighbor_revision.value_namespace = name_space;
        lfa_neighbor_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ack-list-count")
    {
        neighbor_ack_list_count = value;
        neighbor_ack_list_count.value_namespace = name_space;
        neighbor_ack_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ack-list-high-watermark")
    {
        neighbor_ack_list_high_watermark = value;
        neighbor_ack_list_high_watermark.value_namespace = name_space;
        neighbor_ack_list_high_watermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sid-label")
    {
        adjacency_sid_label = value;
        adjacency_sid_label.value_namespace = name_space;
        adjacency_sid_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sid-protected")
    {
        adjacency_sid_protected = value;
        adjacency_sid_protected.value_namespace = name_space;
        adjacency_sid_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sid-unprotected-label")
    {
        adjacency_sid_unprotected_label = value;
        adjacency_sid_unprotected_label.value_namespace = name_space;
        adjacency_sid_unprotected_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
        neighbor_interface_id.value_namespace = name_space;
        neighbor_interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-area-id")
    {
        neighbor_area_id.yfilter = yfilter;
    }
    if(value_path == "state-change-count")
    {
        state_change_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter.yfilter = yfilter;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval.yfilter = yfilter;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option.yfilter = yfilter;
    }
    if(value_path == "pending-events")
    {
        pending_events.yfilter = yfilter;
    }
    if(value_path == "neighbor-lls-option")
    {
        neighbor_lls_option.yfilter = yfilter;
    }
    if(value_path == "oob-resynchronization")
    {
        oob_resynchronization.yfilter = yfilter;
    }
    if(value_path == "nsf-router-state")
    {
        nsf_router_state.yfilter = yfilter;
    }
    if(value_path == "last-oob-time")
    {
        last_oob_time.yfilter = yfilter;
    }
    if(value_path == "lfa-interface")
    {
        lfa_interface.yfilter = yfilter;
    }
    if(value_path == "lfa-next-hop")
    {
        lfa_next_hop.yfilter = yfilter;
    }
    if(value_path == "lfa-neighbor-id")
    {
        lfa_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "lfa-neighbor-revision")
    {
        lfa_neighbor_revision.yfilter = yfilter;
    }
    if(value_path == "neighbor-ack-list-count")
    {
        neighbor_ack_list_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-ack-list-high-watermark")
    {
        neighbor_ack_list_high_watermark.yfilter = yfilter;
    }
    if(value_path == "adjacency-sid-label")
    {
        adjacency_sid_label.yfilter = yfilter;
    }
    if(value_path == "adjacency-sid-protected")
    {
        adjacency_sid_protected.yfilter = yfilter;
    }
    if(value_path == "adjacency-sid-unprotected-label")
    {
        adjacency_sid_unprotected_label.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-summary" || name == "neighbor-bfd-information" || name == "neighbor-retransmission-information" || name == "interface-name" || name == "neighbor-address" || name == "neighbor-area-id" || name == "state-change-count" || name == "neighbor-cost" || name == "neighbor-filter" || name == "neighbor-designated-router-address" || name == "neighbor-backup-designated-router-address" || name == "interface-type" || name == "poll-interval" || name == "next-poll-interval" || name == "neighbor-option" || name == "pending-events" || name == "neighbor-lls-option" || name == "oob-resynchronization" || name == "nsf-router-state" || name == "last-oob-time" || name == "lfa-interface" || name == "lfa-next-hop" || name == "lfa-neighbor-id" || name == "lfa-neighbor-revision" || name == "neighbor-ack-list-count" || name == "neighbor-ack-list-high-watermark" || name == "adjacency-sid-label" || name == "adjacency-sid-protected" || name == "adjacency-sid-unprotected-label" || name == "neighbor-interface-id")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborSummary()
    :
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    dr_bdr_state{YType::enumeration, "dr-bdr-state"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"},
    neighbor_madj_interface{YType::boolean, "neighbor-madj-interface"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;

    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::~NeighborSummary()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::has_data() const
{
    return neighbor_id.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_interface_name.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_state.is_set
	|| dr_bdr_state.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_up_time.is_set
	|| neighbor_madj_interface.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_address_xr.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter)
	|| ydk::is_set(neighbor_dr_priority.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(dr_bdr_state.yfilter)
	|| ydk::is_set(neighbor_dead_timer.yfilter)
	|| ydk::is_set(neighbor_up_time.yfilter)
	|| ydk::is_set(neighbor_madj_interface.yfilter)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.yfilter)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.yfilter)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (dr_bdr_state.is_set || is_set(dr_bdr_state.yfilter)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.yfilter)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.yfilter)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.yfilter)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
        neighbor_address_xr.value_namespace = name_space;
        neighbor_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
        neighbor_dr_priority.value_namespace = name_space;
        neighbor_dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
        dr_bdr_state.value_namespace = name_space;
        dr_bdr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
        neighbor_dead_timer.value_namespace = name_space;
        neighbor_dead_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
        neighbor_up_time.value_namespace = name_space;
        neighbor_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
        neighbor_madj_interface.value_namespace = name_space;
        neighbor_madj_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "neighbor-id" || name == "neighbor-address-xr" || name == "neighbor-interface-name" || name == "neighbor-dr-priority" || name == "neighbor-state" || name == "dr-bdr-state" || name == "neighbor-dead-timer" || name == "neighbor-up-time" || name == "neighbor-madj-interface")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
        bfd_status_flag.value_namespace = name_space;
        bfd_status_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
        bfd_status_flag.value_namespace = name_space;
        bfd_status_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::NeighborRetransmissionInformation()
    :
    dbd_retransmission_count{YType::uint32, "dbd-retransmission-count"},
    dbd_retransmission_total_count{YType::uint32, "dbd-retransmission-total-count"},
    area_flooding_index{YType::uint32, "area-flooding-index"},
    as_flood_index{YType::uint32, "as-flood-index"},
    neighbor_retransmission_count{YType::uint32, "neighbor-retransmission-count"},
    number_of_retransmissions{YType::uint32, "number-of-retransmissions"},
    area_first_flood_information{YType::uint32, "area-first-flood-information"},
    area_first_flood_information_index{YType::uint32, "area-first-flood-information-index"},
    as_first_flood_information{YType::uint32, "as-first-flood-information"},
    as_first_flood_information_index{YType::uint32, "as-first-flood-information-index"},
    area_next_flood_information{YType::uint32, "area-next-flood-information"},
    area_next_flood_information_index{YType::uint32, "area-next-flood-information-index"},
    as_next_flood_information{YType::uint32, "as-next-flood-information"},
    as_next_flood_information_index{YType::uint32, "as-next-flood-information-index"},
    last_retransmission_length{YType::uint32, "last-retransmission-length"},
    maximum_retransmission_length{YType::uint32, "maximum-retransmission-length"},
    last_retransmission_time{YType::uint32, "last-retransmission-time"},
    maximum_retransmission_time{YType::uint32, "maximum-retransmission-time"},
    lsa_retransmission_timer{YType::uint32, "lsa-retransmission-timer"}
{

    yang_name = "neighbor-retransmission-information"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::~NeighborRetransmissionInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_data() const
{
    return dbd_retransmission_count.is_set
	|| dbd_retransmission_total_count.is_set
	|| area_flooding_index.is_set
	|| as_flood_index.is_set
	|| neighbor_retransmission_count.is_set
	|| number_of_retransmissions.is_set
	|| area_first_flood_information.is_set
	|| area_first_flood_information_index.is_set
	|| as_first_flood_information.is_set
	|| as_first_flood_information_index.is_set
	|| area_next_flood_information.is_set
	|| area_next_flood_information_index.is_set
	|| as_next_flood_information.is_set
	|| as_next_flood_information_index.is_set
	|| last_retransmission_length.is_set
	|| maximum_retransmission_length.is_set
	|| last_retransmission_time.is_set
	|| maximum_retransmission_time.is_set
	|| lsa_retransmission_timer.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dbd_retransmission_count.yfilter)
	|| ydk::is_set(dbd_retransmission_total_count.yfilter)
	|| ydk::is_set(area_flooding_index.yfilter)
	|| ydk::is_set(as_flood_index.yfilter)
	|| ydk::is_set(neighbor_retransmission_count.yfilter)
	|| ydk::is_set(number_of_retransmissions.yfilter)
	|| ydk::is_set(area_first_flood_information.yfilter)
	|| ydk::is_set(area_first_flood_information_index.yfilter)
	|| ydk::is_set(as_first_flood_information.yfilter)
	|| ydk::is_set(as_first_flood_information_index.yfilter)
	|| ydk::is_set(area_next_flood_information.yfilter)
	|| ydk::is_set(area_next_flood_information_index.yfilter)
	|| ydk::is_set(as_next_flood_information.yfilter)
	|| ydk::is_set(as_next_flood_information_index.yfilter)
	|| ydk::is_set(last_retransmission_length.yfilter)
	|| ydk::is_set(maximum_retransmission_length.yfilter)
	|| ydk::is_set(last_retransmission_time.yfilter)
	|| ydk::is_set(maximum_retransmission_time.yfilter)
	|| ydk::is_set(lsa_retransmission_timer.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-retransmission-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dbd_retransmission_count.is_set || is_set(dbd_retransmission_count.yfilter)) leaf_name_data.push_back(dbd_retransmission_count.get_name_leafdata());
    if (dbd_retransmission_total_count.is_set || is_set(dbd_retransmission_total_count.yfilter)) leaf_name_data.push_back(dbd_retransmission_total_count.get_name_leafdata());
    if (area_flooding_index.is_set || is_set(area_flooding_index.yfilter)) leaf_name_data.push_back(area_flooding_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.yfilter)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (neighbor_retransmission_count.is_set || is_set(neighbor_retransmission_count.yfilter)) leaf_name_data.push_back(neighbor_retransmission_count.get_name_leafdata());
    if (number_of_retransmissions.is_set || is_set(number_of_retransmissions.yfilter)) leaf_name_data.push_back(number_of_retransmissions.get_name_leafdata());
    if (area_first_flood_information.is_set || is_set(area_first_flood_information.yfilter)) leaf_name_data.push_back(area_first_flood_information.get_name_leafdata());
    if (area_first_flood_information_index.is_set || is_set(area_first_flood_information_index.yfilter)) leaf_name_data.push_back(area_first_flood_information_index.get_name_leafdata());
    if (as_first_flood_information.is_set || is_set(as_first_flood_information.yfilter)) leaf_name_data.push_back(as_first_flood_information.get_name_leafdata());
    if (as_first_flood_information_index.is_set || is_set(as_first_flood_information_index.yfilter)) leaf_name_data.push_back(as_first_flood_information_index.get_name_leafdata());
    if (area_next_flood_information.is_set || is_set(area_next_flood_information.yfilter)) leaf_name_data.push_back(area_next_flood_information.get_name_leafdata());
    if (area_next_flood_information_index.is_set || is_set(area_next_flood_information_index.yfilter)) leaf_name_data.push_back(area_next_flood_information_index.get_name_leafdata());
    if (as_next_flood_information.is_set || is_set(as_next_flood_information.yfilter)) leaf_name_data.push_back(as_next_flood_information.get_name_leafdata());
    if (as_next_flood_information_index.is_set || is_set(as_next_flood_information_index.yfilter)) leaf_name_data.push_back(as_next_flood_information_index.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.yfilter)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.yfilter)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.yfilter)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.yfilter)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.yfilter)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count = value;
        dbd_retransmission_count.value_namespace = name_space;
        dbd_retransmission_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count = value;
        dbd_retransmission_total_count.value_namespace = name_space;
        dbd_retransmission_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index = value;
        area_flooding_index.value_namespace = name_space;
        area_flooding_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
        as_flood_index.value_namespace = name_space;
        as_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count = value;
        neighbor_retransmission_count.value_namespace = name_space;
        neighbor_retransmission_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions = value;
        number_of_retransmissions.value_namespace = name_space;
        number_of_retransmissions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information = value;
        area_first_flood_information.value_namespace = name_space;
        area_first_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index = value;
        area_first_flood_information_index.value_namespace = name_space;
        area_first_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information = value;
        as_first_flood_information.value_namespace = name_space;
        as_first_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index = value;
        as_first_flood_information_index.value_namespace = name_space;
        as_first_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information = value;
        area_next_flood_information.value_namespace = name_space;
        area_next_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index = value;
        area_next_flood_information_index.value_namespace = name_space;
        area_next_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information = value;
        as_next_flood_information.value_namespace = name_space;
        as_next_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index = value;
        as_next_flood_information_index.value_namespace = name_space;
        as_next_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
        last_retransmission_length.value_namespace = name_space;
        last_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length = value;
        maximum_retransmission_length.value_namespace = name_space;
        maximum_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
        last_retransmission_time.value_namespace = name_space;
        last_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
        maximum_retransmission_time.value_namespace = name_space;
        maximum_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer = value;
        lsa_retransmission_timer.value_namespace = name_space;
        lsa_retransmission_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count.yfilter = yfilter;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count.yfilter = yfilter;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index.yfilter = yfilter;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index.yfilter = yfilter;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count.yfilter = yfilter;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions.yfilter = yfilter;
    }
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information.yfilter = yfilter;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dbd-retransmission-count" || name == "dbd-retransmission-total-count" || name == "area-flooding-index" || name == "as-flood-index" || name == "neighbor-retransmission-count" || name == "number-of-retransmissions" || name == "area-first-flood-information" || name == "area-first-flood-information-index" || name == "as-first-flood-information" || name == "as-first-flood-information-index" || name == "area-next-flood-information" || name == "area-next-flood-information-index" || name == "as-next-flood-information" || name == "as-next-flood-information-index" || name == "last-retransmission-length" || name == "maximum-retransmission-length" || name == "last-retransmission-time" || name == "maximum-retransmission-time" || name == "lsa-retransmission-timer")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::~Interfaces()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_state{YType::enumeration, "interface-state"},
    interface_line_state{YType::boolean, "interface-line-state"},
    interface_address{YType::str, "interface-address"},
    interface_mask{YType::uint32, "interface-mask"},
    interface_area{YType::str, "interface-area"},
    interface_sid{YType::uint32, "interface-sid"},
    interface_sid_php_off{YType::boolean, "interface-sid-php-off"},
    interface_sid_n_flag_clear{YType::boolean, "interface-sid-n-flag-clear"},
    interface_strict_spf_sid{YType::uint32, "interface-strict-spf-sid"},
    interface_strict_spf_sid_php_off{YType::boolean, "interface-strict-spf-sid-php-off"},
    interface_strict_spf_sid_n_flag_clear{YType::boolean, "interface-strict-spf-sid-n-flag-clear"},
    interface_router_id{YType::str, "interface-router-id"},
    network_type{YType::enumeration, "network-type"},
    ip_mtu{YType::uint16, "ip-mtu"},
    maximum_packet_size{YType::uint16, "maximum-packet-size"},
    interface_tunnel_flags{YType::uint32, "interface-tunnel-flags"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_bandwidth{YType::uint32, "interface-bandwidth"},
    cfg_cost_fallback{YType::boolean, "cfg-cost-fallback"},
    interface_cost_fallback{YType::uint16, "interface-cost-fallback"},
    cost_fallback_active{YType::boolean, "cost-fallback-active"},
    configured_ldp_sync{YType::boolean, "configured-ldp-sync"},
    configured_ldp_sync_igp_shortcuts{YType::boolean, "configured-ldp-sync-igp-shortcuts"},
    interface_ldp_sync{YType::boolean, "interface-ldp-sync"},
    configured_demand_circuit{YType::boolean, "configured-demand-circuit"},
    interface_demand_circuit{YType::boolean, "interface-demand-circuit"},
    interface_dc_bitless_lsa_count{YType::uint32, "interface-dc-bitless-lsa-count"},
    transmission_delay{YType::uint16, "transmission-delay"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"},
    interface_priority{YType::uint8, "interface-priority"},
    designated_router{YType::boolean, "designated-router"},
    designated_router_id{YType::str, "designated-router-id"},
    designated_router_address{YType::str, "designated-router-address"},
    backup_designated_router{YType::boolean, "backup-designated-router"},
    backup_designated_router_id{YType::str, "backup-designated-router-id"},
    backup_designated_router_address{YType::str, "backup-designated-router-address"},
    network_lsa_flush_timer{YType::uint32, "network-lsa-flush-timer"},
    interface_lsa_filter{YType::boolean, "interface-lsa-filter"},
    hello_interval{YType::uint32, "hello-interval"},
    hello_interval_ms{YType::uint32, "hello-interval-ms"},
    dead_interval{YType::uint32, "dead-interval"},
    wait_interval{YType::uint32, "wait-interval"},
    interface_retransmission_interrval{YType::uint32, "interface-retransmission-interrval"},
    interface_nsf_enabled{YType::boolean, "interface-nsf-enabled"},
    interface_nsf{YType::boolean, "interface-nsf"},
    interface_last_nsf{YType::uint32, "interface-last-nsf"},
    passive_interface{YType::boolean, "passive-interface"},
    next_hello_time{YType::uint32, "next-hello-time"},
    next_hello_time_ms{YType::uint32, "next-hello-time-ms"},
    ttl_security_enabled{YType::boolean, "ttl-security-enabled"},
    ttl_security_hop_count{YType::uint32, "ttl-security-hop-count"},
    interfaceis_madj{YType::boolean, "interfaceis-madj"},
    interface_madj_count{YType::uint16, "interface-madj-count"},
    prefix_suppress_primary_addresses{YType::boolean, "prefix-suppress-primary-addresses"},
    prefix_suppress_secondary_addresses{YType::boolean, "prefix-suppress-secondary-addresses"},
    is_loopback_stub_network{YType::boolean, "is-loopback-stub-network"},
    interface_ack_list_count{YType::uint32, "interface-ack-list-count"},
    interface_ack_list_high_watermark{YType::uint32, "interface-ack-list-high-watermark"},
    registered_for_link_down_fast_detection{YType::boolean, "registered-for-link-down-fast-detection"},
    fast_detect_hold_down_time{YType::uint32, "fast-detect-hold-down-time"},
    interface_fast_detect_hold_down{YType::boolean, "interface-fast-detect-hold-down"},
    fast_detect_hold_down_time_remaining{YType::uint32, "fast-detect-hold-down-time-remaining"},
    fast_reroute_type{YType::enumeration, "fast-reroute-type"},
    fast_reroute_topology_independent_lfa{YType::boolean, "fast-reroute-topology-independent-lfa"},
    interface_unnum{YType::str, "interface-unnum"},
    interface_forw{YType::boolean, "interface-forw"},
    interface_pri_labels{YType::uint8, "interface-pri-labels"},
    interface_bkp_labels{YType::uint8, "interface-bkp-labels"},
    interface_srte_labels{YType::uint8, "interface-srte-labels"}
    	,
    interface_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation>())
	,active_interface(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface>())
{
    interface_bfd_information->parent = this;
    active_interface->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::~Interface()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_neighbor.size(); index++)
    {
        if(interface_neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipfrr_tiebreakers.size(); index++)
    {
        if(ipfrr_tiebreakers[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip_sec_addr.size(); index++)
    {
        if(ip_sec_addr[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_state.is_set
	|| interface_line_state.is_set
	|| interface_address.is_set
	|| interface_mask.is_set
	|| interface_area.is_set
	|| interface_sid.is_set
	|| interface_sid_php_off.is_set
	|| interface_sid_n_flag_clear.is_set
	|| interface_strict_spf_sid.is_set
	|| interface_strict_spf_sid_php_off.is_set
	|| interface_strict_spf_sid_n_flag_clear.is_set
	|| interface_router_id.is_set
	|| network_type.is_set
	|| ip_mtu.is_set
	|| maximum_packet_size.is_set
	|| interface_tunnel_flags.is_set
	|| interface_link_cost.is_set
	|| interface_bandwidth.is_set
	|| cfg_cost_fallback.is_set
	|| interface_cost_fallback.is_set
	|| cost_fallback_active.is_set
	|| configured_ldp_sync.is_set
	|| configured_ldp_sync_igp_shortcuts.is_set
	|| interface_ldp_sync.is_set
	|| configured_demand_circuit.is_set
	|| interface_demand_circuit.is_set
	|| interface_dc_bitless_lsa_count.is_set
	|| transmission_delay.is_set
	|| ospf_interface_state.is_set
	|| interface_priority.is_set
	|| designated_router.is_set
	|| designated_router_id.is_set
	|| designated_router_address.is_set
	|| backup_designated_router.is_set
	|| backup_designated_router_id.is_set
	|| backup_designated_router_address.is_set
	|| network_lsa_flush_timer.is_set
	|| interface_lsa_filter.is_set
	|| hello_interval.is_set
	|| hello_interval_ms.is_set
	|| dead_interval.is_set
	|| wait_interval.is_set
	|| interface_retransmission_interrval.is_set
	|| interface_nsf_enabled.is_set
	|| interface_nsf.is_set
	|| interface_last_nsf.is_set
	|| passive_interface.is_set
	|| next_hello_time.is_set
	|| next_hello_time_ms.is_set
	|| ttl_security_enabled.is_set
	|| ttl_security_hop_count.is_set
	|| interfaceis_madj.is_set
	|| interface_madj_count.is_set
	|| prefix_suppress_primary_addresses.is_set
	|| prefix_suppress_secondary_addresses.is_set
	|| is_loopback_stub_network.is_set
	|| interface_ack_list_count.is_set
	|| interface_ack_list_high_watermark.is_set
	|| registered_for_link_down_fast_detection.is_set
	|| fast_detect_hold_down_time.is_set
	|| interface_fast_detect_hold_down.is_set
	|| fast_detect_hold_down_time_remaining.is_set
	|| fast_reroute_type.is_set
	|| fast_reroute_topology_independent_lfa.is_set
	|| interface_unnum.is_set
	|| interface_forw.is_set
	|| interface_pri_labels.is_set
	|| interface_bkp_labels.is_set
	|| interface_srte_labels.is_set
	|| (interface_bfd_information !=  nullptr && interface_bfd_information->has_data())
	|| (active_interface !=  nullptr && active_interface->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_neighbor.size(); index++)
    {
        if(interface_neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipfrr_tiebreakers.size(); index++)
    {
        if(ipfrr_tiebreakers[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip_sec_addr.size(); index++)
    {
        if(ip_sec_addr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_state.yfilter)
	|| ydk::is_set(interface_line_state.yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_mask.yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(interface_sid.yfilter)
	|| ydk::is_set(interface_sid_php_off.yfilter)
	|| ydk::is_set(interface_sid_n_flag_clear.yfilter)
	|| ydk::is_set(interface_strict_spf_sid.yfilter)
	|| ydk::is_set(interface_strict_spf_sid_php_off.yfilter)
	|| ydk::is_set(interface_strict_spf_sid_n_flag_clear.yfilter)
	|| ydk::is_set(interface_router_id.yfilter)
	|| ydk::is_set(network_type.yfilter)
	|| ydk::is_set(ip_mtu.yfilter)
	|| ydk::is_set(maximum_packet_size.yfilter)
	|| ydk::is_set(interface_tunnel_flags.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(interface_bandwidth.yfilter)
	|| ydk::is_set(cfg_cost_fallback.yfilter)
	|| ydk::is_set(interface_cost_fallback.yfilter)
	|| ydk::is_set(cost_fallback_active.yfilter)
	|| ydk::is_set(configured_ldp_sync.yfilter)
	|| ydk::is_set(configured_ldp_sync_igp_shortcuts.yfilter)
	|| ydk::is_set(interface_ldp_sync.yfilter)
	|| ydk::is_set(configured_demand_circuit.yfilter)
	|| ydk::is_set(interface_demand_circuit.yfilter)
	|| ydk::is_set(interface_dc_bitless_lsa_count.yfilter)
	|| ydk::is_set(transmission_delay.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter)
	|| ydk::is_set(interface_priority.yfilter)
	|| ydk::is_set(designated_router.yfilter)
	|| ydk::is_set(designated_router_id.yfilter)
	|| ydk::is_set(designated_router_address.yfilter)
	|| ydk::is_set(backup_designated_router.yfilter)
	|| ydk::is_set(backup_designated_router_id.yfilter)
	|| ydk::is_set(backup_designated_router_address.yfilter)
	|| ydk::is_set(network_lsa_flush_timer.yfilter)
	|| ydk::is_set(interface_lsa_filter.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(hello_interval_ms.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(wait_interval.yfilter)
	|| ydk::is_set(interface_retransmission_interrval.yfilter)
	|| ydk::is_set(interface_nsf_enabled.yfilter)
	|| ydk::is_set(interface_nsf.yfilter)
	|| ydk::is_set(interface_last_nsf.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(next_hello_time.yfilter)
	|| ydk::is_set(next_hello_time_ms.yfilter)
	|| ydk::is_set(ttl_security_enabled.yfilter)
	|| ydk::is_set(ttl_security_hop_count.yfilter)
	|| ydk::is_set(interfaceis_madj.yfilter)
	|| ydk::is_set(interface_madj_count.yfilter)
	|| ydk::is_set(prefix_suppress_primary_addresses.yfilter)
	|| ydk::is_set(prefix_suppress_secondary_addresses.yfilter)
	|| ydk::is_set(is_loopback_stub_network.yfilter)
	|| ydk::is_set(interface_ack_list_count.yfilter)
	|| ydk::is_set(interface_ack_list_high_watermark.yfilter)
	|| ydk::is_set(registered_for_link_down_fast_detection.yfilter)
	|| ydk::is_set(fast_detect_hold_down_time.yfilter)
	|| ydk::is_set(interface_fast_detect_hold_down.yfilter)
	|| ydk::is_set(fast_detect_hold_down_time_remaining.yfilter)
	|| ydk::is_set(fast_reroute_type.yfilter)
	|| ydk::is_set(fast_reroute_topology_independent_lfa.yfilter)
	|| ydk::is_set(interface_unnum.yfilter)
	|| ydk::is_set(interface_forw.yfilter)
	|| ydk::is_set(interface_pri_labels.yfilter)
	|| ydk::is_set(interface_bkp_labels.yfilter)
	|| ydk::is_set(interface_srte_labels.yfilter)
	|| (interface_bfd_information !=  nullptr && interface_bfd_information->has_operation())
	|| (active_interface !=  nullptr && active_interface->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.yfilter)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (interface_line_state.is_set || is_set(interface_line_state.yfilter)) leaf_name_data.push_back(interface_line_state.get_name_leafdata());
    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_mask.is_set || is_set(interface_mask.yfilter)) leaf_name_data.push_back(interface_mask.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_sid.is_set || is_set(interface_sid.yfilter)) leaf_name_data.push_back(interface_sid.get_name_leafdata());
    if (interface_sid_php_off.is_set || is_set(interface_sid_php_off.yfilter)) leaf_name_data.push_back(interface_sid_php_off.get_name_leafdata());
    if (interface_sid_n_flag_clear.is_set || is_set(interface_sid_n_flag_clear.yfilter)) leaf_name_data.push_back(interface_sid_n_flag_clear.get_name_leafdata());
    if (interface_strict_spf_sid.is_set || is_set(interface_strict_spf_sid.yfilter)) leaf_name_data.push_back(interface_strict_spf_sid.get_name_leafdata());
    if (interface_strict_spf_sid_php_off.is_set || is_set(interface_strict_spf_sid_php_off.yfilter)) leaf_name_data.push_back(interface_strict_spf_sid_php_off.get_name_leafdata());
    if (interface_strict_spf_sid_n_flag_clear.is_set || is_set(interface_strict_spf_sid_n_flag_clear.yfilter)) leaf_name_data.push_back(interface_strict_spf_sid_n_flag_clear.get_name_leafdata());
    if (interface_router_id.is_set || is_set(interface_router_id.yfilter)) leaf_name_data.push_back(interface_router_id.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.yfilter)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (ip_mtu.is_set || is_set(ip_mtu.yfilter)) leaf_name_data.push_back(ip_mtu.get_name_leafdata());
    if (maximum_packet_size.is_set || is_set(maximum_packet_size.yfilter)) leaf_name_data.push_back(maximum_packet_size.get_name_leafdata());
    if (interface_tunnel_flags.is_set || is_set(interface_tunnel_flags.yfilter)) leaf_name_data.push_back(interface_tunnel_flags.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_bandwidth.is_set || is_set(interface_bandwidth.yfilter)) leaf_name_data.push_back(interface_bandwidth.get_name_leafdata());
    if (cfg_cost_fallback.is_set || is_set(cfg_cost_fallback.yfilter)) leaf_name_data.push_back(cfg_cost_fallback.get_name_leafdata());
    if (interface_cost_fallback.is_set || is_set(interface_cost_fallback.yfilter)) leaf_name_data.push_back(interface_cost_fallback.get_name_leafdata());
    if (cost_fallback_active.is_set || is_set(cost_fallback_active.yfilter)) leaf_name_data.push_back(cost_fallback_active.get_name_leafdata());
    if (configured_ldp_sync.is_set || is_set(configured_ldp_sync.yfilter)) leaf_name_data.push_back(configured_ldp_sync.get_name_leafdata());
    if (configured_ldp_sync_igp_shortcuts.is_set || is_set(configured_ldp_sync_igp_shortcuts.yfilter)) leaf_name_data.push_back(configured_ldp_sync_igp_shortcuts.get_name_leafdata());
    if (interface_ldp_sync.is_set || is_set(interface_ldp_sync.yfilter)) leaf_name_data.push_back(interface_ldp_sync.get_name_leafdata());
    if (configured_demand_circuit.is_set || is_set(configured_demand_circuit.yfilter)) leaf_name_data.push_back(configured_demand_circuit.get_name_leafdata());
    if (interface_demand_circuit.is_set || is_set(interface_demand_circuit.yfilter)) leaf_name_data.push_back(interface_demand_circuit.get_name_leafdata());
    if (interface_dc_bitless_lsa_count.is_set || is_set(interface_dc_bitless_lsa_count.yfilter)) leaf_name_data.push_back(interface_dc_bitless_lsa_count.get_name_leafdata());
    if (transmission_delay.is_set || is_set(transmission_delay.yfilter)) leaf_name_data.push_back(transmission_delay.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());
    if (interface_priority.is_set || is_set(interface_priority.yfilter)) leaf_name_data.push_back(interface_priority.get_name_leafdata());
    if (designated_router.is_set || is_set(designated_router.yfilter)) leaf_name_data.push_back(designated_router.get_name_leafdata());
    if (designated_router_id.is_set || is_set(designated_router_id.yfilter)) leaf_name_data.push_back(designated_router_id.get_name_leafdata());
    if (designated_router_address.is_set || is_set(designated_router_address.yfilter)) leaf_name_data.push_back(designated_router_address.get_name_leafdata());
    if (backup_designated_router.is_set || is_set(backup_designated_router.yfilter)) leaf_name_data.push_back(backup_designated_router.get_name_leafdata());
    if (backup_designated_router_id.is_set || is_set(backup_designated_router_id.yfilter)) leaf_name_data.push_back(backup_designated_router_id.get_name_leafdata());
    if (backup_designated_router_address.is_set || is_set(backup_designated_router_address.yfilter)) leaf_name_data.push_back(backup_designated_router_address.get_name_leafdata());
    if (network_lsa_flush_timer.is_set || is_set(network_lsa_flush_timer.yfilter)) leaf_name_data.push_back(network_lsa_flush_timer.get_name_leafdata());
    if (interface_lsa_filter.is_set || is_set(interface_lsa_filter.yfilter)) leaf_name_data.push_back(interface_lsa_filter.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hello_interval_ms.is_set || is_set(hello_interval_ms.yfilter)) leaf_name_data.push_back(hello_interval_ms.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (wait_interval.is_set || is_set(wait_interval.yfilter)) leaf_name_data.push_back(wait_interval.get_name_leafdata());
    if (interface_retransmission_interrval.is_set || is_set(interface_retransmission_interrval.yfilter)) leaf_name_data.push_back(interface_retransmission_interrval.get_name_leafdata());
    if (interface_nsf_enabled.is_set || is_set(interface_nsf_enabled.yfilter)) leaf_name_data.push_back(interface_nsf_enabled.get_name_leafdata());
    if (interface_nsf.is_set || is_set(interface_nsf.yfilter)) leaf_name_data.push_back(interface_nsf.get_name_leafdata());
    if (interface_last_nsf.is_set || is_set(interface_last_nsf.yfilter)) leaf_name_data.push_back(interface_last_nsf.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (next_hello_time.is_set || is_set(next_hello_time.yfilter)) leaf_name_data.push_back(next_hello_time.get_name_leafdata());
    if (next_hello_time_ms.is_set || is_set(next_hello_time_ms.yfilter)) leaf_name_data.push_back(next_hello_time_ms.get_name_leafdata());
    if (ttl_security_enabled.is_set || is_set(ttl_security_enabled.yfilter)) leaf_name_data.push_back(ttl_security_enabled.get_name_leafdata());
    if (ttl_security_hop_count.is_set || is_set(ttl_security_hop_count.yfilter)) leaf_name_data.push_back(ttl_security_hop_count.get_name_leafdata());
    if (interfaceis_madj.is_set || is_set(interfaceis_madj.yfilter)) leaf_name_data.push_back(interfaceis_madj.get_name_leafdata());
    if (interface_madj_count.is_set || is_set(interface_madj_count.yfilter)) leaf_name_data.push_back(interface_madj_count.get_name_leafdata());
    if (prefix_suppress_primary_addresses.is_set || is_set(prefix_suppress_primary_addresses.yfilter)) leaf_name_data.push_back(prefix_suppress_primary_addresses.get_name_leafdata());
    if (prefix_suppress_secondary_addresses.is_set || is_set(prefix_suppress_secondary_addresses.yfilter)) leaf_name_data.push_back(prefix_suppress_secondary_addresses.get_name_leafdata());
    if (is_loopback_stub_network.is_set || is_set(is_loopback_stub_network.yfilter)) leaf_name_data.push_back(is_loopback_stub_network.get_name_leafdata());
    if (interface_ack_list_count.is_set || is_set(interface_ack_list_count.yfilter)) leaf_name_data.push_back(interface_ack_list_count.get_name_leafdata());
    if (interface_ack_list_high_watermark.is_set || is_set(interface_ack_list_high_watermark.yfilter)) leaf_name_data.push_back(interface_ack_list_high_watermark.get_name_leafdata());
    if (registered_for_link_down_fast_detection.is_set || is_set(registered_for_link_down_fast_detection.yfilter)) leaf_name_data.push_back(registered_for_link_down_fast_detection.get_name_leafdata());
    if (fast_detect_hold_down_time.is_set || is_set(fast_detect_hold_down_time.yfilter)) leaf_name_data.push_back(fast_detect_hold_down_time.get_name_leafdata());
    if (interface_fast_detect_hold_down.is_set || is_set(interface_fast_detect_hold_down.yfilter)) leaf_name_data.push_back(interface_fast_detect_hold_down.get_name_leafdata());
    if (fast_detect_hold_down_time_remaining.is_set || is_set(fast_detect_hold_down_time_remaining.yfilter)) leaf_name_data.push_back(fast_detect_hold_down_time_remaining.get_name_leafdata());
    if (fast_reroute_type.is_set || is_set(fast_reroute_type.yfilter)) leaf_name_data.push_back(fast_reroute_type.get_name_leafdata());
    if (fast_reroute_topology_independent_lfa.is_set || is_set(fast_reroute_topology_independent_lfa.yfilter)) leaf_name_data.push_back(fast_reroute_topology_independent_lfa.get_name_leafdata());
    if (interface_unnum.is_set || is_set(interface_unnum.yfilter)) leaf_name_data.push_back(interface_unnum.get_name_leafdata());
    if (interface_forw.is_set || is_set(interface_forw.yfilter)) leaf_name_data.push_back(interface_forw.get_name_leafdata());
    if (interface_pri_labels.is_set || is_set(interface_pri_labels.yfilter)) leaf_name_data.push_back(interface_pri_labels.get_name_leafdata());
    if (interface_bkp_labels.is_set || is_set(interface_bkp_labels.yfilter)) leaf_name_data.push_back(interface_bkp_labels.get_name_leafdata());
    if (interface_srte_labels.is_set || is_set(interface_srte_labels.yfilter)) leaf_name_data.push_back(interface_srte_labels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-bfd-information")
    {
        if(interface_bfd_information == nullptr)
        {
            interface_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation>();
        }
        return interface_bfd_information;
    }

    if(child_yang_name == "active-interface")
    {
        if(active_interface == nullptr)
        {
            active_interface = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface>();
        }
        return active_interface;
    }

    if(child_yang_name == "srlg")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg>();
        c->parent = this;
        srlg.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-neighbor")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor>();
        c->parent = this;
        interface_neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-madj")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj>();
        c->parent = this;
        interface_madj.push_back(c);
        return c;
    }

    if(child_yang_name == "ipfrr-tiebreakers")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers>();
        c->parent = this;
        ipfrr_tiebreakers.push_back(c);
        return c;
    }

    if(child_yang_name == "ip-sec-addr")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr>();
        c->parent = this;
        ip_sec_addr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_bfd_information != nullptr)
    {
        children["interface-bfd-information"] = interface_bfd_information;
    }

    if(active_interface != nullptr)
    {
        children["active-interface"] = active_interface;
    }

    count = 0;
    for (auto const & c : srlg)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : interface_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : interface_madj)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ipfrr_tiebreakers)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ip_sec_addr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
        interface_state.value_namespace = name_space;
        interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-line-state")
    {
        interface_line_state = value;
        interface_line_state.value_namespace = name_space;
        interface_line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mask")
    {
        interface_mask = value;
        interface_mask.value_namespace = name_space;
        interface_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-sid")
    {
        interface_sid = value;
        interface_sid.value_namespace = name_space;
        interface_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-sid-php-off")
    {
        interface_sid_php_off = value;
        interface_sid_php_off.value_namespace = name_space;
        interface_sid_php_off.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-sid-n-flag-clear")
    {
        interface_sid_n_flag_clear = value;
        interface_sid_n_flag_clear.value_namespace = name_space;
        interface_sid_n_flag_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-strict-spf-sid")
    {
        interface_strict_spf_sid = value;
        interface_strict_spf_sid.value_namespace = name_space;
        interface_strict_spf_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-strict-spf-sid-php-off")
    {
        interface_strict_spf_sid_php_off = value;
        interface_strict_spf_sid_php_off.value_namespace = name_space;
        interface_strict_spf_sid_php_off.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-strict-spf-sid-n-flag-clear")
    {
        interface_strict_spf_sid_n_flag_clear = value;
        interface_strict_spf_sid_n_flag_clear.value_namespace = name_space;
        interface_strict_spf_sid_n_flag_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-router-id")
    {
        interface_router_id = value;
        interface_router_id.value_namespace = name_space;
        interface_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-type")
    {
        network_type = value;
        network_type.value_namespace = name_space;
        network_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-mtu")
    {
        ip_mtu = value;
        ip_mtu.value_namespace = name_space;
        ip_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-packet-size")
    {
        maximum_packet_size = value;
        maximum_packet_size.value_namespace = name_space;
        maximum_packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-tunnel-flags")
    {
        interface_tunnel_flags = value;
        interface_tunnel_flags.value_namespace = name_space;
        interface_tunnel_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth = value;
        interface_bandwidth.value_namespace = name_space;
        interface_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-cost-fallback")
    {
        cfg_cost_fallback = value;
        cfg_cost_fallback.value_namespace = name_space;
        cfg_cost_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-cost-fallback")
    {
        interface_cost_fallback = value;
        interface_cost_fallback.value_namespace = name_space;
        interface_cost_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-fallback-active")
    {
        cost_fallback_active = value;
        cost_fallback_active.value_namespace = name_space;
        cost_fallback_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-ldp-sync")
    {
        configured_ldp_sync = value;
        configured_ldp_sync.value_namespace = name_space;
        configured_ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-ldp-sync-igp-shortcuts")
    {
        configured_ldp_sync_igp_shortcuts = value;
        configured_ldp_sync_igp_shortcuts.value_namespace = name_space;
        configured_ldp_sync_igp_shortcuts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ldp-sync")
    {
        interface_ldp_sync = value;
        interface_ldp_sync.value_namespace = name_space;
        interface_ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-demand-circuit")
    {
        configured_demand_circuit = value;
        configured_demand_circuit.value_namespace = name_space;
        configured_demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-demand-circuit")
    {
        interface_demand_circuit = value;
        interface_demand_circuit.value_namespace = name_space;
        interface_demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-dc-bitless-lsa-count")
    {
        interface_dc_bitless_lsa_count = value;
        interface_dc_bitless_lsa_count.value_namespace = name_space;
        interface_dc_bitless_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmission-delay")
    {
        transmission_delay = value;
        transmission_delay.value_namespace = name_space;
        transmission_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-priority")
    {
        interface_priority = value;
        interface_priority.value_namespace = name_space;
        interface_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router")
    {
        designated_router = value;
        designated_router.value_namespace = name_space;
        designated_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router-id")
    {
        designated_router_id = value;
        designated_router_id.value_namespace = name_space;
        designated_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router-address")
    {
        designated_router_address = value;
        designated_router_address.value_namespace = name_space;
        designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-designated-router")
    {
        backup_designated_router = value;
        backup_designated_router.value_namespace = name_space;
        backup_designated_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-designated-router-id")
    {
        backup_designated_router_id = value;
        backup_designated_router_id.value_namespace = name_space;
        backup_designated_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-designated-router-address")
    {
        backup_designated_router_address = value;
        backup_designated_router_address.value_namespace = name_space;
        backup_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-lsa-flush-timer")
    {
        network_lsa_flush_timer = value;
        network_lsa_flush_timer.value_namespace = name_space;
        network_lsa_flush_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-lsa-filter")
    {
        interface_lsa_filter = value;
        interface_lsa_filter.value_namespace = name_space;
        interface_lsa_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval-ms")
    {
        hello_interval_ms = value;
        hello_interval_ms.value_namespace = name_space;
        hello_interval_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-interval")
    {
        wait_interval = value;
        wait_interval.value_namespace = name_space;
        wait_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-retransmission-interrval")
    {
        interface_retransmission_interrval = value;
        interface_retransmission_interrval.value_namespace = name_space;
        interface_retransmission_interrval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-nsf-enabled")
    {
        interface_nsf_enabled = value;
        interface_nsf_enabled.value_namespace = name_space;
        interface_nsf_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-nsf")
    {
        interface_nsf = value;
        interface_nsf.value_namespace = name_space;
        interface_nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-last-nsf")
    {
        interface_last_nsf = value;
        interface_last_nsf.value_namespace = name_space;
        interface_last_nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hello-time")
    {
        next_hello_time = value;
        next_hello_time.value_namespace = name_space;
        next_hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hello-time-ms")
    {
        next_hello_time_ms = value;
        next_hello_time_ms.value_namespace = name_space;
        next_hello_time_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security-enabled")
    {
        ttl_security_enabled = value;
        ttl_security_enabled.value_namespace = name_space;
        ttl_security_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security-hop-count")
    {
        ttl_security_hop_count = value;
        ttl_security_hop_count.value_namespace = name_space;
        ttl_security_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj = value;
        interfaceis_madj.value_namespace = name_space;
        interfaceis_madj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count = value;
        interface_madj_count.value_namespace = name_space;
        interface_madj_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppress-primary-addresses")
    {
        prefix_suppress_primary_addresses = value;
        prefix_suppress_primary_addresses.value_namespace = name_space;
        prefix_suppress_primary_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppress-secondary-addresses")
    {
        prefix_suppress_secondary_addresses = value;
        prefix_suppress_secondary_addresses.value_namespace = name_space;
        prefix_suppress_secondary_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-loopback-stub-network")
    {
        is_loopback_stub_network = value;
        is_loopback_stub_network.value_namespace = name_space;
        is_loopback_stub_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ack-list-count")
    {
        interface_ack_list_count = value;
        interface_ack_list_count.value_namespace = name_space;
        interface_ack_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ack-list-high-watermark")
    {
        interface_ack_list_high_watermark = value;
        interface_ack_list_high_watermark.value_namespace = name_space;
        interface_ack_list_high_watermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registered-for-link-down-fast-detection")
    {
        registered_for_link_down_fast_detection = value;
        registered_for_link_down_fast_detection.value_namespace = name_space;
        registered_for_link_down_fast_detection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-hold-down-time")
    {
        fast_detect_hold_down_time = value;
        fast_detect_hold_down_time.value_namespace = name_space;
        fast_detect_hold_down_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down = value;
        interface_fast_detect_hold_down.value_namespace = name_space;
        interface_fast_detect_hold_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-hold-down-time-remaining")
    {
        fast_detect_hold_down_time_remaining = value;
        fast_detect_hold_down_time_remaining.value_namespace = name_space;
        fast_detect_hold_down_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute-type")
    {
        fast_reroute_type = value;
        fast_reroute_type.value_namespace = name_space;
        fast_reroute_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute-topology-independent-lfa")
    {
        fast_reroute_topology_independent_lfa = value;
        fast_reroute_topology_independent_lfa.value_namespace = name_space;
        fast_reroute_topology_independent_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-unnum")
    {
        interface_unnum = value;
        interface_unnum.value_namespace = name_space;
        interface_unnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-forw")
    {
        interface_forw = value;
        interface_forw.value_namespace = name_space;
        interface_forw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-pri-labels")
    {
        interface_pri_labels = value;
        interface_pri_labels.value_namespace = name_space;
        interface_pri_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bkp-labels")
    {
        interface_bkp_labels = value;
        interface_bkp_labels.value_namespace = name_space;
        interface_bkp_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-srte-labels")
    {
        interface_srte_labels = value;
        interface_srte_labels.value_namespace = name_space;
        interface_srte_labels.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-state")
    {
        interface_state.yfilter = yfilter;
    }
    if(value_path == "interface-line-state")
    {
        interface_line_state.yfilter = yfilter;
    }
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-mask")
    {
        interface_mask.yfilter = yfilter;
    }
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "interface-sid")
    {
        interface_sid.yfilter = yfilter;
    }
    if(value_path == "interface-sid-php-off")
    {
        interface_sid_php_off.yfilter = yfilter;
    }
    if(value_path == "interface-sid-n-flag-clear")
    {
        interface_sid_n_flag_clear.yfilter = yfilter;
    }
    if(value_path == "interface-strict-spf-sid")
    {
        interface_strict_spf_sid.yfilter = yfilter;
    }
    if(value_path == "interface-strict-spf-sid-php-off")
    {
        interface_strict_spf_sid_php_off.yfilter = yfilter;
    }
    if(value_path == "interface-strict-spf-sid-n-flag-clear")
    {
        interface_strict_spf_sid_n_flag_clear.yfilter = yfilter;
    }
    if(value_path == "interface-router-id")
    {
        interface_router_id.yfilter = yfilter;
    }
    if(value_path == "network-type")
    {
        network_type.yfilter = yfilter;
    }
    if(value_path == "ip-mtu")
    {
        ip_mtu.yfilter = yfilter;
    }
    if(value_path == "maximum-packet-size")
    {
        maximum_packet_size.yfilter = yfilter;
    }
    if(value_path == "interface-tunnel-flags")
    {
        interface_tunnel_flags.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth.yfilter = yfilter;
    }
    if(value_path == "cfg-cost-fallback")
    {
        cfg_cost_fallback.yfilter = yfilter;
    }
    if(value_path == "interface-cost-fallback")
    {
        interface_cost_fallback.yfilter = yfilter;
    }
    if(value_path == "cost-fallback-active")
    {
        cost_fallback_active.yfilter = yfilter;
    }
    if(value_path == "configured-ldp-sync")
    {
        configured_ldp_sync.yfilter = yfilter;
    }
    if(value_path == "configured-ldp-sync-igp-shortcuts")
    {
        configured_ldp_sync_igp_shortcuts.yfilter = yfilter;
    }
    if(value_path == "interface-ldp-sync")
    {
        interface_ldp_sync.yfilter = yfilter;
    }
    if(value_path == "configured-demand-circuit")
    {
        configured_demand_circuit.yfilter = yfilter;
    }
    if(value_path == "interface-demand-circuit")
    {
        interface_demand_circuit.yfilter = yfilter;
    }
    if(value_path == "interface-dc-bitless-lsa-count")
    {
        interface_dc_bitless_lsa_count.yfilter = yfilter;
    }
    if(value_path == "transmission-delay")
    {
        transmission_delay.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
    if(value_path == "interface-priority")
    {
        interface_priority.yfilter = yfilter;
    }
    if(value_path == "designated-router")
    {
        designated_router.yfilter = yfilter;
    }
    if(value_path == "designated-router-id")
    {
        designated_router_id.yfilter = yfilter;
    }
    if(value_path == "designated-router-address")
    {
        designated_router_address.yfilter = yfilter;
    }
    if(value_path == "backup-designated-router")
    {
        backup_designated_router.yfilter = yfilter;
    }
    if(value_path == "backup-designated-router-id")
    {
        backup_designated_router_id.yfilter = yfilter;
    }
    if(value_path == "backup-designated-router-address")
    {
        backup_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "network-lsa-flush-timer")
    {
        network_lsa_flush_timer.yfilter = yfilter;
    }
    if(value_path == "interface-lsa-filter")
    {
        interface_lsa_filter.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval-ms")
    {
        hello_interval_ms.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "wait-interval")
    {
        wait_interval.yfilter = yfilter;
    }
    if(value_path == "interface-retransmission-interrval")
    {
        interface_retransmission_interrval.yfilter = yfilter;
    }
    if(value_path == "interface-nsf-enabled")
    {
        interface_nsf_enabled.yfilter = yfilter;
    }
    if(value_path == "interface-nsf")
    {
        interface_nsf.yfilter = yfilter;
    }
    if(value_path == "interface-last-nsf")
    {
        interface_last_nsf.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "next-hello-time")
    {
        next_hello_time.yfilter = yfilter;
    }
    if(value_path == "next-hello-time-ms")
    {
        next_hello_time_ms.yfilter = yfilter;
    }
    if(value_path == "ttl-security-enabled")
    {
        ttl_security_enabled.yfilter = yfilter;
    }
    if(value_path == "ttl-security-hop-count")
    {
        ttl_security_hop_count.yfilter = yfilter;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj.yfilter = yfilter;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count.yfilter = yfilter;
    }
    if(value_path == "prefix-suppress-primary-addresses")
    {
        prefix_suppress_primary_addresses.yfilter = yfilter;
    }
    if(value_path == "prefix-suppress-secondary-addresses")
    {
        prefix_suppress_secondary_addresses.yfilter = yfilter;
    }
    if(value_path == "is-loopback-stub-network")
    {
        is_loopback_stub_network.yfilter = yfilter;
    }
    if(value_path == "interface-ack-list-count")
    {
        interface_ack_list_count.yfilter = yfilter;
    }
    if(value_path == "interface-ack-list-high-watermark")
    {
        interface_ack_list_high_watermark.yfilter = yfilter;
    }
    if(value_path == "registered-for-link-down-fast-detection")
    {
        registered_for_link_down_fast_detection.yfilter = yfilter;
    }
    if(value_path == "fast-detect-hold-down-time")
    {
        fast_detect_hold_down_time.yfilter = yfilter;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down.yfilter = yfilter;
    }
    if(value_path == "fast-detect-hold-down-time-remaining")
    {
        fast_detect_hold_down_time_remaining.yfilter = yfilter;
    }
    if(value_path == "fast-reroute-type")
    {
        fast_reroute_type.yfilter = yfilter;
    }
    if(value_path == "fast-reroute-topology-independent-lfa")
    {
        fast_reroute_topology_independent_lfa.yfilter = yfilter;
    }
    if(value_path == "interface-unnum")
    {
        interface_unnum.yfilter = yfilter;
    }
    if(value_path == "interface-forw")
    {
        interface_forw.yfilter = yfilter;
    }
    if(value_path == "interface-pri-labels")
    {
        interface_pri_labels.yfilter = yfilter;
    }
    if(value_path == "interface-bkp-labels")
    {
        interface_bkp_labels.yfilter = yfilter;
    }
    if(value_path == "interface-srte-labels")
    {
        interface_srte_labels.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-bfd-information" || name == "active-interface" || name == "srlg" || name == "interface-neighbor" || name == "interface-madj" || name == "ipfrr-tiebreakers" || name == "ip-sec-addr" || name == "interface-name" || name == "interface-name-xr" || name == "interface-state" || name == "interface-line-state" || name == "interface-address" || name == "interface-mask" || name == "interface-area" || name == "interface-sid" || name == "interface-sid-php-off" || name == "interface-sid-n-flag-clear" || name == "interface-strict-spf-sid" || name == "interface-strict-spf-sid-php-off" || name == "interface-strict-spf-sid-n-flag-clear" || name == "interface-router-id" || name == "network-type" || name == "ip-mtu" || name == "maximum-packet-size" || name == "interface-tunnel-flags" || name == "interface-link-cost" || name == "interface-bandwidth" || name == "cfg-cost-fallback" || name == "interface-cost-fallback" || name == "cost-fallback-active" || name == "configured-ldp-sync" || name == "configured-ldp-sync-igp-shortcuts" || name == "interface-ldp-sync" || name == "configured-demand-circuit" || name == "interface-demand-circuit" || name == "interface-dc-bitless-lsa-count" || name == "transmission-delay" || name == "ospf-interface-state" || name == "interface-priority" || name == "designated-router" || name == "designated-router-id" || name == "designated-router-address" || name == "backup-designated-router" || name == "backup-designated-router-id" || name == "backup-designated-router-address" || name == "network-lsa-flush-timer" || name == "interface-lsa-filter" || name == "hello-interval" || name == "hello-interval-ms" || name == "dead-interval" || name == "wait-interval" || name == "interface-retransmission-interrval" || name == "interface-nsf-enabled" || name == "interface-nsf" || name == "interface-last-nsf" || name == "passive-interface" || name == "next-hello-time" || name == "next-hello-time-ms" || name == "ttl-security-enabled" || name == "ttl-security-hop-count" || name == "interfaceis-madj" || name == "interface-madj-count" || name == "prefix-suppress-primary-addresses" || name == "prefix-suppress-secondary-addresses" || name == "is-loopback-stub-network" || name == "interface-ack-list-count" || name == "interface-ack-list-high-watermark" || name == "registered-for-link-down-fast-detection" || name == "fast-detect-hold-down-time" || name == "interface-fast-detect-hold-down" || name == "fast-detect-hold-down-time-remaining" || name == "fast-reroute-type" || name == "fast-reroute-topology-independent-lfa" || name == "interface-unnum" || name == "interface-forw" || name == "interface-pri-labels" || name == "interface-bkp-labels" || name == "interface-srte-labels")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::InterfaceBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "interface-bfd-information"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::~InterfaceBfdInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| interval.is_set
	|| detection_multiplier.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "interval" || name == "detection-multiplier")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::ActiveInterface()
    :
    wait_time{YType::uint32, "wait-time"},
    interface_area_flood_index{YType::uint32, "interface-area-flood-index"},
    interface_as_flood_index{YType::uint32, "interface-as-flood-index"},
    interface_flood_length{YType::uint32, "interface-flood-length"},
    interface_area_next_flood{YType::uint32, "interface-area-next-flood"},
    interface_area_next_flood_index{YType::uint32, "interface-area-next-flood-index"},
    interface_as_next_flood{YType::uint32, "interface-as-next-flood"},
    interface_as_next_flood_index{YType::uint32, "interface-as-next-flood-index"},
    flood_scan_length{YType::uint32, "flood-scan-length"},
    maximum_flood_length{YType::uint32, "maximum-flood-length"},
    last_flood_time{YType::uint32, "last-flood-time"},
    maximum_flood_time{YType::uint32, "maximum-flood-time"},
    interface_flood_pacing_timer{YType::uint32, "interface-flood-pacing-timer"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    suppress_hello_count{YType::uint16, "suppress-hello-count"},
    interface_authentication_type{YType::enumeration, "interface-authentication-type"},
    youngest_md_key{YType::boolean, "youngest-md-key"},
    old_md5_key_neighbor_count{YType::uint32, "old-md5-key-neighbor-count"},
    youngest_md_key_id{YType::uint16, "youngest-md-key-id"},
    keychain_id{YType::uint64, "keychain-id"}
{

    yang_name = "active-interface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::~ActiveInterface()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::has_data() const
{
    for (std::size_t index=0; index<md_keys.size(); index++)
    {
        if(md_keys[index]->has_data())
            return true;
    }
    return wait_time.is_set
	|| interface_area_flood_index.is_set
	|| interface_as_flood_index.is_set
	|| interface_flood_length.is_set
	|| interface_area_next_flood.is_set
	|| interface_area_next_flood_index.is_set
	|| interface_as_next_flood.is_set
	|| interface_as_next_flood_index.is_set
	|| flood_scan_length.is_set
	|| maximum_flood_length.is_set
	|| last_flood_time.is_set
	|| maximum_flood_time.is_set
	|| interface_flood_pacing_timer.is_set
	|| interface_neighbor_count.is_set
	|| suppress_hello_count.is_set
	|| interface_authentication_type.is_set
	|| youngest_md_key.is_set
	|| old_md5_key_neighbor_count.is_set
	|| youngest_md_key_id.is_set
	|| keychain_id.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::has_operation() const
{
    for (std::size_t index=0; index<md_keys.size(); index++)
    {
        if(md_keys[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(wait_time.yfilter)
	|| ydk::is_set(interface_area_flood_index.yfilter)
	|| ydk::is_set(interface_as_flood_index.yfilter)
	|| ydk::is_set(interface_flood_length.yfilter)
	|| ydk::is_set(interface_area_next_flood.yfilter)
	|| ydk::is_set(interface_area_next_flood_index.yfilter)
	|| ydk::is_set(interface_as_next_flood.yfilter)
	|| ydk::is_set(interface_as_next_flood_index.yfilter)
	|| ydk::is_set(flood_scan_length.yfilter)
	|| ydk::is_set(maximum_flood_length.yfilter)
	|| ydk::is_set(last_flood_time.yfilter)
	|| ydk::is_set(maximum_flood_time.yfilter)
	|| ydk::is_set(interface_flood_pacing_timer.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(suppress_hello_count.yfilter)
	|| ydk::is_set(interface_authentication_type.yfilter)
	|| ydk::is_set(youngest_md_key.yfilter)
	|| ydk::is_set(old_md5_key_neighbor_count.yfilter)
	|| ydk::is_set(youngest_md_key_id.yfilter)
	|| ydk::is_set(keychain_id.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());
    if (interface_area_flood_index.is_set || is_set(interface_area_flood_index.yfilter)) leaf_name_data.push_back(interface_area_flood_index.get_name_leafdata());
    if (interface_as_flood_index.is_set || is_set(interface_as_flood_index.yfilter)) leaf_name_data.push_back(interface_as_flood_index.get_name_leafdata());
    if (interface_flood_length.is_set || is_set(interface_flood_length.yfilter)) leaf_name_data.push_back(interface_flood_length.get_name_leafdata());
    if (interface_area_next_flood.is_set || is_set(interface_area_next_flood.yfilter)) leaf_name_data.push_back(interface_area_next_flood.get_name_leafdata());
    if (interface_area_next_flood_index.is_set || is_set(interface_area_next_flood_index.yfilter)) leaf_name_data.push_back(interface_area_next_flood_index.get_name_leafdata());
    if (interface_as_next_flood.is_set || is_set(interface_as_next_flood.yfilter)) leaf_name_data.push_back(interface_as_next_flood.get_name_leafdata());
    if (interface_as_next_flood_index.is_set || is_set(interface_as_next_flood_index.yfilter)) leaf_name_data.push_back(interface_as_next_flood_index.get_name_leafdata());
    if (flood_scan_length.is_set || is_set(flood_scan_length.yfilter)) leaf_name_data.push_back(flood_scan_length.get_name_leafdata());
    if (maximum_flood_length.is_set || is_set(maximum_flood_length.yfilter)) leaf_name_data.push_back(maximum_flood_length.get_name_leafdata());
    if (last_flood_time.is_set || is_set(last_flood_time.yfilter)) leaf_name_data.push_back(last_flood_time.get_name_leafdata());
    if (maximum_flood_time.is_set || is_set(maximum_flood_time.yfilter)) leaf_name_data.push_back(maximum_flood_time.get_name_leafdata());
    if (interface_flood_pacing_timer.is_set || is_set(interface_flood_pacing_timer.yfilter)) leaf_name_data.push_back(interface_flood_pacing_timer.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (suppress_hello_count.is_set || is_set(suppress_hello_count.yfilter)) leaf_name_data.push_back(suppress_hello_count.get_name_leafdata());
    if (interface_authentication_type.is_set || is_set(interface_authentication_type.yfilter)) leaf_name_data.push_back(interface_authentication_type.get_name_leafdata());
    if (youngest_md_key.is_set || is_set(youngest_md_key.yfilter)) leaf_name_data.push_back(youngest_md_key.get_name_leafdata());
    if (old_md5_key_neighbor_count.is_set || is_set(old_md5_key_neighbor_count.yfilter)) leaf_name_data.push_back(old_md5_key_neighbor_count.get_name_leafdata());
    if (youngest_md_key_id.is_set || is_set(youngest_md_key_id.yfilter)) leaf_name_data.push_back(youngest_md_key_id.get_name_leafdata());
    if (keychain_id.is_set || is_set(keychain_id.yfilter)) leaf_name_data.push_back(keychain_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md-keys")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys>();
        c->parent = this;
        md_keys.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : md_keys)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area-flood-index")
    {
        interface_area_flood_index = value;
        interface_area_flood_index.value_namespace = name_space;
        interface_area_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-as-flood-index")
    {
        interface_as_flood_index = value;
        interface_as_flood_index.value_namespace = name_space;
        interface_as_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-flood-length")
    {
        interface_flood_length = value;
        interface_flood_length.value_namespace = name_space;
        interface_flood_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area-next-flood")
    {
        interface_area_next_flood = value;
        interface_area_next_flood.value_namespace = name_space;
        interface_area_next_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area-next-flood-index")
    {
        interface_area_next_flood_index = value;
        interface_area_next_flood_index.value_namespace = name_space;
        interface_area_next_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-as-next-flood")
    {
        interface_as_next_flood = value;
        interface_as_next_flood.value_namespace = name_space;
        interface_as_next_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-as-next-flood-index")
    {
        interface_as_next_flood_index = value;
        interface_as_next_flood_index.value_namespace = name_space;
        interface_as_next_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-scan-length")
    {
        flood_scan_length = value;
        flood_scan_length.value_namespace = name_space;
        flood_scan_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-flood-length")
    {
        maximum_flood_length = value;
        maximum_flood_length.value_namespace = name_space;
        maximum_flood_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flood-time")
    {
        last_flood_time = value;
        last_flood_time.value_namespace = name_space;
        last_flood_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-flood-time")
    {
        maximum_flood_time = value;
        maximum_flood_time.value_namespace = name_space;
        maximum_flood_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-flood-pacing-timer")
    {
        interface_flood_pacing_timer = value;
        interface_flood_pacing_timer.value_namespace = name_space;
        interface_flood_pacing_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-hello-count")
    {
        suppress_hello_count = value;
        suppress_hello_count.value_namespace = name_space;
        suppress_hello_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-authentication-type")
    {
        interface_authentication_type = value;
        interface_authentication_type.value_namespace = name_space;
        interface_authentication_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "youngest-md-key")
    {
        youngest_md_key = value;
        youngest_md_key.value_namespace = name_space;
        youngest_md_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-md5-key-neighbor-count")
    {
        old_md5_key_neighbor_count = value;
        old_md5_key_neighbor_count.value_namespace = name_space;
        old_md5_key_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "youngest-md-key-id")
    {
        youngest_md_key_id = value;
        youngest_md_key_id.value_namespace = name_space;
        youngest_md_key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-id")
    {
        keychain_id = value;
        keychain_id.value_namespace = name_space;
        keychain_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
    if(value_path == "interface-area-flood-index")
    {
        interface_area_flood_index.yfilter = yfilter;
    }
    if(value_path == "interface-as-flood-index")
    {
        interface_as_flood_index.yfilter = yfilter;
    }
    if(value_path == "interface-flood-length")
    {
        interface_flood_length.yfilter = yfilter;
    }
    if(value_path == "interface-area-next-flood")
    {
        interface_area_next_flood.yfilter = yfilter;
    }
    if(value_path == "interface-area-next-flood-index")
    {
        interface_area_next_flood_index.yfilter = yfilter;
    }
    if(value_path == "interface-as-next-flood")
    {
        interface_as_next_flood.yfilter = yfilter;
    }
    if(value_path == "interface-as-next-flood-index")
    {
        interface_as_next_flood_index.yfilter = yfilter;
    }
    if(value_path == "flood-scan-length")
    {
        flood_scan_length.yfilter = yfilter;
    }
    if(value_path == "maximum-flood-length")
    {
        maximum_flood_length.yfilter = yfilter;
    }
    if(value_path == "last-flood-time")
    {
        last_flood_time.yfilter = yfilter;
    }
    if(value_path == "maximum-flood-time")
    {
        maximum_flood_time.yfilter = yfilter;
    }
    if(value_path == "interface-flood-pacing-timer")
    {
        interface_flood_pacing_timer.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "suppress-hello-count")
    {
        suppress_hello_count.yfilter = yfilter;
    }
    if(value_path == "interface-authentication-type")
    {
        interface_authentication_type.yfilter = yfilter;
    }
    if(value_path == "youngest-md-key")
    {
        youngest_md_key.yfilter = yfilter;
    }
    if(value_path == "old-md5-key-neighbor-count")
    {
        old_md5_key_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "youngest-md-key-id")
    {
        youngest_md_key_id.yfilter = yfilter;
    }
    if(value_path == "keychain-id")
    {
        keychain_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md-keys" || name == "wait-time" || name == "interface-area-flood-index" || name == "interface-as-flood-index" || name == "interface-flood-length" || name == "interface-area-next-flood" || name == "interface-area-next-flood-index" || name == "interface-as-next-flood" || name == "interface-as-next-flood-index" || name == "flood-scan-length" || name == "maximum-flood-length" || name == "last-flood-time" || name == "maximum-flood-time" || name == "interface-flood-pacing-timer" || name == "interface-neighbor-count" || name == "suppress-hello-count" || name == "interface-authentication-type" || name == "youngest-md-key" || name == "old-md5-key-neighbor-count" || name == "youngest-md-key-id" || name == "keychain-id")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::MdKeys()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "md-keys"; yang_parent_name = "active-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::~MdKeys()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md-keys";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::Srlg()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "srlg"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::~Srlg()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::InterfaceNeighbor()
    :
    interface_neighbor_id{YType::str, "interface-neighbor-id"},
    interface_neighbor_cost{YType::uint32, "interface-neighbor-cost"},
    neighbor_dr{YType::boolean, "neighbor-dr"},
    neighbor_bdr{YType::boolean, "neighbor-bdr"},
    suppress_hello{YType::boolean, "suppress-hello"}
{

    yang_name = "interface-neighbor"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::~InterfaceNeighbor()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::has_data() const
{
    return interface_neighbor_id.is_set
	|| interface_neighbor_cost.is_set
	|| neighbor_dr.is_set
	|| neighbor_bdr.is_set
	|| suppress_hello.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_neighbor_id.yfilter)
	|| ydk::is_set(interface_neighbor_cost.yfilter)
	|| ydk::is_set(neighbor_dr.yfilter)
	|| ydk::is_set(neighbor_bdr.yfilter)
	|| ydk::is_set(suppress_hello.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_neighbor_id.is_set || is_set(interface_neighbor_id.yfilter)) leaf_name_data.push_back(interface_neighbor_id.get_name_leafdata());
    if (interface_neighbor_cost.is_set || is_set(interface_neighbor_cost.yfilter)) leaf_name_data.push_back(interface_neighbor_cost.get_name_leafdata());
    if (neighbor_dr.is_set || is_set(neighbor_dr.yfilter)) leaf_name_data.push_back(neighbor_dr.get_name_leafdata());
    if (neighbor_bdr.is_set || is_set(neighbor_bdr.yfilter)) leaf_name_data.push_back(neighbor_bdr.get_name_leafdata());
    if (suppress_hello.is_set || is_set(suppress_hello.yfilter)) leaf_name_data.push_back(suppress_hello.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-neighbor-id")
    {
        interface_neighbor_id = value;
        interface_neighbor_id.value_namespace = name_space;
        interface_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-cost")
    {
        interface_neighbor_cost = value;
        interface_neighbor_cost.value_namespace = name_space;
        interface_neighbor_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr")
    {
        neighbor_dr = value;
        neighbor_dr.value_namespace = name_space;
        neighbor_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-bdr")
    {
        neighbor_bdr = value;
        neighbor_bdr.value_namespace = name_space;
        neighbor_bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-hello")
    {
        suppress_hello = value;
        suppress_hello.value_namespace = name_space;
        suppress_hello.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-neighbor-id")
    {
        interface_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-cost")
    {
        interface_neighbor_cost.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr")
    {
        neighbor_dr.yfilter = yfilter;
    }
    if(value_path == "neighbor-bdr")
    {
        neighbor_bdr.yfilter = yfilter;
    }
    if(value_path == "suppress-hello")
    {
        suppress_hello.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-neighbor-id" || name == "interface-neighbor-cost" || name == "neighbor-dr" || name == "neighbor-bdr" || name == "suppress-hello")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::InterfaceMadj()
    :
    interface_area{YType::str, "interface-area"},
    madj_area_id{YType::uint32, "madj-area-id"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{

    yang_name = "interface-madj"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::~InterfaceMadj()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::has_data() const
{
    return interface_area.is_set
	|| madj_area_id.is_set
	|| interface_neighbor_count.is_set
	|| interface_adj_neighbor_count.is_set
	|| interface_link_cost.is_set
	|| ospf_interface_state.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(madj_area_id.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(interface_adj_neighbor_count.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-madj";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (madj_area_id.is_set || is_set(madj_area_id.yfilter)) leaf_name_data.push_back(madj_area_id.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.yfilter)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id = value;
        madj_area_id.value_namespace = name_space;
        madj_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
        interface_adj_neighbor_count.value_namespace = name_space;
        interface_adj_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-area" || name == "madj-area-id" || name == "interface-neighbor-count" || name == "interface-adj-neighbor-count" || name == "interface-link-cost" || name == "ospf-interface-state")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::IpfrrTiebreakers()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{

    yang_name = "ipfrr-tiebreakers"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::~IpfrrTiebreakers()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tiebreaker_type.yfilter)
	|| ydk::is_set(tiebreaker_index.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.yfilter)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.yfilter)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
        tiebreaker_type.value_namespace = name_space;
        tiebreaker_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
        tiebreaker_index.value_namespace = name_space;
        tiebreaker_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type.yfilter = yfilter;
    }
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker-type" || name == "tiebreaker-index")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::IpSecAddr()
    :
    secondary_addr{YType::str, "secondary-addr"},
    secondary_prefix{YType::uint32, "secondary-prefix"}
{

    yang_name = "ip-sec-addr"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::~IpSecAddr()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::has_data() const
{
    return secondary_addr.is_set
	|| secondary_prefix.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secondary_addr.yfilter)
	|| ydk::is_set(secondary_prefix.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sec-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secondary_addr.is_set || is_set(secondary_addr.yfilter)) leaf_name_data.push_back(secondary_addr.get_name_leafdata());
    if (secondary_prefix.is_set || is_set(secondary_prefix.yfilter)) leaf_name_data.push_back(secondary_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secondary-addr")
    {
        secondary_addr = value;
        secondary_addr.value_namespace = name_space;
        secondary_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-prefix")
    {
        secondary_prefix = value;
        secondary_prefix.value_namespace = name_space;
        secondary_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secondary-addr")
    {
        secondary_addr.yfilter = yfilter;
    }
    if(value_path == "secondary-prefix")
    {
        secondary_prefix.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-addr" || name == "secondary-prefix")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Database()
    :
    database_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas>())
	,database_summaries(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries>())
	,database_summary_as(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs>())
	,lsas(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas>())
	,lsa_summaries(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries>())
{
    database_areas->parent = this;
    database_summaries->parent = this;
    database_summary_as->parent = this;
    lsas->parent = this;
    lsa_summaries->parent = this;

    yang_name = "database"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::~Database()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::has_data() const
{
    return (database_areas !=  nullptr && database_areas->has_data())
	|| (database_summaries !=  nullptr && database_summaries->has_data())
	|| (database_summary_as !=  nullptr && database_summary_as->has_data())
	|| (lsas !=  nullptr && lsas->has_data())
	|| (lsa_summaries !=  nullptr && lsa_summaries->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::has_operation() const
{
    return is_set(yfilter)
	|| (database_areas !=  nullptr && database_areas->has_operation())
	|| (database_summaries !=  nullptr && database_summaries->has_operation())
	|| (database_summary_as !=  nullptr && database_summary_as->has_operation())
	|| (lsas !=  nullptr && lsas->has_operation())
	|| (lsa_summaries !=  nullptr && lsa_summaries->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-areas")
    {
        if(database_areas == nullptr)
        {
            database_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas>();
        }
        return database_areas;
    }

    if(child_yang_name == "database-summaries")
    {
        if(database_summaries == nullptr)
        {
            database_summaries = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries>();
        }
        return database_summaries;
    }

    if(child_yang_name == "database-summary-as")
    {
        if(database_summary_as == nullptr)
        {
            database_summary_as = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs>();
        }
        return database_summary_as;
    }

    if(child_yang_name == "lsas")
    {
        if(lsas == nullptr)
        {
            lsas = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas>();
        }
        return lsas;
    }

    if(child_yang_name == "lsa-summaries")
    {
        if(lsa_summaries == nullptr)
        {
            lsa_summaries = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries>();
        }
        return lsa_summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database_areas != nullptr)
    {
        children["database-areas"] = database_areas;
    }

    if(database_summaries != nullptr)
    {
        children["database-summaries"] = database_summaries;
    }

    if(database_summary_as != nullptr)
    {
        children["database-summary-as"] = database_summary_as;
    }

    if(lsas != nullptr)
    {
        children["lsas"] = lsas;
    }

    if(lsa_summaries != nullptr)
    {
        children["lsa-summaries"] = lsa_summaries;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-areas" || name == "database-summaries" || name == "database-summary-as" || name == "lsas" || name == "lsa-summaries")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseAreas()
{

    yang_name = "database-areas"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::~DatabaseAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::has_data() const
{
    for (std::size_t index=0; index<database_area.size(); index++)
    {
        if(database_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::has_operation() const
{
    for (std::size_t index=0; index<database_area.size(); index++)
    {
        if(database_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-area")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea>();
        c->parent = this;
        database_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : database_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-area")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::DatabaseArea()
    :
    area_id{YType::int32, "area-id"}
    	,
    lsas(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas>())
	,lsa_summaries(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries>())
{
    lsas->parent = this;
    lsa_summaries->parent = this;

    yang_name = "database-area"; yang_parent_name = "database-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::~DatabaseArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::has_data() const
{
    return area_id.is_set
	|| (lsas !=  nullptr && lsas->has_data())
	|| (lsa_summaries !=  nullptr && lsa_summaries->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| (lsas !=  nullptr && lsas->has_operation())
	|| (lsa_summaries !=  nullptr && lsa_summaries->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-area" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsas")
    {
        if(lsas == nullptr)
        {
            lsas = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas>();
        }
        return lsas;
    }

    if(child_yang_name == "lsa-summaries")
    {
        if(lsa_summaries == nullptr)
        {
            lsa_summaries = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries>();
        }
        return lsa_summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsas != nullptr)
    {
        children["lsas"] = lsas;
    }

    if(lsa_summaries != nullptr)
    {
        children["lsa-summaries"] = lsa_summaries;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsas" || name == "lsa-summaries" || name == "area-id")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsas()
{

    yang_name = "lsas"; yang_parent_name = "database-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::~Lsas()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::has_data() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::has_operation() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa>();
        c->parent = this;
        lsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : lsa)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::Lsa()
    :
    area_id{YType::int32, "area-id"},
    ls_type{YType::enumeration, "ls-type"},
    ls_id{YType::str, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    interface_name{YType::str, "interface-name"}
    	,
    lsa_header(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader>())
	,lsa_detail_data(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData>())
	,lsa_internal_data(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData>())
{
    lsa_header->parent = this;
    lsa_detail_data->parent = this;
    lsa_internal_data->parent = this;

    yang_name = "lsa"; yang_parent_name = "lsas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::~Lsa()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::has_data() const
{
    return area_id.is_set
	|| ls_type.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| interface_name.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail_data !=  nullptr && lsa_detail_data->has_data())
	|| (lsa_internal_data !=  nullptr && lsa_internal_data->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail_data !=  nullptr && lsa_detail_data->has_operation())
	|| (lsa_internal_data !=  nullptr && lsa_internal_data->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail-data")
    {
        if(lsa_detail_data == nullptr)
        {
            lsa_detail_data = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData>();
        }
        return lsa_detail_data;
    }

    if(child_yang_name == "lsa-internal-data")
    {
        if(lsa_internal_data == nullptr)
        {
            lsa_internal_data = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData>();
        }
        return lsa_internal_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_detail_data != nullptr)
    {
        children["lsa-detail-data"] = lsa_detail_data;
    }

    if(lsa_internal_data != nullptr)
    {
        children["lsa-internal-data"] = lsa_internal_data;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail-data" || name == "lsa-internal-data" || name == "area-id" || name == "ls-type" || name == "ls-id" || name == "advertising-router" || name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::LsaHeader()
    :
    ls_type{YType::enumeration, "ls-type"},
    lsid{YType::str, "lsid"},
    advertising_router{YType::str, "advertising-router"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    dn_age_lsa{YType::boolean, "dn-age-lsa"},
    nsf{YType::boolean, "nsf"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"}
{

    yang_name = "lsa-header"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::has_data() const
{
    return ls_type.is_set
	|| lsid.is_set
	|| advertising_router.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| dn_age_lsa.is_set
	|| nsf.is_set
	|| sequence_number.is_set
	|| checksum.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(lsid.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(dn_age_lsa.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (lsid.is_set || is_set(lsid.yfilter)) leaf_name_data.push_back(lsid.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (dn_age_lsa.is_set || is_set(dn_age_lsa.yfilter)) leaf_name_data.push_back(dn_age_lsa.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsid")
    {
        lsid = value;
        lsid.value_namespace = name_space;
        lsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa = value;
        dn_age_lsa.value_namespace = name_space;
        dn_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "lsid")
    {
        lsid.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ls-type" || name == "lsid" || name == "advertising-router" || name == "lsa-area-id" || name == "lsa-age" || name == "dn-age-lsa" || name == "nsf" || name == "sequence-number" || name == "checksum")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaDetailData()
    :
    tos_capable{YType::boolean, "tos-capable"},
    nssa_translation{YType::boolean, "nssa-translation"},
    demand_circuit{YType::boolean, "demand-circuit"},
    dn_bit{YType::boolean, "dn-bit"},
    lsa_rate_limit_due_time{YType::uint32, "lsa-rate-limit-due-time"},
    lsadb_base_clock{YType::uint64, "lsadb-base-clock"},
    routing_bit{YType::boolean, "routing-bit"},
    advertising_router_reachable{YType::boolean, "advertising-router-reachable"},
    length{YType::uint16, "length"},
    sum_origin{YType::uint16, "sum-origin"},
    ase_origin{YType::uint16, "ase-origin"},
    in_sync{YType::uint8, "in-sync"},
    lsa_prefix_priority{YType::uint8, "lsa-prefix-priority"},
    new_lsa_prefix_priority{YType::uint8, "new-lsa-prefix-priority"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"}
    	,
    lsa_throttle_timer(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer>())
	,lsa_last_updated_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime>())
	,lsadb_base_time_stamp(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp>())
	,not_delete(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete>())
{
    lsa_throttle_timer->parent = this;
    lsa_last_updated_time->parent = this;
    lsadb_base_time_stamp->parent = this;
    not_delete->parent = this;

    yang_name = "lsa-detail-data"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::~LsaDetailData()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::has_data() const
{
    return tos_capable.is_set
	|| nssa_translation.is_set
	|| demand_circuit.is_set
	|| dn_bit.is_set
	|| lsa_rate_limit_due_time.is_set
	|| lsadb_base_clock.is_set
	|| routing_bit.is_set
	|| advertising_router_reachable.is_set
	|| length.is_set
	|| sum_origin.is_set
	|| ase_origin.is_set
	|| in_sync.is_set
	|| lsa_prefix_priority.is_set
	|| new_lsa_prefix_priority.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| (lsa_throttle_timer !=  nullptr && lsa_throttle_timer->has_data())
	|| (lsa_last_updated_time !=  nullptr && lsa_last_updated_time->has_data())
	|| (lsadb_base_time_stamp !=  nullptr && lsadb_base_time_stamp->has_data())
	|| (not_delete !=  nullptr && not_delete->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos_capable.yfilter)
	|| ydk::is_set(nssa_translation.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(dn_bit.yfilter)
	|| ydk::is_set(lsa_rate_limit_due_time.yfilter)
	|| ydk::is_set(lsadb_base_clock.yfilter)
	|| ydk::is_set(routing_bit.yfilter)
	|| ydk::is_set(advertising_router_reachable.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(sum_origin.yfilter)
	|| ydk::is_set(ase_origin.yfilter)
	|| ydk::is_set(in_sync.yfilter)
	|| ydk::is_set(lsa_prefix_priority.yfilter)
	|| ydk::is_set(new_lsa_prefix_priority.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| (lsa_throttle_timer !=  nullptr && lsa_throttle_timer->has_operation())
	|| (lsa_last_updated_time !=  nullptr && lsa_last_updated_time->has_operation())
	|| (lsadb_base_time_stamp !=  nullptr && lsadb_base_time_stamp->has_operation())
	|| (not_delete !=  nullptr && not_delete->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos_capable.is_set || is_set(tos_capable.yfilter)) leaf_name_data.push_back(tos_capable.get_name_leafdata());
    if (nssa_translation.is_set || is_set(nssa_translation.yfilter)) leaf_name_data.push_back(nssa_translation.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (dn_bit.is_set || is_set(dn_bit.yfilter)) leaf_name_data.push_back(dn_bit.get_name_leafdata());
    if (lsa_rate_limit_due_time.is_set || is_set(lsa_rate_limit_due_time.yfilter)) leaf_name_data.push_back(lsa_rate_limit_due_time.get_name_leafdata());
    if (lsadb_base_clock.is_set || is_set(lsadb_base_clock.yfilter)) leaf_name_data.push_back(lsadb_base_clock.get_name_leafdata());
    if (routing_bit.is_set || is_set(routing_bit.yfilter)) leaf_name_data.push_back(routing_bit.get_name_leafdata());
    if (advertising_router_reachable.is_set || is_set(advertising_router_reachable.yfilter)) leaf_name_data.push_back(advertising_router_reachable.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (sum_origin.is_set || is_set(sum_origin.yfilter)) leaf_name_data.push_back(sum_origin.get_name_leafdata());
    if (ase_origin.is_set || is_set(ase_origin.yfilter)) leaf_name_data.push_back(ase_origin.get_name_leafdata());
    if (in_sync.is_set || is_set(in_sync.yfilter)) leaf_name_data.push_back(in_sync.get_name_leafdata());
    if (lsa_prefix_priority.is_set || is_set(lsa_prefix_priority.yfilter)) leaf_name_data.push_back(lsa_prefix_priority.get_name_leafdata());
    if (new_lsa_prefix_priority.is_set || is_set(new_lsa_prefix_priority.yfilter)) leaf_name_data.push_back(new_lsa_prefix_priority.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-throttle-timer")
    {
        if(lsa_throttle_timer == nullptr)
        {
            lsa_throttle_timer = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer>();
        }
        return lsa_throttle_timer;
    }

    if(child_yang_name == "lsa-last-updated-time")
    {
        if(lsa_last_updated_time == nullptr)
        {
            lsa_last_updated_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime>();
        }
        return lsa_last_updated_time;
    }

    if(child_yang_name == "lsadb-base-time-stamp")
    {
        if(lsadb_base_time_stamp == nullptr)
        {
            lsadb_base_time_stamp = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp>();
        }
        return lsadb_base_time_stamp;
    }

    if(child_yang_name == "not-delete")
    {
        if(not_delete == nullptr)
        {
            not_delete = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete>();
        }
        return not_delete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_throttle_timer != nullptr)
    {
        children["lsa-throttle-timer"] = lsa_throttle_timer;
    }

    if(lsa_last_updated_time != nullptr)
    {
        children["lsa-last-updated-time"] = lsa_last_updated_time;
    }

    if(lsadb_base_time_stamp != nullptr)
    {
        children["lsadb-base-time-stamp"] = lsadb_base_time_stamp;
    }

    if(not_delete != nullptr)
    {
        children["not-delete"] = not_delete;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tos-capable")
    {
        tos_capable = value;
        tos_capable.value_namespace = name_space;
        tos_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation = value;
        nssa_translation.value_namespace = name_space;
        nssa_translation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-bit")
    {
        dn_bit = value;
        dn_bit.value_namespace = name_space;
        dn_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-rate-limit-due-time")
    {
        lsa_rate_limit_due_time = value;
        lsa_rate_limit_due_time.value_namespace = name_space;
        lsa_rate_limit_due_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsadb-base-clock")
    {
        lsadb_base_clock = value;
        lsadb_base_clock.value_namespace = name_space;
        lsadb_base_clock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-bit")
    {
        routing_bit = value;
        routing_bit.value_namespace = name_space;
        routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router-reachable")
    {
        advertising_router_reachable = value;
        advertising_router_reachable.value_namespace = name_space;
        advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-origin")
    {
        sum_origin = value;
        sum_origin.value_namespace = name_space;
        sum_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ase-origin")
    {
        ase_origin = value;
        ase_origin.value_namespace = name_space;
        ase_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-sync")
    {
        in_sync = value;
        in_sync.value_namespace = name_space;
        in_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-prefix-priority")
    {
        lsa_prefix_priority = value;
        lsa_prefix_priority.value_namespace = name_space;
        lsa_prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-lsa-prefix-priority")
    {
        new_lsa_prefix_priority = value;
        new_lsa_prefix_priority.value_namespace = name_space;
        new_lsa_prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos-capable")
    {
        tos_capable.yfilter = yfilter;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "dn-bit")
    {
        dn_bit.yfilter = yfilter;
    }
    if(value_path == "lsa-rate-limit-due-time")
    {
        lsa_rate_limit_due_time.yfilter = yfilter;
    }
    if(value_path == "lsadb-base-clock")
    {
        lsadb_base_clock.yfilter = yfilter;
    }
    if(value_path == "routing-bit")
    {
        routing_bit.yfilter = yfilter;
    }
    if(value_path == "advertising-router-reachable")
    {
        advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "sum-origin")
    {
        sum_origin.yfilter = yfilter;
    }
    if(value_path == "ase-origin")
    {
        ase_origin.yfilter = yfilter;
    }
    if(value_path == "in-sync")
    {
        in_sync.yfilter = yfilter;
    }
    if(value_path == "lsa-prefix-priority")
    {
        lsa_prefix_priority.yfilter = yfilter;
    }
    if(value_path == "new-lsa-prefix-priority")
    {
        new_lsa_prefix_priority.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-throttle-timer" || name == "lsa-last-updated-time" || name == "lsadb-base-time-stamp" || name == "not-delete" || name == "tos-capable" || name == "nssa-translation" || name == "demand-circuit" || name == "dn-bit" || name == "lsa-rate-limit-due-time" || name == "lsadb-base-clock" || name == "routing-bit" || name == "advertising-router-reachable" || name == "length" || name == "sum-origin" || name == "ase-origin" || name == "in-sync" || name == "lsa-prefix-priority" || name == "new-lsa-prefix-priority" || name == "lsa-flood-required-post-fail-over")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::LsaThrottleTimer()
    :
    timer_location{YType::enumeration, "timer-location"},
    timer_type{YType::enumeration, "timer-type"},
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    last_inst_second_table_index{YType::uint8, "last-inst-second-table-index"},
    last_inst_minute_table_index{YType::uint8, "last-inst-minute-table-index"}
{

    yang_name = "lsa-throttle-timer"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::~LsaThrottleTimer()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_data() const
{
    return timer_location.is_set
	|| timer_type.is_set
	|| second_table_index.is_set
	|| minute_table_index.is_set
	|| last_inst_second_table_index.is_set
	|| last_inst_minute_table_index.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer_location.yfilter)
	|| ydk::is_set(timer_type.yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(last_inst_second_table_index.yfilter)
	|| ydk::is_set(last_inst_minute_table_index.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-throttle-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_location.is_set || is_set(timer_location.yfilter)) leaf_name_data.push_back(timer_location.get_name_leafdata());
    if (timer_type.is_set || is_set(timer_type.yfilter)) leaf_name_data.push_back(timer_type.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (last_inst_second_table_index.is_set || is_set(last_inst_second_table_index.yfilter)) leaf_name_data.push_back(last_inst_second_table_index.get_name_leafdata());
    if (last_inst_minute_table_index.is_set || is_set(last_inst_minute_table_index.yfilter)) leaf_name_data.push_back(last_inst_minute_table_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer-location")
    {
        timer_location = value;
        timer_location.value_namespace = name_space;
        timer_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-type")
    {
        timer_type = value;
        timer_type.value_namespace = name_space;
        timer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-inst-second-table-index")
    {
        last_inst_second_table_index = value;
        last_inst_second_table_index.value_namespace = name_space;
        last_inst_second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-inst-minute-table-index")
    {
        last_inst_minute_table_index = value;
        last_inst_minute_table_index.value_namespace = name_space;
        last_inst_minute_table_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer-location")
    {
        timer_location.yfilter = yfilter;
    }
    if(value_path == "timer-type")
    {
        timer_type.yfilter = yfilter;
    }
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "last-inst-second-table-index")
    {
        last_inst_second_table_index.yfilter = yfilter;
    }
    if(value_path == "last-inst-minute-table-index")
    {
        last_inst_minute_table_index.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-location" || name == "timer-type" || name == "second-table-index" || name == "minute-table-index" || name == "last-inst-second-table-index" || name == "last-inst-minute-table-index")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::LsaLastUpdatedTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "lsa-last-updated-time"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::~LsaLastUpdatedTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-last-updated-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::LsadbBaseTimeStamp()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "lsadb-base-time-stamp"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::~LsadbBaseTimeStamp()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsadb-base-time-stamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::NotDelete()
    :
    free_time{YType::uint32, "free-time"},
    no_delete{YType::boolean, "no-delete"},
    neighbor_exchange{YType::boolean, "neighbor-exchange"},
    routing_table{YType::boolean, "routing-table"},
    acknowledgement{YType::boolean, "acknowledgement"},
    maximum_age{YType::boolean, "maximum-age"},
    partial_spf{YType::boolean, "partial-spf"},
    flood_pending{YType::boolean, "flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    nsr_ack_pending{YType::boolean, "nsr-ack-pending"},
    sum_orig_pending{YType::boolean, "sum-orig-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"}
{

    yang_name = "not-delete"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::~NotDelete()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::has_data() const
{
    return free_time.is_set
	|| no_delete.is_set
	|| neighbor_exchange.is_set
	|| routing_table.is_set
	|| acknowledgement.is_set
	|| maximum_age.is_set
	|| partial_spf.is_set
	|| flood_pending.is_set
	|| rate_limit.is_set
	|| nsr_ack_pending.is_set
	|| sum_orig_pending.is_set
	|| nsr_flood_required.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(no_delete.yfilter)
	|| ydk::is_set(neighbor_exchange.yfilter)
	|| ydk::is_set(routing_table.yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| ydk::is_set(maximum_age.yfilter)
	|| ydk::is_set(partial_spf.yfilter)
	|| ydk::is_set(flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(nsr_ack_pending.yfilter)
	|| ydk::is_set(sum_orig_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "not-delete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (no_delete.is_set || is_set(no_delete.yfilter)) leaf_name_data.push_back(no_delete.get_name_leafdata());
    if (neighbor_exchange.is_set || is_set(neighbor_exchange.yfilter)) leaf_name_data.push_back(neighbor_exchange.get_name_leafdata());
    if (routing_table.is_set || is_set(routing_table.yfilter)) leaf_name_data.push_back(routing_table.get_name_leafdata());
    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());
    if (maximum_age.is_set || is_set(maximum_age.yfilter)) leaf_name_data.push_back(maximum_age.get_name_leafdata());
    if (partial_spf.is_set || is_set(partial_spf.yfilter)) leaf_name_data.push_back(partial_spf.get_name_leafdata());
    if (flood_pending.is_set || is_set(flood_pending.yfilter)) leaf_name_data.push_back(flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (nsr_ack_pending.is_set || is_set(nsr_ack_pending.yfilter)) leaf_name_data.push_back(nsr_ack_pending.get_name_leafdata());
    if (sum_orig_pending.is_set || is_set(sum_orig_pending.yfilter)) leaf_name_data.push_back(sum_orig_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-delete")
    {
        no_delete = value;
        no_delete.value_namespace = name_space;
        no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-exchange")
    {
        neighbor_exchange = value;
        neighbor_exchange.value_namespace = name_space;
        neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-table")
    {
        routing_table = value;
        routing_table.value_namespace = name_space;
        routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-age")
    {
        maximum_age = value;
        maximum_age.value_namespace = name_space;
        maximum_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial-spf")
    {
        partial_spf = value;
        partial_spf.value_namespace = name_space;
        partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-pending")
    {
        flood_pending = value;
        flood_pending.value_namespace = name_space;
        flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-ack-pending")
    {
        nsr_ack_pending = value;
        nsr_ack_pending.value_namespace = name_space;
        nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-orig-pending")
    {
        sum_orig_pending = value;
        sum_orig_pending.value_namespace = name_space;
        sum_orig_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "no-delete")
    {
        no_delete.yfilter = yfilter;
    }
    if(value_path == "neighbor-exchange")
    {
        neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "routing-table")
    {
        routing_table.yfilter = yfilter;
    }
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
    if(value_path == "maximum-age")
    {
        maximum_age.yfilter = yfilter;
    }
    if(value_path == "partial-spf")
    {
        partial_spf.yfilter = yfilter;
    }
    if(value_path == "flood-pending")
    {
        flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "nsr-ack-pending")
    {
        nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "sum-orig-pending")
    {
        sum_orig_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "free-time" || name == "no-delete" || name == "neighbor-exchange" || name == "routing-table" || name == "acknowledgement" || name == "maximum-age" || name == "partial-spf" || name == "flood-pending" || name == "rate-limit" || name == "nsr-ack-pending" || name == "sum-orig-pending" || name == "nsr-flood-required")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::LsaInternalData()
    :
    internal_lsa_type{YType::enumeration, "internal-lsa-type"}
    	,
    router_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType>())
	,network_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType>())
	,summary_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType>())
	,external_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType>())
	,opaque_link_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType>())
	,opaque_mpls_te_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType>())
	,opaque_grace_lsa(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa>())
	,opaque_router_info_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType>())
	,opaque_ep_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType>())
	,opaque_el_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType>())
{
    router_lsa_type->parent = this;
    network_lsa_type->parent = this;
    summary_lsa_type->parent = this;
    external_lsa_type->parent = this;
    opaque_link_lsa_type->parent = this;
    opaque_mpls_te_lsa_type->parent = this;
    opaque_grace_lsa->parent = this;
    opaque_router_info_lsa_type->parent = this;
    opaque_ep_lsa_type->parent = this;
    opaque_el_lsa_type->parent = this;

    yang_name = "lsa-internal-data"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::~LsaInternalData()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::has_data() const
{
    return internal_lsa_type.is_set
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_data())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_data())
	|| (summary_lsa_type !=  nullptr && summary_lsa_type->has_data())
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_data())
	|| (opaque_link_lsa_type !=  nullptr && opaque_link_lsa_type->has_data())
	|| (opaque_mpls_te_lsa_type !=  nullptr && opaque_mpls_te_lsa_type->has_data())
	|| (opaque_grace_lsa !=  nullptr && opaque_grace_lsa->has_data())
	|| (opaque_router_info_lsa_type !=  nullptr && opaque_router_info_lsa_type->has_data())
	|| (opaque_ep_lsa_type !=  nullptr && opaque_ep_lsa_type->has_data())
	|| (opaque_el_lsa_type !=  nullptr && opaque_el_lsa_type->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_lsa_type.yfilter)
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_operation())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_operation())
	|| (summary_lsa_type !=  nullptr && summary_lsa_type->has_operation())
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_operation())
	|| (opaque_link_lsa_type !=  nullptr && opaque_link_lsa_type->has_operation())
	|| (opaque_mpls_te_lsa_type !=  nullptr && opaque_mpls_te_lsa_type->has_operation())
	|| (opaque_grace_lsa !=  nullptr && opaque_grace_lsa->has_operation())
	|| (opaque_router_info_lsa_type !=  nullptr && opaque_router_info_lsa_type->has_operation())
	|| (opaque_ep_lsa_type !=  nullptr && opaque_ep_lsa_type->has_operation())
	|| (opaque_el_lsa_type !=  nullptr && opaque_el_lsa_type->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-internal-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_lsa_type.is_set || is_set(internal_lsa_type.yfilter)) leaf_name_data.push_back(internal_lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-lsa-type")
    {
        if(router_lsa_type == nullptr)
        {
            router_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType>();
        }
        return router_lsa_type;
    }

    if(child_yang_name == "network-lsa-type")
    {
        if(network_lsa_type == nullptr)
        {
            network_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType>();
        }
        return network_lsa_type;
    }

    if(child_yang_name == "summary-lsa-type")
    {
        if(summary_lsa_type == nullptr)
        {
            summary_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType>();
        }
        return summary_lsa_type;
    }

    if(child_yang_name == "external-lsa-type")
    {
        if(external_lsa_type == nullptr)
        {
            external_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType>();
        }
        return external_lsa_type;
    }

    if(child_yang_name == "opaque-link-lsa-type")
    {
        if(opaque_link_lsa_type == nullptr)
        {
            opaque_link_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType>();
        }
        return opaque_link_lsa_type;
    }

    if(child_yang_name == "opaque-mpls-te-lsa-type")
    {
        if(opaque_mpls_te_lsa_type == nullptr)
        {
            opaque_mpls_te_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType>();
        }
        return opaque_mpls_te_lsa_type;
    }

    if(child_yang_name == "opaque-grace-lsa")
    {
        if(opaque_grace_lsa == nullptr)
        {
            opaque_grace_lsa = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa>();
        }
        return opaque_grace_lsa;
    }

    if(child_yang_name == "opaque-router-info-lsa-type")
    {
        if(opaque_router_info_lsa_type == nullptr)
        {
            opaque_router_info_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType>();
        }
        return opaque_router_info_lsa_type;
    }

    if(child_yang_name == "opaque-ep-lsa-type")
    {
        if(opaque_ep_lsa_type == nullptr)
        {
            opaque_ep_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType>();
        }
        return opaque_ep_lsa_type;
    }

    if(child_yang_name == "opaque-el-lsa-type")
    {
        if(opaque_el_lsa_type == nullptr)
        {
            opaque_el_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType>();
        }
        return opaque_el_lsa_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(router_lsa_type != nullptr)
    {
        children["router-lsa-type"] = router_lsa_type;
    }

    if(network_lsa_type != nullptr)
    {
        children["network-lsa-type"] = network_lsa_type;
    }

    if(summary_lsa_type != nullptr)
    {
        children["summary-lsa-type"] = summary_lsa_type;
    }

    if(external_lsa_type != nullptr)
    {
        children["external-lsa-type"] = external_lsa_type;
    }

    if(opaque_link_lsa_type != nullptr)
    {
        children["opaque-link-lsa-type"] = opaque_link_lsa_type;
    }

    if(opaque_mpls_te_lsa_type != nullptr)
    {
        children["opaque-mpls-te-lsa-type"] = opaque_mpls_te_lsa_type;
    }

    if(opaque_grace_lsa != nullptr)
    {
        children["opaque-grace-lsa"] = opaque_grace_lsa;
    }

    if(opaque_router_info_lsa_type != nullptr)
    {
        children["opaque-router-info-lsa-type"] = opaque_router_info_lsa_type;
    }

    if(opaque_ep_lsa_type != nullptr)
    {
        children["opaque-ep-lsa-type"] = opaque_ep_lsa_type;
    }

    if(opaque_el_lsa_type != nullptr)
    {
        children["opaque-el-lsa-type"] = opaque_el_lsa_type;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-lsa-type")
    {
        internal_lsa_type = value;
        internal_lsa_type.value_namespace = name_space;
        internal_lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-lsa-type")
    {
        internal_lsa_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-lsa-type" || name == "network-lsa-type" || name == "summary-lsa-type" || name == "external-lsa-type" || name == "opaque-link-lsa-type" || name == "opaque-mpls-te-lsa-type" || name == "opaque-grace-lsa" || name == "opaque-router-info-lsa-type" || name == "opaque-ep-lsa-type" || name == "opaque-el-lsa-type" || name == "internal-lsa-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::RouterLsaType()
    :
    router_asbr{YType::boolean, "router-asbr"},
    router_abr{YType::boolean, "router-abr"},
    internal_lsa{YType::boolean, "internal-lsa"}
{

    yang_name = "router-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::~RouterLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<internal_link.size(); index++)
    {
        if(internal_link[index]->has_data())
            return true;
    }
    return router_asbr.is_set
	|| router_abr.is_set
	|| internal_lsa.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<internal_link.size(); index++)
    {
        if(internal_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_asbr.yfilter)
	|| ydk::is_set(router_abr.yfilter)
	|| ydk::is_set(internal_lsa.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_asbr.is_set || is_set(router_asbr.yfilter)) leaf_name_data.push_back(router_asbr.get_name_leafdata());
    if (router_abr.is_set || is_set(router_abr.yfilter)) leaf_name_data.push_back(router_abr.get_name_leafdata());
    if (internal_lsa.is_set || is_set(internal_lsa.yfilter)) leaf_name_data.push_back(internal_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    if(child_yang_name == "internal-link")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink>();
        c->parent = this;
        internal_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : internal_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-asbr")
    {
        router_asbr = value;
        router_asbr.value_namespace = name_space;
        router_asbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-abr")
    {
        router_abr = value;
        router_abr.value_namespace = name_space;
        router_abr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-lsa")
    {
        internal_lsa = value;
        internal_lsa.value_namespace = name_space;
        internal_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-asbr")
    {
        router_asbr.yfilter = yfilter;
    }
    if(value_path == "router-abr")
    {
        router_abr.yfilter = yfilter;
    }
    if(value_path == "internal-lsa")
    {
        internal_lsa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "internal-link" || name == "router-asbr" || name == "router-abr" || name == "internal-lsa")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::Link()
    :
    link_id{YType::str, "link-id"},
    link_data{YType::str, "link-data"},
    link_type{YType::enumeration, "link-type"},
    link_metric{YType::uint16, "link-metric"}
{

    yang_name = "link"; yang_parent_name = "router-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::~Link()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_data() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_data.is_set
	|| link_type.is_set
	|| link_metric.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_operation() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_metric.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.yfilter)) leaf_name_data.push_back(link_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tos")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos>();
        c->parent = this;
        link_tos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : link_tos)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
        link_metric.value_namespace = name_space;
        link_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-metric")
    {
        link_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-tos" || name == "link-id" || name == "link-data" || name == "link-type" || name == "link-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::LinkTos()
    :
    router_tos{YType::uint16, "router-tos"},
    tos_cost{YType::uint16, "tos-cost"}
{

    yang_name = "link-tos"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::~LinkTos()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_data() const
{
    return router_tos.is_set
	|| tos_cost.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_tos.yfilter)
	|| ydk::is_set(tos_cost.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_tos.is_set || is_set(router_tos.yfilter)) leaf_name_data.push_back(router_tos.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.yfilter)) leaf_name_data.push_back(tos_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-tos")
    {
        router_tos = value;
        router_tos.value_namespace = name_space;
        router_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
        tos_cost.value_namespace = name_space;
        tos_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-tos")
    {
        router_tos.yfilter = yfilter;
    }
    if(value_path == "tos-cost")
    {
        tos_cost.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-tos" || name == "tos-cost")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::InternalLink()
    :
    link_id{YType::str, "link-id"},
    link_data{YType::str, "link-data"},
    link_type{YType::enumeration, "link-type"},
    link_metric{YType::uint16, "link-metric"}
{

    yang_name = "internal-link"; yang_parent_name = "router-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::~InternalLink()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_data() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_data.is_set
	|| link_type.is_set
	|| link_metric.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_operation() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_metric.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.yfilter)) leaf_name_data.push_back(link_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tos")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos>();
        c->parent = this;
        link_tos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : link_tos)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
        link_metric.value_namespace = name_space;
        link_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-metric")
    {
        link_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-tos" || name == "link-id" || name == "link-data" || name == "link-type" || name == "link-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::LinkTos()
    :
    router_tos{YType::uint16, "router-tos"},
    tos_cost{YType::uint16, "tos-cost"}
{

    yang_name = "link-tos"; yang_parent_name = "internal-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::~LinkTos()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_data() const
{
    return router_tos.is_set
	|| tos_cost.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_tos.yfilter)
	|| ydk::is_set(tos_cost.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_tos.is_set || is_set(router_tos.yfilter)) leaf_name_data.push_back(router_tos.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.yfilter)) leaf_name_data.push_back(tos_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-tos")
    {
        router_tos = value;
        router_tos.value_namespace = name_space;
        router_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
        tos_cost.value_namespace = name_space;
        tos_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-tos")
    {
        router_tos.yfilter = yfilter;
    }
    if(value_path == "tos-cost")
    {
        tos_cost.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-tos" || name == "tos-cost")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NetworkLsaType()
    :
    network_prefix_length{YType::uint32, "network-prefix-length"}
{

    yang_name = "network-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::~NetworkLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_data() const
{
    for (std::size_t index=0; index<neighbor_router.size(); index++)
    {
        if(neighbor_router[index]->has_data())
            return true;
    }
    return network_prefix_length.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_operation() const
{
    for (std::size_t index=0; index<neighbor_router.size(); index++)
    {
        if(neighbor_router[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_prefix_length.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_prefix_length.is_set || is_set(network_prefix_length.yfilter)) leaf_name_data.push_back(network_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-router")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter>();
        c->parent = this;
        neighbor_router.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor_router)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-prefix-length")
    {
        network_prefix_length = value;
        network_prefix_length.value_namespace = name_space;
        network_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-prefix-length")
    {
        network_prefix_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-router" || name == "network-prefix-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::NeighborRouter()
    :
    entry{YType::str, "entry"}
{

    yang_name = "neighbor-router"; yang_parent_name = "network-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::~NeighborRouter()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaType()
    :
    summary_prefix_length{YType::uint32, "summary-prefix-length"},
    internal_sum_lsa{YType::boolean, "internal-sum-lsa"}
{

    yang_name = "summary-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::~SummaryLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_data() const
{
    for (std::size_t index=0; index<summary_lsa_metric.size(); index++)
    {
        if(summary_lsa_metric[index]->has_data())
            return true;
    }
    return summary_prefix_length.is_set
	|| internal_sum_lsa.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_operation() const
{
    for (std::size_t index=0; index<summary_lsa_metric.size(); index++)
    {
        if(summary_lsa_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(summary_prefix_length.yfilter)
	|| ydk::is_set(internal_sum_lsa.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (summary_prefix_length.is_set || is_set(summary_prefix_length.yfilter)) leaf_name_data.push_back(summary_prefix_length.get_name_leafdata());
    if (internal_sum_lsa.is_set || is_set(internal_sum_lsa.yfilter)) leaf_name_data.push_back(internal_sum_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-lsa-metric")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric>();
        c->parent = this;
        summary_lsa_metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : summary_lsa_metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "summary-prefix-length")
    {
        summary_prefix_length = value;
        summary_prefix_length.value_namespace = name_space;
        summary_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-sum-lsa")
    {
        internal_sum_lsa = value;
        internal_sum_lsa.value_namespace = name_space;
        internal_sum_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "summary-prefix-length")
    {
        summary_prefix_length.yfilter = yfilter;
    }
    if(value_path == "internal-sum-lsa")
    {
        internal_sum_lsa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-lsa-metric" || name == "summary-prefix-length" || name == "internal-sum-lsa")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::SummaryLsaMetric()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "summary-lsa-metric"; yang_parent_name = "summary-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::~SummaryLsaMetric()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalLsaType()
    :
    external_prefix_length{YType::uint32, "external-prefix-length"},
    internal_external_lsa{YType::boolean, "internal-external-lsa"}
{

    yang_name = "external-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::~ExternalLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_data() const
{
    for (std::size_t index=0; index<external_tos_metric.size(); index++)
    {
        if(external_tos_metric[index]->has_data())
            return true;
    }
    return external_prefix_length.is_set
	|| internal_external_lsa.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_operation() const
{
    for (std::size_t index=0; index<external_tos_metric.size(); index++)
    {
        if(external_tos_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(external_prefix_length.yfilter)
	|| ydk::is_set(internal_external_lsa.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_prefix_length.is_set || is_set(external_prefix_length.yfilter)) leaf_name_data.push_back(external_prefix_length.get_name_leafdata());
    if (internal_external_lsa.is_set || is_set(internal_external_lsa.yfilter)) leaf_name_data.push_back(internal_external_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-tos-metric")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric>();
        c->parent = this;
        external_tos_metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : external_tos_metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-prefix-length")
    {
        external_prefix_length = value;
        external_prefix_length.value_namespace = name_space;
        external_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-external-lsa")
    {
        internal_external_lsa = value;
        internal_external_lsa.value_namespace = name_space;
        internal_external_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-prefix-length")
    {
        external_prefix_length.yfilter = yfilter;
    }
    if(value_path == "internal-external-lsa")
    {
        internal_external_lsa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-tos-metric" || name == "external-prefix-length" || name == "internal-external-lsa")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::ExternalTosMetric()
    :
    external_metric{YType::uint32, "external-metric"},
    external_metric_type{YType::enumeration, "external-metric-type"},
    external_tos{YType::uint32, "external-tos"},
    forwarding_address{YType::str, "forwarding-address"},
    external_tag{YType::uint32, "external-tag"}
{

    yang_name = "external-tos-metric"; yang_parent_name = "external-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::~ExternalTosMetric()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_data() const
{
    return external_metric.is_set
	|| external_metric_type.is_set
	|| external_tos.is_set
	|| forwarding_address.is_set
	|| external_tag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_metric.yfilter)
	|| ydk::is_set(external_metric_type.yfilter)
	|| ydk::is_set(external_tos.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_tag.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-tos-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_metric.is_set || is_set(external_metric.yfilter)) leaf_name_data.push_back(external_metric.get_name_leafdata());
    if (external_metric_type.is_set || is_set(external_metric_type.yfilter)) leaf_name_data.push_back(external_metric_type.get_name_leafdata());
    if (external_tos.is_set || is_set(external_tos.yfilter)) leaf_name_data.push_back(external_tos.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.yfilter)) leaf_name_data.push_back(external_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-metric")
    {
        external_metric = value;
        external_metric.value_namespace = name_space;
        external_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-metric-type")
    {
        external_metric_type = value;
        external_metric_type.value_namespace = name_space;
        external_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tos")
    {
        external_tos = value;
        external_tos.value_namespace = name_space;
        external_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
        external_tag.value_namespace = name_space;
        external_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-metric")
    {
        external_metric.yfilter = yfilter;
    }
    if(value_path == "external-metric-type")
    {
        external_metric_type.yfilter = yfilter;
    }
    if(value_path == "external-tos")
    {
        external_tos.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-tag")
    {
        external_tag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-metric" || name == "external-metric-type" || name == "external-tos" || name == "forwarding-address" || name == "external-tag")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::OpaqueLinkLsaType()
    :
    opaque_interface_name{YType::str, "opaque-interface-name"}
{

    yang_name = "opaque-link-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::~OpaqueLinkLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_data() const
{
    return opaque_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opaque_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-link-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_interface_name.is_set || is_set(opaque_interface_name.yfilter)) leaf_name_data.push_back(opaque_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-interface-name")
    {
        opaque_interface_name = value;
        opaque_interface_name.value_namespace = name_space;
        opaque_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-interface-name")
    {
        opaque_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opaque-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::OpaqueMplsTeLsaType()
{

    yang_name = "opaque-mpls-te-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::~OpaqueMplsTeLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-mpls-te-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::Tlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_length{YType::uint16, "tlv-length"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    tlv_data{YType::str, "tlv-data"}
{

    yang_name = "tlv"; yang_parent_name = "opaque-mpls-te-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_data() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return tlv_type.is_set
	|| tlv_length.is_set
	|| mpls_router_id.is_set
	|| mpls_dste_link.is_set
	|| tlv_data.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tlv_type.yfilter)
	|| ydk::is_set(tlv_length.yfilter)
	|| ydk::is_set(mpls_router_id.yfilter)
	|| ydk::is_set(mpls_dste_link.yfilter)
	|| ydk::is_set(tlv_data.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : te_link_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
        tlv_length.value_namespace = name_space;
        tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
        mpls_router_id.value_namespace = name_space;
        mpls_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
        mpls_dste_link.value_namespace = name_space;
        mpls_dste_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
        tlv_data.value_namespace = name_space;
        tlv_data.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
    if(value_path == "tlv-length")
    {
        tlv_length.yfilter = yfilter;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id.yfilter = yfilter;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link.yfilter = yfilter;
    }
    if(value_path == "tlv-data")
    {
        tlv_data.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "tlv-type" || name == "tlv-length" || name == "mpls-router-id" || name == "mpls-dste-link" || name == "tlv-data")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_type.is_set
	|| sub_tlv_length.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
        sub_tlv_type.value_namespace = name_space;
        sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
        sub_tlv_length.value_namespace = name_space;
        sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
        sub_tlv_value.value_namespace = name_space;
        sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-type" || name == "sub-tlv-length" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::OpaqueGraceLsa()
    :
    grace_period{YType::uint32, "grace-period"},
    grace_reason{YType::enumeration, "grace-reason"},
    ip_address{YType::str, "ip-address"}
{

    yang_name = "opaque-grace-lsa"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::~OpaqueGraceLsa()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_data() const
{
    return grace_period.is_set
	|| grace_reason.is_set
	|| ip_address.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grace_period.yfilter)
	|| ydk::is_set(grace_reason.yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-grace-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grace_period.is_set || is_set(grace_period.yfilter)) leaf_name_data.push_back(grace_period.get_name_leafdata());
    if (grace_reason.is_set || is_set(grace_reason.yfilter)) leaf_name_data.push_back(grace_reason.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grace-period")
    {
        grace_period = value;
        grace_period.value_namespace = name_space;
        grace_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grace-reason")
    {
        grace_reason = value;
        grace_reason.value_namespace = name_space;
        grace_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grace-period")
    {
        grace_period.yfilter = yfilter;
    }
    if(value_path == "grace-reason")
    {
        grace_reason.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grace-period" || name == "grace-reason" || name == "ip-address")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRouterInfoLsaType()
    :
    opaque_rilsa_scope{YType::enumeration, "opaque-rilsa-scope"},
    opaque_ri_interface_name{YType::str, "opaque-ri-interface-name"}
{

    yang_name = "opaque-router-info-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::~OpaqueRouterInfoLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_data() const
{
    for (std::size_t index=0; index<opaque_ritlv.size(); index++)
    {
        if(opaque_ritlv[index]->has_data())
            return true;
    }
    return opaque_rilsa_scope.is_set
	|| opaque_ri_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_operation() const
{
    for (std::size_t index=0; index<opaque_ritlv.size(); index++)
    {
        if(opaque_ritlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(opaque_rilsa_scope.yfilter)
	|| ydk::is_set(opaque_ri_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-router-info-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_rilsa_scope.is_set || is_set(opaque_rilsa_scope.yfilter)) leaf_name_data.push_back(opaque_rilsa_scope.get_name_leafdata());
    if (opaque_ri_interface_name.is_set || is_set(opaque_ri_interface_name.yfilter)) leaf_name_data.push_back(opaque_ri_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opaque-ritlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv>();
        c->parent = this;
        opaque_ritlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : opaque_ritlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-rilsa-scope")
    {
        opaque_rilsa_scope = value;
        opaque_rilsa_scope.value_namespace = name_space;
        opaque_rilsa_scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-ri-interface-name")
    {
        opaque_ri_interface_name = value;
        opaque_ri_interface_name.value_namespace = name_space;
        opaque_ri_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-rilsa-scope")
    {
        opaque_rilsa_scope.yfilter = yfilter;
    }
    if(value_path == "opaque-ri-interface-name")
    {
        opaque_ri_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opaque-ritlv" || name == "opaque-rilsa-scope" || name == "opaque-ri-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::OpaqueRitlv()
    :
    ritlv_internal_type{YType::enumeration, "ritlv-internal-type"}
    	,
    unknown_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv>())
	,rtr_cap_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv>())
	,pcedtlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv>())
	,sr_algo_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv>())
	,sr_range_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv>())
	,node_msdtlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv>())
{
    unknown_tlv->parent = this;
    rtr_cap_tlv->parent = this;
    pcedtlv->parent = this;
    sr_algo_tlv->parent = this;
    sr_range_tlv->parent = this;
    node_msdtlv->parent = this;

    yang_name = "opaque-ritlv"; yang_parent_name = "opaque-router-info-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::~OpaqueRitlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_data() const
{
    return ritlv_internal_type.is_set
	|| (unknown_tlv !=  nullptr && unknown_tlv->has_data())
	|| (rtr_cap_tlv !=  nullptr && rtr_cap_tlv->has_data())
	|| (pcedtlv !=  nullptr && pcedtlv->has_data())
	|| (sr_algo_tlv !=  nullptr && sr_algo_tlv->has_data())
	|| (sr_range_tlv !=  nullptr && sr_range_tlv->has_data())
	|| (node_msdtlv !=  nullptr && node_msdtlv->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ritlv_internal_type.yfilter)
	|| (unknown_tlv !=  nullptr && unknown_tlv->has_operation())
	|| (rtr_cap_tlv !=  nullptr && rtr_cap_tlv->has_operation())
	|| (pcedtlv !=  nullptr && pcedtlv->has_operation())
	|| (sr_algo_tlv !=  nullptr && sr_algo_tlv->has_operation())
	|| (sr_range_tlv !=  nullptr && sr_range_tlv->has_operation())
	|| (node_msdtlv !=  nullptr && node_msdtlv->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ritlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ritlv_internal_type.is_set || is_set(ritlv_internal_type.yfilter)) leaf_name_data.push_back(ritlv_internal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-tlv")
    {
        if(unknown_tlv == nullptr)
        {
            unknown_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv>();
        }
        return unknown_tlv;
    }

    if(child_yang_name == "rtr-cap-tlv")
    {
        if(rtr_cap_tlv == nullptr)
        {
            rtr_cap_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv>();
        }
        return rtr_cap_tlv;
    }

    if(child_yang_name == "pcedtlv")
    {
        if(pcedtlv == nullptr)
        {
            pcedtlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv>();
        }
        return pcedtlv;
    }

    if(child_yang_name == "sr-algo-tlv")
    {
        if(sr_algo_tlv == nullptr)
        {
            sr_algo_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv>();
        }
        return sr_algo_tlv;
    }

    if(child_yang_name == "sr-range-tlv")
    {
        if(sr_range_tlv == nullptr)
        {
            sr_range_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv>();
        }
        return sr_range_tlv;
    }

    if(child_yang_name == "node-msdtlv")
    {
        if(node_msdtlv == nullptr)
        {
            node_msdtlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv>();
        }
        return node_msdtlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(unknown_tlv != nullptr)
    {
        children["unknown-tlv"] = unknown_tlv;
    }

    if(rtr_cap_tlv != nullptr)
    {
        children["rtr-cap-tlv"] = rtr_cap_tlv;
    }

    if(pcedtlv != nullptr)
    {
        children["pcedtlv"] = pcedtlv;
    }

    if(sr_algo_tlv != nullptr)
    {
        children["sr-algo-tlv"] = sr_algo_tlv;
    }

    if(sr_range_tlv != nullptr)
    {
        children["sr-range-tlv"] = sr_range_tlv;
    }

    if(node_msdtlv != nullptr)
    {
        children["node-msdtlv"] = node_msdtlv;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ritlv-internal-type")
    {
        ritlv_internal_type = value;
        ritlv_internal_type.value_namespace = name_space;
        ritlv_internal_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ritlv-internal-type")
    {
        ritlv_internal_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-tlv" || name == "rtr-cap-tlv" || name == "pcedtlv" || name == "sr-algo-tlv" || name == "sr-range-tlv" || name == "node-msdtlv" || name == "ritlv-internal-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::UnknownTlv()
    :
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_genvalue{YType::str, "ri-genvalue"}
{

    yang_name = "unknown-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::~UnknownTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_data() const
{
    return ri_gen_tlv_type.is_set
	|| ri_gen_tlv_length.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ri_gen_tlv_type.yfilter)
	|| ydk::is_set(ri_gen_tlv_length.yfilter)
	|| ydk::is_set(ri_genvalue.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.yfilter)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.yfilter)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.yfilter)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
        ri_gen_tlv_type.value_namespace = name_space;
        ri_gen_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
        ri_gen_tlv_length.value_namespace = name_space;
        ri_gen_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
        ri_genvalue.value_namespace = name_space;
        ri_genvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type.yfilter = yfilter;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length.yfilter = yfilter;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-gen-tlv-type" || name == "ri-gen-tlv-length" || name == "ri-genvalue")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::RtrCapTlv()
    :
    rtr_cap_tlv_length{YType::uint16, "rtr-cap-tlv-length"},
    rtr_cap_graceful_restart{YType::boolean, "rtr-cap-graceful-restart"},
    rtr_cap_graceful_restart_helper{YType::boolean, "rtr-cap-graceful-restart-helper"},
    rtr_cap_stub_rtr{YType::boolean, "rtr-cap-stub-rtr"},
    rtr_cap_area_te{YType::boolean, "rtr-cap-area-te"},
    rtr_cap_p2plan{YType::boolean, "rtr-cap-p2plan"},
    rtr_cap_te_exp{YType::boolean, "rtr-cap-te-exp"},
    rtr_cap_all_bits{YType::uint32, "rtr-cap-all-bits"},
    rtr_cap_additional_info{YType::str, "rtr-cap-additional-info"}
{

    yang_name = "rtr-cap-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::~RtrCapTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_data() const
{
    return rtr_cap_tlv_length.is_set
	|| rtr_cap_graceful_restart.is_set
	|| rtr_cap_graceful_restart_helper.is_set
	|| rtr_cap_stub_rtr.is_set
	|| rtr_cap_area_te.is_set
	|| rtr_cap_p2plan.is_set
	|| rtr_cap_te_exp.is_set
	|| rtr_cap_all_bits.is_set
	|| rtr_cap_additional_info.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_cap_tlv_length.yfilter)
	|| ydk::is_set(rtr_cap_graceful_restart.yfilter)
	|| ydk::is_set(rtr_cap_graceful_restart_helper.yfilter)
	|| ydk::is_set(rtr_cap_stub_rtr.yfilter)
	|| ydk::is_set(rtr_cap_area_te.yfilter)
	|| ydk::is_set(rtr_cap_p2plan.yfilter)
	|| ydk::is_set(rtr_cap_te_exp.yfilter)
	|| ydk::is_set(rtr_cap_all_bits.yfilter)
	|| ydk::is_set(rtr_cap_additional_info.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtr-cap-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_cap_tlv_length.is_set || is_set(rtr_cap_tlv_length.yfilter)) leaf_name_data.push_back(rtr_cap_tlv_length.get_name_leafdata());
    if (rtr_cap_graceful_restart.is_set || is_set(rtr_cap_graceful_restart.yfilter)) leaf_name_data.push_back(rtr_cap_graceful_restart.get_name_leafdata());
    if (rtr_cap_graceful_restart_helper.is_set || is_set(rtr_cap_graceful_restart_helper.yfilter)) leaf_name_data.push_back(rtr_cap_graceful_restart_helper.get_name_leafdata());
    if (rtr_cap_stub_rtr.is_set || is_set(rtr_cap_stub_rtr.yfilter)) leaf_name_data.push_back(rtr_cap_stub_rtr.get_name_leafdata());
    if (rtr_cap_area_te.is_set || is_set(rtr_cap_area_te.yfilter)) leaf_name_data.push_back(rtr_cap_area_te.get_name_leafdata());
    if (rtr_cap_p2plan.is_set || is_set(rtr_cap_p2plan.yfilter)) leaf_name_data.push_back(rtr_cap_p2plan.get_name_leafdata());
    if (rtr_cap_te_exp.is_set || is_set(rtr_cap_te_exp.yfilter)) leaf_name_data.push_back(rtr_cap_te_exp.get_name_leafdata());
    if (rtr_cap_all_bits.is_set || is_set(rtr_cap_all_bits.yfilter)) leaf_name_data.push_back(rtr_cap_all_bits.get_name_leafdata());
    if (rtr_cap_additional_info.is_set || is_set(rtr_cap_additional_info.yfilter)) leaf_name_data.push_back(rtr_cap_additional_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-cap-tlv-length")
    {
        rtr_cap_tlv_length = value;
        rtr_cap_tlv_length.value_namespace = name_space;
        rtr_cap_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-graceful-restart")
    {
        rtr_cap_graceful_restart = value;
        rtr_cap_graceful_restart.value_namespace = name_space;
        rtr_cap_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-graceful-restart-helper")
    {
        rtr_cap_graceful_restart_helper = value;
        rtr_cap_graceful_restart_helper.value_namespace = name_space;
        rtr_cap_graceful_restart_helper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-stub-rtr")
    {
        rtr_cap_stub_rtr = value;
        rtr_cap_stub_rtr.value_namespace = name_space;
        rtr_cap_stub_rtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-area-te")
    {
        rtr_cap_area_te = value;
        rtr_cap_area_te.value_namespace = name_space;
        rtr_cap_area_te.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-p2plan")
    {
        rtr_cap_p2plan = value;
        rtr_cap_p2plan.value_namespace = name_space;
        rtr_cap_p2plan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-te-exp")
    {
        rtr_cap_te_exp = value;
        rtr_cap_te_exp.value_namespace = name_space;
        rtr_cap_te_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-all-bits")
    {
        rtr_cap_all_bits = value;
        rtr_cap_all_bits.value_namespace = name_space;
        rtr_cap_all_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-additional-info")
    {
        rtr_cap_additional_info = value;
        rtr_cap_additional_info.value_namespace = name_space;
        rtr_cap_additional_info.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-cap-tlv-length")
    {
        rtr_cap_tlv_length.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-graceful-restart")
    {
        rtr_cap_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-graceful-restart-helper")
    {
        rtr_cap_graceful_restart_helper.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-stub-rtr")
    {
        rtr_cap_stub_rtr.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-area-te")
    {
        rtr_cap_area_te.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-p2plan")
    {
        rtr_cap_p2plan.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-te-exp")
    {
        rtr_cap_te_exp.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-all-bits")
    {
        rtr_cap_all_bits.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-additional-info")
    {
        rtr_cap_additional_info.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-cap-tlv-length" || name == "rtr-cap-graceful-restart" || name == "rtr-cap-graceful-restart-helper" || name == "rtr-cap-stub-rtr" || name == "rtr-cap-area-te" || name == "rtr-cap-p2plan" || name == "rtr-cap-te-exp" || name == "rtr-cap-all-bits" || name == "rtr-cap-additional-info")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::Pcedtlv()
    :
    pcedtlv_length{YType::uint16, "pcedtlv-length"}
    	,
    pced_addr(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>())
	,pced_scope(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>())
{
    pced_addr->parent = this;
    pced_scope->parent = this;

    yang_name = "pcedtlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::~Pcedtlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_data() const
{
    return pcedtlv_length.is_set
	|| (pced_addr !=  nullptr && pced_addr->has_data())
	|| (pced_scope !=  nullptr && pced_scope->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcedtlv_length.yfilter)
	|| (pced_addr !=  nullptr && pced_addr->has_operation())
	|| (pced_scope !=  nullptr && pced_scope->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcedtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcedtlv_length.is_set || is_set(pcedtlv_length.yfilter)) leaf_name_data.push_back(pcedtlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pced-addr")
    {
        if(pced_addr == nullptr)
        {
            pced_addr = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>();
        }
        return pced_addr;
    }

    if(child_yang_name == "pced-scope")
    {
        if(pced_scope == nullptr)
        {
            pced_scope = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>();
        }
        return pced_scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pced_addr != nullptr)
    {
        children["pced-addr"] = pced_addr;
    }

    if(pced_scope != nullptr)
    {
        children["pced-scope"] = pced_scope;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcedtlv-length")
    {
        pcedtlv_length = value;
        pcedtlv_length.value_namespace = name_space;
        pcedtlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcedtlv-length")
    {
        pcedtlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pced-addr" || name == "pced-scope" || name == "pcedtlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PcedAddr()
    :
    pce_addr_type{YType::enumeration, "pce-addr-type"}
    	,
    pce_addr_unknown_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>())
	,ipv4pce_addr(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr>())
	,ipv6pce_addr(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr>())
{
    pce_addr_unknown_tlv->parent = this;
    ipv4pce_addr->parent = this;
    ipv6pce_addr->parent = this;

    yang_name = "pced-addr"; yang_parent_name = "pcedtlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::~PcedAddr()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_data() const
{
    return pce_addr_type.is_set
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_data())
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_data())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_addr_type.yfilter)
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_operation())
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_operation())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_addr_type.is_set || is_set(pce_addr_type.yfilter)) leaf_name_data.push_back(pce_addr_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pce-addr-unknown-tlv")
    {
        if(pce_addr_unknown_tlv == nullptr)
        {
            pce_addr_unknown_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>();
        }
        return pce_addr_unknown_tlv;
    }

    if(child_yang_name == "ipv4pce-addr")
    {
        if(ipv4pce_addr == nullptr)
        {
            ipv4pce_addr = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr>();
        }
        return ipv4pce_addr;
    }

    if(child_yang_name == "ipv6pce-addr")
    {
        if(ipv6pce_addr == nullptr)
        {
            ipv6pce_addr = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr>();
        }
        return ipv6pce_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pce_addr_unknown_tlv != nullptr)
    {
        children["pce-addr-unknown-tlv"] = pce_addr_unknown_tlv;
    }

    if(ipv4pce_addr != nullptr)
    {
        children["ipv4pce-addr"] = ipv4pce_addr;
    }

    if(ipv6pce_addr != nullptr)
    {
        children["ipv6pce-addr"] = ipv6pce_addr;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-addr-type")
    {
        pce_addr_type = value;
        pce_addr_type.value_namespace = name_space;
        pce_addr_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-addr-type")
    {
        pce_addr_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-addr-unknown-tlv" || name == "ipv4pce-addr" || name == "ipv6pce-addr" || name == "pce-addr-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::PceAddrUnknownTlv()
    :
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_genvalue{YType::str, "ri-genvalue"}
{

    yang_name = "pce-addr-unknown-tlv"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::~PceAddrUnknownTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_data() const
{
    return ri_gen_tlv_type.is_set
	|| ri_gen_tlv_length.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ri_gen_tlv_type.yfilter)
	|| ydk::is_set(ri_gen_tlv_length.yfilter)
	|| ydk::is_set(ri_genvalue.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-addr-unknown-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.yfilter)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.yfilter)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.yfilter)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
        ri_gen_tlv_type.value_namespace = name_space;
        ri_gen_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
        ri_gen_tlv_length.value_namespace = name_space;
        ri_gen_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
        ri_genvalue.value_namespace = name_space;
        ri_genvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type.yfilter = yfilter;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length.yfilter = yfilter;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-gen-tlv-type" || name == "ri-gen-tlv-length" || name == "ri-genvalue")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::Ipv4PceAddr()
    :
    pceipv4_addr{YType::str, "pceipv4-addr"}
{

    yang_name = "ipv4pce-addr"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::~Ipv4PceAddr()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_data() const
{
    return pceipv4_addr.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pceipv4_addr.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4pce-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv4_addr.is_set || is_set(pceipv4_addr.yfilter)) leaf_name_data.push_back(pceipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pceipv4-addr")
    {
        pceipv4_addr = value;
        pceipv4_addr.value_namespace = name_space;
        pceipv4_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pceipv4-addr")
    {
        pceipv4_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pceipv4-addr")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::Ipv6PceAddr()
    :
    pceipv6_addr{YType::str, "pceipv6-addr"}
{

    yang_name = "ipv6pce-addr"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::~Ipv6PceAddr()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_data() const
{
    return pceipv6_addr.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pceipv6_addr.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6pce-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv6_addr.is_set || is_set(pceipv6_addr.yfilter)) leaf_name_data.push_back(pceipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pceipv6-addr")
    {
        pceipv6_addr = value;
        pceipv6_addr.value_namespace = name_space;
        pceipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pceipv6-addr")
    {
        pceipv6_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pceipv6-addr")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::PcedScope()
    :
    lbit{YType::boolean, "lbit"},
    rbit{YType::boolean, "rbit"},
    rd_bit{YType::boolean, "rd-bit"},
    sbit{YType::boolean, "sbit"},
    sd_bit{YType::boolean, "sd-bit"},
    ybit{YType::boolean, "ybit"},
    pref_l{YType::uint8, "pref-l"},
    pref_r{YType::uint8, "pref-r"},
    pref_s{YType::uint8, "pref-s"},
    pref_y{YType::uint8, "pref-y"},
    all_scope_info_bits{YType::uint32, "all-scope-info-bits"}
{

    yang_name = "pced-scope"; yang_parent_name = "pcedtlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::~PcedScope()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_data() const
{
    return lbit.is_set
	|| rbit.is_set
	|| rd_bit.is_set
	|| sbit.is_set
	|| sd_bit.is_set
	|| ybit.is_set
	|| pref_l.is_set
	|| pref_r.is_set
	|| pref_s.is_set
	|| pref_y.is_set
	|| all_scope_info_bits.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lbit.yfilter)
	|| ydk::is_set(rbit.yfilter)
	|| ydk::is_set(rd_bit.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(sd_bit.yfilter)
	|| ydk::is_set(ybit.yfilter)
	|| ydk::is_set(pref_l.yfilter)
	|| ydk::is_set(pref_r.yfilter)
	|| ydk::is_set(pref_s.yfilter)
	|| ydk::is_set(pref_y.yfilter)
	|| ydk::is_set(all_scope_info_bits.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lbit.is_set || is_set(lbit.yfilter)) leaf_name_data.push_back(lbit.get_name_leafdata());
    if (rbit.is_set || is_set(rbit.yfilter)) leaf_name_data.push_back(rbit.get_name_leafdata());
    if (rd_bit.is_set || is_set(rd_bit.yfilter)) leaf_name_data.push_back(rd_bit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (sd_bit.is_set || is_set(sd_bit.yfilter)) leaf_name_data.push_back(sd_bit.get_name_leafdata());
    if (ybit.is_set || is_set(ybit.yfilter)) leaf_name_data.push_back(ybit.get_name_leafdata());
    if (pref_l.is_set || is_set(pref_l.yfilter)) leaf_name_data.push_back(pref_l.get_name_leafdata());
    if (pref_r.is_set || is_set(pref_r.yfilter)) leaf_name_data.push_back(pref_r.get_name_leafdata());
    if (pref_s.is_set || is_set(pref_s.yfilter)) leaf_name_data.push_back(pref_s.get_name_leafdata());
    if (pref_y.is_set || is_set(pref_y.yfilter)) leaf_name_data.push_back(pref_y.get_name_leafdata());
    if (all_scope_info_bits.is_set || is_set(all_scope_info_bits.yfilter)) leaf_name_data.push_back(all_scope_info_bits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lbit")
    {
        lbit = value;
        lbit.value_namespace = name_space;
        lbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rbit")
    {
        rbit = value;
        rbit.value_namespace = name_space;
        rbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd-bit")
    {
        rd_bit = value;
        rd_bit.value_namespace = name_space;
        rd_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sd-bit")
    {
        sd_bit = value;
        sd_bit.value_namespace = name_space;
        sd_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ybit")
    {
        ybit = value;
        ybit.value_namespace = name_space;
        ybit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-l")
    {
        pref_l = value;
        pref_l.value_namespace = name_space;
        pref_l.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-r")
    {
        pref_r = value;
        pref_r.value_namespace = name_space;
        pref_r.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-s")
    {
        pref_s = value;
        pref_s.value_namespace = name_space;
        pref_s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-y")
    {
        pref_y = value;
        pref_y.value_namespace = name_space;
        pref_y.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-scope-info-bits")
    {
        all_scope_info_bits = value;
        all_scope_info_bits.value_namespace = name_space;
        all_scope_info_bits.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lbit")
    {
        lbit.yfilter = yfilter;
    }
    if(value_path == "rbit")
    {
        rbit.yfilter = yfilter;
    }
    if(value_path == "rd-bit")
    {
        rd_bit.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "sd-bit")
    {
        sd_bit.yfilter = yfilter;
    }
    if(value_path == "ybit")
    {
        ybit.yfilter = yfilter;
    }
    if(value_path == "pref-l")
    {
        pref_l.yfilter = yfilter;
    }
    if(value_path == "pref-r")
    {
        pref_r.yfilter = yfilter;
    }
    if(value_path == "pref-s")
    {
        pref_s.yfilter = yfilter;
    }
    if(value_path == "pref-y")
    {
        pref_y.yfilter = yfilter;
    }
    if(value_path == "all-scope-info-bits")
    {
        all_scope_info_bits.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbit" || name == "rbit" || name == "rd-bit" || name == "sbit" || name == "sd-bit" || name == "ybit" || name == "pref-l" || name == "pref-r" || name == "pref-s" || name == "pref-y" || name == "all-scope-info-bits")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoTlv()
    :
    sr_algo_length{YType::uint16, "sr-algo-length"},
    sr_algo_value{YType::str, "sr-algo-value"}
{

    yang_name = "sr-algo-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::~SrAlgoTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_data() const
{
    return sr_algo_length.is_set
	|| sr_algo_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_algo_length.yfilter)
	|| ydk::is_set(sr_algo_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-algo-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_algo_length.is_set || is_set(sr_algo_length.yfilter)) leaf_name_data.push_back(sr_algo_length.get_name_leafdata());
    if (sr_algo_value.is_set || is_set(sr_algo_value.yfilter)) leaf_name_data.push_back(sr_algo_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-algo-length")
    {
        sr_algo_length = value;
        sr_algo_length.value_namespace = name_space;
        sr_algo_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-algo-value")
    {
        sr_algo_value = value;
        sr_algo_value.value_namespace = name_space;
        sr_algo_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-algo-length")
    {
        sr_algo_length.yfilter = yfilter;
    }
    if(value_path == "sr-algo-value")
    {
        sr_algo_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-algo-length" || name == "sr-algo-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::SrRangeTlv()
    :
    sr_range_length{YType::uint16, "sr-range-length"},
    sr_range_size{YType::uint32, "sr-range-size"}
    	,
    sidtlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv>())
{
    sidtlv->parent = this;

    yang_name = "sr-range-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::~SrRangeTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_data() const
{
    return sr_range_length.is_set
	|| sr_range_size.is_set
	|| (sidtlv !=  nullptr && sidtlv->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_range_length.yfilter)
	|| ydk::is_set(sr_range_size.yfilter)
	|| (sidtlv !=  nullptr && sidtlv->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-range-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_range_length.is_set || is_set(sr_range_length.yfilter)) leaf_name_data.push_back(sr_range_length.get_name_leafdata());
    if (sr_range_size.is_set || is_set(sr_range_size.yfilter)) leaf_name_data.push_back(sr_range_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sidtlv")
    {
        if(sidtlv == nullptr)
        {
            sidtlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv>();
        }
        return sidtlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sidtlv != nullptr)
    {
        children["sidtlv"] = sidtlv;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-range-length")
    {
        sr_range_length = value;
        sr_range_length.value_namespace = name_space;
        sr_range_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-range-size")
    {
        sr_range_size = value;
        sr_range_size.value_namespace = name_space;
        sr_range_size.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-range-length")
    {
        sr_range_length.yfilter = yfilter;
    }
    if(value_path == "sr-range-size")
    {
        sr_range_size.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sidtlv" || name == "sr-range-length" || name == "sr-range-size")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::Sidtlv()
    :
    sr_sid_length{YType::uint16, "sr-sid-length"},
    sr_sid_value{YType::uint32, "sr-sid-value"}
{

    yang_name = "sidtlv"; yang_parent_name = "sr-range-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::~Sidtlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_data() const
{
    return sr_sid_length.is_set
	|| sr_sid_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_sid_length.yfilter)
	|| ydk::is_set(sr_sid_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sidtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_sid_length.is_set || is_set(sr_sid_length.yfilter)) leaf_name_data.push_back(sr_sid_length.get_name_leafdata());
    if (sr_sid_value.is_set || is_set(sr_sid_value.yfilter)) leaf_name_data.push_back(sr_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-sid-length")
    {
        sr_sid_length = value;
        sr_sid_length.value_namespace = name_space;
        sr_sid_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-sid-value")
    {
        sr_sid_value = value;
        sr_sid_value.value_namespace = name_space;
        sr_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-sid-length")
    {
        sr_sid_length.yfilter = yfilter;
    }
    if(value_path == "sr-sid-value")
    {
        sr_sid_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-sid-length" || name == "sr-sid-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdtlv()
    :
    node_msdtlv_length{YType::uint16, "node-msdtlv-length"}
    	,
    node_msd_sub_types(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes>())
{
    node_msd_sub_types->parent = this;

    yang_name = "node-msdtlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::~NodeMsdtlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_data() const
{
    return node_msdtlv_length.is_set
	|| (node_msd_sub_types !=  nullptr && node_msd_sub_types->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_msdtlv_length.yfilter)
	|| (node_msd_sub_types !=  nullptr && node_msd_sub_types->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-msdtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_msdtlv_length.is_set || is_set(node_msdtlv_length.yfilter)) leaf_name_data.push_back(node_msdtlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-msd-sub-types")
    {
        if(node_msd_sub_types == nullptr)
        {
            node_msd_sub_types = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes>();
        }
        return node_msd_sub_types;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_msd_sub_types != nullptr)
    {
        children["node-msd-sub-types"] = node_msd_sub_types;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-msdtlv-length")
    {
        node_msdtlv_length = value;
        node_msdtlv_length.value_namespace = name_space;
        node_msdtlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-msdtlv-length")
    {
        node_msdtlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-msd-sub-types" || name == "node-msdtlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::NodeMsdSubTypes()
    :
    msd_sub_type{YType::uint8, "msd-sub-type"},
    msd_value{YType::uint8, "msd-value"}
{

    yang_name = "node-msd-sub-types"; yang_parent_name = "node-msdtlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::~NodeMsdSubTypes()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_data() const
{
    return msd_sub_type.is_set
	|| msd_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msd_sub_type.yfilter)
	|| ydk::is_set(msd_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-msd-sub-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msd_sub_type.is_set || is_set(msd_sub_type.yfilter)) leaf_name_data.push_back(msd_sub_type.get_name_leafdata());
    if (msd_value.is_set || is_set(msd_value.yfilter)) leaf_name_data.push_back(msd_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msd-sub-type")
    {
        msd_sub_type = value;
        msd_sub_type.value_namespace = name_space;
        msd_sub_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msd-value")
    {
        msd_value = value;
        msd_value.value_namespace = name_space;
        msd_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msd-sub-type")
    {
        msd_sub_type.yfilter = yfilter;
    }
    if(value_path == "msd-value")
    {
        msd_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msd-sub-type" || name == "msd-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::OpaqueEpLsaType()
{

    yang_name = "opaque-ep-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::~OpaqueEpLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ep-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::Tlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_length{YType::uint16, "tlv-length"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    tlv_data{YType::str, "tlv-data"}
{

    yang_name = "tlv"; yang_parent_name = "opaque-ep-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_data() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return tlv_type.is_set
	|| tlv_length.is_set
	|| mpls_router_id.is_set
	|| mpls_dste_link.is_set
	|| tlv_data.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tlv_type.yfilter)
	|| ydk::is_set(tlv_length.yfilter)
	|| ydk::is_set(mpls_router_id.yfilter)
	|| ydk::is_set(mpls_dste_link.yfilter)
	|| ydk::is_set(tlv_data.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : te_link_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
        tlv_length.value_namespace = name_space;
        tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
        mpls_router_id.value_namespace = name_space;
        mpls_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
        mpls_dste_link.value_namespace = name_space;
        mpls_dste_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
        tlv_data.value_namespace = name_space;
        tlv_data.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
    if(value_path == "tlv-length")
    {
        tlv_length.yfilter = yfilter;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id.yfilter = yfilter;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link.yfilter = yfilter;
    }
    if(value_path == "tlv-data")
    {
        tlv_data.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "tlv-type" || name == "tlv-length" || name == "mpls-router-id" || name == "mpls-dste-link" || name == "tlv-data")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_type.is_set
	|| sub_tlv_length.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
        sub_tlv_type.value_namespace = name_space;
        sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
        sub_tlv_length.value_namespace = name_space;
        sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
        sub_tlv_value.value_namespace = name_space;
        sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-type" || name == "sub-tlv-length" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::OpaqueElLsaType()
{

    yang_name = "opaque-el-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::~OpaqueElLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-el-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::Tlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_length{YType::uint16, "tlv-length"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    tlv_data{YType::str, "tlv-data"}
{

    yang_name = "tlv"; yang_parent_name = "opaque-el-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_data() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return tlv_type.is_set
	|| tlv_length.is_set
	|| mpls_router_id.is_set
	|| mpls_dste_link.is_set
	|| tlv_data.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tlv_type.yfilter)
	|| ydk::is_set(tlv_length.yfilter)
	|| ydk::is_set(mpls_router_id.yfilter)
	|| ydk::is_set(mpls_dste_link.yfilter)
	|| ydk::is_set(tlv_data.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : te_link_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
        tlv_length.value_namespace = name_space;
        tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
        mpls_router_id.value_namespace = name_space;
        mpls_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
        mpls_dste_link.value_namespace = name_space;
        mpls_dste_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
        tlv_data.value_namespace = name_space;
        tlv_data.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
    if(value_path == "tlv-length")
    {
        tlv_length.yfilter = yfilter;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id.yfilter = yfilter;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link.yfilter = yfilter;
    }
    if(value_path == "tlv-data")
    {
        tlv_data.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "tlv-type" || name == "tlv-length" || name == "mpls-router-id" || name == "mpls-dste-link" || name == "tlv-data")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_type.is_set
	|| sub_tlv_length.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
        sub_tlv_type.value_namespace = name_space;
        sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
        sub_tlv_length.value_namespace = name_space;
        sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
        sub_tlv_value.value_namespace = name_space;
        sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-type" || name == "sub-tlv-length" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummaries()
{

    yang_name = "lsa-summaries"; yang_parent_name = "database-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::~LsaSummaries()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::has_data() const
{
    for (std::size_t index=0; index<lsa_summary.size(); index++)
    {
        if(lsa_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::has_operation() const
{
    for (std::size_t index=0; index<lsa_summary.size(); index++)
    {
        if(lsa_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-summary")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary>();
        c->parent = this;
        lsa_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : lsa_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-summary")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaSummary()
    :
    area_id{YType::int32, "area-id"},
    ls_type{YType::enumeration, "ls-type"},
    ls_id{YType::str, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    interface_name{YType::str, "interface-name"},
    external_tag{YType::uint32, "external-tag"},
    link_count{YType::uint16, "link-count"}
    	,
    lsa_header(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader>())
{
    lsa_header->parent = this;

    yang_name = "lsa-summary"; yang_parent_name = "lsa-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::~LsaSummary()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::has_data() const
{
    return area_id.is_set
	|| ls_type.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| interface_name.is_set
	|| external_tag.is_set
	|| link_count.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(external_tag.yfilter)
	|| ydk::is_set(link_count.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.yfilter)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (link_count.is_set || is_set(link_count.yfilter)) leaf_name_data.push_back(link_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader>();
        }
        return lsa_header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
        external_tag.value_namespace = name_space;
        external_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-count")
    {
        link_count = value;
        link_count.value_namespace = name_space;
        link_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "external-tag")
    {
        external_tag.yfilter = yfilter;
    }
    if(value_path == "link-count")
    {
        link_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "area-id" || name == "ls-type" || name == "ls-id" || name == "advertising-router" || name == "interface-name" || name == "external-tag" || name == "link-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::LsaHeader()
    :
    ls_type{YType::enumeration, "ls-type"},
    lsid{YType::str, "lsid"},
    advertising_router{YType::str, "advertising-router"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    dn_age_lsa{YType::boolean, "dn-age-lsa"},
    nsf{YType::boolean, "nsf"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"}
{

    yang_name = "lsa-header"; yang_parent_name = "lsa-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::has_data() const
{
    return ls_type.is_set
	|| lsid.is_set
	|| advertising_router.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| dn_age_lsa.is_set
	|| nsf.is_set
	|| sequence_number.is_set
	|| checksum.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(lsid.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(dn_age_lsa.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (lsid.is_set || is_set(lsid.yfilter)) leaf_name_data.push_back(lsid.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (dn_age_lsa.is_set || is_set(dn_age_lsa.yfilter)) leaf_name_data.push_back(dn_age_lsa.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsid")
    {
        lsid = value;
        lsid.value_namespace = name_space;
        lsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa = value;
        dn_age_lsa.value_namespace = name_space;
        dn_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "lsid")
    {
        lsid.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ls-type" || name == "lsid" || name == "advertising-router" || name == "lsa-area-id" || name == "lsa-age" || name == "dn-age-lsa" || name == "nsf" || name == "sequence-number" || name == "checksum")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummaries()
{

    yang_name = "database-summaries"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::~DatabaseSummaries()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::has_data() const
{
    for (std::size_t index=0; index<database_summary.size(); index++)
    {
        if(database_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::has_operation() const
{
    for (std::size_t index=0; index<database_summary.size(); index++)
    {
        if(database_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-summary")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary>();
        c->parent = this;
        database_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : database_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-summary")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::DatabaseSummary()
    :
    area_id{YType::int32, "area-id"},
    dbase_sum_area_id_string{YType::str, "dbase-sum-area-id-string"}
{

    yang_name = "database-summary"; yang_parent_name = "database-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::~DatabaseSummary()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::has_data() const
{
    for (std::size_t index=0; index<area_lsa_counter.size(); index++)
    {
        if(area_lsa_counter[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| dbase_sum_area_id_string.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::has_operation() const
{
    for (std::size_t index=0; index<area_lsa_counter.size(); index++)
    {
        if(area_lsa_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(dbase_sum_area_id_string.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summary" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (dbase_sum_area_id_string.is_set || is_set(dbase_sum_area_id_string.yfilter)) leaf_name_data.push_back(dbase_sum_area_id_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-lsa-counter")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter>();
        c->parent = this;
        area_lsa_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : area_lsa_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbase-sum-area-id-string")
    {
        dbase_sum_area_id_string = value;
        dbase_sum_area_id_string.value_namespace = name_space;
        dbase_sum_area_id_string.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "dbase-sum-area-id-string")
    {
        dbase_sum_area_id_string.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-lsa-counter" || name == "area-id" || name == "dbase-sum-area-id-string")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::AreaLsaCounter()
    :
    lsa_type{YType::enumeration, "lsa-type"},
    lsa_count{YType::int32, "lsa-count"},
    lsa_delete_count{YType::int32, "lsa-delete-count"},
    lsa_maxage_count{YType::int32, "lsa-maxage-count"},
    lsa_self_count{YType::int32, "lsa-self-count"}
{

    yang_name = "area-lsa-counter"; yang_parent_name = "database-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::~AreaLsaCounter()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::has_data() const
{
    return lsa_type.is_set
	|| lsa_count.is_set
	|| lsa_delete_count.is_set
	|| lsa_maxage_count.is_set
	|| lsa_self_count.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_count.yfilter)
	|| ydk::is_set(lsa_delete_count.yfilter)
	|| ydk::is_set(lsa_maxage_count.yfilter)
	|| ydk::is_set(lsa_self_count.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-lsa-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_count.is_set || is_set(lsa_count.yfilter)) leaf_name_data.push_back(lsa_count.get_name_leafdata());
    if (lsa_delete_count.is_set || is_set(lsa_delete_count.yfilter)) leaf_name_data.push_back(lsa_delete_count.get_name_leafdata());
    if (lsa_maxage_count.is_set || is_set(lsa_maxage_count.yfilter)) leaf_name_data.push_back(lsa_maxage_count.get_name_leafdata());
    if (lsa_self_count.is_set || is_set(lsa_self_count.yfilter)) leaf_name_data.push_back(lsa_self_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-count")
    {
        lsa_count = value;
        lsa_count.value_namespace = name_space;
        lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-delete-count")
    {
        lsa_delete_count = value;
        lsa_delete_count.value_namespace = name_space;
        lsa_delete_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-maxage-count")
    {
        lsa_maxage_count = value;
        lsa_maxage_count.value_namespace = name_space;
        lsa_maxage_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-self-count")
    {
        lsa_self_count = value;
        lsa_self_count.value_namespace = name_space;
        lsa_self_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-count")
    {
        lsa_count.yfilter = yfilter;
    }
    if(value_path == "lsa-delete-count")
    {
        lsa_delete_count.yfilter = yfilter;
    }
    if(value_path == "lsa-maxage-count")
    {
        lsa_maxage_count.yfilter = yfilter;
    }
    if(value_path == "lsa-self-count")
    {
        lsa_self_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-count" || name == "lsa-delete-count" || name == "lsa-maxage-count" || name == "lsa-self-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::DatabaseSummaryAs()
{

    yang_name = "database-summary-as"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::~DatabaseSummaryAs()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::has_data() const
{
    for (std::size_t index=0; index<as_lsa_counter.size(); index++)
    {
        if(as_lsa_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::has_operation() const
{
    for (std::size_t index=0; index<as_lsa_counter.size(); index++)
    {
        if(as_lsa_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summary-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-lsa-counter")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter>();
        c->parent = this;
        as_lsa_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : as_lsa_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-lsa-counter")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::AsLsaCounter()
    :
    lsa_type{YType::enumeration, "lsa-type"},
    lsa_count{YType::int32, "lsa-count"},
    lsa_delete_count{YType::int32, "lsa-delete-count"},
    lsa_maxage_count{YType::int32, "lsa-maxage-count"},
    lsa_self_count{YType::int32, "lsa-self-count"}
{

    yang_name = "as-lsa-counter"; yang_parent_name = "database-summary-as"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::~AsLsaCounter()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::has_data() const
{
    return lsa_type.is_set
	|| lsa_count.is_set
	|| lsa_delete_count.is_set
	|| lsa_maxage_count.is_set
	|| lsa_self_count.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_count.yfilter)
	|| ydk::is_set(lsa_delete_count.yfilter)
	|| ydk::is_set(lsa_maxage_count.yfilter)
	|| ydk::is_set(lsa_self_count.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-lsa-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_count.is_set || is_set(lsa_count.yfilter)) leaf_name_data.push_back(lsa_count.get_name_leafdata());
    if (lsa_delete_count.is_set || is_set(lsa_delete_count.yfilter)) leaf_name_data.push_back(lsa_delete_count.get_name_leafdata());
    if (lsa_maxage_count.is_set || is_set(lsa_maxage_count.yfilter)) leaf_name_data.push_back(lsa_maxage_count.get_name_leafdata());
    if (lsa_self_count.is_set || is_set(lsa_self_count.yfilter)) leaf_name_data.push_back(lsa_self_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-count")
    {
        lsa_count = value;
        lsa_count.value_namespace = name_space;
        lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-delete-count")
    {
        lsa_delete_count = value;
        lsa_delete_count.value_namespace = name_space;
        lsa_delete_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-maxage-count")
    {
        lsa_maxage_count = value;
        lsa_maxage_count.value_namespace = name_space;
        lsa_maxage_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-self-count")
    {
        lsa_self_count = value;
        lsa_self_count.value_namespace = name_space;
        lsa_self_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-count")
    {
        lsa_count.yfilter = yfilter;
    }
    if(value_path == "lsa-delete-count")
    {
        lsa_delete_count.yfilter = yfilter;
    }
    if(value_path == "lsa-maxage-count")
    {
        lsa_maxage_count.yfilter = yfilter;
    }
    if(value_path == "lsa-self-count")
    {
        lsa_self_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-count" || name == "lsa-delete-count" || name == "lsa-maxage-count" || name == "lsa-self-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsas()
{

    yang_name = "lsas"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::~Lsas()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::has_data() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::has_operation() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa>();
        c->parent = this;
        lsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : lsa)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::Lsa()
    :
    area_id{YType::int32, "area-id"},
    ls_type{YType::enumeration, "ls-type"},
    ls_id{YType::str, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    interface_name{YType::str, "interface-name"}
    	,
    lsa_header(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader>())
	,lsa_detail_data(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData>())
	,lsa_internal_data(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData>())
{
    lsa_header->parent = this;
    lsa_detail_data->parent = this;
    lsa_internal_data->parent = this;

    yang_name = "lsa"; yang_parent_name = "lsas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::~Lsa()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::has_data() const
{
    return area_id.is_set
	|| ls_type.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| interface_name.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail_data !=  nullptr && lsa_detail_data->has_data())
	|| (lsa_internal_data !=  nullptr && lsa_internal_data->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail_data !=  nullptr && lsa_detail_data->has_operation())
	|| (lsa_internal_data !=  nullptr && lsa_internal_data->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail-data")
    {
        if(lsa_detail_data == nullptr)
        {
            lsa_detail_data = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData>();
        }
        return lsa_detail_data;
    }

    if(child_yang_name == "lsa-internal-data")
    {
        if(lsa_internal_data == nullptr)
        {
            lsa_internal_data = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData>();
        }
        return lsa_internal_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_detail_data != nullptr)
    {
        children["lsa-detail-data"] = lsa_detail_data;
    }

    if(lsa_internal_data != nullptr)
    {
        children["lsa-internal-data"] = lsa_internal_data;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail-data" || name == "lsa-internal-data" || name == "area-id" || name == "ls-type" || name == "ls-id" || name == "advertising-router" || name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::LsaHeader()
    :
    ls_type{YType::enumeration, "ls-type"},
    lsid{YType::str, "lsid"},
    advertising_router{YType::str, "advertising-router"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    dn_age_lsa{YType::boolean, "dn-age-lsa"},
    nsf{YType::boolean, "nsf"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"}
{

    yang_name = "lsa-header"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::has_data() const
{
    return ls_type.is_set
	|| lsid.is_set
	|| advertising_router.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| dn_age_lsa.is_set
	|| nsf.is_set
	|| sequence_number.is_set
	|| checksum.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(lsid.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(dn_age_lsa.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (lsid.is_set || is_set(lsid.yfilter)) leaf_name_data.push_back(lsid.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (dn_age_lsa.is_set || is_set(dn_age_lsa.yfilter)) leaf_name_data.push_back(dn_age_lsa.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsid")
    {
        lsid = value;
        lsid.value_namespace = name_space;
        lsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa = value;
        dn_age_lsa.value_namespace = name_space;
        dn_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "lsid")
    {
        lsid.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ls-type" || name == "lsid" || name == "advertising-router" || name == "lsa-area-id" || name == "lsa-age" || name == "dn-age-lsa" || name == "nsf" || name == "sequence-number" || name == "checksum")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaDetailData()
    :
    tos_capable{YType::boolean, "tos-capable"},
    nssa_translation{YType::boolean, "nssa-translation"},
    demand_circuit{YType::boolean, "demand-circuit"},
    dn_bit{YType::boolean, "dn-bit"},
    lsa_rate_limit_due_time{YType::uint32, "lsa-rate-limit-due-time"},
    lsadb_base_clock{YType::uint64, "lsadb-base-clock"},
    routing_bit{YType::boolean, "routing-bit"},
    advertising_router_reachable{YType::boolean, "advertising-router-reachable"},
    length{YType::uint16, "length"},
    sum_origin{YType::uint16, "sum-origin"},
    ase_origin{YType::uint16, "ase-origin"},
    in_sync{YType::uint8, "in-sync"},
    lsa_prefix_priority{YType::uint8, "lsa-prefix-priority"},
    new_lsa_prefix_priority{YType::uint8, "new-lsa-prefix-priority"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"}
    	,
    lsa_throttle_timer(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer>())
	,lsa_last_updated_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime>())
	,lsadb_base_time_stamp(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp>())
	,not_delete(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete>())
{
    lsa_throttle_timer->parent = this;
    lsa_last_updated_time->parent = this;
    lsadb_base_time_stamp->parent = this;
    not_delete->parent = this;

    yang_name = "lsa-detail-data"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::~LsaDetailData()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::has_data() const
{
    return tos_capable.is_set
	|| nssa_translation.is_set
	|| demand_circuit.is_set
	|| dn_bit.is_set
	|| lsa_rate_limit_due_time.is_set
	|| lsadb_base_clock.is_set
	|| routing_bit.is_set
	|| advertising_router_reachable.is_set
	|| length.is_set
	|| sum_origin.is_set
	|| ase_origin.is_set
	|| in_sync.is_set
	|| lsa_prefix_priority.is_set
	|| new_lsa_prefix_priority.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| (lsa_throttle_timer !=  nullptr && lsa_throttle_timer->has_data())
	|| (lsa_last_updated_time !=  nullptr && lsa_last_updated_time->has_data())
	|| (lsadb_base_time_stamp !=  nullptr && lsadb_base_time_stamp->has_data())
	|| (not_delete !=  nullptr && not_delete->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos_capable.yfilter)
	|| ydk::is_set(nssa_translation.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(dn_bit.yfilter)
	|| ydk::is_set(lsa_rate_limit_due_time.yfilter)
	|| ydk::is_set(lsadb_base_clock.yfilter)
	|| ydk::is_set(routing_bit.yfilter)
	|| ydk::is_set(advertising_router_reachable.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(sum_origin.yfilter)
	|| ydk::is_set(ase_origin.yfilter)
	|| ydk::is_set(in_sync.yfilter)
	|| ydk::is_set(lsa_prefix_priority.yfilter)
	|| ydk::is_set(new_lsa_prefix_priority.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| (lsa_throttle_timer !=  nullptr && lsa_throttle_timer->has_operation())
	|| (lsa_last_updated_time !=  nullptr && lsa_last_updated_time->has_operation())
	|| (lsadb_base_time_stamp !=  nullptr && lsadb_base_time_stamp->has_operation())
	|| (not_delete !=  nullptr && not_delete->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos_capable.is_set || is_set(tos_capable.yfilter)) leaf_name_data.push_back(tos_capable.get_name_leafdata());
    if (nssa_translation.is_set || is_set(nssa_translation.yfilter)) leaf_name_data.push_back(nssa_translation.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (dn_bit.is_set || is_set(dn_bit.yfilter)) leaf_name_data.push_back(dn_bit.get_name_leafdata());
    if (lsa_rate_limit_due_time.is_set || is_set(lsa_rate_limit_due_time.yfilter)) leaf_name_data.push_back(lsa_rate_limit_due_time.get_name_leafdata());
    if (lsadb_base_clock.is_set || is_set(lsadb_base_clock.yfilter)) leaf_name_data.push_back(lsadb_base_clock.get_name_leafdata());
    if (routing_bit.is_set || is_set(routing_bit.yfilter)) leaf_name_data.push_back(routing_bit.get_name_leafdata());
    if (advertising_router_reachable.is_set || is_set(advertising_router_reachable.yfilter)) leaf_name_data.push_back(advertising_router_reachable.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (sum_origin.is_set || is_set(sum_origin.yfilter)) leaf_name_data.push_back(sum_origin.get_name_leafdata());
    if (ase_origin.is_set || is_set(ase_origin.yfilter)) leaf_name_data.push_back(ase_origin.get_name_leafdata());
    if (in_sync.is_set || is_set(in_sync.yfilter)) leaf_name_data.push_back(in_sync.get_name_leafdata());
    if (lsa_prefix_priority.is_set || is_set(lsa_prefix_priority.yfilter)) leaf_name_data.push_back(lsa_prefix_priority.get_name_leafdata());
    if (new_lsa_prefix_priority.is_set || is_set(new_lsa_prefix_priority.yfilter)) leaf_name_data.push_back(new_lsa_prefix_priority.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-throttle-timer")
    {
        if(lsa_throttle_timer == nullptr)
        {
            lsa_throttle_timer = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer>();
        }
        return lsa_throttle_timer;
    }

    if(child_yang_name == "lsa-last-updated-time")
    {
        if(lsa_last_updated_time == nullptr)
        {
            lsa_last_updated_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime>();
        }
        return lsa_last_updated_time;
    }

    if(child_yang_name == "lsadb-base-time-stamp")
    {
        if(lsadb_base_time_stamp == nullptr)
        {
            lsadb_base_time_stamp = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp>();
        }
        return lsadb_base_time_stamp;
    }

    if(child_yang_name == "not-delete")
    {
        if(not_delete == nullptr)
        {
            not_delete = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete>();
        }
        return not_delete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_throttle_timer != nullptr)
    {
        children["lsa-throttle-timer"] = lsa_throttle_timer;
    }

    if(lsa_last_updated_time != nullptr)
    {
        children["lsa-last-updated-time"] = lsa_last_updated_time;
    }

    if(lsadb_base_time_stamp != nullptr)
    {
        children["lsadb-base-time-stamp"] = lsadb_base_time_stamp;
    }

    if(not_delete != nullptr)
    {
        children["not-delete"] = not_delete;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tos-capable")
    {
        tos_capable = value;
        tos_capable.value_namespace = name_space;
        tos_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation = value;
        nssa_translation.value_namespace = name_space;
        nssa_translation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-bit")
    {
        dn_bit = value;
        dn_bit.value_namespace = name_space;
        dn_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-rate-limit-due-time")
    {
        lsa_rate_limit_due_time = value;
        lsa_rate_limit_due_time.value_namespace = name_space;
        lsa_rate_limit_due_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsadb-base-clock")
    {
        lsadb_base_clock = value;
        lsadb_base_clock.value_namespace = name_space;
        lsadb_base_clock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-bit")
    {
        routing_bit = value;
        routing_bit.value_namespace = name_space;
        routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router-reachable")
    {
        advertising_router_reachable = value;
        advertising_router_reachable.value_namespace = name_space;
        advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-origin")
    {
        sum_origin = value;
        sum_origin.value_namespace = name_space;
        sum_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ase-origin")
    {
        ase_origin = value;
        ase_origin.value_namespace = name_space;
        ase_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-sync")
    {
        in_sync = value;
        in_sync.value_namespace = name_space;
        in_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-prefix-priority")
    {
        lsa_prefix_priority = value;
        lsa_prefix_priority.value_namespace = name_space;
        lsa_prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-lsa-prefix-priority")
    {
        new_lsa_prefix_priority = value;
        new_lsa_prefix_priority.value_namespace = name_space;
        new_lsa_prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos-capable")
    {
        tos_capable.yfilter = yfilter;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "dn-bit")
    {
        dn_bit.yfilter = yfilter;
    }
    if(value_path == "lsa-rate-limit-due-time")
    {
        lsa_rate_limit_due_time.yfilter = yfilter;
    }
    if(value_path == "lsadb-base-clock")
    {
        lsadb_base_clock.yfilter = yfilter;
    }
    if(value_path == "routing-bit")
    {
        routing_bit.yfilter = yfilter;
    }
    if(value_path == "advertising-router-reachable")
    {
        advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "sum-origin")
    {
        sum_origin.yfilter = yfilter;
    }
    if(value_path == "ase-origin")
    {
        ase_origin.yfilter = yfilter;
    }
    if(value_path == "in-sync")
    {
        in_sync.yfilter = yfilter;
    }
    if(value_path == "lsa-prefix-priority")
    {
        lsa_prefix_priority.yfilter = yfilter;
    }
    if(value_path == "new-lsa-prefix-priority")
    {
        new_lsa_prefix_priority.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-throttle-timer" || name == "lsa-last-updated-time" || name == "lsadb-base-time-stamp" || name == "not-delete" || name == "tos-capable" || name == "nssa-translation" || name == "demand-circuit" || name == "dn-bit" || name == "lsa-rate-limit-due-time" || name == "lsadb-base-clock" || name == "routing-bit" || name == "advertising-router-reachable" || name == "length" || name == "sum-origin" || name == "ase-origin" || name == "in-sync" || name == "lsa-prefix-priority" || name == "new-lsa-prefix-priority" || name == "lsa-flood-required-post-fail-over")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::LsaThrottleTimer()
    :
    timer_location{YType::enumeration, "timer-location"},
    timer_type{YType::enumeration, "timer-type"},
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    last_inst_second_table_index{YType::uint8, "last-inst-second-table-index"},
    last_inst_minute_table_index{YType::uint8, "last-inst-minute-table-index"}
{

    yang_name = "lsa-throttle-timer"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::~LsaThrottleTimer()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_data() const
{
    return timer_location.is_set
	|| timer_type.is_set
	|| second_table_index.is_set
	|| minute_table_index.is_set
	|| last_inst_second_table_index.is_set
	|| last_inst_minute_table_index.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer_location.yfilter)
	|| ydk::is_set(timer_type.yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(last_inst_second_table_index.yfilter)
	|| ydk::is_set(last_inst_minute_table_index.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-throttle-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_location.is_set || is_set(timer_location.yfilter)) leaf_name_data.push_back(timer_location.get_name_leafdata());
    if (timer_type.is_set || is_set(timer_type.yfilter)) leaf_name_data.push_back(timer_type.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (last_inst_second_table_index.is_set || is_set(last_inst_second_table_index.yfilter)) leaf_name_data.push_back(last_inst_second_table_index.get_name_leafdata());
    if (last_inst_minute_table_index.is_set || is_set(last_inst_minute_table_index.yfilter)) leaf_name_data.push_back(last_inst_minute_table_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer-location")
    {
        timer_location = value;
        timer_location.value_namespace = name_space;
        timer_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-type")
    {
        timer_type = value;
        timer_type.value_namespace = name_space;
        timer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-inst-second-table-index")
    {
        last_inst_second_table_index = value;
        last_inst_second_table_index.value_namespace = name_space;
        last_inst_second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-inst-minute-table-index")
    {
        last_inst_minute_table_index = value;
        last_inst_minute_table_index.value_namespace = name_space;
        last_inst_minute_table_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer-location")
    {
        timer_location.yfilter = yfilter;
    }
    if(value_path == "timer-type")
    {
        timer_type.yfilter = yfilter;
    }
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "last-inst-second-table-index")
    {
        last_inst_second_table_index.yfilter = yfilter;
    }
    if(value_path == "last-inst-minute-table-index")
    {
        last_inst_minute_table_index.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-location" || name == "timer-type" || name == "second-table-index" || name == "minute-table-index" || name == "last-inst-second-table-index" || name == "last-inst-minute-table-index")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::LsaLastUpdatedTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "lsa-last-updated-time"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::~LsaLastUpdatedTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-last-updated-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::LsadbBaseTimeStamp()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "lsadb-base-time-stamp"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::~LsadbBaseTimeStamp()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsadb-base-time-stamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::NotDelete()
    :
    free_time{YType::uint32, "free-time"},
    no_delete{YType::boolean, "no-delete"},
    neighbor_exchange{YType::boolean, "neighbor-exchange"},
    routing_table{YType::boolean, "routing-table"},
    acknowledgement{YType::boolean, "acknowledgement"},
    maximum_age{YType::boolean, "maximum-age"},
    partial_spf{YType::boolean, "partial-spf"},
    flood_pending{YType::boolean, "flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    nsr_ack_pending{YType::boolean, "nsr-ack-pending"},
    sum_orig_pending{YType::boolean, "sum-orig-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"}
{

    yang_name = "not-delete"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::~NotDelete()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::has_data() const
{
    return free_time.is_set
	|| no_delete.is_set
	|| neighbor_exchange.is_set
	|| routing_table.is_set
	|| acknowledgement.is_set
	|| maximum_age.is_set
	|| partial_spf.is_set
	|| flood_pending.is_set
	|| rate_limit.is_set
	|| nsr_ack_pending.is_set
	|| sum_orig_pending.is_set
	|| nsr_flood_required.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(no_delete.yfilter)
	|| ydk::is_set(neighbor_exchange.yfilter)
	|| ydk::is_set(routing_table.yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| ydk::is_set(maximum_age.yfilter)
	|| ydk::is_set(partial_spf.yfilter)
	|| ydk::is_set(flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(nsr_ack_pending.yfilter)
	|| ydk::is_set(sum_orig_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "not-delete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (no_delete.is_set || is_set(no_delete.yfilter)) leaf_name_data.push_back(no_delete.get_name_leafdata());
    if (neighbor_exchange.is_set || is_set(neighbor_exchange.yfilter)) leaf_name_data.push_back(neighbor_exchange.get_name_leafdata());
    if (routing_table.is_set || is_set(routing_table.yfilter)) leaf_name_data.push_back(routing_table.get_name_leafdata());
    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());
    if (maximum_age.is_set || is_set(maximum_age.yfilter)) leaf_name_data.push_back(maximum_age.get_name_leafdata());
    if (partial_spf.is_set || is_set(partial_spf.yfilter)) leaf_name_data.push_back(partial_spf.get_name_leafdata());
    if (flood_pending.is_set || is_set(flood_pending.yfilter)) leaf_name_data.push_back(flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (nsr_ack_pending.is_set || is_set(nsr_ack_pending.yfilter)) leaf_name_data.push_back(nsr_ack_pending.get_name_leafdata());
    if (sum_orig_pending.is_set || is_set(sum_orig_pending.yfilter)) leaf_name_data.push_back(sum_orig_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-delete")
    {
        no_delete = value;
        no_delete.value_namespace = name_space;
        no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-exchange")
    {
        neighbor_exchange = value;
        neighbor_exchange.value_namespace = name_space;
        neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-table")
    {
        routing_table = value;
        routing_table.value_namespace = name_space;
        routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-age")
    {
        maximum_age = value;
        maximum_age.value_namespace = name_space;
        maximum_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial-spf")
    {
        partial_spf = value;
        partial_spf.value_namespace = name_space;
        partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-pending")
    {
        flood_pending = value;
        flood_pending.value_namespace = name_space;
        flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-ack-pending")
    {
        nsr_ack_pending = value;
        nsr_ack_pending.value_namespace = name_space;
        nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-orig-pending")
    {
        sum_orig_pending = value;
        sum_orig_pending.value_namespace = name_space;
        sum_orig_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "no-delete")
    {
        no_delete.yfilter = yfilter;
    }
    if(value_path == "neighbor-exchange")
    {
        neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "routing-table")
    {
        routing_table.yfilter = yfilter;
    }
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
    if(value_path == "maximum-age")
    {
        maximum_age.yfilter = yfilter;
    }
    if(value_path == "partial-spf")
    {
        partial_spf.yfilter = yfilter;
    }
    if(value_path == "flood-pending")
    {
        flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "nsr-ack-pending")
    {
        nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "sum-orig-pending")
    {
        sum_orig_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "free-time" || name == "no-delete" || name == "neighbor-exchange" || name == "routing-table" || name == "acknowledgement" || name == "maximum-age" || name == "partial-spf" || name == "flood-pending" || name == "rate-limit" || name == "nsr-ack-pending" || name == "sum-orig-pending" || name == "nsr-flood-required")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::LsaInternalData()
    :
    internal_lsa_type{YType::enumeration, "internal-lsa-type"}
    	,
    router_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType>())
	,network_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType>())
	,summary_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType>())
	,external_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType>())
	,opaque_link_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType>())
	,opaque_mpls_te_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType>())
	,opaque_grace_lsa(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa>())
	,opaque_router_info_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType>())
	,opaque_ep_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType>())
	,opaque_el_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType>())
{
    router_lsa_type->parent = this;
    network_lsa_type->parent = this;
    summary_lsa_type->parent = this;
    external_lsa_type->parent = this;
    opaque_link_lsa_type->parent = this;
    opaque_mpls_te_lsa_type->parent = this;
    opaque_grace_lsa->parent = this;
    opaque_router_info_lsa_type->parent = this;
    opaque_ep_lsa_type->parent = this;
    opaque_el_lsa_type->parent = this;

    yang_name = "lsa-internal-data"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::~LsaInternalData()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::has_data() const
{
    return internal_lsa_type.is_set
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_data())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_data())
	|| (summary_lsa_type !=  nullptr && summary_lsa_type->has_data())
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_data())
	|| (opaque_link_lsa_type !=  nullptr && opaque_link_lsa_type->has_data())
	|| (opaque_mpls_te_lsa_type !=  nullptr && opaque_mpls_te_lsa_type->has_data())
	|| (opaque_grace_lsa !=  nullptr && opaque_grace_lsa->has_data())
	|| (opaque_router_info_lsa_type !=  nullptr && opaque_router_info_lsa_type->has_data())
	|| (opaque_ep_lsa_type !=  nullptr && opaque_ep_lsa_type->has_data())
	|| (opaque_el_lsa_type !=  nullptr && opaque_el_lsa_type->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_lsa_type.yfilter)
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_operation())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_operation())
	|| (summary_lsa_type !=  nullptr && summary_lsa_type->has_operation())
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_operation())
	|| (opaque_link_lsa_type !=  nullptr && opaque_link_lsa_type->has_operation())
	|| (opaque_mpls_te_lsa_type !=  nullptr && opaque_mpls_te_lsa_type->has_operation())
	|| (opaque_grace_lsa !=  nullptr && opaque_grace_lsa->has_operation())
	|| (opaque_router_info_lsa_type !=  nullptr && opaque_router_info_lsa_type->has_operation())
	|| (opaque_ep_lsa_type !=  nullptr && opaque_ep_lsa_type->has_operation())
	|| (opaque_el_lsa_type !=  nullptr && opaque_el_lsa_type->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-internal-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_lsa_type.is_set || is_set(internal_lsa_type.yfilter)) leaf_name_data.push_back(internal_lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-lsa-type")
    {
        if(router_lsa_type == nullptr)
        {
            router_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType>();
        }
        return router_lsa_type;
    }

    if(child_yang_name == "network-lsa-type")
    {
        if(network_lsa_type == nullptr)
        {
            network_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType>();
        }
        return network_lsa_type;
    }

    if(child_yang_name == "summary-lsa-type")
    {
        if(summary_lsa_type == nullptr)
        {
            summary_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType>();
        }
        return summary_lsa_type;
    }

    if(child_yang_name == "external-lsa-type")
    {
        if(external_lsa_type == nullptr)
        {
            external_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType>();
        }
        return external_lsa_type;
    }

    if(child_yang_name == "opaque-link-lsa-type")
    {
        if(opaque_link_lsa_type == nullptr)
        {
            opaque_link_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType>();
        }
        return opaque_link_lsa_type;
    }

    if(child_yang_name == "opaque-mpls-te-lsa-type")
    {
        if(opaque_mpls_te_lsa_type == nullptr)
        {
            opaque_mpls_te_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType>();
        }
        return opaque_mpls_te_lsa_type;
    }

    if(child_yang_name == "opaque-grace-lsa")
    {
        if(opaque_grace_lsa == nullptr)
        {
            opaque_grace_lsa = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa>();
        }
        return opaque_grace_lsa;
    }

    if(child_yang_name == "opaque-router-info-lsa-type")
    {
        if(opaque_router_info_lsa_type == nullptr)
        {
            opaque_router_info_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType>();
        }
        return opaque_router_info_lsa_type;
    }

    if(child_yang_name == "opaque-ep-lsa-type")
    {
        if(opaque_ep_lsa_type == nullptr)
        {
            opaque_ep_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType>();
        }
        return opaque_ep_lsa_type;
    }

    if(child_yang_name == "opaque-el-lsa-type")
    {
        if(opaque_el_lsa_type == nullptr)
        {
            opaque_el_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType>();
        }
        return opaque_el_lsa_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(router_lsa_type != nullptr)
    {
        children["router-lsa-type"] = router_lsa_type;
    }

    if(network_lsa_type != nullptr)
    {
        children["network-lsa-type"] = network_lsa_type;
    }

    if(summary_lsa_type != nullptr)
    {
        children["summary-lsa-type"] = summary_lsa_type;
    }

    if(external_lsa_type != nullptr)
    {
        children["external-lsa-type"] = external_lsa_type;
    }

    if(opaque_link_lsa_type != nullptr)
    {
        children["opaque-link-lsa-type"] = opaque_link_lsa_type;
    }

    if(opaque_mpls_te_lsa_type != nullptr)
    {
        children["opaque-mpls-te-lsa-type"] = opaque_mpls_te_lsa_type;
    }

    if(opaque_grace_lsa != nullptr)
    {
        children["opaque-grace-lsa"] = opaque_grace_lsa;
    }

    if(opaque_router_info_lsa_type != nullptr)
    {
        children["opaque-router-info-lsa-type"] = opaque_router_info_lsa_type;
    }

    if(opaque_ep_lsa_type != nullptr)
    {
        children["opaque-ep-lsa-type"] = opaque_ep_lsa_type;
    }

    if(opaque_el_lsa_type != nullptr)
    {
        children["opaque-el-lsa-type"] = opaque_el_lsa_type;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-lsa-type")
    {
        internal_lsa_type = value;
        internal_lsa_type.value_namespace = name_space;
        internal_lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-lsa-type")
    {
        internal_lsa_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-lsa-type" || name == "network-lsa-type" || name == "summary-lsa-type" || name == "external-lsa-type" || name == "opaque-link-lsa-type" || name == "opaque-mpls-te-lsa-type" || name == "opaque-grace-lsa" || name == "opaque-router-info-lsa-type" || name == "opaque-ep-lsa-type" || name == "opaque-el-lsa-type" || name == "internal-lsa-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::RouterLsaType()
    :
    router_asbr{YType::boolean, "router-asbr"},
    router_abr{YType::boolean, "router-abr"},
    internal_lsa{YType::boolean, "internal-lsa"}
{

    yang_name = "router-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::~RouterLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<internal_link.size(); index++)
    {
        if(internal_link[index]->has_data())
            return true;
    }
    return router_asbr.is_set
	|| router_abr.is_set
	|| internal_lsa.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<internal_link.size(); index++)
    {
        if(internal_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_asbr.yfilter)
	|| ydk::is_set(router_abr.yfilter)
	|| ydk::is_set(internal_lsa.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_asbr.is_set || is_set(router_asbr.yfilter)) leaf_name_data.push_back(router_asbr.get_name_leafdata());
    if (router_abr.is_set || is_set(router_abr.yfilter)) leaf_name_data.push_back(router_abr.get_name_leafdata());
    if (internal_lsa.is_set || is_set(internal_lsa.yfilter)) leaf_name_data.push_back(internal_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    if(child_yang_name == "internal-link")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink>();
        c->parent = this;
        internal_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : internal_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-asbr")
    {
        router_asbr = value;
        router_asbr.value_namespace = name_space;
        router_asbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-abr")
    {
        router_abr = value;
        router_abr.value_namespace = name_space;
        router_abr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-lsa")
    {
        internal_lsa = value;
        internal_lsa.value_namespace = name_space;
        internal_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-asbr")
    {
        router_asbr.yfilter = yfilter;
    }
    if(value_path == "router-abr")
    {
        router_abr.yfilter = yfilter;
    }
    if(value_path == "internal-lsa")
    {
        internal_lsa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "internal-link" || name == "router-asbr" || name == "router-abr" || name == "internal-lsa")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::Link()
    :
    link_id{YType::str, "link-id"},
    link_data{YType::str, "link-data"},
    link_type{YType::enumeration, "link-type"},
    link_metric{YType::uint16, "link-metric"}
{

    yang_name = "link"; yang_parent_name = "router-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::~Link()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_data() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_data.is_set
	|| link_type.is_set
	|| link_metric.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_operation() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_metric.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.yfilter)) leaf_name_data.push_back(link_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tos")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos>();
        c->parent = this;
        link_tos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : link_tos)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
        link_metric.value_namespace = name_space;
        link_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-metric")
    {
        link_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-tos" || name == "link-id" || name == "link-data" || name == "link-type" || name == "link-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::LinkTos()
    :
    router_tos{YType::uint16, "router-tos"},
    tos_cost{YType::uint16, "tos-cost"}
{

    yang_name = "link-tos"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::~LinkTos()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_data() const
{
    return router_tos.is_set
	|| tos_cost.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_tos.yfilter)
	|| ydk::is_set(tos_cost.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_tos.is_set || is_set(router_tos.yfilter)) leaf_name_data.push_back(router_tos.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.yfilter)) leaf_name_data.push_back(tos_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-tos")
    {
        router_tos = value;
        router_tos.value_namespace = name_space;
        router_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
        tos_cost.value_namespace = name_space;
        tos_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-tos")
    {
        router_tos.yfilter = yfilter;
    }
    if(value_path == "tos-cost")
    {
        tos_cost.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-tos" || name == "tos-cost")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::InternalLink()
    :
    link_id{YType::str, "link-id"},
    link_data{YType::str, "link-data"},
    link_type{YType::enumeration, "link-type"},
    link_metric{YType::uint16, "link-metric"}
{

    yang_name = "internal-link"; yang_parent_name = "router-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::~InternalLink()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_data() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_data.is_set
	|| link_type.is_set
	|| link_metric.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_operation() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_metric.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.yfilter)) leaf_name_data.push_back(link_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tos")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos>();
        c->parent = this;
        link_tos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : link_tos)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
        link_metric.value_namespace = name_space;
        link_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-metric")
    {
        link_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-tos" || name == "link-id" || name == "link-data" || name == "link-type" || name == "link-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::LinkTos()
    :
    router_tos{YType::uint16, "router-tos"},
    tos_cost{YType::uint16, "tos-cost"}
{

    yang_name = "link-tos"; yang_parent_name = "internal-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::~LinkTos()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_data() const
{
    return router_tos.is_set
	|| tos_cost.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_tos.yfilter)
	|| ydk::is_set(tos_cost.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_tos.is_set || is_set(router_tos.yfilter)) leaf_name_data.push_back(router_tos.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.yfilter)) leaf_name_data.push_back(tos_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-tos")
    {
        router_tos = value;
        router_tos.value_namespace = name_space;
        router_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
        tos_cost.value_namespace = name_space;
        tos_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-tos")
    {
        router_tos.yfilter = yfilter;
    }
    if(value_path == "tos-cost")
    {
        tos_cost.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-tos" || name == "tos-cost")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NetworkLsaType()
    :
    network_prefix_length{YType::uint32, "network-prefix-length"}
{

    yang_name = "network-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::~NetworkLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_data() const
{
    for (std::size_t index=0; index<neighbor_router.size(); index++)
    {
        if(neighbor_router[index]->has_data())
            return true;
    }
    return network_prefix_length.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_operation() const
{
    for (std::size_t index=0; index<neighbor_router.size(); index++)
    {
        if(neighbor_router[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_prefix_length.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_prefix_length.is_set || is_set(network_prefix_length.yfilter)) leaf_name_data.push_back(network_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-router")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter>();
        c->parent = this;
        neighbor_router.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor_router)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-prefix-length")
    {
        network_prefix_length = value;
        network_prefix_length.value_namespace = name_space;
        network_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-prefix-length")
    {
        network_prefix_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-router" || name == "network-prefix-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::NeighborRouter()
    :
    entry{YType::str, "entry"}
{

    yang_name = "neighbor-router"; yang_parent_name = "network-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::~NeighborRouter()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaType()
    :
    summary_prefix_length{YType::uint32, "summary-prefix-length"},
    internal_sum_lsa{YType::boolean, "internal-sum-lsa"}
{

    yang_name = "summary-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::~SummaryLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_data() const
{
    for (std::size_t index=0; index<summary_lsa_metric.size(); index++)
    {
        if(summary_lsa_metric[index]->has_data())
            return true;
    }
    return summary_prefix_length.is_set
	|| internal_sum_lsa.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_operation() const
{
    for (std::size_t index=0; index<summary_lsa_metric.size(); index++)
    {
        if(summary_lsa_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(summary_prefix_length.yfilter)
	|| ydk::is_set(internal_sum_lsa.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (summary_prefix_length.is_set || is_set(summary_prefix_length.yfilter)) leaf_name_data.push_back(summary_prefix_length.get_name_leafdata());
    if (internal_sum_lsa.is_set || is_set(internal_sum_lsa.yfilter)) leaf_name_data.push_back(internal_sum_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-lsa-metric")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric>();
        c->parent = this;
        summary_lsa_metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : summary_lsa_metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "summary-prefix-length")
    {
        summary_prefix_length = value;
        summary_prefix_length.value_namespace = name_space;
        summary_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-sum-lsa")
    {
        internal_sum_lsa = value;
        internal_sum_lsa.value_namespace = name_space;
        internal_sum_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "summary-prefix-length")
    {
        summary_prefix_length.yfilter = yfilter;
    }
    if(value_path == "internal-sum-lsa")
    {
        internal_sum_lsa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-lsa-metric" || name == "summary-prefix-length" || name == "internal-sum-lsa")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::SummaryLsaMetric()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "summary-lsa-metric"; yang_parent_name = "summary-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::~SummaryLsaMetric()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalLsaType()
    :
    external_prefix_length{YType::uint32, "external-prefix-length"},
    internal_external_lsa{YType::boolean, "internal-external-lsa"}
{

    yang_name = "external-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::~ExternalLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_data() const
{
    for (std::size_t index=0; index<external_tos_metric.size(); index++)
    {
        if(external_tos_metric[index]->has_data())
            return true;
    }
    return external_prefix_length.is_set
	|| internal_external_lsa.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_operation() const
{
    for (std::size_t index=0; index<external_tos_metric.size(); index++)
    {
        if(external_tos_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(external_prefix_length.yfilter)
	|| ydk::is_set(internal_external_lsa.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_prefix_length.is_set || is_set(external_prefix_length.yfilter)) leaf_name_data.push_back(external_prefix_length.get_name_leafdata());
    if (internal_external_lsa.is_set || is_set(internal_external_lsa.yfilter)) leaf_name_data.push_back(internal_external_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-tos-metric")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric>();
        c->parent = this;
        external_tos_metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : external_tos_metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-prefix-length")
    {
        external_prefix_length = value;
        external_prefix_length.value_namespace = name_space;
        external_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-external-lsa")
    {
        internal_external_lsa = value;
        internal_external_lsa.value_namespace = name_space;
        internal_external_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-prefix-length")
    {
        external_prefix_length.yfilter = yfilter;
    }
    if(value_path == "internal-external-lsa")
    {
        internal_external_lsa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-tos-metric" || name == "external-prefix-length" || name == "internal-external-lsa")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::ExternalTosMetric()
    :
    external_metric{YType::uint32, "external-metric"},
    external_metric_type{YType::enumeration, "external-metric-type"},
    external_tos{YType::uint32, "external-tos"},
    forwarding_address{YType::str, "forwarding-address"},
    external_tag{YType::uint32, "external-tag"}
{

    yang_name = "external-tos-metric"; yang_parent_name = "external-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::~ExternalTosMetric()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_data() const
{
    return external_metric.is_set
	|| external_metric_type.is_set
	|| external_tos.is_set
	|| forwarding_address.is_set
	|| external_tag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_metric.yfilter)
	|| ydk::is_set(external_metric_type.yfilter)
	|| ydk::is_set(external_tos.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_tag.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-tos-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_metric.is_set || is_set(external_metric.yfilter)) leaf_name_data.push_back(external_metric.get_name_leafdata());
    if (external_metric_type.is_set || is_set(external_metric_type.yfilter)) leaf_name_data.push_back(external_metric_type.get_name_leafdata());
    if (external_tos.is_set || is_set(external_tos.yfilter)) leaf_name_data.push_back(external_tos.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.yfilter)) leaf_name_data.push_back(external_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-metric")
    {
        external_metric = value;
        external_metric.value_namespace = name_space;
        external_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-metric-type")
    {
        external_metric_type = value;
        external_metric_type.value_namespace = name_space;
        external_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tos")
    {
        external_tos = value;
        external_tos.value_namespace = name_space;
        external_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
        external_tag.value_namespace = name_space;
        external_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-metric")
    {
        external_metric.yfilter = yfilter;
    }
    if(value_path == "external-metric-type")
    {
        external_metric_type.yfilter = yfilter;
    }
    if(value_path == "external-tos")
    {
        external_tos.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-tag")
    {
        external_tag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-metric" || name == "external-metric-type" || name == "external-tos" || name == "forwarding-address" || name == "external-tag")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::OpaqueLinkLsaType()
    :
    opaque_interface_name{YType::str, "opaque-interface-name"}
{

    yang_name = "opaque-link-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::~OpaqueLinkLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_data() const
{
    return opaque_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opaque_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-link-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_interface_name.is_set || is_set(opaque_interface_name.yfilter)) leaf_name_data.push_back(opaque_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-interface-name")
    {
        opaque_interface_name = value;
        opaque_interface_name.value_namespace = name_space;
        opaque_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-interface-name")
    {
        opaque_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opaque-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::OpaqueMplsTeLsaType()
{

    yang_name = "opaque-mpls-te-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::~OpaqueMplsTeLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-mpls-te-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::Tlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_length{YType::uint16, "tlv-length"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    tlv_data{YType::str, "tlv-data"}
{

    yang_name = "tlv"; yang_parent_name = "opaque-mpls-te-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_data() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return tlv_type.is_set
	|| tlv_length.is_set
	|| mpls_router_id.is_set
	|| mpls_dste_link.is_set
	|| tlv_data.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tlv_type.yfilter)
	|| ydk::is_set(tlv_length.yfilter)
	|| ydk::is_set(mpls_router_id.yfilter)
	|| ydk::is_set(mpls_dste_link.yfilter)
	|| ydk::is_set(tlv_data.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : te_link_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
        tlv_length.value_namespace = name_space;
        tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
        mpls_router_id.value_namespace = name_space;
        mpls_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
        mpls_dste_link.value_namespace = name_space;
        mpls_dste_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
        tlv_data.value_namespace = name_space;
        tlv_data.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
    if(value_path == "tlv-length")
    {
        tlv_length.yfilter = yfilter;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id.yfilter = yfilter;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link.yfilter = yfilter;
    }
    if(value_path == "tlv-data")
    {
        tlv_data.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "tlv-type" || name == "tlv-length" || name == "mpls-router-id" || name == "mpls-dste-link" || name == "tlv-data")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_type.is_set
	|| sub_tlv_length.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
        sub_tlv_type.value_namespace = name_space;
        sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
        sub_tlv_length.value_namespace = name_space;
        sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
        sub_tlv_value.value_namespace = name_space;
        sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-type" || name == "sub-tlv-length" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::OpaqueGraceLsa()
    :
    grace_period{YType::uint32, "grace-period"},
    grace_reason{YType::enumeration, "grace-reason"},
    ip_address{YType::str, "ip-address"}
{

    yang_name = "opaque-grace-lsa"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::~OpaqueGraceLsa()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_data() const
{
    return grace_period.is_set
	|| grace_reason.is_set
	|| ip_address.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grace_period.yfilter)
	|| ydk::is_set(grace_reason.yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-grace-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grace_period.is_set || is_set(grace_period.yfilter)) leaf_name_data.push_back(grace_period.get_name_leafdata());
    if (grace_reason.is_set || is_set(grace_reason.yfilter)) leaf_name_data.push_back(grace_reason.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grace-period")
    {
        grace_period = value;
        grace_period.value_namespace = name_space;
        grace_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grace-reason")
    {
        grace_reason = value;
        grace_reason.value_namespace = name_space;
        grace_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grace-period")
    {
        grace_period.yfilter = yfilter;
    }
    if(value_path == "grace-reason")
    {
        grace_reason.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grace-period" || name == "grace-reason" || name == "ip-address")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRouterInfoLsaType()
    :
    opaque_rilsa_scope{YType::enumeration, "opaque-rilsa-scope"},
    opaque_ri_interface_name{YType::str, "opaque-ri-interface-name"}
{

    yang_name = "opaque-router-info-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::~OpaqueRouterInfoLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_data() const
{
    for (std::size_t index=0; index<opaque_ritlv.size(); index++)
    {
        if(opaque_ritlv[index]->has_data())
            return true;
    }
    return opaque_rilsa_scope.is_set
	|| opaque_ri_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_operation() const
{
    for (std::size_t index=0; index<opaque_ritlv.size(); index++)
    {
        if(opaque_ritlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(opaque_rilsa_scope.yfilter)
	|| ydk::is_set(opaque_ri_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-router-info-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_rilsa_scope.is_set || is_set(opaque_rilsa_scope.yfilter)) leaf_name_data.push_back(opaque_rilsa_scope.get_name_leafdata());
    if (opaque_ri_interface_name.is_set || is_set(opaque_ri_interface_name.yfilter)) leaf_name_data.push_back(opaque_ri_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opaque-ritlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv>();
        c->parent = this;
        opaque_ritlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : opaque_ritlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-rilsa-scope")
    {
        opaque_rilsa_scope = value;
        opaque_rilsa_scope.value_namespace = name_space;
        opaque_rilsa_scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-ri-interface-name")
    {
        opaque_ri_interface_name = value;
        opaque_ri_interface_name.value_namespace = name_space;
        opaque_ri_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-rilsa-scope")
    {
        opaque_rilsa_scope.yfilter = yfilter;
    }
    if(value_path == "opaque-ri-interface-name")
    {
        opaque_ri_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opaque-ritlv" || name == "opaque-rilsa-scope" || name == "opaque-ri-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::OpaqueRitlv()
    :
    ritlv_internal_type{YType::enumeration, "ritlv-internal-type"}
    	,
    unknown_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv>())
	,rtr_cap_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv>())
	,pcedtlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv>())
	,sr_algo_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv>())
	,sr_range_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv>())
	,node_msdtlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv>())
{
    unknown_tlv->parent = this;
    rtr_cap_tlv->parent = this;
    pcedtlv->parent = this;
    sr_algo_tlv->parent = this;
    sr_range_tlv->parent = this;
    node_msdtlv->parent = this;

    yang_name = "opaque-ritlv"; yang_parent_name = "opaque-router-info-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::~OpaqueRitlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_data() const
{
    return ritlv_internal_type.is_set
	|| (unknown_tlv !=  nullptr && unknown_tlv->has_data())
	|| (rtr_cap_tlv !=  nullptr && rtr_cap_tlv->has_data())
	|| (pcedtlv !=  nullptr && pcedtlv->has_data())
	|| (sr_algo_tlv !=  nullptr && sr_algo_tlv->has_data())
	|| (sr_range_tlv !=  nullptr && sr_range_tlv->has_data())
	|| (node_msdtlv !=  nullptr && node_msdtlv->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ritlv_internal_type.yfilter)
	|| (unknown_tlv !=  nullptr && unknown_tlv->has_operation())
	|| (rtr_cap_tlv !=  nullptr && rtr_cap_tlv->has_operation())
	|| (pcedtlv !=  nullptr && pcedtlv->has_operation())
	|| (sr_algo_tlv !=  nullptr && sr_algo_tlv->has_operation())
	|| (sr_range_tlv !=  nullptr && sr_range_tlv->has_operation())
	|| (node_msdtlv !=  nullptr && node_msdtlv->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ritlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ritlv_internal_type.is_set || is_set(ritlv_internal_type.yfilter)) leaf_name_data.push_back(ritlv_internal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-tlv")
    {
        if(unknown_tlv == nullptr)
        {
            unknown_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv>();
        }
        return unknown_tlv;
    }

    if(child_yang_name == "rtr-cap-tlv")
    {
        if(rtr_cap_tlv == nullptr)
        {
            rtr_cap_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv>();
        }
        return rtr_cap_tlv;
    }

    if(child_yang_name == "pcedtlv")
    {
        if(pcedtlv == nullptr)
        {
            pcedtlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv>();
        }
        return pcedtlv;
    }

    if(child_yang_name == "sr-algo-tlv")
    {
        if(sr_algo_tlv == nullptr)
        {
            sr_algo_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv>();
        }
        return sr_algo_tlv;
    }

    if(child_yang_name == "sr-range-tlv")
    {
        if(sr_range_tlv == nullptr)
        {
            sr_range_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv>();
        }
        return sr_range_tlv;
    }

    if(child_yang_name == "node-msdtlv")
    {
        if(node_msdtlv == nullptr)
        {
            node_msdtlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv>();
        }
        return node_msdtlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(unknown_tlv != nullptr)
    {
        children["unknown-tlv"] = unknown_tlv;
    }

    if(rtr_cap_tlv != nullptr)
    {
        children["rtr-cap-tlv"] = rtr_cap_tlv;
    }

    if(pcedtlv != nullptr)
    {
        children["pcedtlv"] = pcedtlv;
    }

    if(sr_algo_tlv != nullptr)
    {
        children["sr-algo-tlv"] = sr_algo_tlv;
    }

    if(sr_range_tlv != nullptr)
    {
        children["sr-range-tlv"] = sr_range_tlv;
    }

    if(node_msdtlv != nullptr)
    {
        children["node-msdtlv"] = node_msdtlv;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ritlv-internal-type")
    {
        ritlv_internal_type = value;
        ritlv_internal_type.value_namespace = name_space;
        ritlv_internal_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ritlv-internal-type")
    {
        ritlv_internal_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-tlv" || name == "rtr-cap-tlv" || name == "pcedtlv" || name == "sr-algo-tlv" || name == "sr-range-tlv" || name == "node-msdtlv" || name == "ritlv-internal-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::UnknownTlv()
    :
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_genvalue{YType::str, "ri-genvalue"}
{

    yang_name = "unknown-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::~UnknownTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_data() const
{
    return ri_gen_tlv_type.is_set
	|| ri_gen_tlv_length.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ri_gen_tlv_type.yfilter)
	|| ydk::is_set(ri_gen_tlv_length.yfilter)
	|| ydk::is_set(ri_genvalue.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.yfilter)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.yfilter)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.yfilter)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
        ri_gen_tlv_type.value_namespace = name_space;
        ri_gen_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
        ri_gen_tlv_length.value_namespace = name_space;
        ri_gen_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
        ri_genvalue.value_namespace = name_space;
        ri_genvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type.yfilter = yfilter;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length.yfilter = yfilter;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-gen-tlv-type" || name == "ri-gen-tlv-length" || name == "ri-genvalue")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::RtrCapTlv()
    :
    rtr_cap_tlv_length{YType::uint16, "rtr-cap-tlv-length"},
    rtr_cap_graceful_restart{YType::boolean, "rtr-cap-graceful-restart"},
    rtr_cap_graceful_restart_helper{YType::boolean, "rtr-cap-graceful-restart-helper"},
    rtr_cap_stub_rtr{YType::boolean, "rtr-cap-stub-rtr"},
    rtr_cap_area_te{YType::boolean, "rtr-cap-area-te"},
    rtr_cap_p2plan{YType::boolean, "rtr-cap-p2plan"},
    rtr_cap_te_exp{YType::boolean, "rtr-cap-te-exp"},
    rtr_cap_all_bits{YType::uint32, "rtr-cap-all-bits"},
    rtr_cap_additional_info{YType::str, "rtr-cap-additional-info"}
{

    yang_name = "rtr-cap-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::~RtrCapTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_data() const
{
    return rtr_cap_tlv_length.is_set
	|| rtr_cap_graceful_restart.is_set
	|| rtr_cap_graceful_restart_helper.is_set
	|| rtr_cap_stub_rtr.is_set
	|| rtr_cap_area_te.is_set
	|| rtr_cap_p2plan.is_set
	|| rtr_cap_te_exp.is_set
	|| rtr_cap_all_bits.is_set
	|| rtr_cap_additional_info.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_cap_tlv_length.yfilter)
	|| ydk::is_set(rtr_cap_graceful_restart.yfilter)
	|| ydk::is_set(rtr_cap_graceful_restart_helper.yfilter)
	|| ydk::is_set(rtr_cap_stub_rtr.yfilter)
	|| ydk::is_set(rtr_cap_area_te.yfilter)
	|| ydk::is_set(rtr_cap_p2plan.yfilter)
	|| ydk::is_set(rtr_cap_te_exp.yfilter)
	|| ydk::is_set(rtr_cap_all_bits.yfilter)
	|| ydk::is_set(rtr_cap_additional_info.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtr-cap-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_cap_tlv_length.is_set || is_set(rtr_cap_tlv_length.yfilter)) leaf_name_data.push_back(rtr_cap_tlv_length.get_name_leafdata());
    if (rtr_cap_graceful_restart.is_set || is_set(rtr_cap_graceful_restart.yfilter)) leaf_name_data.push_back(rtr_cap_graceful_restart.get_name_leafdata());
    if (rtr_cap_graceful_restart_helper.is_set || is_set(rtr_cap_graceful_restart_helper.yfilter)) leaf_name_data.push_back(rtr_cap_graceful_restart_helper.get_name_leafdata());
    if (rtr_cap_stub_rtr.is_set || is_set(rtr_cap_stub_rtr.yfilter)) leaf_name_data.push_back(rtr_cap_stub_rtr.get_name_leafdata());
    if (rtr_cap_area_te.is_set || is_set(rtr_cap_area_te.yfilter)) leaf_name_data.push_back(rtr_cap_area_te.get_name_leafdata());
    if (rtr_cap_p2plan.is_set || is_set(rtr_cap_p2plan.yfilter)) leaf_name_data.push_back(rtr_cap_p2plan.get_name_leafdata());
    if (rtr_cap_te_exp.is_set || is_set(rtr_cap_te_exp.yfilter)) leaf_name_data.push_back(rtr_cap_te_exp.get_name_leafdata());
    if (rtr_cap_all_bits.is_set || is_set(rtr_cap_all_bits.yfilter)) leaf_name_data.push_back(rtr_cap_all_bits.get_name_leafdata());
    if (rtr_cap_additional_info.is_set || is_set(rtr_cap_additional_info.yfilter)) leaf_name_data.push_back(rtr_cap_additional_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-cap-tlv-length")
    {
        rtr_cap_tlv_length = value;
        rtr_cap_tlv_length.value_namespace = name_space;
        rtr_cap_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-graceful-restart")
    {
        rtr_cap_graceful_restart = value;
        rtr_cap_graceful_restart.value_namespace = name_space;
        rtr_cap_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-graceful-restart-helper")
    {
        rtr_cap_graceful_restart_helper = value;
        rtr_cap_graceful_restart_helper.value_namespace = name_space;
        rtr_cap_graceful_restart_helper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-stub-rtr")
    {
        rtr_cap_stub_rtr = value;
        rtr_cap_stub_rtr.value_namespace = name_space;
        rtr_cap_stub_rtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-area-te")
    {
        rtr_cap_area_te = value;
        rtr_cap_area_te.value_namespace = name_space;
        rtr_cap_area_te.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-p2plan")
    {
        rtr_cap_p2plan = value;
        rtr_cap_p2plan.value_namespace = name_space;
        rtr_cap_p2plan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-te-exp")
    {
        rtr_cap_te_exp = value;
        rtr_cap_te_exp.value_namespace = name_space;
        rtr_cap_te_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-all-bits")
    {
        rtr_cap_all_bits = value;
        rtr_cap_all_bits.value_namespace = name_space;
        rtr_cap_all_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-additional-info")
    {
        rtr_cap_additional_info = value;
        rtr_cap_additional_info.value_namespace = name_space;
        rtr_cap_additional_info.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-cap-tlv-length")
    {
        rtr_cap_tlv_length.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-graceful-restart")
    {
        rtr_cap_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-graceful-restart-helper")
    {
        rtr_cap_graceful_restart_helper.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-stub-rtr")
    {
        rtr_cap_stub_rtr.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-area-te")
    {
        rtr_cap_area_te.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-p2plan")
    {
        rtr_cap_p2plan.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-te-exp")
    {
        rtr_cap_te_exp.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-all-bits")
    {
        rtr_cap_all_bits.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-additional-info")
    {
        rtr_cap_additional_info.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-cap-tlv-length" || name == "rtr-cap-graceful-restart" || name == "rtr-cap-graceful-restart-helper" || name == "rtr-cap-stub-rtr" || name == "rtr-cap-area-te" || name == "rtr-cap-p2plan" || name == "rtr-cap-te-exp" || name == "rtr-cap-all-bits" || name == "rtr-cap-additional-info")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::Pcedtlv()
    :
    pcedtlv_length{YType::uint16, "pcedtlv-length"}
    	,
    pced_addr(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>())
	,pced_scope(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>())
{
    pced_addr->parent = this;
    pced_scope->parent = this;

    yang_name = "pcedtlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::~Pcedtlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_data() const
{
    return pcedtlv_length.is_set
	|| (pced_addr !=  nullptr && pced_addr->has_data())
	|| (pced_scope !=  nullptr && pced_scope->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcedtlv_length.yfilter)
	|| (pced_addr !=  nullptr && pced_addr->has_operation())
	|| (pced_scope !=  nullptr && pced_scope->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcedtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcedtlv_length.is_set || is_set(pcedtlv_length.yfilter)) leaf_name_data.push_back(pcedtlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pced-addr")
    {
        if(pced_addr == nullptr)
        {
            pced_addr = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>();
        }
        return pced_addr;
    }

    if(child_yang_name == "pced-scope")
    {
        if(pced_scope == nullptr)
        {
            pced_scope = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>();
        }
        return pced_scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pced_addr != nullptr)
    {
        children["pced-addr"] = pced_addr;
    }

    if(pced_scope != nullptr)
    {
        children["pced-scope"] = pced_scope;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcedtlv-length")
    {
        pcedtlv_length = value;
        pcedtlv_length.value_namespace = name_space;
        pcedtlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcedtlv-length")
    {
        pcedtlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pced-addr" || name == "pced-scope" || name == "pcedtlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PcedAddr()
    :
    pce_addr_type{YType::enumeration, "pce-addr-type"}
    	,
    pce_addr_unknown_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>())
	,ipv4pce_addr(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr>())
	,ipv6pce_addr(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr>())
{
    pce_addr_unknown_tlv->parent = this;
    ipv4pce_addr->parent = this;
    ipv6pce_addr->parent = this;

    yang_name = "pced-addr"; yang_parent_name = "pcedtlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::~PcedAddr()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_data() const
{
    return pce_addr_type.is_set
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_data())
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_data())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_addr_type.yfilter)
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_operation())
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_operation())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_addr_type.is_set || is_set(pce_addr_type.yfilter)) leaf_name_data.push_back(pce_addr_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pce-addr-unknown-tlv")
    {
        if(pce_addr_unknown_tlv == nullptr)
        {
            pce_addr_unknown_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>();
        }
        return pce_addr_unknown_tlv;
    }

    if(child_yang_name == "ipv4pce-addr")
    {
        if(ipv4pce_addr == nullptr)
        {
            ipv4pce_addr = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr>();
        }
        return ipv4pce_addr;
    }

    if(child_yang_name == "ipv6pce-addr")
    {
        if(ipv6pce_addr == nullptr)
        {
            ipv6pce_addr = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr>();
        }
        return ipv6pce_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pce_addr_unknown_tlv != nullptr)
    {
        children["pce-addr-unknown-tlv"] = pce_addr_unknown_tlv;
    }

    if(ipv4pce_addr != nullptr)
    {
        children["ipv4pce-addr"] = ipv4pce_addr;
    }

    if(ipv6pce_addr != nullptr)
    {
        children["ipv6pce-addr"] = ipv6pce_addr;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-addr-type")
    {
        pce_addr_type = value;
        pce_addr_type.value_namespace = name_space;
        pce_addr_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-addr-type")
    {
        pce_addr_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-addr-unknown-tlv" || name == "ipv4pce-addr" || name == "ipv6pce-addr" || name == "pce-addr-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::PceAddrUnknownTlv()
    :
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_genvalue{YType::str, "ri-genvalue"}
{

    yang_name = "pce-addr-unknown-tlv"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::~PceAddrUnknownTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_data() const
{
    return ri_gen_tlv_type.is_set
	|| ri_gen_tlv_length.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ri_gen_tlv_type.yfilter)
	|| ydk::is_set(ri_gen_tlv_length.yfilter)
	|| ydk::is_set(ri_genvalue.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-addr-unknown-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.yfilter)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.yfilter)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.yfilter)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
        ri_gen_tlv_type.value_namespace = name_space;
        ri_gen_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
        ri_gen_tlv_length.value_namespace = name_space;
        ri_gen_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
        ri_genvalue.value_namespace = name_space;
        ri_genvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type.yfilter = yfilter;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length.yfilter = yfilter;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-gen-tlv-type" || name == "ri-gen-tlv-length" || name == "ri-genvalue")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::Ipv4PceAddr()
    :
    pceipv4_addr{YType::str, "pceipv4-addr"}
{

    yang_name = "ipv4pce-addr"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::~Ipv4PceAddr()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_data() const
{
    return pceipv4_addr.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pceipv4_addr.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4pce-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv4_addr.is_set || is_set(pceipv4_addr.yfilter)) leaf_name_data.push_back(pceipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pceipv4-addr")
    {
        pceipv4_addr = value;
        pceipv4_addr.value_namespace = name_space;
        pceipv4_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pceipv4-addr")
    {
        pceipv4_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pceipv4-addr")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::Ipv6PceAddr()
    :
    pceipv6_addr{YType::str, "pceipv6-addr"}
{

    yang_name = "ipv6pce-addr"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::~Ipv6PceAddr()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_data() const
{
    return pceipv6_addr.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pceipv6_addr.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6pce-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv6_addr.is_set || is_set(pceipv6_addr.yfilter)) leaf_name_data.push_back(pceipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pceipv6-addr")
    {
        pceipv6_addr = value;
        pceipv6_addr.value_namespace = name_space;
        pceipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pceipv6-addr")
    {
        pceipv6_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pceipv6-addr")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::PcedScope()
    :
    lbit{YType::boolean, "lbit"},
    rbit{YType::boolean, "rbit"},
    rd_bit{YType::boolean, "rd-bit"},
    sbit{YType::boolean, "sbit"},
    sd_bit{YType::boolean, "sd-bit"},
    ybit{YType::boolean, "ybit"},
    pref_l{YType::uint8, "pref-l"},
    pref_r{YType::uint8, "pref-r"},
    pref_s{YType::uint8, "pref-s"},
    pref_y{YType::uint8, "pref-y"},
    all_scope_info_bits{YType::uint32, "all-scope-info-bits"}
{

    yang_name = "pced-scope"; yang_parent_name = "pcedtlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::~PcedScope()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_data() const
{
    return lbit.is_set
	|| rbit.is_set
	|| rd_bit.is_set
	|| sbit.is_set
	|| sd_bit.is_set
	|| ybit.is_set
	|| pref_l.is_set
	|| pref_r.is_set
	|| pref_s.is_set
	|| pref_y.is_set
	|| all_scope_info_bits.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lbit.yfilter)
	|| ydk::is_set(rbit.yfilter)
	|| ydk::is_set(rd_bit.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(sd_bit.yfilter)
	|| ydk::is_set(ybit.yfilter)
	|| ydk::is_set(pref_l.yfilter)
	|| ydk::is_set(pref_r.yfilter)
	|| ydk::is_set(pref_s.yfilter)
	|| ydk::is_set(pref_y.yfilter)
	|| ydk::is_set(all_scope_info_bits.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lbit.is_set || is_set(lbit.yfilter)) leaf_name_data.push_back(lbit.get_name_leafdata());
    if (rbit.is_set || is_set(rbit.yfilter)) leaf_name_data.push_back(rbit.get_name_leafdata());
    if (rd_bit.is_set || is_set(rd_bit.yfilter)) leaf_name_data.push_back(rd_bit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (sd_bit.is_set || is_set(sd_bit.yfilter)) leaf_name_data.push_back(sd_bit.get_name_leafdata());
    if (ybit.is_set || is_set(ybit.yfilter)) leaf_name_data.push_back(ybit.get_name_leafdata());
    if (pref_l.is_set || is_set(pref_l.yfilter)) leaf_name_data.push_back(pref_l.get_name_leafdata());
    if (pref_r.is_set || is_set(pref_r.yfilter)) leaf_name_data.push_back(pref_r.get_name_leafdata());
    if (pref_s.is_set || is_set(pref_s.yfilter)) leaf_name_data.push_back(pref_s.get_name_leafdata());
    if (pref_y.is_set || is_set(pref_y.yfilter)) leaf_name_data.push_back(pref_y.get_name_leafdata());
    if (all_scope_info_bits.is_set || is_set(all_scope_info_bits.yfilter)) leaf_name_data.push_back(all_scope_info_bits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lbit")
    {
        lbit = value;
        lbit.value_namespace = name_space;
        lbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rbit")
    {
        rbit = value;
        rbit.value_namespace = name_space;
        rbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd-bit")
    {
        rd_bit = value;
        rd_bit.value_namespace = name_space;
        rd_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sd-bit")
    {
        sd_bit = value;
        sd_bit.value_namespace = name_space;
        sd_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ybit")
    {
        ybit = value;
        ybit.value_namespace = name_space;
        ybit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-l")
    {
        pref_l = value;
        pref_l.value_namespace = name_space;
        pref_l.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-r")
    {
        pref_r = value;
        pref_r.value_namespace = name_space;
        pref_r.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-s")
    {
        pref_s = value;
        pref_s.value_namespace = name_space;
        pref_s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-y")
    {
        pref_y = value;
        pref_y.value_namespace = name_space;
        pref_y.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-scope-info-bits")
    {
        all_scope_info_bits = value;
        all_scope_info_bits.value_namespace = name_space;
        all_scope_info_bits.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lbit")
    {
        lbit.yfilter = yfilter;
    }
    if(value_path == "rbit")
    {
        rbit.yfilter = yfilter;
    }
    if(value_path == "rd-bit")
    {
        rd_bit.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "sd-bit")
    {
        sd_bit.yfilter = yfilter;
    }
    if(value_path == "ybit")
    {
        ybit.yfilter = yfilter;
    }
    if(value_path == "pref-l")
    {
        pref_l.yfilter = yfilter;
    }
    if(value_path == "pref-r")
    {
        pref_r.yfilter = yfilter;
    }
    if(value_path == "pref-s")
    {
        pref_s.yfilter = yfilter;
    }
    if(value_path == "pref-y")
    {
        pref_y.yfilter = yfilter;
    }
    if(value_path == "all-scope-info-bits")
    {
        all_scope_info_bits.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbit" || name == "rbit" || name == "rd-bit" || name == "sbit" || name == "sd-bit" || name == "ybit" || name == "pref-l" || name == "pref-r" || name == "pref-s" || name == "pref-y" || name == "all-scope-info-bits")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoTlv()
    :
    sr_algo_length{YType::uint16, "sr-algo-length"},
    sr_algo_value{YType::str, "sr-algo-value"}
{

    yang_name = "sr-algo-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::~SrAlgoTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_data() const
{
    return sr_algo_length.is_set
	|| sr_algo_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_algo_length.yfilter)
	|| ydk::is_set(sr_algo_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-algo-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_algo_length.is_set || is_set(sr_algo_length.yfilter)) leaf_name_data.push_back(sr_algo_length.get_name_leafdata());
    if (sr_algo_value.is_set || is_set(sr_algo_value.yfilter)) leaf_name_data.push_back(sr_algo_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-algo-length")
    {
        sr_algo_length = value;
        sr_algo_length.value_namespace = name_space;
        sr_algo_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-algo-value")
    {
        sr_algo_value = value;
        sr_algo_value.value_namespace = name_space;
        sr_algo_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-algo-length")
    {
        sr_algo_length.yfilter = yfilter;
    }
    if(value_path == "sr-algo-value")
    {
        sr_algo_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-algo-length" || name == "sr-algo-value")
        return true;
    return false;
}


}
}

