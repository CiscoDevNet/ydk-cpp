
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_2.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::SubPoolUnreserveBwPerPriority()
{

    yang_name = "sub-pool-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::~SubPoolUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_data() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_operation() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-unreserve-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-per-priority")
    {
        for(auto const & c : bw_per_priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority>();
        c->parent = this;
        bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bw_per_priority)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-per-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::BwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "bw-per-priority"; yang_parent_name = "sub-pool-unreserve-bw-per-priority"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::~BwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsTeLink_()
    :
    affinity{YType::uint32, "affinity"},
    dste_allocation_model_id{YType::enumeration, "dste-allocation-model-id"},
    dste_in_use{YType::boolean, "dste-in-use"},
    fragment_id{YType::uint32, "fragment-id"},
    igp_metric{YType::uint32, "igp-metric"},
    input_interface_id{YType::uint32, "input-interface-id"},
    link_address{YType::str, "link-address"},
    maximum_link_bw{YType::uint32, "maximum-link-bw"},
    maximum_link_reservable_bw{YType::uint32, "maximum-link-reservable-bw"},
    maximum_link_sub_reservable_bw{YType::uint32, "maximum-link-sub-reservable-bw"},
    mpls_link_instance{YType::uint32, "mpls-link-instance"},
    mpls_link_type{YType::enumeration, "mpls-link-type"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    new_link{YType::boolean, "new-link"},
    number_of_optional_tl_vs{YType::uint8, "number-of-optional-tl-vs"},
    output_interface_id{YType::uint32, "output-interface-id"},
    priority_count{YType::int32, "priority-count"},
    te_metric{YType::uint32, "te-metric"}
    	,
    extended_admin_group_list(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList>())
	,global_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority>())
	,link_protocol_priority_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability>())
	,link_sw_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability>())
	,sub_pool_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority>())
{
    extended_admin_group_list->parent = this;
    global_unreserve_bw_per_priority->parent = this;
    link_protocol_priority_capability->parent = this;
    link_sw_capability->parent = this;
    sub_pool_unreserve_bw_per_priority->parent = this;

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::~MplsTeLink_()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_data())
            return true;
    }
    return affinity.is_set
	|| dste_allocation_model_id.is_set
	|| dste_in_use.is_set
	|| fragment_id.is_set
	|| igp_metric.is_set
	|| input_interface_id.is_set
	|| link_address.is_set
	|| maximum_link_bw.is_set
	|| maximum_link_reservable_bw.is_set
	|| maximum_link_sub_reservable_bw.is_set
	|| mpls_link_instance.is_set
	|| mpls_link_type.is_set
	|| neighbor_ip_address.is_set
	|| neighbor_system_id.is_set
	|| new_link.is_set
	|| number_of_optional_tl_vs.is_set
	|| output_interface_id.is_set
	|| priority_count.is_set
	|| te_metric.is_set
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_data())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_data())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_data())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_data())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(dste_allocation_model_id.yfilter)
	|| ydk::is_set(dste_in_use.yfilter)
	|| ydk::is_set(fragment_id.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(input_interface_id.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(maximum_link_bw.yfilter)
	|| ydk::is_set(maximum_link_reservable_bw.yfilter)
	|| ydk::is_set(maximum_link_sub_reservable_bw.yfilter)
	|| ydk::is_set(mpls_link_instance.yfilter)
	|| ydk::is_set(mpls_link_type.yfilter)
	|| ydk::is_set(neighbor_ip_address.yfilter)
	|| ydk::is_set(neighbor_system_id.yfilter)
	|| ydk::is_set(new_link.yfilter)
	|| ydk::is_set(number_of_optional_tl_vs.yfilter)
	|| ydk::is_set(output_interface_id.yfilter)
	|| ydk::is_set(priority_count.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_operation())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_operation())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_operation())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_operation())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (dste_allocation_model_id.is_set || is_set(dste_allocation_model_id.yfilter)) leaf_name_data.push_back(dste_allocation_model_id.get_name_leafdata());
    if (dste_in_use.is_set || is_set(dste_in_use.yfilter)) leaf_name_data.push_back(dste_in_use.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.yfilter)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (input_interface_id.is_set || is_set(input_interface_id.yfilter)) leaf_name_data.push_back(input_interface_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (maximum_link_bw.is_set || is_set(maximum_link_bw.yfilter)) leaf_name_data.push_back(maximum_link_bw.get_name_leafdata());
    if (maximum_link_reservable_bw.is_set || is_set(maximum_link_reservable_bw.yfilter)) leaf_name_data.push_back(maximum_link_reservable_bw.get_name_leafdata());
    if (maximum_link_sub_reservable_bw.is_set || is_set(maximum_link_sub_reservable_bw.yfilter)) leaf_name_data.push_back(maximum_link_sub_reservable_bw.get_name_leafdata());
    if (mpls_link_instance.is_set || is_set(mpls_link_instance.yfilter)) leaf_name_data.push_back(mpls_link_instance.get_name_leafdata());
    if (mpls_link_type.is_set || is_set(mpls_link_type.yfilter)) leaf_name_data.push_back(mpls_link_type.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.yfilter)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.yfilter)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (new_link.is_set || is_set(new_link.yfilter)) leaf_name_data.push_back(new_link.get_name_leafdata());
    if (number_of_optional_tl_vs.is_set || is_set(number_of_optional_tl_vs.yfilter)) leaf_name_data.push_back(number_of_optional_tl_vs.get_name_leafdata());
    if (output_interface_id.is_set || is_set(output_interface_id.yfilter)) leaf_name_data.push_back(output_interface_id.get_name_leafdata());
    if (priority_count.is_set || is_set(priority_count.yfilter)) leaf_name_data.push_back(priority_count.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-admin-group-list")
    {
        if(extended_admin_group_list == nullptr)
        {
            extended_admin_group_list = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList>();
        }
        return extended_admin_group_list;
    }

    if(child_yang_name == "global-unreserve-bw-per-priority")
    {
        if(global_unreserve_bw_per_priority == nullptr)
        {
            global_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority>();
        }
        return global_unreserve_bw_per_priority;
    }

    if(child_yang_name == "link-protocol-priority-capability")
    {
        if(link_protocol_priority_capability == nullptr)
        {
            link_protocol_priority_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability>();
        }
        return link_protocol_priority_capability;
    }

    if(child_yang_name == "link-sw-capability")
    {
        if(link_sw_capability == nullptr)
        {
            link_sw_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability>();
        }
        return link_sw_capability;
    }

    if(child_yang_name == "mplste-link-opt-tlv")
    {
        for(auto const & c : mplste_link_opt_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv>();
        c->parent = this;
        mplste_link_opt_tlv.push_back(c);
        return c;
    }

    if(child_yang_name == "sub-pool-unreserve-bw-per-priority")
    {
        if(sub_pool_unreserve_bw_per_priority == nullptr)
        {
            sub_pool_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority>();
        }
        return sub_pool_unreserve_bw_per_priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(extended_admin_group_list != nullptr)
    {
        children["extended-admin-group-list"] = extended_admin_group_list;
    }

    if(global_unreserve_bw_per_priority != nullptr)
    {
        children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
    }

    if(link_protocol_priority_capability != nullptr)
    {
        children["link-protocol-priority-capability"] = link_protocol_priority_capability;
    }

    if(link_sw_capability != nullptr)
    {
        children["link-sw-capability"] = link_sw_capability;
    }

    for (auto const & c : mplste_link_opt_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    if(sub_pool_unreserve_bw_per_priority != nullptr)
    {
        children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id = value;
        dste_allocation_model_id.value_namespace = name_space;
        dste_allocation_model_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use = value;
        dste_in_use.value_namespace = name_space;
        dste_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
        fragment_id.value_namespace = name_space;
        fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id = value;
        input_interface_id.value_namespace = name_space;
        input_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw = value;
        maximum_link_bw.value_namespace = name_space;
        maximum_link_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw = value;
        maximum_link_reservable_bw.value_namespace = name_space;
        maximum_link_reservable_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw = value;
        maximum_link_sub_reservable_bw.value_namespace = name_space;
        maximum_link_sub_reservable_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance = value;
        mpls_link_instance.value_namespace = name_space;
        mpls_link_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type = value;
        mpls_link_type.value_namespace = name_space;
        mpls_link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
        neighbor_ip_address.value_namespace = name_space;
        neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
        neighbor_system_id.value_namespace = name_space;
        neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-link")
    {
        new_link = value;
        new_link.value_namespace = name_space;
        new_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs = value;
        number_of_optional_tl_vs.value_namespace = name_space;
        number_of_optional_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id = value;
        output_interface_id.value_namespace = name_space;
        output_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-count")
    {
        priority_count = value;
        priority_count.value_namespace = name_space;
        priority_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id.yfilter = yfilter;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use.yfilter = yfilter;
    }
    if(value_path == "fragment-id")
    {
        fragment_id.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw.yfilter = yfilter;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw.yfilter = yfilter;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw.yfilter = yfilter;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance.yfilter = yfilter;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "new-link")
    {
        new_link.yfilter = yfilter;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs.yfilter = yfilter;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id.yfilter = yfilter;
    }
    if(value_path == "priority-count")
    {
        priority_count.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-admin-group-list" || name == "global-unreserve-bw-per-priority" || name == "link-protocol-priority-capability" || name == "link-sw-capability" || name == "mplste-link-opt-tlv" || name == "sub-pool-unreserve-bw-per-priority" || name == "affinity" || name == "dste-allocation-model-id" || name == "dste-in-use" || name == "fragment-id" || name == "igp-metric" || name == "input-interface-id" || name == "link-address" || name == "maximum-link-bw" || name == "maximum-link-reservable-bw" || name == "maximum-link-sub-reservable-bw" || name == "mpls-link-instance" || name == "mpls-link-type" || name == "neighbor-ip-address" || name == "neighbor-system-id" || name == "new-link" || name == "number-of-optional-tl-vs" || name == "output-interface-id" || name == "priority-count" || name == "te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtendedAdminGroupList()
    :
    extended_admin_size{YType::uint32, "extended-admin-size"}
{

    yang_name = "extended-admin-group-list"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::~ExtendedAdminGroupList()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::has_data() const
{
    for (std::size_t index=0; index<ext_admin_data.size(); index++)
    {
        if(ext_admin_data[index]->has_data())
            return true;
    }
    return extended_admin_size.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::has_operation() const
{
    for (std::size_t index=0; index<ext_admin_data.size(); index++)
    {
        if(ext_admin_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(extended_admin_size.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-admin-group-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_admin_size.is_set || is_set(extended_admin_size.yfilter)) leaf_name_data.push_back(extended_admin_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-admin-data")
    {
        for(auto const & c : ext_admin_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData>();
        c->parent = this;
        ext_admin_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ext_admin_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-admin-size")
    {
        extended_admin_size = value;
        extended_admin_size.value_namespace = name_space;
        extended_admin_size.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-admin-size")
    {
        extended_admin_size.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-admin-data" || name == "extended-admin-size")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::ExtAdminData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "ext-admin-data"; yang_parent_name = "extended-admin-group-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::~ExtAdminData()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-admin-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::GlobalUnreserveBwPerPriority()
{

    yang_name = "global-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::~GlobalUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::has_data() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::has_operation() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-unreserve-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-per-priority")
    {
        for(auto const & c : bw_per_priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority>();
        c->parent = this;
        bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bw_per_priority)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-per-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::BwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "bw-per-priority"; yang_parent_name = "global-unreserve-bw-per-priority"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::~BwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::LinkProtocolPriorityCapability()
    :
    link_protocol_capability{YType::uint8, "link-protocol-capability"},
    link_protocol_priority{YType::uint8, "link-protocol-priority"}
{

    yang_name = "link-protocol-priority-capability"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::~LinkProtocolPriorityCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::has_data() const
{
    return link_protocol_capability.is_set
	|| link_protocol_priority.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_protocol_capability.yfilter)
	|| ydk::is_set(link_protocol_priority.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-protocol-priority-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_protocol_capability.is_set || is_set(link_protocol_capability.yfilter)) leaf_name_data.push_back(link_protocol_capability.get_name_leafdata());
    if (link_protocol_priority.is_set || is_set(link_protocol_priority.yfilter)) leaf_name_data.push_back(link_protocol_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-protocol-capability")
    {
        link_protocol_capability = value;
        link_protocol_capability.value_namespace = name_space;
        link_protocol_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-protocol-priority")
    {
        link_protocol_priority = value;
        link_protocol_priority.value_namespace = name_space;
        link_protocol_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-protocol-capability")
    {
        link_protocol_capability.yfilter = yfilter;
    }
    if(value_path == "link-protocol-priority")
    {
        link_protocol_priority.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-protocol-capability" || name == "link-protocol-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::LinkSwCapability()
    :
    link_encoding{YType::uint8, "link-encoding"},
    link_mtu{YType::uint16, "link-mtu"},
    link_switching_capability{YType::uint8, "link-switching-capability"},
    minimum_lsp_bw{YType::uint64, "minimum-lsp-bw"}
{

    yang_name = "link-sw-capability"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::~LinkSwCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::has_data() const
{
    for (std::size_t index=0; index<maximum_lsp_bw_per_priority.size(); index++)
    {
        if(maximum_lsp_bw_per_priority[index]->has_data())
            return true;
    }
    return link_encoding.is_set
	|| link_mtu.is_set
	|| link_switching_capability.is_set
	|| minimum_lsp_bw.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::has_operation() const
{
    for (std::size_t index=0; index<maximum_lsp_bw_per_priority.size(); index++)
    {
        if(maximum_lsp_bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_encoding.yfilter)
	|| ydk::is_set(link_mtu.yfilter)
	|| ydk::is_set(link_switching_capability.yfilter)
	|| ydk::is_set(minimum_lsp_bw.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-sw-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_encoding.is_set || is_set(link_encoding.yfilter)) leaf_name_data.push_back(link_encoding.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.yfilter)) leaf_name_data.push_back(link_mtu.get_name_leafdata());
    if (link_switching_capability.is_set || is_set(link_switching_capability.yfilter)) leaf_name_data.push_back(link_switching_capability.get_name_leafdata());
    if (minimum_lsp_bw.is_set || is_set(minimum_lsp_bw.yfilter)) leaf_name_data.push_back(minimum_lsp_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-lsp-bw-per-priority")
    {
        for(auto const & c : maximum_lsp_bw_per_priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority>();
        c->parent = this;
        maximum_lsp_bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : maximum_lsp_bw_per_priority)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-encoding")
    {
        link_encoding = value;
        link_encoding.value_namespace = name_space;
        link_encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
        link_mtu.value_namespace = name_space;
        link_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-switching-capability")
    {
        link_switching_capability = value;
        link_switching_capability.value_namespace = name_space;
        link_switching_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw = value;
        minimum_lsp_bw.value_namespace = name_space;
        minimum_lsp_bw.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-encoding")
    {
        link_encoding.yfilter = yfilter;
    }
    if(value_path == "link-mtu")
    {
        link_mtu.yfilter = yfilter;
    }
    if(value_path == "link-switching-capability")
    {
        link_switching_capability.yfilter = yfilter;
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-lsp-bw-per-priority" || name == "link-encoding" || name == "link-mtu" || name == "link-switching-capability" || name == "minimum-lsp-bw")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::MaximumLspBwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "maximum-lsp-bw-per-priority"; yang_parent_name = "link-sw-capability"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::~MaximumLspBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-lsp-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlv()
    :
    mplste_link_opt_tlv_len{YType::uint16, "mplste-link-opt-tlv-len"},
    mplste_link_opt_tlv_type{YType::enumeration, "mplste-link-opt-tlv-type"}
{

    yang_name = "mplste-link-opt-tlv"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::~MplsteLinkOptTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_data())
            return true;
    }
    return mplste_link_opt_tlv_len.is_set
	|| mplste_link_opt_tlv_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mplste_link_opt_tlv_len.yfilter)
	|| ydk::is_set(mplste_link_opt_tlv_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplste_link_opt_tlv_len.is_set || is_set(mplste_link_opt_tlv_len.yfilter)) leaf_name_data.push_back(mplste_link_opt_tlv_len.get_name_leafdata());
    if (mplste_link_opt_tlv_type.is_set || is_set(mplste_link_opt_tlv_type.yfilter)) leaf_name_data.push_back(mplste_link_opt_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-opt-tlv-value")
    {
        for(auto const & c : mplste_link_opt_tlv_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue>();
        c->parent = this;
        mplste_link_opt_tlv_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplste_link_opt_tlv_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len = value;
        mplste_link_opt_tlv_len.value_namespace = name_space;
        mplste_link_opt_tlv_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type = value;
        mplste_link_opt_tlv_type.value_namespace = name_space;
        mplste_link_opt_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len.yfilter = yfilter;
    }
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-opt-tlv-value" || name == "mplste-link-opt-tlv-len" || name == "mplste-link-opt-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::MplsteLinkOptTlvValue()
    :
    opaque_tlv_type{YType::enumeration, "opaque-tlv-type"}
    	,
    bctlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>())
	,ixcdtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>())
	,srlgtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>())
	,unidtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>())
{
    bctlv_value->parent = this;
    ixcdtlv_value->parent = this;
    srlgtlv_value->parent = this;
    unidtlv_value->parent = this;

    yang_name = "mplste-link-opt-tlv-value"; yang_parent_name = "mplste-link-opt-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::~MplsteLinkOptTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_data() const
{
    return opaque_tlv_type.is_set
	|| (bctlv_value !=  nullptr && bctlv_value->has_data())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_data())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_data())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opaque_tlv_type.yfilter)
	|| (bctlv_value !=  nullptr && bctlv_value->has_operation())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_operation())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_operation())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_tlv_type.is_set || is_set(opaque_tlv_type.yfilter)) leaf_name_data.push_back(opaque_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bctlv-value")
    {
        if(bctlv_value == nullptr)
        {
            bctlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>();
        }
        return bctlv_value;
    }

    if(child_yang_name == "ixcdtlv-value")
    {
        if(ixcdtlv_value == nullptr)
        {
            ixcdtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>();
        }
        return ixcdtlv_value;
    }

    if(child_yang_name == "srlgtlv-value")
    {
        if(srlgtlv_value == nullptr)
        {
            srlgtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>();
        }
        return srlgtlv_value;
    }

    if(child_yang_name == "unidtlv-value")
    {
        if(unidtlv_value == nullptr)
        {
            unidtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>();
        }
        return unidtlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bctlv_value != nullptr)
    {
        children["bctlv-value"] = bctlv_value;
    }

    if(ixcdtlv_value != nullptr)
    {
        children["ixcdtlv-value"] = ixcdtlv_value;
    }

    if(srlgtlv_value != nullptr)
    {
        children["srlgtlv-value"] = srlgtlv_value;
    }

    if(unidtlv_value != nullptr)
    {
        children["unidtlv-value"] = unidtlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type = value;
        opaque_tlv_type.value_namespace = name_space;
        opaque_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bctlv-value" || name == "ixcdtlv-value" || name == "srlgtlv-value" || name == "unidtlv-value" || name == "opaque-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::BctlvValue()
    :
    model_id{YType::uint8, "model-id"},
    num_b_cs{YType::uint32, "num-b-cs"}
{

    yang_name = "bctlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::~BctlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_data() const
{
    for (std::size_t index=0; index<mplste_link_bc_bandwidth.size(); index++)
    {
        if(mplste_link_bc_bandwidth[index]->has_data())
            return true;
    }
    return model_id.is_set
	|| num_b_cs.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_bc_bandwidth.size(); index++)
    {
        if(mplste_link_bc_bandwidth[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(model_id.yfilter)
	|| ydk::is_set(num_b_cs.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bctlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.yfilter)) leaf_name_data.push_back(model_id.get_name_leafdata());
    if (num_b_cs.is_set || is_set(num_b_cs.yfilter)) leaf_name_data.push_back(num_b_cs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-bc-bandwidth")
    {
        for(auto const & c : mplste_link_bc_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth>();
        c->parent = this;
        mplste_link_bc_bandwidth.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplste_link_bc_bandwidth)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "model-id")
    {
        model_id = value;
        model_id.value_namespace = name_space;
        model_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-b-cs")
    {
        num_b_cs = value;
        num_b_cs.value_namespace = name_space;
        num_b_cs.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "model-id")
    {
        model_id.yfilter = yfilter;
    }
    if(value_path == "num-b-cs")
    {
        num_b_cs.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-bc-bandwidth" || name == "model-id" || name == "num-b-cs")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::MplsteLinkBcBandwidth()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "mplste-link-bc-bandwidth"; yang_parent_name = "bctlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::~MplsteLinkBcBandwidth()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-bc-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdtlvValue()
    :
    fixed_scsi_count{YType::uint32, "fixed-scsi-count"},
    flex_scsi_count{YType::uint32, "flex-scsi-count"},
    rile_len_code{YType::uint8, "rile-len-code"},
    switching_cap{YType::uint8, "switching-cap"}
    	,
    ixcd_switching_cap_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>())
{
    ixcd_switching_cap_type->parent = this;

    yang_name = "ixcdtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::~IxcdtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_data() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_data())
            return true;
    }
    return fixed_scsi_count.is_set
	|| flex_scsi_count.is_set
	|| rile_len_code.is_set
	|| switching_cap.is_set
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_operation() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fixed_scsi_count.yfilter)
	|| ydk::is_set(flex_scsi_count.yfilter)
	|| ydk::is_set(rile_len_code.yfilter)
	|| ydk::is_set(switching_cap.yfilter)
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_scsi_count.is_set || is_set(fixed_scsi_count.yfilter)) leaf_name_data.push_back(fixed_scsi_count.get_name_leafdata());
    if (flex_scsi_count.is_set || is_set(flex_scsi_count.yfilter)) leaf_name_data.push_back(flex_scsi_count.get_name_leafdata());
    if (rile_len_code.is_set || is_set(rile_len_code.yfilter)) leaf_name_data.push_back(rile_len_code.get_name_leafdata());
    if (switching_cap.is_set || is_set(switching_cap.yfilter)) leaf_name_data.push_back(switching_cap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ixcd-switching-cap-type")
    {
        if(ixcd_switching_cap_type == nullptr)
        {
            ixcd_switching_cap_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>();
        }
        return ixcd_switching_cap_type;
    }

    if(child_yang_name == "max-lspbw")
    {
        for(auto const & c : max_lspbw)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw>();
        c->parent = this;
        max_lspbw.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ixcd_switching_cap_type != nullptr)
    {
        children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
    }

    for (auto const & c : max_lspbw)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count = value;
        fixed_scsi_count.value_namespace = name_space;
        fixed_scsi_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count = value;
        flex_scsi_count.value_namespace = name_space;
        flex_scsi_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code = value;
        rile_len_code.value_namespace = name_space;
        rile_len_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-cap")
    {
        switching_cap = value;
        switching_cap.value_namespace = name_space;
        switching_cap.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count.yfilter = yfilter;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count.yfilter = yfilter;
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code.yfilter = yfilter;
    }
    if(value_path == "switching-cap")
    {
        switching_cap.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ixcd-switching-cap-type" || name == "max-lspbw" || name == "fixed-scsi-count" || name == "flex-scsi-count" || name == "rile-len-code" || name == "switching-cap")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdSwitchingCapType()
    :
    switching_cap_type{YType::uint8, "switching-cap-type"}
    	,
    ixcdbw_sub_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>())
	,ixcdpsc_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>())
{
    ixcdbw_sub_tlv->parent = this;
    ixcdpsc_info->parent = this;

    yang_name = "ixcd-switching-cap-type"; yang_parent_name = "ixcdtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::~IxcdSwitchingCapType()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_data() const
{
    return switching_cap_type.is_set
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_data())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switching_cap_type.yfilter)
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_operation())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcd-switching-cap-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap_type.is_set || is_set(switching_cap_type.yfilter)) leaf_name_data.push_back(switching_cap_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ixcdbw-sub-tlv")
    {
        if(ixcdbw_sub_tlv == nullptr)
        {
            ixcdbw_sub_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>();
        }
        return ixcdbw_sub_tlv;
    }

    if(child_yang_name == "ixcdpsc-info")
    {
        if(ixcdpsc_info == nullptr)
        {
            ixcdpsc_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>();
        }
        return ixcdpsc_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ixcdbw_sub_tlv != nullptr)
    {
        children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
    }

    if(ixcdpsc_info != nullptr)
    {
        children["ixcdpsc-info"] = ixcdpsc_info;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type = value;
        switching_cap_type.value_namespace = name_space;
        switching_cap_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ixcdbw-sub-tlv" || name == "ixcdpsc-info" || name == "switching-cap-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::IxcdbwSubTlv()
{

    yang_name = "ixcdbw-sub-tlv"; yang_parent_name = "ixcd-switching-cap-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::~IxcdbwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_data() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_operation() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdbw-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "arr-bw-sub-tlv")
    {
        for(auto const & c : arr_bw_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv>();
        c->parent = this;
        arr_bw_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : arr_bw_sub_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arr-bw-sub-tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::ArrBwSubTlv()
    :
    bw_sub_tlv_length{YType::uint16, "bw-sub-tlv-length"},
    bw_sub_tlv_type{YType::uint16, "bw-sub-tlv-type"}
    	,
    bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>())
{
    bw_sub_tlv_value->parent = this;

    yang_name = "arr-bw-sub-tlv"; yang_parent_name = "ixcdbw-sub-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::~ArrBwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_data() const
{
    return bw_sub_tlv_length.is_set
	|| bw_sub_tlv_type.is_set
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw_sub_tlv_length.yfilter)
	|| ydk::is_set(bw_sub_tlv_type.yfilter)
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arr-bw-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_sub_tlv_length.is_set || is_set(bw_sub_tlv_length.yfilter)) leaf_name_data.push_back(bw_sub_tlv_length.get_name_leafdata());
    if (bw_sub_tlv_type.is_set || is_set(bw_sub_tlv_type.yfilter)) leaf_name_data.push_back(bw_sub_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-sub-tlv-value")
    {
        if(bw_sub_tlv_value == nullptr)
        {
            bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>();
        }
        return bw_sub_tlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bw_sub_tlv_value != nullptr)
    {
        children["bw-sub-tlv-value"] = bw_sub_tlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length = value;
        bw_sub_tlv_length.value_namespace = name_space;
        bw_sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type = value;
        bw_sub_tlv_type.value_namespace = name_space;
        bw_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-sub-tlv-value" || name == "bw-sub-tlv-length" || name == "bw-sub-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::BwSubTlvValue()
    :
    ixcdbw_sub_tlv_type{YType::uint16, "ixcdbw-sub-tlv-type"}
    	,
    fixed_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>())
	,flex_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>())
{
    fixed_bw_sub_tlv_value->parent = this;
    flex_bw_sub_tlv_value->parent = this;

    yang_name = "bw-sub-tlv-value"; yang_parent_name = "arr-bw-sub-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::~BwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_data() const
{
    return ixcdbw_sub_tlv_type.is_set
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_data())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ixcdbw_sub_tlv_type.yfilter)
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_operation())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ixcdbw_sub_tlv_type.is_set || is_set(ixcdbw_sub_tlv_type.yfilter)) leaf_name_data.push_back(ixcdbw_sub_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed-bw-sub-tlv-value")
    {
        if(fixed_bw_sub_tlv_value == nullptr)
        {
            fixed_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>();
        }
        return fixed_bw_sub_tlv_value;
    }

    if(child_yang_name == "flex-bw-sub-tlv-value")
    {
        if(flex_bw_sub_tlv_value == nullptr)
        {
            flex_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>();
        }
        return flex_bw_sub_tlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fixed_bw_sub_tlv_value != nullptr)
    {
        children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
    }

    if(flex_bw_sub_tlv_value != nullptr)
    {
        children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type = value;
        ixcdbw_sub_tlv_type.value_namespace = name_space;
        ixcdbw_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-bw-sub-tlv-value" || name == "flex-bw-sub-tlv-value" || name == "ixcdbw-sub-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedBwSubTlvValue()
    :
    fixed_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>())
{
    fixed_sub_tlv_value->parent = this;

    yang_name = "fixed-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::~FixedBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_data() const
{
    for (std::size_t index=0; index<unres_oduj_prio.size(); index++)
    {
        if(unres_oduj_prio[index]->has_data())
            return true;
    }
    return (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_operation() const
{
    for (std::size_t index=0; index<unres_oduj_prio.size(); index++)
    {
        if(unres_oduj_prio[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed-sub-tlv-value")
    {
        if(fixed_sub_tlv_value == nullptr)
        {
            fixed_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>();
        }
        return fixed_sub_tlv_value;
    }

    if(child_yang_name == "unres-oduj-prio")
    {
        for(auto const & c : unres_oduj_prio)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio>();
        c->parent = this;
        unres_oduj_prio.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fixed_sub_tlv_value != nullptr)
    {
        children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
    }

    for (auto const & c : unres_oduj_prio)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-sub-tlv-value" || name == "unres-oduj-prio")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::FixedSubTlvValue()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{

    yang_name = "fixed-sub-tlv-value"; yang_parent_name = "fixed-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::~FixedSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_stages.yfilter)
	|| ydk::is_set(priority_bit0.yfilter)
	|| ydk::is_set(priority_bit1.yfilter)
	|| ydk::is_set(priority_bit2.yfilter)
	|| ydk::is_set(priority_bit3.yfilter)
	|| ydk::is_set(priority_bit4.yfilter)
	|| ydk::is_set(priority_bit5.yfilter)
	|| ydk::is_set(priority_bit6.yfilter)
	|| ydk::is_set(priority_bit7.yfilter)
	|| ydk::is_set(res.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(stage.yfilter)
	|| ydk::is_set(tbit.yfilter)
	|| ydk::is_set(tsg.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.yfilter)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.yfilter)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.yfilter)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.yfilter)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.yfilter)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.yfilter)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.yfilter)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.yfilter)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.yfilter)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.yfilter)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.yfilter)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.yfilter)) leaf_name_data.push_back(tsg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
        num_stages.value_namespace = name_space;
        num_stages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
        priority_bit0.value_namespace = name_space;
        priority_bit0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
        priority_bit1.value_namespace = name_space;
        priority_bit1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
        priority_bit2.value_namespace = name_space;
        priority_bit2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
        priority_bit3.value_namespace = name_space;
        priority_bit3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
        priority_bit4.value_namespace = name_space;
        priority_bit4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
        priority_bit5.value_namespace = name_space;
        priority_bit5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
        priority_bit6.value_namespace = name_space;
        priority_bit6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
        priority_bit7.value_namespace = name_space;
        priority_bit7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "res")
    {
        res = value;
        res.value_namespace = name_space;
        res.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbit")
    {
        tbit = value;
        tbit.value_namespace = name_space;
        tbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg")
    {
        tsg = value;
        tsg.value_namespace = name_space;
        tsg.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-stages")
    {
        num_stages.yfilter = yfilter;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0.yfilter = yfilter;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1.yfilter = yfilter;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2.yfilter = yfilter;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3.yfilter = yfilter;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4.yfilter = yfilter;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5.yfilter = yfilter;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6.yfilter = yfilter;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7.yfilter = yfilter;
    }
    if(value_path == "res")
    {
        res.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
    if(value_path == "tbit")
    {
        tbit.yfilter = yfilter;
    }
    if(value_path == "tsg")
    {
        tsg.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-stages" || name == "priority-bit0" || name == "priority-bit1" || name == "priority-bit2" || name == "priority-bit3" || name == "priority-bit4" || name == "priority-bit5" || name == "priority-bit6" || name == "priority-bit7" || name == "res" || name == "sbit" || name == "signal-type" || name == "stage" || name == "tbit" || name == "tsg")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::UnresOdujPrio()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "unres-oduj-prio"; yang_parent_name = "fixed-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::~UnresOdujPrio()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unres-oduj-prio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexBwSubTlvValue()
    :
    flex_sub_tlv_value_common(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>())
{
    flex_sub_tlv_value_common->parent = this;

    yang_name = "flex-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::~FlexBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_data() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unres_lspbw.size(); index++)
    {
        if(unres_lspbw[index]->has_data())
            return true;
    }
    return (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_operation() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unres_lspbw.size(); index++)
    {
        if(unres_lspbw[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-sub-tlv-value-common")
    {
        if(flex_sub_tlv_value_common == nullptr)
        {
            flex_sub_tlv_value_common = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>();
        }
        return flex_sub_tlv_value_common;
    }

    if(child_yang_name == "max-lspbw")
    {
        for(auto const & c : max_lspbw)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw>();
        c->parent = this;
        max_lspbw.push_back(c);
        return c;
    }

    if(child_yang_name == "unres-lspbw")
    {
        for(auto const & c : unres_lspbw)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw>();
        c->parent = this;
        unres_lspbw.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flex_sub_tlv_value_common != nullptr)
    {
        children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
    }

    for (auto const & c : max_lspbw)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : unres_lspbw)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-sub-tlv-value-common" || name == "max-lspbw" || name == "unres-lspbw")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::FlexSubTlvValueCommon()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{

    yang_name = "flex-sub-tlv-value-common"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::~FlexSubTlvValueCommon()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_stages.yfilter)
	|| ydk::is_set(priority_bit0.yfilter)
	|| ydk::is_set(priority_bit1.yfilter)
	|| ydk::is_set(priority_bit2.yfilter)
	|| ydk::is_set(priority_bit3.yfilter)
	|| ydk::is_set(priority_bit4.yfilter)
	|| ydk::is_set(priority_bit5.yfilter)
	|| ydk::is_set(priority_bit6.yfilter)
	|| ydk::is_set(priority_bit7.yfilter)
	|| ydk::is_set(res.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(stage.yfilter)
	|| ydk::is_set(tbit.yfilter)
	|| ydk::is_set(tsg.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-sub-tlv-value-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.yfilter)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.yfilter)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.yfilter)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.yfilter)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.yfilter)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.yfilter)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.yfilter)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.yfilter)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.yfilter)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.yfilter)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.yfilter)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.yfilter)) leaf_name_data.push_back(tsg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
        num_stages.value_namespace = name_space;
        num_stages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
        priority_bit0.value_namespace = name_space;
        priority_bit0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
        priority_bit1.value_namespace = name_space;
        priority_bit1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
        priority_bit2.value_namespace = name_space;
        priority_bit2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
        priority_bit3.value_namespace = name_space;
        priority_bit3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
        priority_bit4.value_namespace = name_space;
        priority_bit4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
        priority_bit5.value_namespace = name_space;
        priority_bit5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
        priority_bit6.value_namespace = name_space;
        priority_bit6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
        priority_bit7.value_namespace = name_space;
        priority_bit7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "res")
    {
        res = value;
        res.value_namespace = name_space;
        res.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbit")
    {
        tbit = value;
        tbit.value_namespace = name_space;
        tbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg")
    {
        tsg = value;
        tsg.value_namespace = name_space;
        tsg.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-stages")
    {
        num_stages.yfilter = yfilter;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0.yfilter = yfilter;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1.yfilter = yfilter;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2.yfilter = yfilter;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3.yfilter = yfilter;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4.yfilter = yfilter;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5.yfilter = yfilter;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6.yfilter = yfilter;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7.yfilter = yfilter;
    }
    if(value_path == "res")
    {
        res.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
    if(value_path == "tbit")
    {
        tbit.yfilter = yfilter;
    }
    if(value_path == "tsg")
    {
        tsg.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-stages" || name == "priority-bit0" || name == "priority-bit1" || name == "priority-bit2" || name == "priority-bit3" || name == "priority-bit4" || name == "priority-bit5" || name == "priority-bit6" || name == "priority-bit7" || name == "res" || name == "sbit" || name == "signal-type" || name == "stage" || name == "tbit" || name == "tsg")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::MaxLspbw()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "max-lspbw"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::~MaxLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::UnresLspbw()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "unres-lspbw"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::~UnresLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unres-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::IxcdpscInfo()
    :
    min_lsp_bandwidth{YType::uint64, "min-lsp-bandwidth"},
    psc_interface_mtu{YType::uint16, "psc-interface-mtu"}
{

    yang_name = "ixcdpsc-info"; yang_parent_name = "ixcd-switching-cap-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::~IxcdpscInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_data() const
{
    return min_lsp_bandwidth.is_set
	|| psc_interface_mtu.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_lsp_bandwidth.yfilter)
	|| ydk::is_set(psc_interface_mtu.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdpsc-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_lsp_bandwidth.is_set || is_set(min_lsp_bandwidth.yfilter)) leaf_name_data.push_back(min_lsp_bandwidth.get_name_leafdata());
    if (psc_interface_mtu.is_set || is_set(psc_interface_mtu.yfilter)) leaf_name_data.push_back(psc_interface_mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-lsp-bandwidth")
    {
        min_lsp_bandwidth = value;
        min_lsp_bandwidth.value_namespace = name_space;
        min_lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psc-interface-mtu")
    {
        psc_interface_mtu = value;
        psc_interface_mtu.value_namespace = name_space;
        psc_interface_mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-lsp-bandwidth")
    {
        min_lsp_bandwidth.yfilter = yfilter;
    }
    if(value_path == "psc-interface-mtu")
    {
        psc_interface_mtu.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-lsp-bandwidth" || name == "psc-interface-mtu")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::MaxLspbw()
    :
    entry{YType::int64, "entry"}
{

    yang_name = "max-lspbw"; yang_parent_name = "ixcdtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::~MaxLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::SrlgtlvValue()
    :
    num_srl_gs{YType::uint32, "num-srl-gs"},
    srlg_len{YType::uint32, "srlg-len"}
{

    yang_name = "srlgtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::~SrlgtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_data() const
{
    for (std::size_t index=0; index<mplste_link_srlg_data.size(); index++)
    {
        if(mplste_link_srlg_data[index]->has_data())
            return true;
    }
    return num_srl_gs.is_set
	|| srlg_len.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_srlg_data.size(); index++)
    {
        if(mplste_link_srlg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_srl_gs.yfilter)
	|| ydk::is_set(srlg_len.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_srl_gs.is_set || is_set(num_srl_gs.yfilter)) leaf_name_data.push_back(num_srl_gs.get_name_leafdata());
    if (srlg_len.is_set || is_set(srlg_len.yfilter)) leaf_name_data.push_back(srlg_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-srlg-data")
    {
        for(auto const & c : mplste_link_srlg_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData>();
        c->parent = this;
        mplste_link_srlg_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplste_link_srlg_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-srl-gs")
    {
        num_srl_gs = value;
        num_srl_gs.value_namespace = name_space;
        num_srl_gs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-len")
    {
        srlg_len = value;
        srlg_len.value_namespace = name_space;
        srlg_len.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-srl-gs")
    {
        num_srl_gs.yfilter = yfilter;
    }
    if(value_path == "srlg-len")
    {
        srlg_len.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-srlg-data" || name == "num-srl-gs" || name == "srlg-len")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::MplsteLinkSrlgData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mplste-link-srlg-data"; yang_parent_name = "srlgtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::~MplsteLinkSrlgData()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-srlg-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::UnidtlvValue()
    :
    uni_dir_delay{YType::uint32, "uni-dir-delay"}
{

    yang_name = "unidtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::~UnidtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_data() const
{
    return uni_dir_delay.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(uni_dir_delay.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unidtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uni_dir_delay.is_set || is_set(uni_dir_delay.yfilter)) leaf_name_data.push_back(uni_dir_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay = value;
        uni_dir_delay.value_namespace = name_space;
        uni_dir_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uni-dir-delay")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::SubPoolUnreserveBwPerPriority()
{

    yang_name = "sub-pool-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::~SubPoolUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_data() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_operation() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-unreserve-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-per-priority")
    {
        for(auto const & c : bw_per_priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority>();
        c->parent = this;
        bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bw_per_priority)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-per-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::BwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "bw-per-priority"; yang_parent_name = "sub-pool-unreserve-bw-per-priority"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::~BwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::OspfSummary::OspfSummary()
    :
    sa_lsa_cnt_type_7ase{YType::uint32, "sa-lsa-cnt-type-7ase"},
    sa_lsa_cnt_type_8_ignore{YType::uint32, "sa-lsa-cnt-type-8-ignore"},
    sa_lsa_cnt_type_ase{YType::uint32, "sa-lsa-cnt-type-ase"},
    sa_lsa_cnt_type_mospf{YType::uint32, "sa-lsa-cnt-type-mospf"},
    sa_lsa_cnt_type_net{YType::uint32, "sa-lsa-cnt-type-net"},
    sa_lsa_cnt_type_opq_area{YType::uint32, "sa-lsa-cnt-type-opq-area"},
    sa_lsa_cnt_type_opq_as{YType::uint32, "sa-lsa-cnt-type-opq-as"},
    sa_lsa_cnt_type_opq_link{YType::uint32, "sa-lsa-cnt-type-opq-link"},
    sa_lsa_cnt_type_rtr{YType::uint32, "sa-lsa-cnt-type-rtr"},
    sa_lsa_cnt_type_sum_asb{YType::uint32, "sa-lsa-cnt-type-sum-asb"},
    sa_lsa_cnt_type_sum_net{YType::uint32, "sa-lsa-cnt-type-sum-net"},
    sa_num_areas{YType::uint32, "sa-num-areas"},
    sa_num_intf{YType::uint32, "sa-num-intf"},
    sa_num_intf_up{YType::uint32, "sa-num-intf-up"},
    sa_num_nbrs{YType::uint32, "sa-num-nbrs"},
    sa_num_nbrs_up{YType::uint32, "sa-num-nbrs-up"},
    sa_num_slintf_up{YType::uint32, "sa-num-slintf-up"},
    sa_num_vintf_up{YType::uint32, "sa-num-vintf-up"}
{

    yang_name = "ospf-summary"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::OspfSummary::~OspfSummary()
{
}

bool Ospf::Processes::Process::DefaultVrf::OspfSummary::has_data() const
{
    return sa_lsa_cnt_type_7ase.is_set
	|| sa_lsa_cnt_type_8_ignore.is_set
	|| sa_lsa_cnt_type_ase.is_set
	|| sa_lsa_cnt_type_mospf.is_set
	|| sa_lsa_cnt_type_net.is_set
	|| sa_lsa_cnt_type_opq_area.is_set
	|| sa_lsa_cnt_type_opq_as.is_set
	|| sa_lsa_cnt_type_opq_link.is_set
	|| sa_lsa_cnt_type_rtr.is_set
	|| sa_lsa_cnt_type_sum_asb.is_set
	|| sa_lsa_cnt_type_sum_net.is_set
	|| sa_num_areas.is_set
	|| sa_num_intf.is_set
	|| sa_num_intf_up.is_set
	|| sa_num_nbrs.is_set
	|| sa_num_nbrs_up.is_set
	|| sa_num_slintf_up.is_set
	|| sa_num_vintf_up.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::OspfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_7ase.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_8_ignore.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_ase.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_mospf.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_net.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_opq_area.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_opq_as.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_opq_link.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_rtr.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_sum_asb.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_sum_net.yfilter)
	|| ydk::is_set(sa_num_areas.yfilter)
	|| ydk::is_set(sa_num_intf.yfilter)
	|| ydk::is_set(sa_num_intf_up.yfilter)
	|| ydk::is_set(sa_num_nbrs.yfilter)
	|| ydk::is_set(sa_num_nbrs_up.yfilter)
	|| ydk::is_set(sa_num_slintf_up.yfilter)
	|| ydk::is_set(sa_num_vintf_up.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::OspfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::OspfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_lsa_cnt_type_7ase.is_set || is_set(sa_lsa_cnt_type_7ase.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_7ase.get_name_leafdata());
    if (sa_lsa_cnt_type_8_ignore.is_set || is_set(sa_lsa_cnt_type_8_ignore.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_8_ignore.get_name_leafdata());
    if (sa_lsa_cnt_type_ase.is_set || is_set(sa_lsa_cnt_type_ase.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_ase.get_name_leafdata());
    if (sa_lsa_cnt_type_mospf.is_set || is_set(sa_lsa_cnt_type_mospf.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_mospf.get_name_leafdata());
    if (sa_lsa_cnt_type_net.is_set || is_set(sa_lsa_cnt_type_net.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_net.get_name_leafdata());
    if (sa_lsa_cnt_type_opq_area.is_set || is_set(sa_lsa_cnt_type_opq_area.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_opq_area.get_name_leafdata());
    if (sa_lsa_cnt_type_opq_as.is_set || is_set(sa_lsa_cnt_type_opq_as.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_opq_as.get_name_leafdata());
    if (sa_lsa_cnt_type_opq_link.is_set || is_set(sa_lsa_cnt_type_opq_link.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_opq_link.get_name_leafdata());
    if (sa_lsa_cnt_type_rtr.is_set || is_set(sa_lsa_cnt_type_rtr.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_rtr.get_name_leafdata());
    if (sa_lsa_cnt_type_sum_asb.is_set || is_set(sa_lsa_cnt_type_sum_asb.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_sum_asb.get_name_leafdata());
    if (sa_lsa_cnt_type_sum_net.is_set || is_set(sa_lsa_cnt_type_sum_net.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_sum_net.get_name_leafdata());
    if (sa_num_areas.is_set || is_set(sa_num_areas.yfilter)) leaf_name_data.push_back(sa_num_areas.get_name_leafdata());
    if (sa_num_intf.is_set || is_set(sa_num_intf.yfilter)) leaf_name_data.push_back(sa_num_intf.get_name_leafdata());
    if (sa_num_intf_up.is_set || is_set(sa_num_intf_up.yfilter)) leaf_name_data.push_back(sa_num_intf_up.get_name_leafdata());
    if (sa_num_nbrs.is_set || is_set(sa_num_nbrs.yfilter)) leaf_name_data.push_back(sa_num_nbrs.get_name_leafdata());
    if (sa_num_nbrs_up.is_set || is_set(sa_num_nbrs_up.yfilter)) leaf_name_data.push_back(sa_num_nbrs_up.get_name_leafdata());
    if (sa_num_slintf_up.is_set || is_set(sa_num_slintf_up.yfilter)) leaf_name_data.push_back(sa_num_slintf_up.get_name_leafdata());
    if (sa_num_vintf_up.is_set || is_set(sa_num_vintf_up.yfilter)) leaf_name_data.push_back(sa_num_vintf_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::OspfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::OspfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::OspfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa-lsa-cnt-type-7ase")
    {
        sa_lsa_cnt_type_7ase = value;
        sa_lsa_cnt_type_7ase.value_namespace = name_space;
        sa_lsa_cnt_type_7ase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-8-ignore")
    {
        sa_lsa_cnt_type_8_ignore = value;
        sa_lsa_cnt_type_8_ignore.value_namespace = name_space;
        sa_lsa_cnt_type_8_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-ase")
    {
        sa_lsa_cnt_type_ase = value;
        sa_lsa_cnt_type_ase.value_namespace = name_space;
        sa_lsa_cnt_type_ase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-mospf")
    {
        sa_lsa_cnt_type_mospf = value;
        sa_lsa_cnt_type_mospf.value_namespace = name_space;
        sa_lsa_cnt_type_mospf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-net")
    {
        sa_lsa_cnt_type_net = value;
        sa_lsa_cnt_type_net.value_namespace = name_space;
        sa_lsa_cnt_type_net.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-opq-area")
    {
        sa_lsa_cnt_type_opq_area = value;
        sa_lsa_cnt_type_opq_area.value_namespace = name_space;
        sa_lsa_cnt_type_opq_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-opq-as")
    {
        sa_lsa_cnt_type_opq_as = value;
        sa_lsa_cnt_type_opq_as.value_namespace = name_space;
        sa_lsa_cnt_type_opq_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-opq-link")
    {
        sa_lsa_cnt_type_opq_link = value;
        sa_lsa_cnt_type_opq_link.value_namespace = name_space;
        sa_lsa_cnt_type_opq_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-rtr")
    {
        sa_lsa_cnt_type_rtr = value;
        sa_lsa_cnt_type_rtr.value_namespace = name_space;
        sa_lsa_cnt_type_rtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-sum-asb")
    {
        sa_lsa_cnt_type_sum_asb = value;
        sa_lsa_cnt_type_sum_asb.value_namespace = name_space;
        sa_lsa_cnt_type_sum_asb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-sum-net")
    {
        sa_lsa_cnt_type_sum_net = value;
        sa_lsa_cnt_type_sum_net.value_namespace = name_space;
        sa_lsa_cnt_type_sum_net.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-areas")
    {
        sa_num_areas = value;
        sa_num_areas.value_namespace = name_space;
        sa_num_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-intf")
    {
        sa_num_intf = value;
        sa_num_intf.value_namespace = name_space;
        sa_num_intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-intf-up")
    {
        sa_num_intf_up = value;
        sa_num_intf_up.value_namespace = name_space;
        sa_num_intf_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-nbrs")
    {
        sa_num_nbrs = value;
        sa_num_nbrs.value_namespace = name_space;
        sa_num_nbrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-nbrs-up")
    {
        sa_num_nbrs_up = value;
        sa_num_nbrs_up.value_namespace = name_space;
        sa_num_nbrs_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-slintf-up")
    {
        sa_num_slintf_up = value;
        sa_num_slintf_up.value_namespace = name_space;
        sa_num_slintf_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-vintf-up")
    {
        sa_num_vintf_up = value;
        sa_num_vintf_up.value_namespace = name_space;
        sa_num_vintf_up.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::OspfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa-lsa-cnt-type-7ase")
    {
        sa_lsa_cnt_type_7ase.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-8-ignore")
    {
        sa_lsa_cnt_type_8_ignore.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-ase")
    {
        sa_lsa_cnt_type_ase.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-mospf")
    {
        sa_lsa_cnt_type_mospf.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-net")
    {
        sa_lsa_cnt_type_net.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-opq-area")
    {
        sa_lsa_cnt_type_opq_area.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-opq-as")
    {
        sa_lsa_cnt_type_opq_as.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-opq-link")
    {
        sa_lsa_cnt_type_opq_link.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-rtr")
    {
        sa_lsa_cnt_type_rtr.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-sum-asb")
    {
        sa_lsa_cnt_type_sum_asb.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-sum-net")
    {
        sa_lsa_cnt_type_sum_net.yfilter = yfilter;
    }
    if(value_path == "sa-num-areas")
    {
        sa_num_areas.yfilter = yfilter;
    }
    if(value_path == "sa-num-intf")
    {
        sa_num_intf.yfilter = yfilter;
    }
    if(value_path == "sa-num-intf-up")
    {
        sa_num_intf_up.yfilter = yfilter;
    }
    if(value_path == "sa-num-nbrs")
    {
        sa_num_nbrs.yfilter = yfilter;
    }
    if(value_path == "sa-num-nbrs-up")
    {
        sa_num_nbrs_up.yfilter = yfilter;
    }
    if(value_path == "sa-num-slintf-up")
    {
        sa_num_slintf_up.yfilter = yfilter;
    }
    if(value_path == "sa-num-vintf-up")
    {
        sa_num_vintf_up.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::OspfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-lsa-cnt-type-7ase" || name == "sa-lsa-cnt-type-8-ignore" || name == "sa-lsa-cnt-type-ase" || name == "sa-lsa-cnt-type-mospf" || name == "sa-lsa-cnt-type-net" || name == "sa-lsa-cnt-type-opq-area" || name == "sa-lsa-cnt-type-opq-as" || name == "sa-lsa-cnt-type-opq-link" || name == "sa-lsa-cnt-type-rtr" || name == "sa-lsa-cnt-type-sum-asb" || name == "sa-lsa-cnt-type-sum-net" || name == "sa-num-areas" || name == "sa-num-intf" || name == "sa-num-intf-up" || name == "sa-num-nbrs" || name == "sa-num-nbrs-up" || name == "sa-num-slintf-up" || name == "sa-num-vintf-up")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessInformation()
    :
    process_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas>())
	,process_summary(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary>())
	,protocol_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas>())
	,protocol_summary(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary>())
	,redistributions(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions>())
{
    process_areas->parent = this;
    process_summary->parent = this;
    protocol_areas->parent = this;
    protocol_summary->parent = this;
    redistributions->parent = this;

    yang_name = "process-information"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::~ProcessInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::has_data() const
{
    return (process_areas !=  nullptr && process_areas->has_data())
	|| (process_summary !=  nullptr && process_summary->has_data())
	|| (protocol_areas !=  nullptr && protocol_areas->has_data())
	|| (protocol_summary !=  nullptr && protocol_summary->has_data())
	|| (redistributions !=  nullptr && redistributions->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::has_operation() const
{
    return is_set(yfilter)
	|| (process_areas !=  nullptr && process_areas->has_operation())
	|| (process_summary !=  nullptr && process_summary->has_operation())
	|| (protocol_areas !=  nullptr && protocol_areas->has_operation())
	|| (protocol_summary !=  nullptr && protocol_summary->has_operation())
	|| (redistributions !=  nullptr && redistributions->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-areas")
    {
        if(process_areas == nullptr)
        {
            process_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas>();
        }
        return process_areas;
    }

    if(child_yang_name == "process-summary")
    {
        if(process_summary == nullptr)
        {
            process_summary = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary>();
        }
        return process_summary;
    }

    if(child_yang_name == "protocol-areas")
    {
        if(protocol_areas == nullptr)
        {
            protocol_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas>();
        }
        return protocol_areas;
    }

    if(child_yang_name == "protocol-summary")
    {
        if(protocol_summary == nullptr)
        {
            protocol_summary = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary>();
        }
        return protocol_summary;
    }

    if(child_yang_name == "redistributions")
    {
        if(redistributions == nullptr)
        {
            redistributions = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions>();
        }
        return redistributions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(process_areas != nullptr)
    {
        children["process-areas"] = process_areas;
    }

    if(process_summary != nullptr)
    {
        children["process-summary"] = process_summary;
    }

    if(protocol_areas != nullptr)
    {
        children["protocol-areas"] = protocol_areas;
    }

    if(protocol_summary != nullptr)
    {
        children["protocol-summary"] = protocol_summary;
    }

    if(redistributions != nullptr)
    {
        children["redistributions"] = redistributions;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-areas" || name == "process-summary" || name == "protocol-areas" || name == "protocol-summary" || name == "redistributions")
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
        for(auto const & c : process_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : process_area)
    {
        children[c->get_segment_path()] = c;
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
    address{YType::str, "address"},
    area_adj_stag_num_nbr_forming{YType::uint16, "area-adj-stag-num-nbr-forming"},
    area_dc_bitless_lsa_count{YType::uint32, "area-dc-bitless-lsa-count"},
    area_id{YType::int32, "area-id"},
    area_id_string{YType::str, "area-id-string"},
    area_interface_count{YType::uint16, "area-interface-count"},
    area_lfa_interface_count{YType::uint32, "area-lfa-interface-count"},
    area_lfa_revision{YType::uint32, "area-lfa-revision"},
    area_lsa_checksum{YType::uint32, "area-lsa-checksum"},
    area_lsa_count{YType::uint32, "area-lsa-count"},
    area_nssa{YType::boolean, "area-nssa"},
    area_num_nbr_full{YType::uint16, "area-num-nbr-full"},
    area_opaque_lsa_checksum{YType::uint32, "area-opaque-lsa-checksum"},
    area_opaque_lsa_count{YType::uint32, "area-opaque-lsa-count"},
    area_per_prefix_lfa_interface_count{YType::uint32, "area-per-prefix-lfa-interface-count"},
    area_policy_in{YType::boolean, "area-policy-in"},
    area_policy_in_name{YType::str, "area-policy-in-name"},
    area_policy_out{YType::boolean, "area-policy-out"},
    area_policy_out_name{YType::str, "area-policy-out-name"},
    area_stub{YType::boolean, "area-stub"},
    area_total_stub{YType::boolean, "area-total-stub"},
    authentication_type{YType::enumeration, "authentication-type"},
    backbone_area_active{YType::boolean, "backbone-area-active"},
    dna_lsa_count{YType::uint32, "dna-lsa-count"},
    external_out{YType::boolean, "external-out"},
    flood_list_length{YType::uint32, "flood-list-length"},
    indication_lsa_count{YType::uint32, "indication-lsa-count"},
    nssa_default{YType::boolean, "nssa-default"},
    nssa_no_redistribution{YType::boolean, "nssa-no-redistribution"},
    nssa_translate{YType::boolean, "nssa-translate"},
    segment_routing{YType::uint32, "segment-routing"},
    spf_count{YType::uint32, "spf-count"},
    sr_microloop_avoidance_active{YType::boolean, "sr-microloop-avoidance-active"},
    sr_microloop_avoidance_event_type{YType::enumeration, "sr-microloop-avoidance-event-type"},
    sr_microloop_avoidance_far_end_id{YType::str, "sr-microloop-avoidance-far-end-id"},
    sr_microloop_avoidance_near_end_id{YType::str, "sr-microloop-avoidance-near-end-id"},
    sr_microloop_avoidance_pseudonode_id{YType::str, "sr-microloop-avoidance-pseudonode-id"},
    sr_strict_spf_cap{YType::boolean, "sr-strict-spf-cap"},
    sr_strict_spfsids_available{YType::boolean, "sr-strict-spfsids-available"},
    stub_default_cost{YType::uint16, "stub-default-cost"},
    summary_in{YType::boolean, "summary-in"},
    te_enabled{YType::boolean, "te-enabled"},
    te_topology_version{YType::uint32, "te-topology-version"}
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
    return address.is_set
	|| area_adj_stag_num_nbr_forming.is_set
	|| area_dc_bitless_lsa_count.is_set
	|| area_id.is_set
	|| area_id_string.is_set
	|| area_interface_count.is_set
	|| area_lfa_interface_count.is_set
	|| area_lfa_revision.is_set
	|| area_lsa_checksum.is_set
	|| area_lsa_count.is_set
	|| area_nssa.is_set
	|| area_num_nbr_full.is_set
	|| area_opaque_lsa_checksum.is_set
	|| area_opaque_lsa_count.is_set
	|| area_per_prefix_lfa_interface_count.is_set
	|| area_policy_in.is_set
	|| area_policy_in_name.is_set
	|| area_policy_out.is_set
	|| area_policy_out_name.is_set
	|| area_stub.is_set
	|| area_total_stub.is_set
	|| authentication_type.is_set
	|| backbone_area_active.is_set
	|| dna_lsa_count.is_set
	|| external_out.is_set
	|| flood_list_length.is_set
	|| indication_lsa_count.is_set
	|| nssa_default.is_set
	|| nssa_no_redistribution.is_set
	|| nssa_translate.is_set
	|| segment_routing.is_set
	|| spf_count.is_set
	|| sr_microloop_avoidance_active.is_set
	|| sr_microloop_avoidance_event_type.is_set
	|| sr_microloop_avoidance_far_end_id.is_set
	|| sr_microloop_avoidance_near_end_id.is_set
	|| sr_microloop_avoidance_pseudonode_id.is_set
	|| sr_strict_spf_cap.is_set
	|| sr_strict_spfsids_available.is_set
	|| stub_default_cost.is_set
	|| summary_in.is_set
	|| te_enabled.is_set
	|| te_topology_version.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::has_operation() const
{
    for (std::size_t index=0; index<area_range.size(); index++)
    {
        if(area_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(area_adj_stag_num_nbr_forming.yfilter)
	|| ydk::is_set(area_dc_bitless_lsa_count.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_id_string.yfilter)
	|| ydk::is_set(area_interface_count.yfilter)
	|| ydk::is_set(area_lfa_interface_count.yfilter)
	|| ydk::is_set(area_lfa_revision.yfilter)
	|| ydk::is_set(area_lsa_checksum.yfilter)
	|| ydk::is_set(area_lsa_count.yfilter)
	|| ydk::is_set(area_nssa.yfilter)
	|| ydk::is_set(area_num_nbr_full.yfilter)
	|| ydk::is_set(area_opaque_lsa_checksum.yfilter)
	|| ydk::is_set(area_opaque_lsa_count.yfilter)
	|| ydk::is_set(area_per_prefix_lfa_interface_count.yfilter)
	|| ydk::is_set(area_policy_in.yfilter)
	|| ydk::is_set(area_policy_in_name.yfilter)
	|| ydk::is_set(area_policy_out.yfilter)
	|| ydk::is_set(area_policy_out_name.yfilter)
	|| ydk::is_set(area_stub.yfilter)
	|| ydk::is_set(area_total_stub.yfilter)
	|| ydk::is_set(authentication_type.yfilter)
	|| ydk::is_set(backbone_area_active.yfilter)
	|| ydk::is_set(dna_lsa_count.yfilter)
	|| ydk::is_set(external_out.yfilter)
	|| ydk::is_set(flood_list_length.yfilter)
	|| ydk::is_set(indication_lsa_count.yfilter)
	|| ydk::is_set(nssa_default.yfilter)
	|| ydk::is_set(nssa_no_redistribution.yfilter)
	|| ydk::is_set(nssa_translate.yfilter)
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(spf_count.yfilter)
	|| ydk::is_set(sr_microloop_avoidance_active.yfilter)
	|| ydk::is_set(sr_microloop_avoidance_event_type.yfilter)
	|| ydk::is_set(sr_microloop_avoidance_far_end_id.yfilter)
	|| ydk::is_set(sr_microloop_avoidance_near_end_id.yfilter)
	|| ydk::is_set(sr_microloop_avoidance_pseudonode_id.yfilter)
	|| ydk::is_set(sr_strict_spf_cap.yfilter)
	|| ydk::is_set(sr_strict_spfsids_available.yfilter)
	|| ydk::is_set(stub_default_cost.yfilter)
	|| ydk::is_set(summary_in.yfilter)
	|| ydk::is_set(te_enabled.yfilter)
	|| ydk::is_set(te_topology_version.yfilter);
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

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (area_adj_stag_num_nbr_forming.is_set || is_set(area_adj_stag_num_nbr_forming.yfilter)) leaf_name_data.push_back(area_adj_stag_num_nbr_forming.get_name_leafdata());
    if (area_dc_bitless_lsa_count.is_set || is_set(area_dc_bitless_lsa_count.yfilter)) leaf_name_data.push_back(area_dc_bitless_lsa_count.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_id_string.is_set || is_set(area_id_string.yfilter)) leaf_name_data.push_back(area_id_string.get_name_leafdata());
    if (area_interface_count.is_set || is_set(area_interface_count.yfilter)) leaf_name_data.push_back(area_interface_count.get_name_leafdata());
    if (area_lfa_interface_count.is_set || is_set(area_lfa_interface_count.yfilter)) leaf_name_data.push_back(area_lfa_interface_count.get_name_leafdata());
    if (area_lfa_revision.is_set || is_set(area_lfa_revision.yfilter)) leaf_name_data.push_back(area_lfa_revision.get_name_leafdata());
    if (area_lsa_checksum.is_set || is_set(area_lsa_checksum.yfilter)) leaf_name_data.push_back(area_lsa_checksum.get_name_leafdata());
    if (area_lsa_count.is_set || is_set(area_lsa_count.yfilter)) leaf_name_data.push_back(area_lsa_count.get_name_leafdata());
    if (area_nssa.is_set || is_set(area_nssa.yfilter)) leaf_name_data.push_back(area_nssa.get_name_leafdata());
    if (area_num_nbr_full.is_set || is_set(area_num_nbr_full.yfilter)) leaf_name_data.push_back(area_num_nbr_full.get_name_leafdata());
    if (area_opaque_lsa_checksum.is_set || is_set(area_opaque_lsa_checksum.yfilter)) leaf_name_data.push_back(area_opaque_lsa_checksum.get_name_leafdata());
    if (area_opaque_lsa_count.is_set || is_set(area_opaque_lsa_count.yfilter)) leaf_name_data.push_back(area_opaque_lsa_count.get_name_leafdata());
    if (area_per_prefix_lfa_interface_count.is_set || is_set(area_per_prefix_lfa_interface_count.yfilter)) leaf_name_data.push_back(area_per_prefix_lfa_interface_count.get_name_leafdata());
    if (area_policy_in.is_set || is_set(area_policy_in.yfilter)) leaf_name_data.push_back(area_policy_in.get_name_leafdata());
    if (area_policy_in_name.is_set || is_set(area_policy_in_name.yfilter)) leaf_name_data.push_back(area_policy_in_name.get_name_leafdata());
    if (area_policy_out.is_set || is_set(area_policy_out.yfilter)) leaf_name_data.push_back(area_policy_out.get_name_leafdata());
    if (area_policy_out_name.is_set || is_set(area_policy_out_name.yfilter)) leaf_name_data.push_back(area_policy_out_name.get_name_leafdata());
    if (area_stub.is_set || is_set(area_stub.yfilter)) leaf_name_data.push_back(area_stub.get_name_leafdata());
    if (area_total_stub.is_set || is_set(area_total_stub.yfilter)) leaf_name_data.push_back(area_total_stub.get_name_leafdata());
    if (authentication_type.is_set || is_set(authentication_type.yfilter)) leaf_name_data.push_back(authentication_type.get_name_leafdata());
    if (backbone_area_active.is_set || is_set(backbone_area_active.yfilter)) leaf_name_data.push_back(backbone_area_active.get_name_leafdata());
    if (dna_lsa_count.is_set || is_set(dna_lsa_count.yfilter)) leaf_name_data.push_back(dna_lsa_count.get_name_leafdata());
    if (external_out.is_set || is_set(external_out.yfilter)) leaf_name_data.push_back(external_out.get_name_leafdata());
    if (flood_list_length.is_set || is_set(flood_list_length.yfilter)) leaf_name_data.push_back(flood_list_length.get_name_leafdata());
    if (indication_lsa_count.is_set || is_set(indication_lsa_count.yfilter)) leaf_name_data.push_back(indication_lsa_count.get_name_leafdata());
    if (nssa_default.is_set || is_set(nssa_default.yfilter)) leaf_name_data.push_back(nssa_default.get_name_leafdata());
    if (nssa_no_redistribution.is_set || is_set(nssa_no_redistribution.yfilter)) leaf_name_data.push_back(nssa_no_redistribution.get_name_leafdata());
    if (nssa_translate.is_set || is_set(nssa_translate.yfilter)) leaf_name_data.push_back(nssa_translate.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (spf_count.is_set || is_set(spf_count.yfilter)) leaf_name_data.push_back(spf_count.get_name_leafdata());
    if (sr_microloop_avoidance_active.is_set || is_set(sr_microloop_avoidance_active.yfilter)) leaf_name_data.push_back(sr_microloop_avoidance_active.get_name_leafdata());
    if (sr_microloop_avoidance_event_type.is_set || is_set(sr_microloop_avoidance_event_type.yfilter)) leaf_name_data.push_back(sr_microloop_avoidance_event_type.get_name_leafdata());
    if (sr_microloop_avoidance_far_end_id.is_set || is_set(sr_microloop_avoidance_far_end_id.yfilter)) leaf_name_data.push_back(sr_microloop_avoidance_far_end_id.get_name_leafdata());
    if (sr_microloop_avoidance_near_end_id.is_set || is_set(sr_microloop_avoidance_near_end_id.yfilter)) leaf_name_data.push_back(sr_microloop_avoidance_near_end_id.get_name_leafdata());
    if (sr_microloop_avoidance_pseudonode_id.is_set || is_set(sr_microloop_avoidance_pseudonode_id.yfilter)) leaf_name_data.push_back(sr_microloop_avoidance_pseudonode_id.get_name_leafdata());
    if (sr_strict_spf_cap.is_set || is_set(sr_strict_spf_cap.yfilter)) leaf_name_data.push_back(sr_strict_spf_cap.get_name_leafdata());
    if (sr_strict_spfsids_available.is_set || is_set(sr_strict_spfsids_available.yfilter)) leaf_name_data.push_back(sr_strict_spfsids_available.get_name_leafdata());
    if (stub_default_cost.is_set || is_set(stub_default_cost.yfilter)) leaf_name_data.push_back(stub_default_cost.get_name_leafdata());
    if (summary_in.is_set || is_set(summary_in.yfilter)) leaf_name_data.push_back(summary_in.get_name_leafdata());
    if (te_enabled.is_set || is_set(te_enabled.yfilter)) leaf_name_data.push_back(te_enabled.get_name_leafdata());
    if (te_topology_version.is_set || is_set(te_topology_version.yfilter)) leaf_name_data.push_back(te_topology_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-range")
    {
        for(auto const & c : area_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : area_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-adj-stag-num-nbr-forming")
    {
        area_adj_stag_num_nbr_forming = value;
        area_adj_stag_num_nbr_forming.value_namespace = name_space;
        area_adj_stag_num_nbr_forming.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-dc-bitless-lsa-count")
    {
        area_dc_bitless_lsa_count = value;
        area_dc_bitless_lsa_count.value_namespace = name_space;
        area_dc_bitless_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id-string")
    {
        area_id_string = value;
        area_id_string.value_namespace = name_space;
        area_id_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-interface-count")
    {
        area_interface_count = value;
        area_interface_count.value_namespace = name_space;
        area_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lfa-interface-count")
    {
        area_lfa_interface_count = value;
        area_lfa_interface_count.value_namespace = name_space;
        area_lfa_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lfa-revision")
    {
        area_lfa_revision = value;
        area_lfa_revision.value_namespace = name_space;
        area_lfa_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-checksum")
    {
        area_lsa_checksum = value;
        area_lsa_checksum.value_namespace = name_space;
        area_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-count")
    {
        area_lsa_count = value;
        area_lsa_count.value_namespace = name_space;
        area_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-nssa")
    {
        area_nssa = value;
        area_nssa.value_namespace = name_space;
        area_nssa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-num-nbr-full")
    {
        area_num_nbr_full = value;
        area_num_nbr_full.value_namespace = name_space;
        area_num_nbr_full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-opaque-lsa-checksum")
    {
        area_opaque_lsa_checksum = value;
        area_opaque_lsa_checksum.value_namespace = name_space;
        area_opaque_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-opaque-lsa-count")
    {
        area_opaque_lsa_count = value;
        area_opaque_lsa_count.value_namespace = name_space;
        area_opaque_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-per-prefix-lfa-interface-count")
    {
        area_per_prefix_lfa_interface_count = value;
        area_per_prefix_lfa_interface_count.value_namespace = name_space;
        area_per_prefix_lfa_interface_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "authentication-type")
    {
        authentication_type = value;
        authentication_type.value_namespace = name_space;
        authentication_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backbone-area-active")
    {
        backbone_area_active = value;
        backbone_area_active.value_namespace = name_space;
        backbone_area_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dna-lsa-count")
    {
        dna_lsa_count = value;
        dna_lsa_count.value_namespace = name_space;
        dna_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-out")
    {
        external_out = value;
        external_out.value_namespace = name_space;
        external_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-list-length")
    {
        flood_list_length = value;
        flood_list_length.value_namespace = name_space;
        flood_list_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "indication-lsa-count")
    {
        indication_lsa_count = value;
        indication_lsa_count.value_namespace = name_space;
        indication_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-default")
    {
        nssa_default = value;
        nssa_default.value_namespace = name_space;
        nssa_default.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-count")
    {
        spf_count = value;
        spf_count.value_namespace = name_space;
        spf_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sr-microloop-avoidance-far-end-id")
    {
        sr_microloop_avoidance_far_end_id = value;
        sr_microloop_avoidance_far_end_id.value_namespace = name_space;
        sr_microloop_avoidance_far_end_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-microloop-avoidance-near-end-id")
    {
        sr_microloop_avoidance_near_end_id = value;
        sr_microloop_avoidance_near_end_id.value_namespace = name_space;
        sr_microloop_avoidance_near_end_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-microloop-avoidance-pseudonode-id")
    {
        sr_microloop_avoidance_pseudonode_id = value;
        sr_microloop_avoidance_pseudonode_id.value_namespace = name_space;
        sr_microloop_avoidance_pseudonode_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "stub-default-cost")
    {
        stub_default_cost = value;
        stub_default_cost.value_namespace = name_space;
        stub_default_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-in")
    {
        summary_in = value;
        summary_in.value_namespace = name_space;
        summary_in.value_namespace_prefix = name_space_prefix;
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
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "area-adj-stag-num-nbr-forming")
    {
        area_adj_stag_num_nbr_forming.yfilter = yfilter;
    }
    if(value_path == "area-dc-bitless-lsa-count")
    {
        area_dc_bitless_lsa_count.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-id-string")
    {
        area_id_string.yfilter = yfilter;
    }
    if(value_path == "area-interface-count")
    {
        area_interface_count.yfilter = yfilter;
    }
    if(value_path == "area-lfa-interface-count")
    {
        area_lfa_interface_count.yfilter = yfilter;
    }
    if(value_path == "area-lfa-revision")
    {
        area_lfa_revision.yfilter = yfilter;
    }
    if(value_path == "area-lsa-checksum")
    {
        area_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "area-lsa-count")
    {
        area_lsa_count.yfilter = yfilter;
    }
    if(value_path == "area-nssa")
    {
        area_nssa.yfilter = yfilter;
    }
    if(value_path == "area-num-nbr-full")
    {
        area_num_nbr_full.yfilter = yfilter;
    }
    if(value_path == "area-opaque-lsa-checksum")
    {
        area_opaque_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "area-opaque-lsa-count")
    {
        area_opaque_lsa_count.yfilter = yfilter;
    }
    if(value_path == "area-per-prefix-lfa-interface-count")
    {
        area_per_prefix_lfa_interface_count.yfilter = yfilter;
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
    if(value_path == "area-stub")
    {
        area_stub.yfilter = yfilter;
    }
    if(value_path == "area-total-stub")
    {
        area_total_stub.yfilter = yfilter;
    }
    if(value_path == "authentication-type")
    {
        authentication_type.yfilter = yfilter;
    }
    if(value_path == "backbone-area-active")
    {
        backbone_area_active.yfilter = yfilter;
    }
    if(value_path == "dna-lsa-count")
    {
        dna_lsa_count.yfilter = yfilter;
    }
    if(value_path == "external-out")
    {
        external_out.yfilter = yfilter;
    }
    if(value_path == "flood-list-length")
    {
        flood_list_length.yfilter = yfilter;
    }
    if(value_path == "indication-lsa-count")
    {
        indication_lsa_count.yfilter = yfilter;
    }
    if(value_path == "nssa-default")
    {
        nssa_default.yfilter = yfilter;
    }
    if(value_path == "nssa-no-redistribution")
    {
        nssa_no_redistribution.yfilter = yfilter;
    }
    if(value_path == "nssa-translate")
    {
        nssa_translate.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "spf-count")
    {
        spf_count.yfilter = yfilter;
    }
    if(value_path == "sr-microloop-avoidance-active")
    {
        sr_microloop_avoidance_active.yfilter = yfilter;
    }
    if(value_path == "sr-microloop-avoidance-event-type")
    {
        sr_microloop_avoidance_event_type.yfilter = yfilter;
    }
    if(value_path == "sr-microloop-avoidance-far-end-id")
    {
        sr_microloop_avoidance_far_end_id.yfilter = yfilter;
    }
    if(value_path == "sr-microloop-avoidance-near-end-id")
    {
        sr_microloop_avoidance_near_end_id.yfilter = yfilter;
    }
    if(value_path == "sr-microloop-avoidance-pseudonode-id")
    {
        sr_microloop_avoidance_pseudonode_id.yfilter = yfilter;
    }
    if(value_path == "sr-strict-spf-cap")
    {
        sr_strict_spf_cap.yfilter = yfilter;
    }
    if(value_path == "sr-strict-spfsids-available")
    {
        sr_strict_spfsids_available.yfilter = yfilter;
    }
    if(value_path == "stub-default-cost")
    {
        stub_default_cost.yfilter = yfilter;
    }
    if(value_path == "summary-in")
    {
        summary_in.yfilter = yfilter;
    }
    if(value_path == "te-enabled")
    {
        te_enabled.yfilter = yfilter;
    }
    if(value_path == "te-topology-version")
    {
        te_topology_version.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-range" || name == "address" || name == "area-adj-stag-num-nbr-forming" || name == "area-dc-bitless-lsa-count" || name == "area-id" || name == "area-id-string" || name == "area-interface-count" || name == "area-lfa-interface-count" || name == "area-lfa-revision" || name == "area-lsa-checksum" || name == "area-lsa-count" || name == "area-nssa" || name == "area-num-nbr-full" || name == "area-opaque-lsa-checksum" || name == "area-opaque-lsa-count" || name == "area-per-prefix-lfa-interface-count" || name == "area-policy-in" || name == "area-policy-in-name" || name == "area-policy-out" || name == "area-policy-out-name" || name == "area-stub" || name == "area-total-stub" || name == "authentication-type" || name == "backbone-area-active" || name == "dna-lsa-count" || name == "external-out" || name == "flood-list-length" || name == "indication-lsa-count" || name == "nssa-default" || name == "nssa-no-redistribution" || name == "nssa-translate" || name == "segment-routing" || name == "spf-count" || name == "sr-microloop-avoidance-active" || name == "sr-microloop-avoidance-event-type" || name == "sr-microloop-avoidance-far-end-id" || name == "sr-microloop-avoidance-near-end-id" || name == "sr-microloop-avoidance-pseudonode-id" || name == "sr-strict-spf-cap" || name == "sr-strict-spfsids-available" || name == "stub-default-cost" || name == "summary-in" || name == "te-enabled" || name == "te-topology-version")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::AreaRange()
    :
    advertise_flag{YType::boolean, "advertise-flag"},
    cost{YType::uint32, "cost"},
    range_mask{YType::str, "range-mask"},
    range_prefix{YType::str, "range-prefix"}
{

    yang_name = "area-range"; yang_parent_name = "process-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::~AreaRange()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::has_data() const
{
    return advertise_flag.is_set
	|| cost.is_set
	|| range_mask.is_set
	|| range_prefix.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise_flag.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(range_mask.yfilter)
	|| ydk::is_set(range_prefix.yfilter);
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

    if (advertise_flag.is_set || is_set(advertise_flag.yfilter)) leaf_name_data.push_back(advertise_flag.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (range_mask.is_set || is_set(range_mask.yfilter)) leaf_name_data.push_back(range_mask.get_name_leafdata());
    if (range_prefix.is_set || is_set(range_prefix.yfilter)) leaf_name_data.push_back(range_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-flag")
    {
        advertise_flag = value;
        advertise_flag.value_namespace = name_space;
        advertise_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-mask")
    {
        range_mask = value;
        range_mask.value_namespace = name_space;
        range_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-prefix")
    {
        range_prefix = value;
        range_prefix.value_namespace = name_space;
        range_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-flag")
    {
        advertise_flag.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "range-mask")
    {
        range_mask.yfilter = yfilter;
    }
    if(value_path == "range-prefix")
    {
        range_prefix.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-flag" || name == "cost" || name == "range-mask" || name == "range-prefix")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::ProcessSummary()
    :
    adj_stag_init_num_nbr{YType::uint16, "adj-stag-init-num-nbr"},
    adj_stag_max_num_nbr{YType::uint16, "adj-stag-max-num-nbr"},
    adj_stag_num_nbr_forming{YType::uint16, "adj-stag-num-nbr-forming"},
    adj_stagger_enabled{YType::boolean, "adj-stagger-enabled"},
    area_border_router{YType::boolean, "area-border-router"},
    area_count{YType::uint16, "area-count"},
    as_border_router{YType::boolean, "as-border-router"},
    as_dc_bitless_lsa_count{YType::uint32, "as-dc-bitless-lsa-count"},
    as_dna_lsa_count{YType::uint32, "as-dna-lsa-count"},
    as_lsa_checksum{YType::uint32, "as-lsa-checksum"},
    as_lsa_count{YType::uint32, "as-lsa-count"},
    as_lsa_flood_list_length{YType::uint32, "as-lsa-flood-list-length"},
    context_name{YType::str, "context-name"},
    graceful_shutdown_retention_time{YType::uint32, "graceful-shutdown-retention-time"},
    graceful_shutdown_state{YType::enumeration, "graceful-shutdown-state"},
    if_flood_pacing_interval{YType::uint16, "if-flood-pacing-interval"},
    if_retrans_pacing_interval{YType::uint16, "if-retrans-pacing-interval"},
    igp_intact_on{YType::boolean, "igp-intact-on"},
    last_nsf_time{YType::uint32, "last-nsf-time"},
    lsa_hold_time{YType::uint32, "lsa-hold-time"},
    lsa_maximum_time{YType::uint32, "lsa-maximum-time"},
    lsa_refresh_interval{YType::uint32, "lsa-refresh-interval"},
    lsa_start_time{YType::int32, "lsa-start-time"},
    lsd_bound{YType::boolean, "lsd-bound"},
    lsd_connected{YType::boolean, "lsd-connected"},
    lsd_connection_revision{YType::uint32, "lsd-connection-revision"},
    lsd_registered{YType::boolean, "lsd-registered"},
    max_lsa_enabled{YType::boolean, "max-lsa-enabled"},
    max_lsa_ignore_count{YType::uint32, "max-lsa-ignore-count"},
    max_lsa_ignore_limit{YType::uint32, "max-lsa-ignore-limit"},
    max_lsa_ignore_time{YType::uint32, "max-lsa-ignore-time"},
    max_lsa_ignore_timer{YType::uint32, "max-lsa-ignore-timer"},
    max_lsa_limit{YType::uint32, "max-lsa-limit"},
    max_lsa_reset_time{YType::uint32, "max-lsa-reset-time"},
    max_lsa_reset_timer{YType::uint32, "max-lsa-reset-timer"},
    max_lsa_treshold{YType::uint32, "max-lsa-treshold"},
    max_lsa_warning_only{YType::boolean, "max-lsa-warning-only"},
    maximum_interfaces{YType::uint32, "maximum-interfaces"},
    maximum_metric_abr_off_buffer_time{YType::uint32, "maximum-metric-abr-off-buffer-time"},
    maximum_metric_abr_off_mode{YType::boolean, "maximum-metric-abr-off-mode"},
    maximum_metric_abr_off_reasons{YType::enumeration, "maximum-metric-abr-off-reasons"},
    maximum_metric_set_reason{YType::enumeration, "maximum-metric-set-reason"},
    maximum_metric_start{YType::boolean, "maximum-metric-start"},
    maximum_metric_start_timer{YType::uint32, "maximum-metric-start-timer"},
    microloop_avoidance_active{YType::boolean, "microloop-avoidance-active"},
    microloop_avoidance_delay{YType::uint32, "microloop-avoidance-delay"},
    microloop_avoidance_delay_expiry{YType::uint32, "microloop-avoidance-delay-expiry"},
    microloop_avoidance_type{YType::enumeration, "microloop-avoidance-type"},
    minimum_lsa_arrival_interval{YType::uint16, "minimum-lsa-arrival-interval"},
    minimum_lsa_arrival_interval_u32{YType::uint32, "minimum-lsa-arrival-interval-u32"},
    minimum_lsa_interval{YType::uint16, "minimum-lsa-interval"},
    minimum_lsa_interval_u32{YType::uint32, "minimum-lsa-interval-u32"},
    non_self_lsa_count{YType::uint32, "non-self-lsa-count"},
    normal_area_count{YType::uint16, "normal-area-count"},
    nsf_enabled{YType::boolean, "nsf-enabled"},
    nsf_time{YType::uint32, "nsf-time"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    nsr_switchover_on_restart{YType::boolean, "nsr-switchover-on-restart"},
    nssa_area_count{YType::uint16, "nssa-area-count"},
    number_nbrs_full{YType::uint16, "number-nbrs-full"},
    opaque_capable{YType::boolean, "opaque-capable"},
    opaque_lsa_checksum{YType::uint32, "opaque-lsa-checksum"},
    opaque_lsa_count{YType::uint32, "opaque-lsa-count"},
    redistribution_limit{YType::uint32, "redistribution-limit"},
    redistribution_limit_warn{YType::boolean, "redistribution-limit-warn"},
    redistribution_threshold{YType::uint32, "redistribution-threshold"},
    role{YType::uint32, "role"},
    role_standby{YType::boolean, "role-standby"},
    router_id{YType::str, "router-id"},
    snmp_trap_enabled{YType::boolean, "snmp-trap-enabled"},
    spf_hold_time{YType::uint16, "spf-hold-time"},
    spf_hold_time_u32{YType::uint32, "spf-hold-time-u32"},
    spf_maximum_time{YType::uint16, "spf-maximum-time"},
    spf_maximum_time_u32{YType::uint32, "spf-maximum-time-u32"},
    spf_prefix_priority{YType::boolean, "spf-prefix-priority"},
    spf_prefix_priority_route_policy{YType::str, "spf-prefix-priority-route-policy"},
    spf_start_time{YType::uint16, "spf-start-time"},
    spf_start_time_u32{YType::uint32, "spf-start-time-u32"},
    sr_strict_spf_cap{YType::boolean, "sr-strict-spf-cap"},
    srgb_configured{YType::boolean, "srgb-configured"},
    srgb_end{YType::uint32, "srgb-end"},
    srgb_start{YType::uint32, "srgb-start"},
    srgb_status{YType::enumeration, "srgb-status"},
    stub_area_count{YType::uint16, "stub-area-count"},
    table_prefix_limit_reached{YType::boolean, "table-prefix-limit-reached"},
    tos_options{YType::uint8, "tos-options"},
    ucmp{YType::boolean, "ucmp"},
    ucmp_delay{YType::uint32, "ucmp-delay"},
    ucmp_prefix_list{YType::str, "ucmp-prefix-list"},
    ucmp_variance{YType::int32, "ucmp-variance"},
    vrf_lite_enabled{YType::boolean, "vrf-lite-enabled"}
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
    return adj_stag_init_num_nbr.is_set
	|| adj_stag_max_num_nbr.is_set
	|| adj_stag_num_nbr_forming.is_set
	|| adj_stagger_enabled.is_set
	|| area_border_router.is_set
	|| area_count.is_set
	|| as_border_router.is_set
	|| as_dc_bitless_lsa_count.is_set
	|| as_dna_lsa_count.is_set
	|| as_lsa_checksum.is_set
	|| as_lsa_count.is_set
	|| as_lsa_flood_list_length.is_set
	|| context_name.is_set
	|| graceful_shutdown_retention_time.is_set
	|| graceful_shutdown_state.is_set
	|| if_flood_pacing_interval.is_set
	|| if_retrans_pacing_interval.is_set
	|| igp_intact_on.is_set
	|| last_nsf_time.is_set
	|| lsa_hold_time.is_set
	|| lsa_maximum_time.is_set
	|| lsa_refresh_interval.is_set
	|| lsa_start_time.is_set
	|| lsd_bound.is_set
	|| lsd_connected.is_set
	|| lsd_connection_revision.is_set
	|| lsd_registered.is_set
	|| max_lsa_enabled.is_set
	|| max_lsa_ignore_count.is_set
	|| max_lsa_ignore_limit.is_set
	|| max_lsa_ignore_time.is_set
	|| max_lsa_ignore_timer.is_set
	|| max_lsa_limit.is_set
	|| max_lsa_reset_time.is_set
	|| max_lsa_reset_timer.is_set
	|| max_lsa_treshold.is_set
	|| max_lsa_warning_only.is_set
	|| maximum_interfaces.is_set
	|| maximum_metric_abr_off_buffer_time.is_set
	|| maximum_metric_abr_off_mode.is_set
	|| maximum_metric_abr_off_reasons.is_set
	|| maximum_metric_set_reason.is_set
	|| maximum_metric_start.is_set
	|| maximum_metric_start_timer.is_set
	|| microloop_avoidance_active.is_set
	|| microloop_avoidance_delay.is_set
	|| microloop_avoidance_delay_expiry.is_set
	|| microloop_avoidance_type.is_set
	|| minimum_lsa_arrival_interval.is_set
	|| minimum_lsa_arrival_interval_u32.is_set
	|| minimum_lsa_interval.is_set
	|| minimum_lsa_interval_u32.is_set
	|| non_self_lsa_count.is_set
	|| normal_area_count.is_set
	|| nsf_enabled.is_set
	|| nsf_time.is_set
	|| nsr_enabled.is_set
	|| nsr_switchover_on_restart.is_set
	|| nssa_area_count.is_set
	|| number_nbrs_full.is_set
	|| opaque_capable.is_set
	|| opaque_lsa_checksum.is_set
	|| opaque_lsa_count.is_set
	|| redistribution_limit.is_set
	|| redistribution_limit_warn.is_set
	|| redistribution_threshold.is_set
	|| role.is_set
	|| role_standby.is_set
	|| router_id.is_set
	|| snmp_trap_enabled.is_set
	|| spf_hold_time.is_set
	|| spf_hold_time_u32.is_set
	|| spf_maximum_time.is_set
	|| spf_maximum_time_u32.is_set
	|| spf_prefix_priority.is_set
	|| spf_prefix_priority_route_policy.is_set
	|| spf_start_time.is_set
	|| spf_start_time_u32.is_set
	|| sr_strict_spf_cap.is_set
	|| srgb_configured.is_set
	|| srgb_end.is_set
	|| srgb_start.is_set
	|| srgb_status.is_set
	|| stub_area_count.is_set
	|| table_prefix_limit_reached.is_set
	|| tos_options.is_set
	|| ucmp.is_set
	|| ucmp_delay.is_set
	|| ucmp_prefix_list.is_set
	|| ucmp_variance.is_set
	|| vrf_lite_enabled.is_set
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
	|| ydk::is_set(adj_stag_init_num_nbr.yfilter)
	|| ydk::is_set(adj_stag_max_num_nbr.yfilter)
	|| ydk::is_set(adj_stag_num_nbr_forming.yfilter)
	|| ydk::is_set(adj_stagger_enabled.yfilter)
	|| ydk::is_set(area_border_router.yfilter)
	|| ydk::is_set(area_count.yfilter)
	|| ydk::is_set(as_border_router.yfilter)
	|| ydk::is_set(as_dc_bitless_lsa_count.yfilter)
	|| ydk::is_set(as_dna_lsa_count.yfilter)
	|| ydk::is_set(as_lsa_checksum.yfilter)
	|| ydk::is_set(as_lsa_count.yfilter)
	|| ydk::is_set(as_lsa_flood_list_length.yfilter)
	|| ydk::is_set(context_name.yfilter)
	|| ydk::is_set(graceful_shutdown_retention_time.yfilter)
	|| ydk::is_set(graceful_shutdown_state.yfilter)
	|| ydk::is_set(if_flood_pacing_interval.yfilter)
	|| ydk::is_set(if_retrans_pacing_interval.yfilter)
	|| ydk::is_set(igp_intact_on.yfilter)
	|| ydk::is_set(last_nsf_time.yfilter)
	|| ydk::is_set(lsa_hold_time.yfilter)
	|| ydk::is_set(lsa_maximum_time.yfilter)
	|| ydk::is_set(lsa_refresh_interval.yfilter)
	|| ydk::is_set(lsa_start_time.yfilter)
	|| ydk::is_set(lsd_bound.yfilter)
	|| ydk::is_set(lsd_connected.yfilter)
	|| ydk::is_set(lsd_connection_revision.yfilter)
	|| ydk::is_set(lsd_registered.yfilter)
	|| ydk::is_set(max_lsa_enabled.yfilter)
	|| ydk::is_set(max_lsa_ignore_count.yfilter)
	|| ydk::is_set(max_lsa_ignore_limit.yfilter)
	|| ydk::is_set(max_lsa_ignore_time.yfilter)
	|| ydk::is_set(max_lsa_ignore_timer.yfilter)
	|| ydk::is_set(max_lsa_limit.yfilter)
	|| ydk::is_set(max_lsa_reset_time.yfilter)
	|| ydk::is_set(max_lsa_reset_timer.yfilter)
	|| ydk::is_set(max_lsa_treshold.yfilter)
	|| ydk::is_set(max_lsa_warning_only.yfilter)
	|| ydk::is_set(maximum_interfaces.yfilter)
	|| ydk::is_set(maximum_metric_abr_off_buffer_time.yfilter)
	|| ydk::is_set(maximum_metric_abr_off_mode.yfilter)
	|| ydk::is_set(maximum_metric_abr_off_reasons.yfilter)
	|| ydk::is_set(maximum_metric_set_reason.yfilter)
	|| ydk::is_set(maximum_metric_start.yfilter)
	|| ydk::is_set(maximum_metric_start_timer.yfilter)
	|| ydk::is_set(microloop_avoidance_active.yfilter)
	|| ydk::is_set(microloop_avoidance_delay.yfilter)
	|| ydk::is_set(microloop_avoidance_delay_expiry.yfilter)
	|| ydk::is_set(microloop_avoidance_type.yfilter)
	|| ydk::is_set(minimum_lsa_arrival_interval.yfilter)
	|| ydk::is_set(minimum_lsa_arrival_interval_u32.yfilter)
	|| ydk::is_set(minimum_lsa_interval.yfilter)
	|| ydk::is_set(minimum_lsa_interval_u32.yfilter)
	|| ydk::is_set(non_self_lsa_count.yfilter)
	|| ydk::is_set(normal_area_count.yfilter)
	|| ydk::is_set(nsf_enabled.yfilter)
	|| ydk::is_set(nsf_time.yfilter)
	|| ydk::is_set(nsr_enabled.yfilter)
	|| ydk::is_set(nsr_switchover_on_restart.yfilter)
	|| ydk::is_set(nssa_area_count.yfilter)
	|| ydk::is_set(number_nbrs_full.yfilter)
	|| ydk::is_set(opaque_capable.yfilter)
	|| ydk::is_set(opaque_lsa_checksum.yfilter)
	|| ydk::is_set(opaque_lsa_count.yfilter)
	|| ydk::is_set(redistribution_limit.yfilter)
	|| ydk::is_set(redistribution_limit_warn.yfilter)
	|| ydk::is_set(redistribution_threshold.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(role_standby.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(snmp_trap_enabled.yfilter)
	|| ydk::is_set(spf_hold_time.yfilter)
	|| ydk::is_set(spf_hold_time_u32.yfilter)
	|| ydk::is_set(spf_maximum_time.yfilter)
	|| ydk::is_set(spf_maximum_time_u32.yfilter)
	|| ydk::is_set(spf_prefix_priority.yfilter)
	|| ydk::is_set(spf_prefix_priority_route_policy.yfilter)
	|| ydk::is_set(spf_start_time.yfilter)
	|| ydk::is_set(spf_start_time_u32.yfilter)
	|| ydk::is_set(sr_strict_spf_cap.yfilter)
	|| ydk::is_set(srgb_configured.yfilter)
	|| ydk::is_set(srgb_end.yfilter)
	|| ydk::is_set(srgb_start.yfilter)
	|| ydk::is_set(srgb_status.yfilter)
	|| ydk::is_set(stub_area_count.yfilter)
	|| ydk::is_set(table_prefix_limit_reached.yfilter)
	|| ydk::is_set(tos_options.yfilter)
	|| ydk::is_set(ucmp.yfilter)
	|| ydk::is_set(ucmp_delay.yfilter)
	|| ydk::is_set(ucmp_prefix_list.yfilter)
	|| ydk::is_set(ucmp_variance.yfilter)
	|| ydk::is_set(vrf_lite_enabled.yfilter)
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

    if (adj_stag_init_num_nbr.is_set || is_set(adj_stag_init_num_nbr.yfilter)) leaf_name_data.push_back(adj_stag_init_num_nbr.get_name_leafdata());
    if (adj_stag_max_num_nbr.is_set || is_set(adj_stag_max_num_nbr.yfilter)) leaf_name_data.push_back(adj_stag_max_num_nbr.get_name_leafdata());
    if (adj_stag_num_nbr_forming.is_set || is_set(adj_stag_num_nbr_forming.yfilter)) leaf_name_data.push_back(adj_stag_num_nbr_forming.get_name_leafdata());
    if (adj_stagger_enabled.is_set || is_set(adj_stagger_enabled.yfilter)) leaf_name_data.push_back(adj_stagger_enabled.get_name_leafdata());
    if (area_border_router.is_set || is_set(area_border_router.yfilter)) leaf_name_data.push_back(area_border_router.get_name_leafdata());
    if (area_count.is_set || is_set(area_count.yfilter)) leaf_name_data.push_back(area_count.get_name_leafdata());
    if (as_border_router.is_set || is_set(as_border_router.yfilter)) leaf_name_data.push_back(as_border_router.get_name_leafdata());
    if (as_dc_bitless_lsa_count.is_set || is_set(as_dc_bitless_lsa_count.yfilter)) leaf_name_data.push_back(as_dc_bitless_lsa_count.get_name_leafdata());
    if (as_dna_lsa_count.is_set || is_set(as_dna_lsa_count.yfilter)) leaf_name_data.push_back(as_dna_lsa_count.get_name_leafdata());
    if (as_lsa_checksum.is_set || is_set(as_lsa_checksum.yfilter)) leaf_name_data.push_back(as_lsa_checksum.get_name_leafdata());
    if (as_lsa_count.is_set || is_set(as_lsa_count.yfilter)) leaf_name_data.push_back(as_lsa_count.get_name_leafdata());
    if (as_lsa_flood_list_length.is_set || is_set(as_lsa_flood_list_length.yfilter)) leaf_name_data.push_back(as_lsa_flood_list_length.get_name_leafdata());
    if (context_name.is_set || is_set(context_name.yfilter)) leaf_name_data.push_back(context_name.get_name_leafdata());
    if (graceful_shutdown_retention_time.is_set || is_set(graceful_shutdown_retention_time.yfilter)) leaf_name_data.push_back(graceful_shutdown_retention_time.get_name_leafdata());
    if (graceful_shutdown_state.is_set || is_set(graceful_shutdown_state.yfilter)) leaf_name_data.push_back(graceful_shutdown_state.get_name_leafdata());
    if (if_flood_pacing_interval.is_set || is_set(if_flood_pacing_interval.yfilter)) leaf_name_data.push_back(if_flood_pacing_interval.get_name_leafdata());
    if (if_retrans_pacing_interval.is_set || is_set(if_retrans_pacing_interval.yfilter)) leaf_name_data.push_back(if_retrans_pacing_interval.get_name_leafdata());
    if (igp_intact_on.is_set || is_set(igp_intact_on.yfilter)) leaf_name_data.push_back(igp_intact_on.get_name_leafdata());
    if (last_nsf_time.is_set || is_set(last_nsf_time.yfilter)) leaf_name_data.push_back(last_nsf_time.get_name_leafdata());
    if (lsa_hold_time.is_set || is_set(lsa_hold_time.yfilter)) leaf_name_data.push_back(lsa_hold_time.get_name_leafdata());
    if (lsa_maximum_time.is_set || is_set(lsa_maximum_time.yfilter)) leaf_name_data.push_back(lsa_maximum_time.get_name_leafdata());
    if (lsa_refresh_interval.is_set || is_set(lsa_refresh_interval.yfilter)) leaf_name_data.push_back(lsa_refresh_interval.get_name_leafdata());
    if (lsa_start_time.is_set || is_set(lsa_start_time.yfilter)) leaf_name_data.push_back(lsa_start_time.get_name_leafdata());
    if (lsd_bound.is_set || is_set(lsd_bound.yfilter)) leaf_name_data.push_back(lsd_bound.get_name_leafdata());
    if (lsd_connected.is_set || is_set(lsd_connected.yfilter)) leaf_name_data.push_back(lsd_connected.get_name_leafdata());
    if (lsd_connection_revision.is_set || is_set(lsd_connection_revision.yfilter)) leaf_name_data.push_back(lsd_connection_revision.get_name_leafdata());
    if (lsd_registered.is_set || is_set(lsd_registered.yfilter)) leaf_name_data.push_back(lsd_registered.get_name_leafdata());
    if (max_lsa_enabled.is_set || is_set(max_lsa_enabled.yfilter)) leaf_name_data.push_back(max_lsa_enabled.get_name_leafdata());
    if (max_lsa_ignore_count.is_set || is_set(max_lsa_ignore_count.yfilter)) leaf_name_data.push_back(max_lsa_ignore_count.get_name_leafdata());
    if (max_lsa_ignore_limit.is_set || is_set(max_lsa_ignore_limit.yfilter)) leaf_name_data.push_back(max_lsa_ignore_limit.get_name_leafdata());
    if (max_lsa_ignore_time.is_set || is_set(max_lsa_ignore_time.yfilter)) leaf_name_data.push_back(max_lsa_ignore_time.get_name_leafdata());
    if (max_lsa_ignore_timer.is_set || is_set(max_lsa_ignore_timer.yfilter)) leaf_name_data.push_back(max_lsa_ignore_timer.get_name_leafdata());
    if (max_lsa_limit.is_set || is_set(max_lsa_limit.yfilter)) leaf_name_data.push_back(max_lsa_limit.get_name_leafdata());
    if (max_lsa_reset_time.is_set || is_set(max_lsa_reset_time.yfilter)) leaf_name_data.push_back(max_lsa_reset_time.get_name_leafdata());
    if (max_lsa_reset_timer.is_set || is_set(max_lsa_reset_timer.yfilter)) leaf_name_data.push_back(max_lsa_reset_timer.get_name_leafdata());
    if (max_lsa_treshold.is_set || is_set(max_lsa_treshold.yfilter)) leaf_name_data.push_back(max_lsa_treshold.get_name_leafdata());
    if (max_lsa_warning_only.is_set || is_set(max_lsa_warning_only.yfilter)) leaf_name_data.push_back(max_lsa_warning_only.get_name_leafdata());
    if (maximum_interfaces.is_set || is_set(maximum_interfaces.yfilter)) leaf_name_data.push_back(maximum_interfaces.get_name_leafdata());
    if (maximum_metric_abr_off_buffer_time.is_set || is_set(maximum_metric_abr_off_buffer_time.yfilter)) leaf_name_data.push_back(maximum_metric_abr_off_buffer_time.get_name_leafdata());
    if (maximum_metric_abr_off_mode.is_set || is_set(maximum_metric_abr_off_mode.yfilter)) leaf_name_data.push_back(maximum_metric_abr_off_mode.get_name_leafdata());
    if (maximum_metric_abr_off_reasons.is_set || is_set(maximum_metric_abr_off_reasons.yfilter)) leaf_name_data.push_back(maximum_metric_abr_off_reasons.get_name_leafdata());
    if (maximum_metric_set_reason.is_set || is_set(maximum_metric_set_reason.yfilter)) leaf_name_data.push_back(maximum_metric_set_reason.get_name_leafdata());
    if (maximum_metric_start.is_set || is_set(maximum_metric_start.yfilter)) leaf_name_data.push_back(maximum_metric_start.get_name_leafdata());
    if (maximum_metric_start_timer.is_set || is_set(maximum_metric_start_timer.yfilter)) leaf_name_data.push_back(maximum_metric_start_timer.get_name_leafdata());
    if (microloop_avoidance_active.is_set || is_set(microloop_avoidance_active.yfilter)) leaf_name_data.push_back(microloop_avoidance_active.get_name_leafdata());
    if (microloop_avoidance_delay.is_set || is_set(microloop_avoidance_delay.yfilter)) leaf_name_data.push_back(microloop_avoidance_delay.get_name_leafdata());
    if (microloop_avoidance_delay_expiry.is_set || is_set(microloop_avoidance_delay_expiry.yfilter)) leaf_name_data.push_back(microloop_avoidance_delay_expiry.get_name_leafdata());
    if (microloop_avoidance_type.is_set || is_set(microloop_avoidance_type.yfilter)) leaf_name_data.push_back(microloop_avoidance_type.get_name_leafdata());
    if (minimum_lsa_arrival_interval.is_set || is_set(minimum_lsa_arrival_interval.yfilter)) leaf_name_data.push_back(minimum_lsa_arrival_interval.get_name_leafdata());
    if (minimum_lsa_arrival_interval_u32.is_set || is_set(minimum_lsa_arrival_interval_u32.yfilter)) leaf_name_data.push_back(minimum_lsa_arrival_interval_u32.get_name_leafdata());
    if (minimum_lsa_interval.is_set || is_set(minimum_lsa_interval.yfilter)) leaf_name_data.push_back(minimum_lsa_interval.get_name_leafdata());
    if (minimum_lsa_interval_u32.is_set || is_set(minimum_lsa_interval_u32.yfilter)) leaf_name_data.push_back(minimum_lsa_interval_u32.get_name_leafdata());
    if (non_self_lsa_count.is_set || is_set(non_self_lsa_count.yfilter)) leaf_name_data.push_back(non_self_lsa_count.get_name_leafdata());
    if (normal_area_count.is_set || is_set(normal_area_count.yfilter)) leaf_name_data.push_back(normal_area_count.get_name_leafdata());
    if (nsf_enabled.is_set || is_set(nsf_enabled.yfilter)) leaf_name_data.push_back(nsf_enabled.get_name_leafdata());
    if (nsf_time.is_set || is_set(nsf_time.yfilter)) leaf_name_data.push_back(nsf_time.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.yfilter)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (nsr_switchover_on_restart.is_set || is_set(nsr_switchover_on_restart.yfilter)) leaf_name_data.push_back(nsr_switchover_on_restart.get_name_leafdata());
    if (nssa_area_count.is_set || is_set(nssa_area_count.yfilter)) leaf_name_data.push_back(nssa_area_count.get_name_leafdata());
    if (number_nbrs_full.is_set || is_set(number_nbrs_full.yfilter)) leaf_name_data.push_back(number_nbrs_full.get_name_leafdata());
    if (opaque_capable.is_set || is_set(opaque_capable.yfilter)) leaf_name_data.push_back(opaque_capable.get_name_leafdata());
    if (opaque_lsa_checksum.is_set || is_set(opaque_lsa_checksum.yfilter)) leaf_name_data.push_back(opaque_lsa_checksum.get_name_leafdata());
    if (opaque_lsa_count.is_set || is_set(opaque_lsa_count.yfilter)) leaf_name_data.push_back(opaque_lsa_count.get_name_leafdata());
    if (redistribution_limit.is_set || is_set(redistribution_limit.yfilter)) leaf_name_data.push_back(redistribution_limit.get_name_leafdata());
    if (redistribution_limit_warn.is_set || is_set(redistribution_limit_warn.yfilter)) leaf_name_data.push_back(redistribution_limit_warn.get_name_leafdata());
    if (redistribution_threshold.is_set || is_set(redistribution_threshold.yfilter)) leaf_name_data.push_back(redistribution_threshold.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (role_standby.is_set || is_set(role_standby.yfilter)) leaf_name_data.push_back(role_standby.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (snmp_trap_enabled.is_set || is_set(snmp_trap_enabled.yfilter)) leaf_name_data.push_back(snmp_trap_enabled.get_name_leafdata());
    if (spf_hold_time.is_set || is_set(spf_hold_time.yfilter)) leaf_name_data.push_back(spf_hold_time.get_name_leafdata());
    if (spf_hold_time_u32.is_set || is_set(spf_hold_time_u32.yfilter)) leaf_name_data.push_back(spf_hold_time_u32.get_name_leafdata());
    if (spf_maximum_time.is_set || is_set(spf_maximum_time.yfilter)) leaf_name_data.push_back(spf_maximum_time.get_name_leafdata());
    if (spf_maximum_time_u32.is_set || is_set(spf_maximum_time_u32.yfilter)) leaf_name_data.push_back(spf_maximum_time_u32.get_name_leafdata());
    if (spf_prefix_priority.is_set || is_set(spf_prefix_priority.yfilter)) leaf_name_data.push_back(spf_prefix_priority.get_name_leafdata());
    if (spf_prefix_priority_route_policy.is_set || is_set(spf_prefix_priority_route_policy.yfilter)) leaf_name_data.push_back(spf_prefix_priority_route_policy.get_name_leafdata());
    if (spf_start_time.is_set || is_set(spf_start_time.yfilter)) leaf_name_data.push_back(spf_start_time.get_name_leafdata());
    if (spf_start_time_u32.is_set || is_set(spf_start_time_u32.yfilter)) leaf_name_data.push_back(spf_start_time_u32.get_name_leafdata());
    if (sr_strict_spf_cap.is_set || is_set(sr_strict_spf_cap.yfilter)) leaf_name_data.push_back(sr_strict_spf_cap.get_name_leafdata());
    if (srgb_configured.is_set || is_set(srgb_configured.yfilter)) leaf_name_data.push_back(srgb_configured.get_name_leafdata());
    if (srgb_end.is_set || is_set(srgb_end.yfilter)) leaf_name_data.push_back(srgb_end.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.yfilter)) leaf_name_data.push_back(srgb_start.get_name_leafdata());
    if (srgb_status.is_set || is_set(srgb_status.yfilter)) leaf_name_data.push_back(srgb_status.get_name_leafdata());
    if (stub_area_count.is_set || is_set(stub_area_count.yfilter)) leaf_name_data.push_back(stub_area_count.get_name_leafdata());
    if (table_prefix_limit_reached.is_set || is_set(table_prefix_limit_reached.yfilter)) leaf_name_data.push_back(table_prefix_limit_reached.get_name_leafdata());
    if (tos_options.is_set || is_set(tos_options.yfilter)) leaf_name_data.push_back(tos_options.get_name_leafdata());
    if (ucmp.is_set || is_set(ucmp.yfilter)) leaf_name_data.push_back(ucmp.get_name_leafdata());
    if (ucmp_delay.is_set || is_set(ucmp_delay.yfilter)) leaf_name_data.push_back(ucmp_delay.get_name_leafdata());
    if (ucmp_prefix_list.is_set || is_set(ucmp_prefix_list.yfilter)) leaf_name_data.push_back(ucmp_prefix_list.get_name_leafdata());
    if (ucmp_variance.is_set || is_set(ucmp_variance.yfilter)) leaf_name_data.push_back(ucmp_variance.get_name_leafdata());
    if (vrf_lite_enabled.is_set || is_set(vrf_lite_enabled.yfilter)) leaf_name_data.push_back(vrf_lite_enabled.get_name_leafdata());

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
        for(auto const & c : maximum_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric>();
        c->parent = this;
        maximum_metric.push_back(c);
        return c;
    }

    if(child_yang_name == "redistribution")
    {
        for(auto const & c : redistribution)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    if(domain_id != nullptr)
    {
        children["domain-id"] = domain_id;
    }

    for (auto const & c : maximum_metric)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : redistribution)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "adj-stag-num-nbr-forming")
    {
        adj_stag_num_nbr_forming = value;
        adj_stag_num_nbr_forming.value_namespace = name_space;
        adj_stag_num_nbr_forming.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-stagger-enabled")
    {
        adj_stagger_enabled = value;
        adj_stagger_enabled.value_namespace = name_space;
        adj_stagger_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-border-router")
    {
        area_border_router = value;
        area_border_router.value_namespace = name_space;
        area_border_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-count")
    {
        area_count = value;
        area_count.value_namespace = name_space;
        area_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-border-router")
    {
        as_border_router = value;
        as_border_router.value_namespace = name_space;
        as_border_router.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "as-lsa-checksum")
    {
        as_lsa_checksum = value;
        as_lsa_checksum.value_namespace = name_space;
        as_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-lsa-count")
    {
        as_lsa_count = value;
        as_lsa_count.value_namespace = name_space;
        as_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-lsa-flood-list-length")
    {
        as_lsa_flood_list_length = value;
        as_lsa_flood_list_length.value_namespace = name_space;
        as_lsa_flood_list_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context-name")
    {
        context_name = value;
        context_name.value_namespace = name_space;
        context_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "igp-intact-on")
    {
        igp_intact_on = value;
        igp_intact_on.value_namespace = name_space;
        igp_intact_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-nsf-time")
    {
        last_nsf_time = value;
        last_nsf_time.value_namespace = name_space;
        last_nsf_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lsa-refresh-interval")
    {
        lsa_refresh_interval = value;
        lsa_refresh_interval.value_namespace = name_space;
        lsa_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-start-time")
    {
        lsa_start_time = value;
        lsa_start_time.value_namespace = name_space;
        lsa_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-bound")
    {
        lsd_bound = value;
        lsd_bound.value_namespace = name_space;
        lsd_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-connected")
    {
        lsd_connected = value;
        lsd_connected.value_namespace = name_space;
        lsd_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-connection-revision")
    {
        lsd_connection_revision = value;
        lsd_connection_revision.value_namespace = name_space;
        lsd_connection_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-registered")
    {
        lsd_registered = value;
        lsd_registered.value_namespace = name_space;
        lsd_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-enabled")
    {
        max_lsa_enabled = value;
        max_lsa_enabled.value_namespace = name_space;
        max_lsa_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-ignore-count")
    {
        max_lsa_ignore_count = value;
        max_lsa_ignore_count.value_namespace = name_space;
        max_lsa_ignore_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-ignore-limit")
    {
        max_lsa_ignore_limit = value;
        max_lsa_ignore_limit.value_namespace = name_space;
        max_lsa_ignore_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-ignore-time")
    {
        max_lsa_ignore_time = value;
        max_lsa_ignore_time.value_namespace = name_space;
        max_lsa_ignore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-ignore-timer")
    {
        max_lsa_ignore_timer = value;
        max_lsa_ignore_timer.value_namespace = name_space;
        max_lsa_ignore_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-limit")
    {
        max_lsa_limit = value;
        max_lsa_limit.value_namespace = name_space;
        max_lsa_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-reset-time")
    {
        max_lsa_reset_time = value;
        max_lsa_reset_time.value_namespace = name_space;
        max_lsa_reset_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-reset-timer")
    {
        max_lsa_reset_timer = value;
        max_lsa_reset_timer.value_namespace = name_space;
        max_lsa_reset_timer.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "maximum-interfaces")
    {
        maximum_interfaces = value;
        maximum_interfaces.value_namespace = name_space;
        maximum_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-metric-abr-off-buffer-time")
    {
        maximum_metric_abr_off_buffer_time = value;
        maximum_metric_abr_off_buffer_time.value_namespace = name_space;
        maximum_metric_abr_off_buffer_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "maximum-metric-set-reason")
    {
        maximum_metric_set_reason = value;
        maximum_metric_set_reason.value_namespace = name_space;
        maximum_metric_set_reason.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "microloop-avoidance-active")
    {
        microloop_avoidance_active = value;
        microloop_avoidance_active.value_namespace = name_space;
        microloop_avoidance_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-avoidance-delay")
    {
        microloop_avoidance_delay = value;
        microloop_avoidance_delay.value_namespace = name_space;
        microloop_avoidance_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-avoidance-delay-expiry")
    {
        microloop_avoidance_delay_expiry = value;
        microloop_avoidance_delay_expiry.value_namespace = name_space;
        microloop_avoidance_delay_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-avoidance-type")
    {
        microloop_avoidance_type = value;
        microloop_avoidance_type.value_namespace = name_space;
        microloop_avoidance_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "non-self-lsa-count")
    {
        non_self_lsa_count = value;
        non_self_lsa_count.value_namespace = name_space;
        non_self_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "normal-area-count")
    {
        normal_area_count = value;
        normal_area_count.value_namespace = name_space;
        normal_area_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-enabled")
    {
        nsf_enabled = value;
        nsf_enabled.value_namespace = name_space;
        nsf_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-time")
    {
        nsf_time = value;
        nsf_time.value_namespace = name_space;
        nsf_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "nssa-area-count")
    {
        nssa_area_count = value;
        nssa_area_count.value_namespace = name_space;
        nssa_area_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-nbrs-full")
    {
        number_nbrs_full = value;
        number_nbrs_full.value_namespace = name_space;
        number_nbrs_full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-capable")
    {
        opaque_capable = value;
        opaque_capable.value_namespace = name_space;
        opaque_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-lsa-checksum")
    {
        opaque_lsa_checksum = value;
        opaque_lsa_checksum.value_namespace = name_space;
        opaque_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-lsa-count")
    {
        opaque_lsa_count = value;
        opaque_lsa_count.value_namespace = name_space;
        opaque_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-limit")
    {
        redistribution_limit = value;
        redistribution_limit.value_namespace = name_space;
        redistribution_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-limit-warn")
    {
        redistribution_limit_warn = value;
        redistribution_limit_warn.value_namespace = name_space;
        redistribution_limit_warn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-threshold")
    {
        redistribution_threshold = value;
        redistribution_threshold.value_namespace = name_space;
        redistribution_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role-standby")
    {
        role_standby = value;
        role_standby.value_namespace = name_space;
        role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-trap-enabled")
    {
        snmp_trap_enabled = value;
        snmp_trap_enabled.value_namespace = name_space;
        snmp_trap_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-hold-time")
    {
        spf_hold_time = value;
        spf_hold_time.value_namespace = name_space;
        spf_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-hold-time-u32")
    {
        spf_hold_time_u32 = value;
        spf_hold_time_u32.value_namespace = name_space;
        spf_hold_time_u32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-maximum-time")
    {
        spf_maximum_time = value;
        spf_maximum_time.value_namespace = name_space;
        spf_maximum_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "spf-start-time")
    {
        spf_start_time = value;
        spf_start_time.value_namespace = name_space;
        spf_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-start-time-u32")
    {
        spf_start_time_u32 = value;
        spf_start_time_u32.value_namespace = name_space;
        spf_start_time_u32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-strict-spf-cap")
    {
        sr_strict_spf_cap = value;
        sr_strict_spf_cap.value_namespace = name_space;
        sr_strict_spf_cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-configured")
    {
        srgb_configured = value;
        srgb_configured.value_namespace = name_space;
        srgb_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-end")
    {
        srgb_end = value;
        srgb_end.value_namespace = name_space;
        srgb_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-start")
    {
        srgb_start = value;
        srgb_start.value_namespace = name_space;
        srgb_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-status")
    {
        srgb_status = value;
        srgb_status.value_namespace = name_space;
        srgb_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-area-count")
    {
        stub_area_count = value;
        stub_area_count.value_namespace = name_space;
        stub_area_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-prefix-limit-reached")
    {
        table_prefix_limit_reached = value;
        table_prefix_limit_reached.value_namespace = name_space;
        table_prefix_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-options")
    {
        tos_options = value;
        tos_options.value_namespace = name_space;
        tos_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucmp")
    {
        ucmp = value;
        ucmp.value_namespace = name_space;
        ucmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucmp-delay")
    {
        ucmp_delay = value;
        ucmp_delay.value_namespace = name_space;
        ucmp_delay.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vrf-lite-enabled")
    {
        vrf_lite_enabled = value;
        vrf_lite_enabled.value_namespace = name_space;
        vrf_lite_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adj-stag-init-num-nbr")
    {
        adj_stag_init_num_nbr.yfilter = yfilter;
    }
    if(value_path == "adj-stag-max-num-nbr")
    {
        adj_stag_max_num_nbr.yfilter = yfilter;
    }
    if(value_path == "adj-stag-num-nbr-forming")
    {
        adj_stag_num_nbr_forming.yfilter = yfilter;
    }
    if(value_path == "adj-stagger-enabled")
    {
        adj_stagger_enabled.yfilter = yfilter;
    }
    if(value_path == "area-border-router")
    {
        area_border_router.yfilter = yfilter;
    }
    if(value_path == "area-count")
    {
        area_count.yfilter = yfilter;
    }
    if(value_path == "as-border-router")
    {
        as_border_router.yfilter = yfilter;
    }
    if(value_path == "as-dc-bitless-lsa-count")
    {
        as_dc_bitless_lsa_count.yfilter = yfilter;
    }
    if(value_path == "as-dna-lsa-count")
    {
        as_dna_lsa_count.yfilter = yfilter;
    }
    if(value_path == "as-lsa-checksum")
    {
        as_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "as-lsa-count")
    {
        as_lsa_count.yfilter = yfilter;
    }
    if(value_path == "as-lsa-flood-list-length")
    {
        as_lsa_flood_list_length.yfilter = yfilter;
    }
    if(value_path == "context-name")
    {
        context_name.yfilter = yfilter;
    }
    if(value_path == "graceful-shutdown-retention-time")
    {
        graceful_shutdown_retention_time.yfilter = yfilter;
    }
    if(value_path == "graceful-shutdown-state")
    {
        graceful_shutdown_state.yfilter = yfilter;
    }
    if(value_path == "if-flood-pacing-interval")
    {
        if_flood_pacing_interval.yfilter = yfilter;
    }
    if(value_path == "if-retrans-pacing-interval")
    {
        if_retrans_pacing_interval.yfilter = yfilter;
    }
    if(value_path == "igp-intact-on")
    {
        igp_intact_on.yfilter = yfilter;
    }
    if(value_path == "last-nsf-time")
    {
        last_nsf_time.yfilter = yfilter;
    }
    if(value_path == "lsa-hold-time")
    {
        lsa_hold_time.yfilter = yfilter;
    }
    if(value_path == "lsa-maximum-time")
    {
        lsa_maximum_time.yfilter = yfilter;
    }
    if(value_path == "lsa-refresh-interval")
    {
        lsa_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "lsa-start-time")
    {
        lsa_start_time.yfilter = yfilter;
    }
    if(value_path == "lsd-bound")
    {
        lsd_bound.yfilter = yfilter;
    }
    if(value_path == "lsd-connected")
    {
        lsd_connected.yfilter = yfilter;
    }
    if(value_path == "lsd-connection-revision")
    {
        lsd_connection_revision.yfilter = yfilter;
    }
    if(value_path == "lsd-registered")
    {
        lsd_registered.yfilter = yfilter;
    }
    if(value_path == "max-lsa-enabled")
    {
        max_lsa_enabled.yfilter = yfilter;
    }
    if(value_path == "max-lsa-ignore-count")
    {
        max_lsa_ignore_count.yfilter = yfilter;
    }
    if(value_path == "max-lsa-ignore-limit")
    {
        max_lsa_ignore_limit.yfilter = yfilter;
    }
    if(value_path == "max-lsa-ignore-time")
    {
        max_lsa_ignore_time.yfilter = yfilter;
    }
    if(value_path == "max-lsa-ignore-timer")
    {
        max_lsa_ignore_timer.yfilter = yfilter;
    }
    if(value_path == "max-lsa-limit")
    {
        max_lsa_limit.yfilter = yfilter;
    }
    if(value_path == "max-lsa-reset-time")
    {
        max_lsa_reset_time.yfilter = yfilter;
    }
    if(value_path == "max-lsa-reset-timer")
    {
        max_lsa_reset_timer.yfilter = yfilter;
    }
    if(value_path == "max-lsa-treshold")
    {
        max_lsa_treshold.yfilter = yfilter;
    }
    if(value_path == "max-lsa-warning-only")
    {
        max_lsa_warning_only.yfilter = yfilter;
    }
    if(value_path == "maximum-interfaces")
    {
        maximum_interfaces.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-abr-off-buffer-time")
    {
        maximum_metric_abr_off_buffer_time.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-abr-off-mode")
    {
        maximum_metric_abr_off_mode.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-abr-off-reasons")
    {
        maximum_metric_abr_off_reasons.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-set-reason")
    {
        maximum_metric_set_reason.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-start")
    {
        maximum_metric_start.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-start-timer")
    {
        maximum_metric_start_timer.yfilter = yfilter;
    }
    if(value_path == "microloop-avoidance-active")
    {
        microloop_avoidance_active.yfilter = yfilter;
    }
    if(value_path == "microloop-avoidance-delay")
    {
        microloop_avoidance_delay.yfilter = yfilter;
    }
    if(value_path == "microloop-avoidance-delay-expiry")
    {
        microloop_avoidance_delay_expiry.yfilter = yfilter;
    }
    if(value_path == "microloop-avoidance-type")
    {
        microloop_avoidance_type.yfilter = yfilter;
    }
    if(value_path == "minimum-lsa-arrival-interval")
    {
        minimum_lsa_arrival_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-lsa-arrival-interval-u32")
    {
        minimum_lsa_arrival_interval_u32.yfilter = yfilter;
    }
    if(value_path == "minimum-lsa-interval")
    {
        minimum_lsa_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-lsa-interval-u32")
    {
        minimum_lsa_interval_u32.yfilter = yfilter;
    }
    if(value_path == "non-self-lsa-count")
    {
        non_self_lsa_count.yfilter = yfilter;
    }
    if(value_path == "normal-area-count")
    {
        normal_area_count.yfilter = yfilter;
    }
    if(value_path == "nsf-enabled")
    {
        nsf_enabled.yfilter = yfilter;
    }
    if(value_path == "nsf-time")
    {
        nsf_time.yfilter = yfilter;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled.yfilter = yfilter;
    }
    if(value_path == "nsr-switchover-on-restart")
    {
        nsr_switchover_on_restart.yfilter = yfilter;
    }
    if(value_path == "nssa-area-count")
    {
        nssa_area_count.yfilter = yfilter;
    }
    if(value_path == "number-nbrs-full")
    {
        number_nbrs_full.yfilter = yfilter;
    }
    if(value_path == "opaque-capable")
    {
        opaque_capable.yfilter = yfilter;
    }
    if(value_path == "opaque-lsa-checksum")
    {
        opaque_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "opaque-lsa-count")
    {
        opaque_lsa_count.yfilter = yfilter;
    }
    if(value_path == "redistribution-limit")
    {
        redistribution_limit.yfilter = yfilter;
    }
    if(value_path == "redistribution-limit-warn")
    {
        redistribution_limit_warn.yfilter = yfilter;
    }
    if(value_path == "redistribution-threshold")
    {
        redistribution_threshold.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "role-standby")
    {
        role_standby.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "snmp-trap-enabled")
    {
        snmp_trap_enabled.yfilter = yfilter;
    }
    if(value_path == "spf-hold-time")
    {
        spf_hold_time.yfilter = yfilter;
    }
    if(value_path == "spf-hold-time-u32")
    {
        spf_hold_time_u32.yfilter = yfilter;
    }
    if(value_path == "spf-maximum-time")
    {
        spf_maximum_time.yfilter = yfilter;
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
    if(value_path == "spf-start-time")
    {
        spf_start_time.yfilter = yfilter;
    }
    if(value_path == "spf-start-time-u32")
    {
        spf_start_time_u32.yfilter = yfilter;
    }
    if(value_path == "sr-strict-spf-cap")
    {
        sr_strict_spf_cap.yfilter = yfilter;
    }
    if(value_path == "srgb-configured")
    {
        srgb_configured.yfilter = yfilter;
    }
    if(value_path == "srgb-end")
    {
        srgb_end.yfilter = yfilter;
    }
    if(value_path == "srgb-start")
    {
        srgb_start.yfilter = yfilter;
    }
    if(value_path == "srgb-status")
    {
        srgb_status.yfilter = yfilter;
    }
    if(value_path == "stub-area-count")
    {
        stub_area_count.yfilter = yfilter;
    }
    if(value_path == "table-prefix-limit-reached")
    {
        table_prefix_limit_reached.yfilter = yfilter;
    }
    if(value_path == "tos-options")
    {
        tos_options.yfilter = yfilter;
    }
    if(value_path == "ucmp")
    {
        ucmp.yfilter = yfilter;
    }
    if(value_path == "ucmp-delay")
    {
        ucmp_delay.yfilter = yfilter;
    }
    if(value_path == "ucmp-prefix-list")
    {
        ucmp_prefix_list.yfilter = yfilter;
    }
    if(value_path == "ucmp-variance")
    {
        ucmp_variance.yfilter = yfilter;
    }
    if(value_path == "vrf-lite-enabled")
    {
        vrf_lite_enabled.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-id" || name == "maximum-metric" || name == "redistribution" || name == "adj-stag-init-num-nbr" || name == "adj-stag-max-num-nbr" || name == "adj-stag-num-nbr-forming" || name == "adj-stagger-enabled" || name == "area-border-router" || name == "area-count" || name == "as-border-router" || name == "as-dc-bitless-lsa-count" || name == "as-dna-lsa-count" || name == "as-lsa-checksum" || name == "as-lsa-count" || name == "as-lsa-flood-list-length" || name == "context-name" || name == "graceful-shutdown-retention-time" || name == "graceful-shutdown-state" || name == "if-flood-pacing-interval" || name == "if-retrans-pacing-interval" || name == "igp-intact-on" || name == "last-nsf-time" || name == "lsa-hold-time" || name == "lsa-maximum-time" || name == "lsa-refresh-interval" || name == "lsa-start-time" || name == "lsd-bound" || name == "lsd-connected" || name == "lsd-connection-revision" || name == "lsd-registered" || name == "max-lsa-enabled" || name == "max-lsa-ignore-count" || name == "max-lsa-ignore-limit" || name == "max-lsa-ignore-time" || name == "max-lsa-ignore-timer" || name == "max-lsa-limit" || name == "max-lsa-reset-time" || name == "max-lsa-reset-timer" || name == "max-lsa-treshold" || name == "max-lsa-warning-only" || name == "maximum-interfaces" || name == "maximum-metric-abr-off-buffer-time" || name == "maximum-metric-abr-off-mode" || name == "maximum-metric-abr-off-reasons" || name == "maximum-metric-set-reason" || name == "maximum-metric-start" || name == "maximum-metric-start-timer" || name == "microloop-avoidance-active" || name == "microloop-avoidance-delay" || name == "microloop-avoidance-delay-expiry" || name == "microloop-avoidance-type" || name == "minimum-lsa-arrival-interval" || name == "minimum-lsa-arrival-interval-u32" || name == "minimum-lsa-interval" || name == "minimum-lsa-interval-u32" || name == "non-self-lsa-count" || name == "normal-area-count" || name == "nsf-enabled" || name == "nsf-time" || name == "nsr-enabled" || name == "nsr-switchover-on-restart" || name == "nssa-area-count" || name == "number-nbrs-full" || name == "opaque-capable" || name == "opaque-lsa-checksum" || name == "opaque-lsa-count" || name == "redistribution-limit" || name == "redistribution-limit-warn" || name == "redistribution-threshold" || name == "role" || name == "role-standby" || name == "router-id" || name == "snmp-trap-enabled" || name == "spf-hold-time" || name == "spf-hold-time-u32" || name == "spf-maximum-time" || name == "spf-maximum-time-u32" || name == "spf-prefix-priority" || name == "spf-prefix-priority-route-policy" || name == "spf-start-time" || name == "spf-start-time-u32" || name == "sr-strict-spf-cap" || name == "srgb-configured" || name == "srgb-end" || name == "srgb-start" || name == "srgb-status" || name == "stub-area-count" || name == "table-prefix-limit-reached" || name == "tos-options" || name == "ucmp" || name == "ucmp-delay" || name == "ucmp-prefix-list" || name == "ucmp-variance" || name == "vrf-lite-enabled")
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
        for(auto const & c : secondary_domain_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    if(primary_domain_id != nullptr)
    {
        children["primary-domain-id"] = primary_domain_id;
    }

    for (auto const & c : secondary_domain_id)
    {
        children[c->get_segment_path()] = c;
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
    max_metric_enabled{YType::boolean, "max-metric-enabled"},
    max_metric_reason{YType::uint8, "max-metric-reason"},
    maximum_metric_external_lsa{YType::boolean, "maximum-metric-external-lsa"},
    maximum_metric_external_lsa_metric{YType::uint32, "maximum-metric-external-lsa-metric"},
    maximum_metric_include_stubs{YType::boolean, "maximum-metric-include-stubs"},
    maximum_metric_originated_for{YType::uint32, "maximum-metric-originated-for"},
    maximum_metric_start_time{YType::uint32, "maximum-metric-start-time"},
    maximum_metric_summary_lsa{YType::boolean, "maximum-metric-summary-lsa"},
    maximum_metric_summary_lsa_metric{YType::uint32, "maximum-metric-summary-lsa-metric"},
    maximum_metric_unset_reason{YType::enumeration, "maximum-metric-unset-reason"},
    saved_startup_time{YType::uint32, "saved-startup-time"},
    saved_unset_maximum_metric{YType::boolean, "saved-unset-maximum-metric"},
    unset_maximum_metric{YType::boolean, "unset-maximum-metric"}
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
    return max_metric_enabled.is_set
	|| max_metric_reason.is_set
	|| maximum_metric_external_lsa.is_set
	|| maximum_metric_external_lsa_metric.is_set
	|| maximum_metric_include_stubs.is_set
	|| maximum_metric_originated_for.is_set
	|| maximum_metric_start_time.is_set
	|| maximum_metric_summary_lsa.is_set
	|| maximum_metric_summary_lsa_metric.is_set
	|| maximum_metric_unset_reason.is_set
	|| saved_startup_time.is_set
	|| saved_unset_maximum_metric.is_set
	|| unset_maximum_metric.is_set
	|| (maximum_metric_time_unset !=  nullptr && maximum_metric_time_unset->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_metric_enabled.yfilter)
	|| ydk::is_set(max_metric_reason.yfilter)
	|| ydk::is_set(maximum_metric_external_lsa.yfilter)
	|| ydk::is_set(maximum_metric_external_lsa_metric.yfilter)
	|| ydk::is_set(maximum_metric_include_stubs.yfilter)
	|| ydk::is_set(maximum_metric_originated_for.yfilter)
	|| ydk::is_set(maximum_metric_start_time.yfilter)
	|| ydk::is_set(maximum_metric_summary_lsa.yfilter)
	|| ydk::is_set(maximum_metric_summary_lsa_metric.yfilter)
	|| ydk::is_set(maximum_metric_unset_reason.yfilter)
	|| ydk::is_set(saved_startup_time.yfilter)
	|| ydk::is_set(saved_unset_maximum_metric.yfilter)
	|| ydk::is_set(unset_maximum_metric.yfilter)
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

    if (max_metric_enabled.is_set || is_set(max_metric_enabled.yfilter)) leaf_name_data.push_back(max_metric_enabled.get_name_leafdata());
    if (max_metric_reason.is_set || is_set(max_metric_reason.yfilter)) leaf_name_data.push_back(max_metric_reason.get_name_leafdata());
    if (maximum_metric_external_lsa.is_set || is_set(maximum_metric_external_lsa.yfilter)) leaf_name_data.push_back(maximum_metric_external_lsa.get_name_leafdata());
    if (maximum_metric_external_lsa_metric.is_set || is_set(maximum_metric_external_lsa_metric.yfilter)) leaf_name_data.push_back(maximum_metric_external_lsa_metric.get_name_leafdata());
    if (maximum_metric_include_stubs.is_set || is_set(maximum_metric_include_stubs.yfilter)) leaf_name_data.push_back(maximum_metric_include_stubs.get_name_leafdata());
    if (maximum_metric_originated_for.is_set || is_set(maximum_metric_originated_for.yfilter)) leaf_name_data.push_back(maximum_metric_originated_for.get_name_leafdata());
    if (maximum_metric_start_time.is_set || is_set(maximum_metric_start_time.yfilter)) leaf_name_data.push_back(maximum_metric_start_time.get_name_leafdata());
    if (maximum_metric_summary_lsa.is_set || is_set(maximum_metric_summary_lsa.yfilter)) leaf_name_data.push_back(maximum_metric_summary_lsa.get_name_leafdata());
    if (maximum_metric_summary_lsa_metric.is_set || is_set(maximum_metric_summary_lsa_metric.yfilter)) leaf_name_data.push_back(maximum_metric_summary_lsa_metric.get_name_leafdata());
    if (maximum_metric_unset_reason.is_set || is_set(maximum_metric_unset_reason.yfilter)) leaf_name_data.push_back(maximum_metric_unset_reason.get_name_leafdata());
    if (saved_startup_time.is_set || is_set(saved_startup_time.yfilter)) leaf_name_data.push_back(saved_startup_time.get_name_leafdata());
    if (saved_unset_maximum_metric.is_set || is_set(saved_unset_maximum_metric.yfilter)) leaf_name_data.push_back(saved_unset_maximum_metric.get_name_leafdata());
    if (unset_maximum_metric.is_set || is_set(unset_maximum_metric.yfilter)) leaf_name_data.push_back(unset_maximum_metric.get_name_leafdata());

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
    if(maximum_metric_time_unset != nullptr)
    {
        children["maximum-metric-time-unset"] = maximum_metric_time_unset;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-metric-enabled")
    {
        max_metric_enabled = value;
        max_metric_enabled.value_namespace = name_space;
        max_metric_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-metric-reason")
    {
        max_metric_reason = value;
        max_metric_reason.value_namespace = name_space;
        max_metric_reason.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "maximum-metric-include-stubs")
    {
        maximum_metric_include_stubs = value;
        maximum_metric_include_stubs.value_namespace = name_space;
        maximum_metric_include_stubs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-metric-originated-for")
    {
        maximum_metric_originated_for = value;
        maximum_metric_originated_for.value_namespace = name_space;
        maximum_metric_originated_for.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-metric-start-time")
    {
        maximum_metric_start_time = value;
        maximum_metric_start_time.value_namespace = name_space;
        maximum_metric_start_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "maximum-metric-unset-reason")
    {
        maximum_metric_unset_reason = value;
        maximum_metric_unset_reason.value_namespace = name_space;
        maximum_metric_unset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saved-startup-time")
    {
        saved_startup_time = value;
        saved_startup_time.value_namespace = name_space;
        saved_startup_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saved-unset-maximum-metric")
    {
        saved_unset_maximum_metric = value;
        saved_unset_maximum_metric.value_namespace = name_space;
        saved_unset_maximum_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unset-maximum-metric")
    {
        unset_maximum_metric = value;
        unset_maximum_metric.value_namespace = name_space;
        unset_maximum_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-metric-enabled")
    {
        max_metric_enabled.yfilter = yfilter;
    }
    if(value_path == "max-metric-reason")
    {
        max_metric_reason.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-external-lsa")
    {
        maximum_metric_external_lsa.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-external-lsa-metric")
    {
        maximum_metric_external_lsa_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-include-stubs")
    {
        maximum_metric_include_stubs.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-originated-for")
    {
        maximum_metric_originated_for.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-start-time")
    {
        maximum_metric_start_time.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-summary-lsa")
    {
        maximum_metric_summary_lsa.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-summary-lsa-metric")
    {
        maximum_metric_summary_lsa_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-metric-unset-reason")
    {
        maximum_metric_unset_reason.yfilter = yfilter;
    }
    if(value_path == "saved-startup-time")
    {
        saved_startup_time.yfilter = yfilter;
    }
    if(value_path == "saved-unset-maximum-metric")
    {
        saved_unset_maximum_metric.yfilter = yfilter;
    }
    if(value_path == "unset-maximum-metric")
    {
        unset_maximum_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-metric-time-unset" || name == "max-metric-enabled" || name == "max-metric-reason" || name == "maximum-metric-external-lsa" || name == "maximum-metric-external-lsa-metric" || name == "maximum-metric-include-stubs" || name == "maximum-metric-originated-for" || name == "maximum-metric-start-time" || name == "maximum-metric-summary-lsa" || name == "maximum-metric-summary-lsa-metric" || name == "maximum-metric-unset-reason" || name == "saved-startup-time" || name == "saved-unset-maximum-metric" || name == "unset-maximum-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::MaximumMetricTimeUnset()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "maximum-metric-time-unset"; yang_parent_name = "maximum-metric"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::~MaximumMetricTimeUnset()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
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

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::Redistribution()
    :
    classless{YType::boolean, "classless"},
    metric{YType::uint32, "metric"},
    metric_flag{YType::boolean, "metric-flag"},
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
    return classless.is_set
	|| metric.is_set
	|| metric_flag.is_set
	|| nssa_only.is_set
	|| (redistribution_protocol !=  nullptr && redistribution_protocol->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(classless.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_flag.yfilter)
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

    if (classless.is_set || is_set(classless.yfilter)) leaf_name_data.push_back(classless.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_flag.is_set || is_set(metric_flag.yfilter)) leaf_name_data.push_back(metric_flag.get_name_leafdata());
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
    if(redistribution_protocol != nullptr)
    {
        children["redistribution-protocol"] = redistribution_protocol;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classless")
    {
        classless = value;
        classless.value_namespace = name_space;
        classless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-flag")
    {
        metric_flag = value;
        metric_flag.value_namespace = name_space;
        metric_flag.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "classless")
    {
        classless.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-flag")
    {
        metric_flag.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistribution-protocol" || name == "classless" || name == "metric" || name == "metric-flag" || name == "nssa-only")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::RedistributionProtocol()
    :
    bgp_as_number{YType::str, "bgp-as-number"},
    connected_instance{YType::str, "connected-instance"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    protocol_type{YType::enumeration, "protocol-type"}
{

    yang_name = "redistribution-protocol"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::~RedistributionProtocol()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::has_data() const
{
    return bgp_as_number.is_set
	|| connected_instance.is_set
	|| eigrp_as_number.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| protocol_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_as_number.yfilter)
	|| ydk::is_set(connected_instance.yfilter)
	|| ydk::is_set(eigrp_as_number.yfilter)
	|| ydk::is_set(isis_instance_id.yfilter)
	|| ydk::is_set(ospf_process_id.yfilter)
	|| ydk::is_set(protocol_type.yfilter);
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

    if (bgp_as_number.is_set || is_set(bgp_as_number.yfilter)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (connected_instance.is_set || is_set(connected_instance.yfilter)) leaf_name_data.push_back(connected_instance.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.yfilter)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.yfilter)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.yfilter)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (protocol_type.is_set || is_set(protocol_type.yfilter)) leaf_name_data.push_back(protocol_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
        bgp_as_number.value_namespace = name_space;
        bgp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-instance")
    {
        connected_instance = value;
        connected_instance.value_namespace = name_space;
        connected_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
        eigrp_as_number.value_namespace = name_space;
        eigrp_as_number.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "protocol-type")
    {
        protocol_type = value;
        protocol_type.value_namespace = name_space;
        protocol_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-as-number")
    {
        bgp_as_number.yfilter = yfilter;
    }
    if(value_path == "connected-instance")
    {
        connected_instance.yfilter = yfilter;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number.yfilter = yfilter;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id.yfilter = yfilter;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id.yfilter = yfilter;
    }
    if(value_path == "protocol-type")
    {
        protocol_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-as-number" || name == "connected-instance" || name == "eigrp-as-number" || name == "isis-instance-id" || name == "ospf-process-id" || name == "protocol-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolAreas()
{

    yang_name = "protocol-areas"; yang_parent_name = "process-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::~ProtocolAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::has_data() const
{
    for (std::size_t index=0; index<protocol_area.size(); index++)
    {
        if(protocol_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::has_operation() const
{
    for (std::size_t index=0; index<protocol_area.size(); index++)
    {
        if(protocol_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-area")
    {
        for(auto const & c : protocol_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea>();
        c->parent = this;
        protocol_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-area")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolArea()
    :
    address{YType::str, "address"},
    area_id{YType::int32, "area-id"},
    protcol_area{YType::str, "protcol-area"},
    protocol_area_dist_list_in{YType::str, "protocol-area-dist-list-in"},
    protocol_mpls{YType::boolean, "protocol-mpls"}
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
    return address.is_set
	|| area_id.is_set
	|| protcol_area.is_set
	|| protocol_area_dist_list_in.is_set
	|| protocol_mpls.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::has_operation() const
{
    for (std::size_t index=0; index<protocol_interface.size(); index++)
    {
        if(protocol_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(protcol_area.yfilter)
	|| ydk::is_set(protocol_area_dist_list_in.yfilter)
	|| ydk::is_set(protocol_mpls.yfilter);
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

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (protcol_area.is_set || is_set(protcol_area.yfilter)) leaf_name_data.push_back(protcol_area.get_name_leafdata());
    if (protocol_area_dist_list_in.is_set || is_set(protocol_area_dist_list_in.yfilter)) leaf_name_data.push_back(protocol_area_dist_list_in.get_name_leafdata());
    if (protocol_mpls.is_set || is_set(protocol_mpls.yfilter)) leaf_name_data.push_back(protocol_mpls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-interface")
    {
        for(auto const & c : protocol_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : protocol_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protcol-area")
    {
        protcol_area = value;
        protcol_area.value_namespace = name_space;
        protcol_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-area-dist-list-in")
    {
        protocol_area_dist_list_in = value;
        protocol_area_dist_list_in.value_namespace = name_space;
        protocol_area_dist_list_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-mpls")
    {
        protocol_mpls = value;
        protocol_mpls.value_namespace = name_space;
        protocol_mpls.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "protcol-area")
    {
        protcol_area.yfilter = yfilter;
    }
    if(value_path == "protocol-area-dist-list-in")
    {
        protocol_area_dist_list_in.yfilter = yfilter;
    }
    if(value_path == "protocol-mpls")
    {
        protocol_mpls.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-interface" || name == "address" || name == "area-id" || name == "protcol-area" || name == "protocol-area-dist-list-in" || name == "protocol-mpls")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::ProtocolInterface()
    :
    protocol_authentication_type{YType::enumeration, "protocol-authentication-type"},
    protocol_interface_dist_list_in{YType::str, "protocol-interface-dist-list-in"},
    protocol_interface_name{YType::str, "protocol-interface-name"}
{

    yang_name = "protocol-interface"; yang_parent_name = "protocol-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::~ProtocolInterface()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::has_data() const
{
    return protocol_authentication_type.is_set
	|| protocol_interface_dist_list_in.is_set
	|| protocol_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_authentication_type.yfilter)
	|| ydk::is_set(protocol_interface_dist_list_in.yfilter)
	|| ydk::is_set(protocol_interface_name.yfilter);
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

    if (protocol_authentication_type.is_set || is_set(protocol_authentication_type.yfilter)) leaf_name_data.push_back(protocol_authentication_type.get_name_leafdata());
    if (protocol_interface_dist_list_in.is_set || is_set(protocol_interface_dist_list_in.yfilter)) leaf_name_data.push_back(protocol_interface_dist_list_in.get_name_leafdata());
    if (protocol_interface_name.is_set || is_set(protocol_interface_name.yfilter)) leaf_name_data.push_back(protocol_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "protocol-interface-name")
    {
        protocol_interface_name = value;
        protocol_interface_name.value_namespace = name_space;
        protocol_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-authentication-type")
    {
        protocol_authentication_type.yfilter = yfilter;
    }
    if(value_path == "protocol-interface-dist-list-in")
    {
        protocol_interface_dist_list_in.yfilter = yfilter;
    }
    if(value_path == "protocol-interface-name")
    {
        protocol_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-authentication-type" || name == "protocol-interface-dist-list-in" || name == "protocol-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::ProtocolSummary()
    :
    administrative_distance_external{YType::uint32, "administrative-distance-external"},
    administrative_distance_inter_area{YType::uint32, "administrative-distance-inter-area"},
    dist_list_in{YType::str, "dist-list-in"},
    protocol_distance{YType::uint32, "protocol-distance"},
    protocol_nsf{YType::boolean, "protocol-nsf"},
    protocol_router_id{YType::str, "protocol-router-id"}
{

    yang_name = "protocol-summary"; yang_parent_name = "process-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::~ProtocolSummary()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::has_data() const
{
    return administrative_distance_external.is_set
	|| administrative_distance_inter_area.is_set
	|| dist_list_in.is_set
	|| protocol_distance.is_set
	|| protocol_nsf.is_set
	|| protocol_router_id.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(administrative_distance_external.yfilter)
	|| ydk::is_set(administrative_distance_inter_area.yfilter)
	|| ydk::is_set(dist_list_in.yfilter)
	|| ydk::is_set(protocol_distance.yfilter)
	|| ydk::is_set(protocol_nsf.yfilter)
	|| ydk::is_set(protocol_router_id.yfilter);
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

    if (administrative_distance_external.is_set || is_set(administrative_distance_external.yfilter)) leaf_name_data.push_back(administrative_distance_external.get_name_leafdata());
    if (administrative_distance_inter_area.is_set || is_set(administrative_distance_inter_area.yfilter)) leaf_name_data.push_back(administrative_distance_inter_area.get_name_leafdata());
    if (dist_list_in.is_set || is_set(dist_list_in.yfilter)) leaf_name_data.push_back(dist_list_in.get_name_leafdata());
    if (protocol_distance.is_set || is_set(protocol_distance.yfilter)) leaf_name_data.push_back(protocol_distance.get_name_leafdata());
    if (protocol_nsf.is_set || is_set(protocol_nsf.yfilter)) leaf_name_data.push_back(protocol_nsf.get_name_leafdata());
    if (protocol_router_id.is_set || is_set(protocol_router_id.yfilter)) leaf_name_data.push_back(protocol_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "administrative-distance-external")
    {
        administrative_distance_external = value;
        administrative_distance_external.value_namespace = name_space;
        administrative_distance_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-distance-inter-area")
    {
        administrative_distance_inter_area = value;
        administrative_distance_inter_area.value_namespace = name_space;
        administrative_distance_inter_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist-list-in")
    {
        dist_list_in = value;
        dist_list_in.value_namespace = name_space;
        dist_list_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-distance")
    {
        protocol_distance = value;
        protocol_distance.value_namespace = name_space;
        protocol_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-nsf")
    {
        protocol_nsf = value;
        protocol_nsf.value_namespace = name_space;
        protocol_nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-router-id")
    {
        protocol_router_id = value;
        protocol_router_id.value_namespace = name_space;
        protocol_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "administrative-distance-external")
    {
        administrative_distance_external.yfilter = yfilter;
    }
    if(value_path == "administrative-distance-inter-area")
    {
        administrative_distance_inter_area.yfilter = yfilter;
    }
    if(value_path == "dist-list-in")
    {
        dist_list_in.yfilter = yfilter;
    }
    if(value_path == "protocol-distance")
    {
        protocol_distance.yfilter = yfilter;
    }
    if(value_path == "protocol-nsf")
    {
        protocol_nsf.yfilter = yfilter;
    }
    if(value_path == "protocol-router-id")
    {
        protocol_router_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "administrative-distance-external" || name == "administrative-distance-inter-area" || name == "dist-list-in" || name == "protocol-distance" || name == "protocol-nsf" || name == "protocol-router-id")
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
        for(auto const & c : redistribution)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : redistribution)
    {
        children[c->get_segment_path()] = c;
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
    classless{YType::boolean, "classless"},
    metric{YType::uint32, "metric"},
    metric_flag{YType::boolean, "metric-flag"},
    nssa_only{YType::boolean, "nssa-only"},
    process_name{YType::str, "process-name"},
    protocol_name{YType::str, "protocol-name"}
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
    return classless.is_set
	|| metric.is_set
	|| metric_flag.is_set
	|| nssa_only.is_set
	|| process_name.is_set
	|| protocol_name.is_set
	|| (redistribution_protocol !=  nullptr && redistribution_protocol->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(classless.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_flag.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
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

    if (classless.is_set || is_set(classless.yfilter)) leaf_name_data.push_back(classless.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_flag.is_set || is_set(metric_flag.yfilter)) leaf_name_data.push_back(metric_flag.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());

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
    if(redistribution_protocol != nullptr)
    {
        children["redistribution-protocol"] = redistribution_protocol;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classless")
    {
        classless = value;
        classless.value_namespace = name_space;
        classless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-flag")
    {
        metric_flag = value;
        metric_flag.value_namespace = name_space;
        metric_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classless")
    {
        classless.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-flag")
    {
        metric_flag.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistribution-protocol" || name == "classless" || name == "metric" || name == "metric-flag" || name == "nssa-only" || name == "process-name" || name == "protocol-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::RedistributionProtocol()
    :
    bgp_as_number{YType::str, "bgp-as-number"},
    connected_instance{YType::str, "connected-instance"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    protocol_type{YType::enumeration, "protocol-type"}
{

    yang_name = "redistribution-protocol"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::~RedistributionProtocol()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::has_data() const
{
    return bgp_as_number.is_set
	|| connected_instance.is_set
	|| eigrp_as_number.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| protocol_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_as_number.yfilter)
	|| ydk::is_set(connected_instance.yfilter)
	|| ydk::is_set(eigrp_as_number.yfilter)
	|| ydk::is_set(isis_instance_id.yfilter)
	|| ydk::is_set(ospf_process_id.yfilter)
	|| ydk::is_set(protocol_type.yfilter);
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

    if (bgp_as_number.is_set || is_set(bgp_as_number.yfilter)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (connected_instance.is_set || is_set(connected_instance.yfilter)) leaf_name_data.push_back(connected_instance.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.yfilter)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.yfilter)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.yfilter)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (protocol_type.is_set || is_set(protocol_type.yfilter)) leaf_name_data.push_back(protocol_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
        bgp_as_number.value_namespace = name_space;
        bgp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-instance")
    {
        connected_instance = value;
        connected_instance.value_namespace = name_space;
        connected_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
        eigrp_as_number.value_namespace = name_space;
        eigrp_as_number.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "protocol-type")
    {
        protocol_type = value;
        protocol_type.value_namespace = name_space;
        protocol_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-as-number")
    {
        bgp_as_number.yfilter = yfilter;
    }
    if(value_path == "connected-instance")
    {
        connected_instance.yfilter = yfilter;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number.yfilter = yfilter;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id.yfilter = yfilter;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id.yfilter = yfilter;
    }
    if(value_path == "protocol-type")
    {
        protocol_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-as-number" || name == "connected-instance" || name == "eigrp-as-number" || name == "isis-instance-id" || name == "ospf-process-id" || name == "protocol-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteInformation()
    :
    backup_routes(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes>())
	,connected_routes(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes>())
	,external_routes(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes>())
	,local_routes(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes>())
	,multicast_intact_backup_routes(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes>())
	,multicast_intact_route_table(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable>())
	,route_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas>())
	,route_table(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable>())
	,summary_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation>())
{
    backup_routes->parent = this;
    connected_routes->parent = this;
    external_routes->parent = this;
    local_routes->parent = this;
    multicast_intact_backup_routes->parent = this;
    multicast_intact_route_table->parent = this;
    route_areas->parent = this;
    route_table->parent = this;
    summary_information->parent = this;

    yang_name = "route-information"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::~RouteInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::has_data() const
{
    return (backup_routes !=  nullptr && backup_routes->has_data())
	|| (connected_routes !=  nullptr && connected_routes->has_data())
	|| (external_routes !=  nullptr && external_routes->has_data())
	|| (local_routes !=  nullptr && local_routes->has_data())
	|| (multicast_intact_backup_routes !=  nullptr && multicast_intact_backup_routes->has_data())
	|| (multicast_intact_route_table !=  nullptr && multicast_intact_route_table->has_data())
	|| (route_areas !=  nullptr && route_areas->has_data())
	|| (route_table !=  nullptr && route_table->has_data())
	|| (summary_information !=  nullptr && summary_information->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::has_operation() const
{
    return is_set(yfilter)
	|| (backup_routes !=  nullptr && backup_routes->has_operation())
	|| (connected_routes !=  nullptr && connected_routes->has_operation())
	|| (external_routes !=  nullptr && external_routes->has_operation())
	|| (local_routes !=  nullptr && local_routes->has_operation())
	|| (multicast_intact_backup_routes !=  nullptr && multicast_intact_backup_routes->has_operation())
	|| (multicast_intact_route_table !=  nullptr && multicast_intact_route_table->has_operation())
	|| (route_areas !=  nullptr && route_areas->has_operation())
	|| (route_table !=  nullptr && route_table->has_operation())
	|| (summary_information !=  nullptr && summary_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-routes")
    {
        if(backup_routes == nullptr)
        {
            backup_routes = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes>();
        }
        return backup_routes;
    }

    if(child_yang_name == "connected-routes")
    {
        if(connected_routes == nullptr)
        {
            connected_routes = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes>();
        }
        return connected_routes;
    }

    if(child_yang_name == "external-routes")
    {
        if(external_routes == nullptr)
        {
            external_routes = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes>();
        }
        return external_routes;
    }

    if(child_yang_name == "local-routes")
    {
        if(local_routes == nullptr)
        {
            local_routes = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes>();
        }
        return local_routes;
    }

    if(child_yang_name == "multicast-intact-backup-routes")
    {
        if(multicast_intact_backup_routes == nullptr)
        {
            multicast_intact_backup_routes = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes>();
        }
        return multicast_intact_backup_routes;
    }

    if(child_yang_name == "multicast-intact-route-table")
    {
        if(multicast_intact_route_table == nullptr)
        {
            multicast_intact_route_table = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable>();
        }
        return multicast_intact_route_table;
    }

    if(child_yang_name == "route-areas")
    {
        if(route_areas == nullptr)
        {
            route_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas>();
        }
        return route_areas;
    }

    if(child_yang_name == "route-table")
    {
        if(route_table == nullptr)
        {
            route_table = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable>();
        }
        return route_table;
    }

    if(child_yang_name == "summary-information")
    {
        if(summary_information == nullptr)
        {
            summary_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation>();
        }
        return summary_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_routes != nullptr)
    {
        children["backup-routes"] = backup_routes;
    }

    if(connected_routes != nullptr)
    {
        children["connected-routes"] = connected_routes;
    }

    if(external_routes != nullptr)
    {
        children["external-routes"] = external_routes;
    }

    if(local_routes != nullptr)
    {
        children["local-routes"] = local_routes;
    }

    if(multicast_intact_backup_routes != nullptr)
    {
        children["multicast-intact-backup-routes"] = multicast_intact_backup_routes;
    }

    if(multicast_intact_route_table != nullptr)
    {
        children["multicast-intact-route-table"] = multicast_intact_route_table;
    }

    if(route_areas != nullptr)
    {
        children["route-areas"] = route_areas;
    }

    if(route_table != nullptr)
    {
        children["route-table"] = route_table;
    }

    if(summary_information != nullptr)
    {
        children["summary-information"] = summary_information;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-routes" || name == "connected-routes" || name == "external-routes" || name == "local-routes" || name == "multicast-intact-backup-routes" || name == "multicast-intact-route-table" || name == "route-areas" || name == "route-table" || name == "summary-information")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoutes()
{

    yang_name = "backup-routes"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::~BackupRoutes()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::has_data() const
{
    for (std::size_t index=0; index<backup_route.size(); index++)
    {
        if(backup_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::has_operation() const
{
    for (std::size_t index=0; index<backup_route.size(); index++)
    {
        if(backup_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-route")
    {
        for(auto const & c : backup_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute>();
        c->parent = this;
        backup_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-route")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::BackupRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "backup-route"; yang_parent_name = "backup-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::~BackupRoute()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "backup-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RoutePath()
    :
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "backup-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::has_data() const
{
    return lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_id.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_id.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.yfilter)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_backup_path != nullptr)
    {
        children["route-backup-path"] = route_backup_path;
    }

    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
        route_path_id.value_namespace = name_space;
        route_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-id")
    {
        route_path_id.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-backup-path" || name == "sr-microloop-avoidance-path" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-id" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_metric{YType::uint32, "backup-metric"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"},
    downstream{YType::boolean, "downstream"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    node_protect{YType::boolean, "node-protect"},
    primary_path{YType::boolean, "primary-path"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{

    yang_name = "route-backup-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_metric.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_tunnel_interface_name.is_set
	|| downstream.is_set
	|| line_card_disjoint.is_set
	|| node_protect.is_set
	|| primary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_metric.yfilter)
	|| ydk::is_set(backup_remote_lfa.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(backup_route_interface_name.yfilter)
	|| ydk::is_set(backup_route_next_hop_address.yfilter)
	|| ydk::is_set(backup_route_source.yfilter)
	|| ydk::is_set(backup_tunnel_interface_name.yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(line_card_disjoint.yfilter)
	|| ydk::is_set(node_protect.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_metric.is_set || is_set(backup_metric.yfilter)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.yfilter)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.yfilter)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.yfilter)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.yfilter)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.yfilter)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.yfilter)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-metric")
    {
        backup_metric = value;
        backup_metric.value_namespace = name_space;
        backup_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
        backup_remote_lfa.value_namespace = name_space;
        backup_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
        backup_route_interface_name.value_namespace = name_space;
        backup_route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
        backup_route_next_hop_address.value_namespace = name_space;
        backup_route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
        backup_route_source.value_namespace = name_space;
        backup_route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
        backup_tunnel_interface_name.value_namespace = name_space;
        backup_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
        line_card_disjoint.value_namespace = name_space;
        line_card_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-metric")
    {
        backup_metric.yfilter = yfilter;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "backup-metric" || name == "backup-remote-lfa" || name == "backup-repair-list-size" || name == "backup-route-interface-name" || name == "backup-route-next-hop-address" || name == "backup-route-source" || name == "backup-tunnel-interface-name" || name == "downstream" || name == "line-card-disjoint" || name == "node-protect" || name == "primary-path" || name == "srlg-disjoint")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "route-backup-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoutes()
{

    yang_name = "connected-routes"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::~ConnectedRoutes()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::has_data() const
{
    for (std::size_t index=0; index<connected_route.size(); index++)
    {
        if(connected_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::has_operation() const
{
    for (std::size_t index=0; index<connected_route.size(); index++)
    {
        if(connected_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-route")
    {
        for(auto const & c : connected_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute>();
        c->parent = this;
        connected_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : connected_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-route")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::ConnectedRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "connected-route"; yang_parent_name = "connected-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::~ConnectedRoute()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "connected-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "connected-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "area-format" || name == "area-id" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoutes()
{

    yang_name = "external-routes"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::~ExternalRoutes()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::has_data() const
{
    for (std::size_t index=0; index<external_route.size(); index++)
    {
        if(external_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::has_operation() const
{
    for (std::size_t index=0; index<external_route.size(); index++)
    {
        if(external_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-route")
    {
        for(auto const & c : external_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute>();
        c->parent = this;
        external_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : external_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-route")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ExternalRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
    	,
    protocol_name(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName>())
	,route_extended_community(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity>())
	,route_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_>())
{
    protocol_name->parent = this;
    route_extended_community->parent = this;
    route_information->parent = this;

    yang_name = "external-route"; yang_parent_name = "external-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::~ExternalRoute()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| (protocol_name !=  nullptr && protocol_name->has_data())
	|| (route_extended_community !=  nullptr && route_extended_community->has_data())
	|| (route_information !=  nullptr && route_information->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (protocol_name !=  nullptr && protocol_name->has_operation())
	|| (route_extended_community !=  nullptr && route_extended_community->has_operation())
	|| (route_information !=  nullptr && route_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-name")
    {
        if(protocol_name == nullptr)
        {
            protocol_name = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName>();
        }
        return protocol_name;
    }

    if(child_yang_name == "route-extended-community")
    {
        if(route_extended_community == nullptr)
        {
            route_extended_community = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity>();
        }
        return route_extended_community;
    }

    if(child_yang_name == "route-information")
    {
        if(route_information == nullptr)
        {
            route_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_>();
        }
        return route_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol_name != nullptr)
    {
        children["protocol-name"] = protocol_name;
    }

    if(route_extended_community != nullptr)
    {
        children["route-extended-community"] = route_extended_community;
    }

    if(route_information != nullptr)
    {
        children["route-information"] = route_information;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-name" || name == "route-extended-community" || name == "route-information" || name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::ProtocolName()
    :
    bgp_as_number{YType::str, "bgp-as-number"},
    connected_instance{YType::str, "connected-instance"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    protocol_type{YType::enumeration, "protocol-type"}
{

    yang_name = "protocol-name"; yang_parent_name = "external-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::~ProtocolName()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::has_data() const
{
    return bgp_as_number.is_set
	|| connected_instance.is_set
	|| eigrp_as_number.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| protocol_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_as_number.yfilter)
	|| ydk::is_set(connected_instance.yfilter)
	|| ydk::is_set(eigrp_as_number.yfilter)
	|| ydk::is_set(isis_instance_id.yfilter)
	|| ydk::is_set(ospf_process_id.yfilter)
	|| ydk::is_set(protocol_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_as_number.is_set || is_set(bgp_as_number.yfilter)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (connected_instance.is_set || is_set(connected_instance.yfilter)) leaf_name_data.push_back(connected_instance.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.yfilter)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.yfilter)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.yfilter)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (protocol_type.is_set || is_set(protocol_type.yfilter)) leaf_name_data.push_back(protocol_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
        bgp_as_number.value_namespace = name_space;
        bgp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-instance")
    {
        connected_instance = value;
        connected_instance.value_namespace = name_space;
        connected_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
        eigrp_as_number.value_namespace = name_space;
        eigrp_as_number.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "protocol-type")
    {
        protocol_type = value;
        protocol_type.value_namespace = name_space;
        protocol_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-as-number")
    {
        bgp_as_number.yfilter = yfilter;
    }
    if(value_path == "connected-instance")
    {
        connected_instance.yfilter = yfilter;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number.yfilter = yfilter;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id.yfilter = yfilter;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id.yfilter = yfilter;
    }
    if(value_path == "protocol-type")
    {
        protocol_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-as-number" || name == "connected-instance" || name == "eigrp-as-number" || name == "isis-instance-id" || name == "ospf-process-id" || name == "protocol-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::RouteExtendedCommunity()
    :
    extended_community_area_id{YType::uint32, "extended-community-area-id"},
    extended_community_domain_id_value{YType::str, "extended-community-domain-id-value"},
    extended_community_options{YType::uint8, "extended-community-options"},
    extended_community_route_type{YType::uint8, "extended-community-route-type"},
    extended_community_router_id{YType::str, "extended-community-router-id"},
    extended_communityl_domain_id_type{YType::uint16, "extended-communityl-domain-id-type"}
{

    yang_name = "route-extended-community"; yang_parent_name = "external-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::~RouteExtendedCommunity()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::has_data() const
{
    return extended_community_area_id.is_set
	|| extended_community_domain_id_value.is_set
	|| extended_community_options.is_set
	|| extended_community_route_type.is_set
	|| extended_community_router_id.is_set
	|| extended_communityl_domain_id_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_community_area_id.yfilter)
	|| ydk::is_set(extended_community_domain_id_value.yfilter)
	|| ydk::is_set(extended_community_options.yfilter)
	|| ydk::is_set(extended_community_route_type.yfilter)
	|| ydk::is_set(extended_community_router_id.yfilter)
	|| ydk::is_set(extended_communityl_domain_id_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_community_area_id.is_set || is_set(extended_community_area_id.yfilter)) leaf_name_data.push_back(extended_community_area_id.get_name_leafdata());
    if (extended_community_domain_id_value.is_set || is_set(extended_community_domain_id_value.yfilter)) leaf_name_data.push_back(extended_community_domain_id_value.get_name_leafdata());
    if (extended_community_options.is_set || is_set(extended_community_options.yfilter)) leaf_name_data.push_back(extended_community_options.get_name_leafdata());
    if (extended_community_route_type.is_set || is_set(extended_community_route_type.yfilter)) leaf_name_data.push_back(extended_community_route_type.get_name_leafdata());
    if (extended_community_router_id.is_set || is_set(extended_community_router_id.yfilter)) leaf_name_data.push_back(extended_community_router_id.get_name_leafdata());
    if (extended_communityl_domain_id_type.is_set || is_set(extended_communityl_domain_id_type.yfilter)) leaf_name_data.push_back(extended_communityl_domain_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-community-area-id")
    {
        extended_community_area_id = value;
        extended_community_area_id.value_namespace = name_space;
        extended_community_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-domain-id-value")
    {
        extended_community_domain_id_value = value;
        extended_community_domain_id_value.value_namespace = name_space;
        extended_community_domain_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-options")
    {
        extended_community_options = value;
        extended_community_options.value_namespace = name_space;
        extended_community_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-route-type")
    {
        extended_community_route_type = value;
        extended_community_route_type.value_namespace = name_space;
        extended_community_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-router-id")
    {
        extended_community_router_id = value;
        extended_community_router_id.value_namespace = name_space;
        extended_community_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-communityl-domain-id-type")
    {
        extended_communityl_domain_id_type = value;
        extended_communityl_domain_id_type.value_namespace = name_space;
        extended_communityl_domain_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-community-area-id")
    {
        extended_community_area_id.yfilter = yfilter;
    }
    if(value_path == "extended-community-domain-id-value")
    {
        extended_community_domain_id_value.yfilter = yfilter;
    }
    if(value_path == "extended-community-options")
    {
        extended_community_options.yfilter = yfilter;
    }
    if(value_path == "extended-community-route-type")
    {
        extended_community_route_type.yfilter = yfilter;
    }
    if(value_path == "extended-community-router-id")
    {
        extended_community_router_id.yfilter = yfilter;
    }
    if(value_path == "extended-communityl-domain-id-type")
    {
        extended_communityl_domain_id_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-community-area-id" || name == "extended-community-domain-id-value" || name == "extended-community-options" || name == "extended-community-route-type" || name == "extended-community-router-id" || name == "extended-communityl-domain-id-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInformation_()
    :
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "route-information"; yang_parent_name = "external-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::~RouteInformation_()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "area-format" || name == "area-id" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoutes()
{

    yang_name = "local-routes"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::~LocalRoutes()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::has_data() const
{
    for (std::size_t index=0; index<local_route.size(); index++)
    {
        if(local_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::has_operation() const
{
    for (std::size_t index=0; index<local_route.size(); index++)
    {
        if(local_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-route")
    {
        for(auto const & c : local_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute>();
        c->parent = this;
        local_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-route")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::LocalRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "local-route"; yang_parent_name = "local-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::~LocalRoute()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "local-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "local-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "area-format" || name == "area-id" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoutes()
{

    yang_name = "multicast-intact-backup-routes"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::~MulticastIntactBackupRoutes()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::has_data() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route.size(); index++)
    {
        if(multicast_intact_backup_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::has_operation() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route.size(); index++)
    {
        if(multicast_intact_backup_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-intact-backup-route")
    {
        for(auto const & c : multicast_intact_backup_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute>();
        c->parent = this;
        multicast_intact_backup_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : multicast_intact_backup_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-intact-backup-route")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::MulticastIntactBackupRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "multicast-intact-backup-route"; yang_parent_name = "multicast-intact-backup-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::~MulticastIntactBackupRoute()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "multicast-intact-backup-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RoutePath()
    :
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "multicast-intact-backup-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::has_data() const
{
    return lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_id.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_id.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.yfilter)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_backup_path != nullptr)
    {
        children["route-backup-path"] = route_backup_path;
    }

    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
        route_path_id.value_namespace = name_space;
        route_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-id")
    {
        route_path_id.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-backup-path" || name == "sr-microloop-avoidance-path" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-id" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_metric{YType::uint32, "backup-metric"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"},
    downstream{YType::boolean, "downstream"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    node_protect{YType::boolean, "node-protect"},
    primary_path{YType::boolean, "primary-path"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{

    yang_name = "route-backup-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_metric.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_tunnel_interface_name.is_set
	|| downstream.is_set
	|| line_card_disjoint.is_set
	|| node_protect.is_set
	|| primary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_metric.yfilter)
	|| ydk::is_set(backup_remote_lfa.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(backup_route_interface_name.yfilter)
	|| ydk::is_set(backup_route_next_hop_address.yfilter)
	|| ydk::is_set(backup_route_source.yfilter)
	|| ydk::is_set(backup_tunnel_interface_name.yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(line_card_disjoint.yfilter)
	|| ydk::is_set(node_protect.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_metric.is_set || is_set(backup_metric.yfilter)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.yfilter)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.yfilter)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.yfilter)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.yfilter)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.yfilter)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.yfilter)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-metric")
    {
        backup_metric = value;
        backup_metric.value_namespace = name_space;
        backup_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
        backup_remote_lfa.value_namespace = name_space;
        backup_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
        backup_route_interface_name.value_namespace = name_space;
        backup_route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
        backup_route_next_hop_address.value_namespace = name_space;
        backup_route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
        backup_route_source.value_namespace = name_space;
        backup_route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
        backup_tunnel_interface_name.value_namespace = name_space;
        backup_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
        line_card_disjoint.value_namespace = name_space;
        line_card_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-metric")
    {
        backup_metric.yfilter = yfilter;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "backup-metric" || name == "backup-remote-lfa" || name == "backup-repair-list-size" || name == "backup-route-interface-name" || name == "backup-route-next-hop-address" || name == "backup-route-source" || name == "backup-tunnel-interface-name" || name == "downstream" || name == "line-card-disjoint" || name == "node-protect" || name == "primary-path" || name == "srlg-disjoint")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "route-backup-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::MulticastIntactRouteTable()
{

    yang_name = "multicast-intact-route-table"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::~MulticastIntactRouteTable()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-route-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::Route()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "route"; yang_parent_name = "multicast-intact-route-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::~Route()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "area-format" || name == "area-id" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteAreas()
{

    yang_name = "route-areas"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::~RouteAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::has_data() const
{
    for (std::size_t index=0; index<route_area.size(); index++)
    {
        if(route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::has_operation() const
{
    for (std::size_t index=0; index<route_area.size(); index++)
    {
        if(route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-area")
    {
        for(auto const & c : route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea>();
        c->parent = this;
        route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-area")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteArea()
    :
    area_id{YType::int32, "area-id"}
    	,
    backup_route_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas>())
	,connected_route_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas>())
	,local_route_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas>())
	,multicast_intact_backup_route_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas>())
	,multicast_intact_route_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas>())
	,route_area_informations(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations>())
	,summary_area_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation>())
{
    backup_route_areas->parent = this;
    connected_route_areas->parent = this;
    local_route_areas->parent = this;
    multicast_intact_backup_route_areas->parent = this;
    multicast_intact_route_areas->parent = this;
    route_area_informations->parent = this;
    summary_area_information->parent = this;

    yang_name = "route-area"; yang_parent_name = "route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::~RouteArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::has_data() const
{
    return area_id.is_set
	|| (backup_route_areas !=  nullptr && backup_route_areas->has_data())
	|| (connected_route_areas !=  nullptr && connected_route_areas->has_data())
	|| (local_route_areas !=  nullptr && local_route_areas->has_data())
	|| (multicast_intact_backup_route_areas !=  nullptr && multicast_intact_backup_route_areas->has_data())
	|| (multicast_intact_route_areas !=  nullptr && multicast_intact_route_areas->has_data())
	|| (route_area_informations !=  nullptr && route_area_informations->has_data())
	|| (summary_area_information !=  nullptr && summary_area_information->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| (backup_route_areas !=  nullptr && backup_route_areas->has_operation())
	|| (connected_route_areas !=  nullptr && connected_route_areas->has_operation())
	|| (local_route_areas !=  nullptr && local_route_areas->has_operation())
	|| (multicast_intact_backup_route_areas !=  nullptr && multicast_intact_backup_route_areas->has_operation())
	|| (multicast_intact_route_areas !=  nullptr && multicast_intact_route_areas->has_operation())
	|| (route_area_informations !=  nullptr && route_area_informations->has_operation())
	|| (summary_area_information !=  nullptr && summary_area_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-area" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-route-areas")
    {
        if(backup_route_areas == nullptr)
        {
            backup_route_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas>();
        }
        return backup_route_areas;
    }

    if(child_yang_name == "connected-route-areas")
    {
        if(connected_route_areas == nullptr)
        {
            connected_route_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas>();
        }
        return connected_route_areas;
    }

    if(child_yang_name == "local-route-areas")
    {
        if(local_route_areas == nullptr)
        {
            local_route_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas>();
        }
        return local_route_areas;
    }

    if(child_yang_name == "multicast-intact-backup-route-areas")
    {
        if(multicast_intact_backup_route_areas == nullptr)
        {
            multicast_intact_backup_route_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas>();
        }
        return multicast_intact_backup_route_areas;
    }

    if(child_yang_name == "multicast-intact-route-areas")
    {
        if(multicast_intact_route_areas == nullptr)
        {
            multicast_intact_route_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas>();
        }
        return multicast_intact_route_areas;
    }

    if(child_yang_name == "route-area-informations")
    {
        if(route_area_informations == nullptr)
        {
            route_area_informations = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations>();
        }
        return route_area_informations;
    }

    if(child_yang_name == "summary-area-information")
    {
        if(summary_area_information == nullptr)
        {
            summary_area_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation>();
        }
        return summary_area_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_route_areas != nullptr)
    {
        children["backup-route-areas"] = backup_route_areas;
    }

    if(connected_route_areas != nullptr)
    {
        children["connected-route-areas"] = connected_route_areas;
    }

    if(local_route_areas != nullptr)
    {
        children["local-route-areas"] = local_route_areas;
    }

    if(multicast_intact_backup_route_areas != nullptr)
    {
        children["multicast-intact-backup-route-areas"] = multicast_intact_backup_route_areas;
    }

    if(multicast_intact_route_areas != nullptr)
    {
        children["multicast-intact-route-areas"] = multicast_intact_route_areas;
    }

    if(route_area_informations != nullptr)
    {
        children["route-area-informations"] = route_area_informations;
    }

    if(summary_area_information != nullptr)
    {
        children["summary-area-information"] = summary_area_information;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-route-areas" || name == "connected-route-areas" || name == "local-route-areas" || name == "multicast-intact-backup-route-areas" || name == "multicast-intact-route-areas" || name == "route-area-informations" || name == "summary-area-information" || name == "area-id")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteAreas()
{

    yang_name = "backup-route-areas"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::~BackupRouteAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::has_data() const
{
    for (std::size_t index=0; index<backup_route_area.size(); index++)
    {
        if(backup_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<backup_route_area.size(); index++)
    {
        if(backup_route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-route-area")
    {
        for(auto const & c : backup_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea>();
        c->parent = this;
        backup_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_route_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-route-area")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::BackupRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "backup-route-area"; yang_parent_name = "backup-route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::~BackupRouteArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "backup-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RoutePath()
    :
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "backup-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::has_data() const
{
    return lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_id.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_id.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.yfilter)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_backup_path != nullptr)
    {
        children["route-backup-path"] = route_backup_path;
    }

    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
        route_path_id.value_namespace = name_space;
        route_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-id")
    {
        route_path_id.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-backup-path" || name == "sr-microloop-avoidance-path" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-id" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_metric{YType::uint32, "backup-metric"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"},
    downstream{YType::boolean, "downstream"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    node_protect{YType::boolean, "node-protect"},
    primary_path{YType::boolean, "primary-path"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{

    yang_name = "route-backup-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_metric.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_tunnel_interface_name.is_set
	|| downstream.is_set
	|| line_card_disjoint.is_set
	|| node_protect.is_set
	|| primary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_metric.yfilter)
	|| ydk::is_set(backup_remote_lfa.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(backup_route_interface_name.yfilter)
	|| ydk::is_set(backup_route_next_hop_address.yfilter)
	|| ydk::is_set(backup_route_source.yfilter)
	|| ydk::is_set(backup_tunnel_interface_name.yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(line_card_disjoint.yfilter)
	|| ydk::is_set(node_protect.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_metric.is_set || is_set(backup_metric.yfilter)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.yfilter)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.yfilter)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.yfilter)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.yfilter)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.yfilter)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.yfilter)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-metric")
    {
        backup_metric = value;
        backup_metric.value_namespace = name_space;
        backup_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
        backup_remote_lfa.value_namespace = name_space;
        backup_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
        backup_route_interface_name.value_namespace = name_space;
        backup_route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
        backup_route_next_hop_address.value_namespace = name_space;
        backup_route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
        backup_route_source.value_namespace = name_space;
        backup_route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
        backup_tunnel_interface_name.value_namespace = name_space;
        backup_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
        line_card_disjoint.value_namespace = name_space;
        line_card_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-metric")
    {
        backup_metric.yfilter = yfilter;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "backup-metric" || name == "backup-remote-lfa" || name == "backup-repair-list-size" || name == "backup-route-interface-name" || name == "backup-route-next-hop-address" || name == "backup-route-source" || name == "backup-tunnel-interface-name" || name == "downstream" || name == "line-card-disjoint" || name == "node-protect" || name == "primary-path" || name == "srlg-disjoint")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "route-backup-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteAreas()
{

    yang_name = "connected-route-areas"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::~ConnectedRouteAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::has_data() const
{
    for (std::size_t index=0; index<connected_route_area.size(); index++)
    {
        if(connected_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<connected_route_area.size(); index++)
    {
        if(connected_route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-route-area")
    {
        for(auto const & c : connected_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea>();
        c->parent = this;
        connected_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : connected_route_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-route-area")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::ConnectedRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "connected-route-area"; yang_parent_name = "connected-route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::~ConnectedRouteArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "connected-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "connected-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "area-format" || name == "area-id" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteAreas()
{

    yang_name = "local-route-areas"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::~LocalRouteAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::has_data() const
{
    for (std::size_t index=0; index<local_route_area.size(); index++)
    {
        if(local_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<local_route_area.size(); index++)
    {
        if(local_route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-route-area")
    {
        for(auto const & c : local_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea>();
        c->parent = this;
        local_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_route_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-route-area")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::LocalRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "local-route-area"; yang_parent_name = "local-route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::~LocalRouteArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-route-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "local-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "local-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "area-format" || name == "area-id" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteAreas()
{

    yang_name = "multicast-intact-backup-route-areas"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::~MulticastIntactBackupRouteAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::has_data() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route_area.size(); index++)
    {
        if(multicast_intact_backup_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route_area.size(); index++)
    {
        if(multicast_intact_backup_route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-intact-backup-route-area")
    {
        for(auto const & c : multicast_intact_backup_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea>();
        c->parent = this;
        multicast_intact_backup_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : multicast_intact_backup_route_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-intact-backup-route-area")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::MulticastIntactBackupRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "multicast-intact-backup-route-area"; yang_parent_name = "multicast-intact-backup-route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::~MulticastIntactBackupRouteArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-route-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "multicast-intact-backup-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RoutePath()
    :
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "multicast-intact-backup-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::has_data() const
{
    return lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_id.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_id.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.yfilter)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_backup_path != nullptr)
    {
        children["route-backup-path"] = route_backup_path;
    }

    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
        route_path_id.value_namespace = name_space;
        route_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-id")
    {
        route_path_id.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-backup-path" || name == "sr-microloop-avoidance-path" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-id" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_metric{YType::uint32, "backup-metric"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"},
    downstream{YType::boolean, "downstream"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    node_protect{YType::boolean, "node-protect"},
    primary_path{YType::boolean, "primary-path"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{

    yang_name = "route-backup-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_metric.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_tunnel_interface_name.is_set
	|| downstream.is_set
	|| line_card_disjoint.is_set
	|| node_protect.is_set
	|| primary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_metric.yfilter)
	|| ydk::is_set(backup_remote_lfa.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(backup_route_interface_name.yfilter)
	|| ydk::is_set(backup_route_next_hop_address.yfilter)
	|| ydk::is_set(backup_route_source.yfilter)
	|| ydk::is_set(backup_tunnel_interface_name.yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(line_card_disjoint.yfilter)
	|| ydk::is_set(node_protect.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_metric.is_set || is_set(backup_metric.yfilter)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.yfilter)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.yfilter)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.yfilter)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.yfilter)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.yfilter)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.yfilter)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-metric")
    {
        backup_metric = value;
        backup_metric.value_namespace = name_space;
        backup_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
        backup_remote_lfa.value_namespace = name_space;
        backup_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
        backup_route_interface_name.value_namespace = name_space;
        backup_route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
        backup_route_next_hop_address.value_namespace = name_space;
        backup_route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
        backup_route_source.value_namespace = name_space;
        backup_route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
        backup_tunnel_interface_name.value_namespace = name_space;
        backup_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
        line_card_disjoint.value_namespace = name_space;
        line_card_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-metric")
    {
        backup_metric.yfilter = yfilter;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "backup-metric" || name == "backup-remote-lfa" || name == "backup-repair-list-size" || name == "backup-route-interface-name" || name == "backup-route-next-hop-address" || name == "backup-route-source" || name == "backup-tunnel-interface-name" || name == "downstream" || name == "line-card-disjoint" || name == "node-protect" || name == "primary-path" || name == "srlg-disjoint")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "route-backup-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteAreas()
{

    yang_name = "multicast-intact-route-areas"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::~MulticastIntactRouteAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::has_data() const
{
    for (std::size_t index=0; index<multicast_intact_route_area.size(); index++)
    {
        if(multicast_intact_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<multicast_intact_route_area.size(); index++)
    {
        if(multicast_intact_route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-intact-route-area")
    {
        for(auto const & c : multicast_intact_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea>();
        c->parent = this;
        multicast_intact_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : multicast_intact_route_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-intact-route-area")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::MulticastIntactRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "multicast-intact-route-area"; yang_parent_name = "multicast-intact-route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::~MulticastIntactRouteArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-route-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "multicast-intact-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}


}
}

