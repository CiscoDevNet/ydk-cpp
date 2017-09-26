
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_1.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_2.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_35.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_3.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_34.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::FloodingUpThreshold()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "flooding-up-threshold"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::~FloodingUpThreshold()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::has_data() const
{
    return entry.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding-up-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkCommon()
    :
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    bcm_id{YType::uint16, "bcm-id"},
    capability{YType::uint32, "capability"},
    has_protection{YType::boolean, "has-protection"},
    igp_neighbors{YType::uint16, "igp-neighbors"},
    inbound_admission_method{YType::enumeration, "inbound-admission-method"},
    incoming_reservable_bandwidth_percentage{YType::uint8, "incoming-reservable-bandwidth-percentage"},
    incoming_reservable_pool0_bandwidth_percentage{YType::uint8, "incoming-reservable-pool0-bandwidth-percentage"},
    incoming_reservable_pool1_bandwidth_percentage{YType::uint8, "incoming-reservable-pool1-bandwidth-percentage"},
    is_resource_provider_installed{YType::boolean, "is-resource-provider-installed"},
    is_unnumbered{YType::boolean, "is-unnumbered"},
    last_flooded_effective_maximum_reservable_bandwidth{YType::uint64, "last-flooded-effective-maximum-reservable-bandwidth"},
    link_address{YType::str, "link-address"},
    link_id{YType::str, "link-id"},
    maximum_reservable_bandwidth{YType::uint64, "maximum-reservable-bandwidth"},
    maximum_reservable_pool0_bandwidth{YType::uint64, "maximum-reservable-pool0-bandwidth"},
    maximum_reservable_pool1_bandwidth{YType::uint64, "maximum-reservable-pool1-bandwidth"},
    outbound_admission_method{YType::enumeration, "outbound-admission-method"},
    outgoing_reservable_bandwidth_percentage{YType::uint8, "outgoing-reservable-bandwidth-percentage"},
    outgoing_reservable_pool0_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool0-bandwidth-percentage"},
    outgoing_reservable_pool1_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool1-bandwidth-percentage"},
    physical_bandwidth{YType::uint64, "physical-bandwidth"},
    resource_provider{YType::enumeration, "resource-provider"},
    working_priority{YType::uint32, "working-priority"}
    	,
    link_flags(std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags>())
{
    link_flags->parent = this;

    yang_name = "link-common"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::~LinkCommon()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::has_data() const
{
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    return bandwidth_units.is_set
	|| bcm_id.is_set
	|| capability.is_set
	|| has_protection.is_set
	|| igp_neighbors.is_set
	|| inbound_admission_method.is_set
	|| incoming_reservable_bandwidth_percentage.is_set
	|| incoming_reservable_pool0_bandwidth_percentage.is_set
	|| incoming_reservable_pool1_bandwidth_percentage.is_set
	|| is_resource_provider_installed.is_set
	|| is_unnumbered.is_set
	|| last_flooded_effective_maximum_reservable_bandwidth.is_set
	|| link_address.is_set
	|| link_id.is_set
	|| maximum_reservable_bandwidth.is_set
	|| maximum_reservable_pool0_bandwidth.is_set
	|| maximum_reservable_pool1_bandwidth.is_set
	|| outbound_admission_method.is_set
	|| outgoing_reservable_bandwidth_percentage.is_set
	|| outgoing_reservable_pool0_bandwidth_percentage.is_set
	|| outgoing_reservable_pool1_bandwidth_percentage.is_set
	|| physical_bandwidth.is_set
	|| resource_provider.is_set
	|| working_priority.is_set
	|| (link_flags !=  nullptr && link_flags->has_data());
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::has_operation() const
{
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(bcm_id.yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(has_protection.yfilter)
	|| ydk::is_set(igp_neighbors.yfilter)
	|| ydk::is_set(inbound_admission_method.yfilter)
	|| ydk::is_set(incoming_reservable_bandwidth_percentage.yfilter)
	|| ydk::is_set(incoming_reservable_pool0_bandwidth_percentage.yfilter)
	|| ydk::is_set(incoming_reservable_pool1_bandwidth_percentage.yfilter)
	|| ydk::is_set(is_resource_provider_installed.yfilter)
	|| ydk::is_set(is_unnumbered.yfilter)
	|| ydk::is_set(last_flooded_effective_maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(maximum_reservable_pool0_bandwidth.yfilter)
	|| ydk::is_set(maximum_reservable_pool1_bandwidth.yfilter)
	|| ydk::is_set(outbound_admission_method.yfilter)
	|| ydk::is_set(outgoing_reservable_bandwidth_percentage.yfilter)
	|| ydk::is_set(outgoing_reservable_pool0_bandwidth_percentage.yfilter)
	|| ydk::is_set(outgoing_reservable_pool1_bandwidth_percentage.yfilter)
	|| ydk::is_set(physical_bandwidth.yfilter)
	|| ydk::is_set(resource_provider.yfilter)
	|| ydk::is_set(working_priority.yfilter)
	|| (link_flags !=  nullptr && link_flags->has_operation());
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (bcm_id.is_set || is_set(bcm_id.yfilter)) leaf_name_data.push_back(bcm_id.get_name_leafdata());
    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (has_protection.is_set || is_set(has_protection.yfilter)) leaf_name_data.push_back(has_protection.get_name_leafdata());
    if (igp_neighbors.is_set || is_set(igp_neighbors.yfilter)) leaf_name_data.push_back(igp_neighbors.get_name_leafdata());
    if (inbound_admission_method.is_set || is_set(inbound_admission_method.yfilter)) leaf_name_data.push_back(inbound_admission_method.get_name_leafdata());
    if (incoming_reservable_bandwidth_percentage.is_set || is_set(incoming_reservable_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_bandwidth_percentage.get_name_leafdata());
    if (incoming_reservable_pool0_bandwidth_percentage.is_set || is_set(incoming_reservable_pool0_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (incoming_reservable_pool1_bandwidth_percentage.is_set || is_set(incoming_reservable_pool1_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (is_resource_provider_installed.is_set || is_set(is_resource_provider_installed.yfilter)) leaf_name_data.push_back(is_resource_provider_installed.get_name_leafdata());
    if (is_unnumbered.is_set || is_set(is_unnumbered.yfilter)) leaf_name_data.push_back(is_unnumbered.get_name_leafdata());
    if (last_flooded_effective_maximum_reservable_bandwidth.is_set || is_set(last_flooded_effective_maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(last_flooded_effective_maximum_reservable_bandwidth.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (maximum_reservable_bandwidth.is_set || is_set(maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_bandwidth.get_name_leafdata());
    if (maximum_reservable_pool0_bandwidth.is_set || is_set(maximum_reservable_pool0_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_pool0_bandwidth.get_name_leafdata());
    if (maximum_reservable_pool1_bandwidth.is_set || is_set(maximum_reservable_pool1_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_pool1_bandwidth.get_name_leafdata());
    if (outbound_admission_method.is_set || is_set(outbound_admission_method.yfilter)) leaf_name_data.push_back(outbound_admission_method.get_name_leafdata());
    if (outgoing_reservable_bandwidth_percentage.is_set || is_set(outgoing_reservable_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool0_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool0_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool1_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool1_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (physical_bandwidth.is_set || is_set(physical_bandwidth.yfilter)) leaf_name_data.push_back(physical_bandwidth.get_name_leafdata());
    if (resource_provider.is_set || is_set(resource_provider.yfilter)) leaf_name_data.push_back(resource_provider.get_name_leafdata());
    if (working_priority.is_set || is_set(working_priority.yfilter)) leaf_name_data.push_back(working_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooded-areas")
    {
        for(auto const & c : flooded_areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas>();
        c->parent = this;
        flooded_areas.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-switching-capability-descriptor")
    {
        for(auto const & c : interface_switching_capability_descriptor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor>();
        c->parent = this;
        interface_switching_capability_descriptor.push_back(c);
        return c;
    }

    if(child_yang_name == "link-flags")
    {
        if(link_flags == nullptr)
        {
            link_flags = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags>();
        }
        return link_flags;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flooded_areas)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : interface_switching_capability_descriptor)
    {
        children[c->get_segment_path()] = c;
    }

    if(link_flags != nullptr)
    {
        children["link-flags"] = link_flags;
    }

    for (auto const & c : shared_risk_link_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcm-id")
    {
        bcm_id = value;
        bcm_id.value_namespace = name_space;
        bcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-protection")
    {
        has_protection = value;
        has_protection.value_namespace = name_space;
        has_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors = value;
        igp_neighbors.value_namespace = name_space;
        igp_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-admission-method")
    {
        inbound_admission_method = value;
        inbound_admission_method.value_namespace = name_space;
        inbound_admission_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-bandwidth-percentage")
    {
        incoming_reservable_bandwidth_percentage = value;
        incoming_reservable_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-pool0-bandwidth-percentage")
    {
        incoming_reservable_pool0_bandwidth_percentage = value;
        incoming_reservable_pool0_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_pool0_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-pool1-bandwidth-percentage")
    {
        incoming_reservable_pool1_bandwidth_percentage = value;
        incoming_reservable_pool1_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_pool1_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-resource-provider-installed")
    {
        is_resource_provider_installed = value;
        is_resource_provider_installed.value_namespace = name_space;
        is_resource_provider_installed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-unnumbered")
    {
        is_unnumbered = value;
        is_unnumbered.value_namespace = name_space;
        is_unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flooded-effective-maximum-reservable-bandwidth")
    {
        last_flooded_effective_maximum_reservable_bandwidth = value;
        last_flooded_effective_maximum_reservable_bandwidth.value_namespace = name_space;
        last_flooded_effective_maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-bandwidth")
    {
        maximum_reservable_bandwidth = value;
        maximum_reservable_bandwidth.value_namespace = name_space;
        maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-pool0-bandwidth")
    {
        maximum_reservable_pool0_bandwidth = value;
        maximum_reservable_pool0_bandwidth.value_namespace = name_space;
        maximum_reservable_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-pool1-bandwidth")
    {
        maximum_reservable_pool1_bandwidth = value;
        maximum_reservable_pool1_bandwidth.value_namespace = name_space;
        maximum_reservable_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-admission-method")
    {
        outbound_admission_method = value;
        outbound_admission_method.value_namespace = name_space;
        outbound_admission_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-bandwidth-percentage")
    {
        outgoing_reservable_bandwidth_percentage = value;
        outgoing_reservable_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-pool0-bandwidth-percentage")
    {
        outgoing_reservable_pool0_bandwidth_percentage = value;
        outgoing_reservable_pool0_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_pool0_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-pool1-bandwidth-percentage")
    {
        outgoing_reservable_pool1_bandwidth_percentage = value;
        outgoing_reservable_pool1_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_pool1_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth = value;
        physical_bandwidth.value_namespace = name_space;
        physical_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-provider")
    {
        resource_provider = value;
        resource_provider.value_namespace = name_space;
        resource_provider.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "working-priority")
    {
        working_priority = value;
        working_priority.value_namespace = name_space;
        working_priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "bcm-id")
    {
        bcm_id.yfilter = yfilter;
    }
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "has-protection")
    {
        has_protection.yfilter = yfilter;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors.yfilter = yfilter;
    }
    if(value_path == "inbound-admission-method")
    {
        inbound_admission_method.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-bandwidth-percentage")
    {
        incoming_reservable_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-pool0-bandwidth-percentage")
    {
        incoming_reservable_pool0_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-pool1-bandwidth-percentage")
    {
        incoming_reservable_pool1_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "is-resource-provider-installed")
    {
        is_resource_provider_installed.yfilter = yfilter;
    }
    if(value_path == "is-unnumbered")
    {
        is_unnumbered.yfilter = yfilter;
    }
    if(value_path == "last-flooded-effective-maximum-reservable-bandwidth")
    {
        last_flooded_effective_maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-bandwidth")
    {
        maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-pool0-bandwidth")
    {
        maximum_reservable_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-pool1-bandwidth")
    {
        maximum_reservable_pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "outbound-admission-method")
    {
        outbound_admission_method.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-bandwidth-percentage")
    {
        outgoing_reservable_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-pool0-bandwidth-percentage")
    {
        outgoing_reservable_pool0_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-pool1-bandwidth-percentage")
    {
        outgoing_reservable_pool1_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth.yfilter = yfilter;
    }
    if(value_path == "resource-provider")
    {
        resource_provider.yfilter = yfilter;
    }
    if(value_path == "working-priority")
    {
        working_priority.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooded-areas" || name == "interface-switching-capability-descriptor" || name == "link-flags" || name == "shared-risk-link-group" || name == "bandwidth-units" || name == "bcm-id" || name == "capability" || name == "has-protection" || name == "igp-neighbors" || name == "inbound-admission-method" || name == "incoming-reservable-bandwidth-percentage" || name == "incoming-reservable-pool0-bandwidth-percentage" || name == "incoming-reservable-pool1-bandwidth-percentage" || name == "is-resource-provider-installed" || name == "is-unnumbered" || name == "last-flooded-effective-maximum-reservable-bandwidth" || name == "link-address" || name == "link-id" || name == "maximum-reservable-bandwidth" || name == "maximum-reservable-pool0-bandwidth" || name == "maximum-reservable-pool1-bandwidth" || name == "outbound-admission-method" || name == "outgoing-reservable-bandwidth-percentage" || name == "outgoing-reservable-pool0-bandwidth-percentage" || name == "outgoing-reservable-pool1-bandwidth-percentage" || name == "physical-bandwidth" || name == "resource-provider" || name == "working-priority")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::FloodedAreas()
    :
    flooded_area{YType::str, "flooded-area"}
{

    yang_name = "flooded-areas"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::~FloodedAreas()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::has_data() const
{
    return flooded_area.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flooded_area.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooded-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flooded_area.is_set || is_set(flooded_area.yfilter)) leaf_name_data.push_back(flooded_area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flooded-area")
    {
        flooded_area = value;
        flooded_area.value_namespace = name_space;
        flooded_area.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flooded-area")
    {
        flooded_area.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooded-area")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::InterfaceSwitchingCapabilityDescriptor()
    :
    encoding{YType::uint8, "encoding"},
    key{YType::uint8, "key"},
    switching_capability{YType::uint8, "switching-capability"}
{

    yang_name = "interface-switching-capability-descriptor"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::~InterfaceSwitchingCapabilityDescriptor()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_data() const
{
    return encoding.is_set
	|| key.is_set
	|| switching_capability.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(switching_capability.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-switching-capability-descriptor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (switching_capability.is_set || is_set(switching_capability.yfilter)) leaf_name_data.push_back(switching_capability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-capability")
    {
        switching_capability = value;
        switching_capability.value_namespace = name_space;
        switching_capability.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "switching-capability")
    {
        switching_capability.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encoding" || name == "key" || name == "switching-capability")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::LinkFlags()
    :
    is_admin_up{YType::boolean, "is-admin-up"},
    is_mpls_te_on{YType::boolean, "is-mpls-te-on"},
    signaling_agent{YType::enumeration, "signaling-agent"}
{

    yang_name = "link-flags"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::~LinkFlags()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::has_data() const
{
    return is_admin_up.is_set
	|| is_mpls_te_on.is_set
	|| signaling_agent.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_admin_up.yfilter)
	|| ydk::is_set(is_mpls_te_on.yfilter)
	|| ydk::is_set(signaling_agent.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_admin_up.is_set || is_set(is_admin_up.yfilter)) leaf_name_data.push_back(is_admin_up.get_name_leafdata());
    if (is_mpls_te_on.is_set || is_set(is_mpls_te_on.yfilter)) leaf_name_data.push_back(is_mpls_te_on.get_name_leafdata());
    if (signaling_agent.is_set || is_set(signaling_agent.yfilter)) leaf_name_data.push_back(signaling_agent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-admin-up")
    {
        is_admin_up = value;
        is_admin_up.value_namespace = name_space;
        is_admin_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mpls-te-on")
    {
        is_mpls_te_on = value;
        is_mpls_te_on.value_namespace = name_space;
        is_mpls_te_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-agent")
    {
        signaling_agent = value;
        signaling_agent.value_namespace = name_space;
        signaling_agent.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-admin-up")
    {
        is_admin_up.yfilter = yfilter;
    }
    if(value_path == "is-mpls-te-on")
    {
        is_mpls_te_on.yfilter = yfilter;
    }
    if(value_path == "signaling-agent")
    {
        signaling_agent.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-admin-up" || name == "is-mpls-te-on" || name == "signaling-agent")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
        shared_risk_group.value_namespace = name_space;
        shared_risk_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::UpstreamBandwidth()
    :
    bandwidth_direction{YType::enumeration, "bandwidth-direction"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    is_admission_method_allocated_bandwidth{YType::boolean, "is-admission-method-allocated-bandwidth"}
{

    yang_name = "upstream-bandwidth"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::~UpstreamBandwidth()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::has_data() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_data())
            return true;
    }
    return bandwidth_direction.is_set
	|| bandwidth_units.is_set
	|| is_admission_method_allocated_bandwidth.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_direction.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(is_admission_method_allocated_bandwidth.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upstream-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_direction.is_set || is_set(bandwidth_direction.yfilter)) leaf_name_data.push_back(bandwidth_direction.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (is_admission_method_allocated_bandwidth.is_set || is_set(is_admission_method_allocated_bandwidth.yfilter)) leaf_name_data.push_back(is_admission_method_allocated_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-pool0")
    {
        for(auto const & c : bandwidth_pool0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0>();
        c->parent = this;
        bandwidth_pool0.push_back(c);
        return c;
    }

    if(child_yang_name == "bandwidth-pool1")
    {
        for(auto const & c : bandwidth_pool1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1>();
        c->parent = this;
        bandwidth_pool1.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bandwidth_pool0)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bandwidth_pool1)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction = value;
        bandwidth_direction.value_namespace = name_space;
        bandwidth_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth = value;
        is_admission_method_allocated_bandwidth.value_namespace = name_space;
        is_admission_method_allocated_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-pool0" || name == "bandwidth-pool1" || name == "bandwidth-direction" || name == "bandwidth-units" || name == "is-admission-method-allocated-bandwidth")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::BandwidthPool0()
    :
    held_amount{YType::uint32, "held-amount"},
    hold_priority{YType::uint8, "hold-priority"},
    locked_amount{YType::uint32, "locked-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{

    yang_name = "bandwidth-pool0"; yang_parent_name = "upstream-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::~BandwidthPool0()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::has_data() const
{
    return held_amount.is_set
	|| hold_priority.is_set
	|| locked_amount.is_set
	|| total_held_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(held_amount.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(locked_amount.yfilter)
	|| ydk::is_set(total_held_amount.yfilter)
	|| ydk::is_set(total_locked_amount.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (held_amount.is_set || is_set(held_amount.yfilter)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.yfilter)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.yfilter)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.yfilter)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "held-amount")
    {
        held_amount = value;
        held_amount.value_namespace = name_space;
        held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
        locked_amount.value_namespace = name_space;
        locked_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
        total_held_amount.value_namespace = name_space;
        total_held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
        total_locked_amount.value_namespace = name_space;
        total_locked_amount.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "held-amount")
    {
        held_amount.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "locked-amount")
    {
        locked_amount.yfilter = yfilter;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount.yfilter = yfilter;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "held-amount" || name == "hold-priority" || name == "locked-amount" || name == "total-held-amount" || name == "total-locked-amount")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::BandwidthPool1()
    :
    held_amount{YType::uint32, "held-amount"},
    hold_priority{YType::uint8, "hold-priority"},
    locked_amount{YType::uint32, "locked-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{

    yang_name = "bandwidth-pool1"; yang_parent_name = "upstream-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::~BandwidthPool1()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::has_data() const
{
    return held_amount.is_set
	|| hold_priority.is_set
	|| locked_amount.is_set
	|| total_held_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(held_amount.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(locked_amount.yfilter)
	|| ydk::is_set(total_held_amount.yfilter)
	|| ydk::is_set(total_locked_amount.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (held_amount.is_set || is_set(held_amount.yfilter)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.yfilter)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.yfilter)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.yfilter)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "held-amount")
    {
        held_amount = value;
        held_amount.value_namespace = name_space;
        held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
        locked_amount.value_namespace = name_space;
        locked_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
        total_held_amount.value_namespace = name_space;
        total_held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
        total_locked_amount.value_namespace = name_space;
        total_locked_amount.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "held-amount")
    {
        held_amount.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "locked-amount")
    {
        locked_amount.yfilter = yfilter;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount.yfilter = yfilter;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "held-amount" || name == "hold-priority" || name == "locked-amount" || name == "total-held-amount" || name == "total-locked-amount")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::Global::Global()
    :
    bandwidth_hold_time{YType::uint16, "bandwidth-hold-time"},
    is_role_standby{YType::boolean, "is-role-standby"},
    links{YType::uint16, "links"}
{

    yang_name = "global"; yang_parent_name = "bandwidth-allocation"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::BandwidthAllocation::Global::~Global()
{
}

bool MplsLcacStandby::BandwidthAllocation::Global::has_data() const
{
    return bandwidth_hold_time.is_set
	|| is_role_standby.is_set
	|| links.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_hold_time.yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(links.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/bandwidth-allocation/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::BandwidthAllocation::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_hold_time.is_set || is_set(bandwidth_hold_time.yfilter)) leaf_name_data.push_back(bandwidth_hold_time.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::BandwidthAllocation::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-hold-time")
    {
        bandwidth_hold_time = value;
        bandwidth_hold_time.value_namespace = name_space;
        bandwidth_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-hold-time")
    {
        bandwidth_hold_time.yfilter = yfilter;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-hold-time" || name == "is-role-standby" || name == "links")
        return true;
    return false;
}

MplsLcacStandby::BfdNeighbors::BfdNeighbors()
{

    yang_name = "bfd-neighbors"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::BfdNeighbors::~BfdNeighbors()
{
}

bool MplsLcacStandby::BfdNeighbors::has_data() const
{
    for (std::size_t index=0; index<bfd_neighbor.size(); index++)
    {
        if(bfd_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::BfdNeighbors::has_operation() const
{
    for (std::size_t index=0; index<bfd_neighbor.size(); index++)
    {
        if(bfd_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::BfdNeighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::BfdNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BfdNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BfdNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-neighbor")
    {
        for(auto const & c : bfd_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BfdNeighbors::BfdNeighbor>();
        c->parent = this;
        bfd_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BfdNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::BfdNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::BfdNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::BfdNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-neighbor")
        return true;
    return false;
}

MplsLcacStandby::BfdNeighbors::BfdNeighbor::BfdNeighbor()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "bfd-neighbor"; yang_parent_name = "bfd-neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::BfdNeighbors::BfdNeighbor::~BfdNeighbor()
{
}

bool MplsLcacStandby::BfdNeighbors::BfdNeighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool MplsLcacStandby::BfdNeighbors::BfdNeighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsLcacStandby::BfdNeighbors::BfdNeighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/bfd-neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::BfdNeighbors::BfdNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-neighbor" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BfdNeighbors::BfdNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BfdNeighbors::BfdNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BfdNeighbors::BfdNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::BfdNeighbors::BfdNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BfdNeighbors::BfdNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BfdNeighbors::BfdNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "interface-name")
        return true;
    return false;
}

MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::Neighbor()
    :
    is_bfd_up{YType::boolean, "is-bfd-up"},
    neighbor_address{YType::str, "neighbor-address"}
{

    yang_name = "neighbor"; yang_parent_name = "bfd-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::~Neighbor()
{
}

bool MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::has_data() const
{
    return is_bfd_up.is_set
	|| neighbor_address.is_set;
}

bool MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bfd_up.yfilter)
	|| ydk::is_set(neighbor_address.yfilter);
}

std::string MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bfd_up.is_set || is_set(is_bfd_up.yfilter)) leaf_name_data.push_back(is_bfd_up.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bfd-up")
    {
        is_bfd_up = value;
        is_bfd_up.value_namespace = name_space;
        is_bfd_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bfd-up")
    {
        is_bfd_up.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bfd-up" || name == "neighbor-address")
        return true;
    return false;
}

MplsLcacStandby::Gmpls::Gmpls()
    :
    nni(std::make_shared<MplsLcacStandby::Gmpls::Nni>())
	,uni(std::make_shared<MplsLcacStandby::Gmpls::Uni>())
{
    nni->parent = this;
    uni->parent = this;

    yang_name = "gmpls"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Gmpls::~Gmpls()
{
}

bool MplsLcacStandby::Gmpls::has_data() const
{
    return (nni !=  nullptr && nni->has_data())
	|| (uni !=  nullptr && uni->has_data());
}

bool MplsLcacStandby::Gmpls::has_operation() const
{
    return is_set(yfilter)
	|| (nni !=  nullptr && nni->has_operation())
	|| (uni !=  nullptr && uni->has_operation());
}

std::string MplsLcacStandby::Gmpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Gmpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Gmpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Gmpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nni")
    {
        if(nni == nullptr)
        {
            nni = std::make_shared<MplsLcacStandby::Gmpls::Nni>();
        }
        return nni;
    }

    if(child_yang_name == "uni")
    {
        if(uni == nullptr)
        {
            uni = std::make_shared<MplsLcacStandby::Gmpls::Uni>();
        }
        return uni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Gmpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nni != nullptr)
    {
        children["nni"] = nni;
    }

    if(uni != nullptr)
    {
        children["uni"] = uni;
    }

    return children;
}

void MplsLcacStandby::Gmpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::Gmpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::Gmpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nni" || name == "uni")
        return true;
    return false;
}

MplsLcacStandby::Gmpls::Nni::Nni()
{

    yang_name = "nni"; yang_parent_name = "gmpls"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Gmpls::Nni::~Nni()
{
}

bool MplsLcacStandby::Gmpls::Nni::has_data() const
{
    return false;
}

bool MplsLcacStandby::Gmpls::Nni::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsLcacStandby::Gmpls::Nni::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/gmpls/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Gmpls::Nni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Gmpls::Nni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Gmpls::Nni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Gmpls::Nni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Gmpls::Nni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::Gmpls::Nni::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::Gmpls::Nni::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsLcacStandby::Gmpls::Uni::Uni()
{

    yang_name = "uni"; yang_parent_name = "gmpls"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Gmpls::Uni::~Uni()
{
}

bool MplsLcacStandby::Gmpls::Uni::has_data() const
{
    return false;
}

bool MplsLcacStandby::Gmpls::Uni::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsLcacStandby::Gmpls::Uni::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/gmpls/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Gmpls::Uni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Gmpls::Uni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Gmpls::Uni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Gmpls::Uni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Gmpls::Uni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::Gmpls::Uni::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::Gmpls::Uni::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsLcacStandby::LinkInformation::LinkInformation()
    :
    global(std::make_shared<MplsLcacStandby::LinkInformation::Global>())
	,links(std::make_shared<MplsLcacStandby::LinkInformation::Links>())
{
    global->parent = this;
    links->parent = this;

    yang_name = "link-information"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::LinkInformation::~LinkInformation()
{
}

bool MplsLcacStandby::LinkInformation::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (links !=  nullptr && links->has_data());
}

bool MplsLcacStandby::LinkInformation::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (links !=  nullptr && links->has_operation());
}

std::string MplsLcacStandby::LinkInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::LinkInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsLcacStandby::LinkInformation::Global>();
        }
        return global;
    }

    if(child_yang_name == "links")
    {
        if(links == nullptr)
        {
            links = std::make_shared<MplsLcacStandby::LinkInformation::Links>();
        }
        return links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(links != nullptr)
    {
        children["links"] = links;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::LinkInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::LinkInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "links")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Global::Global()
    :
    is_role_standby{YType::boolean, "is-role-standby"},
    links{YType::uint16, "links"},
    maximum_links{YType::uint16, "maximum-links"}
{

    yang_name = "global"; yang_parent_name = "link-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::LinkInformation::Global::~Global()
{
}

bool MplsLcacStandby::LinkInformation::Global::has_data() const
{
    return is_role_standby.is_set
	|| links.is_set
	|| maximum_links.is_set;
}

bool MplsLcacStandby::LinkInformation::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(links.yfilter)
	|| ydk::is_set(maximum_links.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/link-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::LinkInformation::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (maximum_links.is_set || is_set(maximum_links.yfilter)) leaf_name_data.push_back(maximum_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkInformation::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-links")
    {
        maximum_links = value;
        maximum_links.value_namespace = name_space;
        maximum_links.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
    if(value_path == "maximum-links")
    {
        maximum_links.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-role-standby" || name == "links" || name == "maximum-links")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Links()
{

    yang_name = "links"; yang_parent_name = "link-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::LinkInformation::Links::~Links()
{
}

bool MplsLcacStandby::LinkInformation::Links::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::LinkInformation::Links::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/link-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::LinkInformation::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::LinkInformation::Links::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::LinkInformation::Links::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::Link()
    :
    interface_name{YType::str, "interface-name"},
    is_attribute_incomplete{YType::boolean, "is-attribute-incomplete"},
    is_name_based_attribute{YType::boolean, "is-name-based-attribute"},
    is_te_metric_valid{YType::boolean, "is-te-metric-valid"},
    link_attributes{YType::uint32, "link-attributes"},
    maximum_reservation_bandwidth_mam{YType::uint64, "maximum-reservation-bandwidth-mam"},
    maximum_reservation_bandwidth_rdm{YType::uint64, "maximum-reservation-bandwidth-rdm"},
    reason_not_flooded{YType::str, "reason-not-flooded"},
    reservable_pool0_bandwidth_mam{YType::uint64, "reservable-pool0-bandwidth-mam"},
    reservable_pool0_bandwidth_rdm{YType::uint64, "reservable-pool0-bandwidth-rdm"},
    reservable_pool1_bandwidth_mam{YType::uint64, "reservable-pool1-bandwidth-mam"},
    reservable_pool1_bandwidth_rdm{YType::uint64, "reservable-pool1-bandwidth-rdm"},
    te_metric{YType::uint32, "te-metric"}
    	,
    bandwidth_account(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount>())
	,hw_oor(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::HwOor>())
	,link_common(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon>())
{
    bandwidth_account->parent = this;
    hw_oor->parent = this;
    link_common->parent = this;

    yang_name = "link"; yang_parent_name = "links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::LinkInformation::Links::Link::~Link()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::has_data() const
{
    for (std::size_t index=0; index<affinity_map.size(); index++)
    {
        if(affinity_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<areas.size(); index++)
    {
        if(areas[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<link_extended_attribute.size(); index++)
    {
        if(link_extended_attribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<link_forwad_ref_value.size(); index++)
    {
        if(link_forwad_ref_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lockout.size(); index++)
    {
        if(lockout[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| is_attribute_incomplete.is_set
	|| is_name_based_attribute.is_set
	|| is_te_metric_valid.is_set
	|| link_attributes.is_set
	|| maximum_reservation_bandwidth_mam.is_set
	|| maximum_reservation_bandwidth_rdm.is_set
	|| reason_not_flooded.is_set
	|| reservable_pool0_bandwidth_mam.is_set
	|| reservable_pool0_bandwidth_rdm.is_set
	|| reservable_pool1_bandwidth_mam.is_set
	|| reservable_pool1_bandwidth_rdm.is_set
	|| te_metric.is_set
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_data())
	|| (hw_oor !=  nullptr && hw_oor->has_data())
	|| (link_common !=  nullptr && link_common->has_data());
}

bool MplsLcacStandby::LinkInformation::Links::Link::has_operation() const
{
    for (std::size_t index=0; index<affinity_map.size(); index++)
    {
        if(affinity_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<areas.size(); index++)
    {
        if(areas[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<link_extended_attribute.size(); index++)
    {
        if(link_extended_attribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<link_forwad_ref_value.size(); index++)
    {
        if(link_forwad_ref_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lockout.size(); index++)
    {
        if(lockout[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_attribute_incomplete.yfilter)
	|| ydk::is_set(is_name_based_attribute.yfilter)
	|| ydk::is_set(is_te_metric_valid.yfilter)
	|| ydk::is_set(link_attributes.yfilter)
	|| ydk::is_set(maximum_reservation_bandwidth_mam.yfilter)
	|| ydk::is_set(maximum_reservation_bandwidth_rdm.yfilter)
	|| ydk::is_set(reason_not_flooded.yfilter)
	|| ydk::is_set(reservable_pool0_bandwidth_mam.yfilter)
	|| ydk::is_set(reservable_pool0_bandwidth_rdm.yfilter)
	|| ydk::is_set(reservable_pool1_bandwidth_mam.yfilter)
	|| ydk::is_set(reservable_pool1_bandwidth_rdm.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_operation())
	|| (hw_oor !=  nullptr && hw_oor->has_operation())
	|| (link_common !=  nullptr && link_common->has_operation());
}

std::string MplsLcacStandby::LinkInformation::Links::Link::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/link-information/links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::LinkInformation::Links::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_attribute_incomplete.is_set || is_set(is_attribute_incomplete.yfilter)) leaf_name_data.push_back(is_attribute_incomplete.get_name_leafdata());
    if (is_name_based_attribute.is_set || is_set(is_name_based_attribute.yfilter)) leaf_name_data.push_back(is_name_based_attribute.get_name_leafdata());
    if (is_te_metric_valid.is_set || is_set(is_te_metric_valid.yfilter)) leaf_name_data.push_back(is_te_metric_valid.get_name_leafdata());
    if (link_attributes.is_set || is_set(link_attributes.yfilter)) leaf_name_data.push_back(link_attributes.get_name_leafdata());
    if (maximum_reservation_bandwidth_mam.is_set || is_set(maximum_reservation_bandwidth_mam.yfilter)) leaf_name_data.push_back(maximum_reservation_bandwidth_mam.get_name_leafdata());
    if (maximum_reservation_bandwidth_rdm.is_set || is_set(maximum_reservation_bandwidth_rdm.yfilter)) leaf_name_data.push_back(maximum_reservation_bandwidth_rdm.get_name_leafdata());
    if (reason_not_flooded.is_set || is_set(reason_not_flooded.yfilter)) leaf_name_data.push_back(reason_not_flooded.get_name_leafdata());
    if (reservable_pool0_bandwidth_mam.is_set || is_set(reservable_pool0_bandwidth_mam.yfilter)) leaf_name_data.push_back(reservable_pool0_bandwidth_mam.get_name_leafdata());
    if (reservable_pool0_bandwidth_rdm.is_set || is_set(reservable_pool0_bandwidth_rdm.yfilter)) leaf_name_data.push_back(reservable_pool0_bandwidth_rdm.get_name_leafdata());
    if (reservable_pool1_bandwidth_mam.is_set || is_set(reservable_pool1_bandwidth_mam.yfilter)) leaf_name_data.push_back(reservable_pool1_bandwidth_mam.get_name_leafdata());
    if (reservable_pool1_bandwidth_rdm.is_set || is_set(reservable_pool1_bandwidth_rdm.yfilter)) leaf_name_data.push_back(reservable_pool1_bandwidth_rdm.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-map")
    {
        for(auto const & c : affinity_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::AffinityMap>();
        c->parent = this;
        affinity_map.push_back(c);
        return c;
    }

    if(child_yang_name == "areas")
    {
        for(auto const & c : areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::Areas>();
        c->parent = this;
        areas.push_back(c);
        return c;
    }

    if(child_yang_name == "bandwidth-account")
    {
        if(bandwidth_account == nullptr)
        {
            bandwidth_account = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount>();
        }
        return bandwidth_account;
    }

    if(child_yang_name == "hw-oor")
    {
        if(hw_oor == nullptr)
        {
            hw_oor = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::HwOor>();
        }
        return hw_oor;
    }

    if(child_yang_name == "link-common")
    {
        if(link_common == nullptr)
        {
            link_common = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon>();
        }
        return link_common;
    }

    if(child_yang_name == "link-extended-attribute")
    {
        for(auto const & c : link_extended_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute>();
        c->parent = this;
        link_extended_attribute.push_back(c);
        return c;
    }

    if(child_yang_name == "link-forwad-ref-value")
    {
        for(auto const & c : link_forwad_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue>();
        c->parent = this;
        link_forwad_ref_value.push_back(c);
        return c;
    }

    if(child_yang_name == "lockout")
    {
        for(auto const & c : lockout)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::Lockout>();
        c->parent = this;
        lockout.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : affinity_map)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : areas)
    {
        children[c->get_segment_path()] = c;
    }

    if(bandwidth_account != nullptr)
    {
        children["bandwidth-account"] = bandwidth_account;
    }

    if(hw_oor != nullptr)
    {
        children["hw-oor"] = hw_oor;
    }

    if(link_common != nullptr)
    {
        children["link-common"] = link_common;
    }

    for (auto const & c : link_extended_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : link_forwad_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lockout)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attribute-incomplete")
    {
        is_attribute_incomplete = value;
        is_attribute_incomplete.value_namespace = name_space;
        is_attribute_incomplete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-name-based-attribute")
    {
        is_name_based_attribute = value;
        is_name_based_attribute.value_namespace = name_space;
        is_name_based_attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-metric-valid")
    {
        is_te_metric_valid = value;
        is_te_metric_valid.value_namespace = name_space;
        is_te_metric_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-attributes")
    {
        link_attributes = value;
        link_attributes.value_namespace = name_space;
        link_attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservation-bandwidth-mam")
    {
        maximum_reservation_bandwidth_mam = value;
        maximum_reservation_bandwidth_mam.value_namespace = name_space;
        maximum_reservation_bandwidth_mam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservation-bandwidth-rdm")
    {
        maximum_reservation_bandwidth_rdm = value;
        maximum_reservation_bandwidth_rdm.value_namespace = name_space;
        maximum_reservation_bandwidth_rdm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason-not-flooded")
    {
        reason_not_flooded = value;
        reason_not_flooded.value_namespace = name_space;
        reason_not_flooded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool0-bandwidth-mam")
    {
        reservable_pool0_bandwidth_mam = value;
        reservable_pool0_bandwidth_mam.value_namespace = name_space;
        reservable_pool0_bandwidth_mam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool0-bandwidth-rdm")
    {
        reservable_pool0_bandwidth_rdm = value;
        reservable_pool0_bandwidth_rdm.value_namespace = name_space;
        reservable_pool0_bandwidth_rdm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool1-bandwidth-mam")
    {
        reservable_pool1_bandwidth_mam = value;
        reservable_pool1_bandwidth_mam.value_namespace = name_space;
        reservable_pool1_bandwidth_mam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool1-bandwidth-rdm")
    {
        reservable_pool1_bandwidth_rdm = value;
        reservable_pool1_bandwidth_rdm.value_namespace = name_space;
        reservable_pool1_bandwidth_rdm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-attribute-incomplete")
    {
        is_attribute_incomplete.yfilter = yfilter;
    }
    if(value_path == "is-name-based-attribute")
    {
        is_name_based_attribute.yfilter = yfilter;
    }
    if(value_path == "is-te-metric-valid")
    {
        is_te_metric_valid.yfilter = yfilter;
    }
    if(value_path == "link-attributes")
    {
        link_attributes.yfilter = yfilter;
    }
    if(value_path == "maximum-reservation-bandwidth-mam")
    {
        maximum_reservation_bandwidth_mam.yfilter = yfilter;
    }
    if(value_path == "maximum-reservation-bandwidth-rdm")
    {
        maximum_reservation_bandwidth_rdm.yfilter = yfilter;
    }
    if(value_path == "reason-not-flooded")
    {
        reason_not_flooded.yfilter = yfilter;
    }
    if(value_path == "reservable-pool0-bandwidth-mam")
    {
        reservable_pool0_bandwidth_mam.yfilter = yfilter;
    }
    if(value_path == "reservable-pool0-bandwidth-rdm")
    {
        reservable_pool0_bandwidth_rdm.yfilter = yfilter;
    }
    if(value_path == "reservable-pool1-bandwidth-mam")
    {
        reservable_pool1_bandwidth_mam.yfilter = yfilter;
    }
    if(value_path == "reservable-pool1-bandwidth-rdm")
    {
        reservable_pool1_bandwidth_rdm.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-map" || name == "areas" || name == "bandwidth-account" || name == "hw-oor" || name == "link-common" || name == "link-extended-attribute" || name == "link-forwad-ref-value" || name == "lockout" || name == "interface-name" || name == "is-attribute-incomplete" || name == "is-name-based-attribute" || name == "is-te-metric-valid" || name == "link-attributes" || name == "maximum-reservation-bandwidth-mam" || name == "maximum-reservation-bandwidth-rdm" || name == "reason-not-flooded" || name == "reservable-pool0-bandwidth-mam" || name == "reservable-pool0-bandwidth-rdm" || name == "reservable-pool1-bandwidth-mam" || name == "reservable-pool1-bandwidth-rdm" || name == "te-metric")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityMap()
    :
    affinity_bit_position{YType::uint8, "affinity-bit-position"},
    affinity_name{YType::str, "affinity-name"},
    affinity_table_id{YType::enumeration, "affinity-table-id"},
    affinity_value{YType::uint32, "affinity-value"}
{

    yang_name = "affinity-map"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::~AffinityMap()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::has_data() const
{
    for (std::size_t index=0; index<affinity_extended_value.size(); index++)
    {
        if(affinity_extended_value[index]->has_data())
            return true;
    }
    return affinity_bit_position.is_set
	|| affinity_name.is_set
	|| affinity_table_id.is_set
	|| affinity_value.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::has_operation() const
{
    for (std::size_t index=0; index<affinity_extended_value.size(); index++)
    {
        if(affinity_extended_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bit_position.yfilter)
	|| ydk::is_set(affinity_name.yfilter)
	|| ydk::is_set(affinity_table_id.yfilter)
	|| ydk::is_set(affinity_value.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bit_position.is_set || is_set(affinity_bit_position.yfilter)) leaf_name_data.push_back(affinity_bit_position.get_name_leafdata());
    if (affinity_name.is_set || is_set(affinity_name.yfilter)) leaf_name_data.push_back(affinity_name.get_name_leafdata());
    if (affinity_table_id.is_set || is_set(affinity_table_id.yfilter)) leaf_name_data.push_back(affinity_table_id.get_name_leafdata());
    if (affinity_value.is_set || is_set(affinity_value.yfilter)) leaf_name_data.push_back(affinity_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-extended-value")
    {
        for(auto const & c : affinity_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue>();
        c->parent = this;
        affinity_extended_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : affinity_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bit-position")
    {
        affinity_bit_position = value;
        affinity_bit_position.value_namespace = name_space;
        affinity_bit_position.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-name")
    {
        affinity_name = value;
        affinity_name.value_namespace = name_space;
        affinity_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-table-id")
    {
        affinity_table_id = value;
        affinity_table_id.value_namespace = name_space;
        affinity_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-value")
    {
        affinity_value = value;
        affinity_value.value_namespace = name_space;
        affinity_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bit-position")
    {
        affinity_bit_position.yfilter = yfilter;
    }
    if(value_path == "affinity-name")
    {
        affinity_name.yfilter = yfilter;
    }
    if(value_path == "affinity-table-id")
    {
        affinity_table_id.yfilter = yfilter;
    }
    if(value_path == "affinity-value")
    {
        affinity_value.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-extended-value" || name == "affinity-bit-position" || name == "affinity-name" || name == "affinity-table-id" || name == "affinity-value")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::AffinityExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "affinity-extended-value"; yang_parent_name = "affinity-map"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::~AffinityExtendedValue()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::Areas::Areas()
    :
    area_id{YType::str, "area-id"},
    igp_metric{YType::uint32, "igp-metric"},
    is_neighbor_up{YType::boolean, "is-neighbor-up"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"}
{

    yang_name = "areas"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::Areas::~Areas()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::Areas::has_data() const
{
    return area_id.is_set
	|| igp_metric.is_set
	|| is_neighbor_up.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::Areas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(is_neighbor_up.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_id.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::Areas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::Areas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (is_neighbor_up.is_set || is_set(is_neighbor_up.yfilter)) leaf_name_data.push_back(is_neighbor_up.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::Areas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::Areas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::Areas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-up")
    {
        is_neighbor_up = value;
        is_neighbor_up.value_namespace = name_space;
        is_neighbor_up.value_namespace_prefix = name_space_prefix;
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
}

void MplsLcacStandby::LinkInformation::Links::Link::Areas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-up")
    {
        is_neighbor_up.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::Areas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-id" || name == "igp-metric" || name == "is-neighbor-up" || name == "neighbor-address" || name == "neighbor-id")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccount()
    :
    bandwidth_account_common_info(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo>())
	,rsvp_te_bandwidth_sample_history(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory>())
	,sr_bandwidth_sample_history(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory>())
{
    bandwidth_account_common_info->parent = this;
    rsvp_te_bandwidth_sample_history->parent = this;
    sr_bandwidth_sample_history->parent = this;

    yang_name = "bandwidth-account"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::~BandwidthAccount()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::has_data() const
{
    return (bandwidth_account_common_info !=  nullptr && bandwidth_account_common_info->has_data())
	|| (rsvp_te_bandwidth_sample_history !=  nullptr && rsvp_te_bandwidth_sample_history->has_data())
	|| (sr_bandwidth_sample_history !=  nullptr && sr_bandwidth_sample_history->has_data());
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::has_operation() const
{
    return is_set(yfilter)
	|| (bandwidth_account_common_info !=  nullptr && bandwidth_account_common_info->has_operation())
	|| (rsvp_te_bandwidth_sample_history !=  nullptr && rsvp_te_bandwidth_sample_history->has_operation())
	|| (sr_bandwidth_sample_history !=  nullptr && sr_bandwidth_sample_history->has_operation());
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-account-common-info")
    {
        if(bandwidth_account_common_info == nullptr)
        {
            bandwidth_account_common_info = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo>();
        }
        return bandwidth_account_common_info;
    }

    if(child_yang_name == "rsvp-te-bandwidth-sample-history")
    {
        if(rsvp_te_bandwidth_sample_history == nullptr)
        {
            rsvp_te_bandwidth_sample_history = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory>();
        }
        return rsvp_te_bandwidth_sample_history;
    }

    if(child_yang_name == "sr-bandwidth-sample-history")
    {
        if(sr_bandwidth_sample_history == nullptr)
        {
            sr_bandwidth_sample_history = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory>();
        }
        return sr_bandwidth_sample_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_account_common_info != nullptr)
    {
        children["bandwidth-account-common-info"] = bandwidth_account_common_info;
    }

    if(rsvp_te_bandwidth_sample_history != nullptr)
    {
        children["rsvp-te-bandwidth-sample-history"] = rsvp_te_bandwidth_sample_history;
    }

    if(sr_bandwidth_sample_history != nullptr)
    {
        children["sr-bandwidth-sample-history"] = sr_bandwidth_sample_history;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-account-common-info" || name == "rsvp-te-bandwidth-sample-history" || name == "sr-bandwidth-sample-history")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthAccountCommonInfo()
    :
    adjustment_factor{YType::uint32, "adjustment-factor"},
    application_enforced{YType::boolean, "application-enforced"},
    application_interval{YType::uint32, "application-interval"},
    application_time_remaining{YType::uint32, "application-time-remaining"},
    collection_type{YType::enumeration, "collection-type"},
    down_threshold_max_reservable_bandwidth{YType::uint8, "down-threshold-max-reservable-bandwidth"},
    is_bandwidth_account_enabled{YType::boolean, "is-bandwidth-account-enabled"},
    last_application_timestamp{YType::uint32, "last-application-timestamp"},
    last_sample_collection_timestamp{YType::uint32, "last-sample-collection-timestamp"},
    max_reservable_bandwidth_threshold_are_default{YType::boolean, "max-reservable-bandwidth-threshold-are-default"},
    next_application{YType::uint32, "next-application"},
    next_sample_collection{YType::uint32, "next-sample-collection"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_time_remaining{YType::uint32, "sample-time-remaining"},
    up_threshold_max_reservable_bandwidth{YType::uint8, "up-threshold-max-reservable-bandwidth"}
    	,
    rsvp_te_bandwidth_utilization(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization>())
	,sr_bandwidth_utilization(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization>())
{
    rsvp_te_bandwidth_utilization->parent = this;
    sr_bandwidth_utilization->parent = this;

    yang_name = "bandwidth-account-common-info"; yang_parent_name = "bandwidth-account"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::~BandwidthAccountCommonInfo()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::has_data() const
{
    return adjustment_factor.is_set
	|| application_enforced.is_set
	|| application_interval.is_set
	|| application_time_remaining.is_set
	|| collection_type.is_set
	|| down_threshold_max_reservable_bandwidth.is_set
	|| is_bandwidth_account_enabled.is_set
	|| last_application_timestamp.is_set
	|| last_sample_collection_timestamp.is_set
	|| max_reservable_bandwidth_threshold_are_default.is_set
	|| next_application.is_set
	|| next_sample_collection.is_set
	|| sample_interval.is_set
	|| sample_time_remaining.is_set
	|| up_threshold_max_reservable_bandwidth.is_set
	|| (rsvp_te_bandwidth_utilization !=  nullptr && rsvp_te_bandwidth_utilization->has_data())
	|| (sr_bandwidth_utilization !=  nullptr && sr_bandwidth_utilization->has_data());
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjustment_factor.yfilter)
	|| ydk::is_set(application_enforced.yfilter)
	|| ydk::is_set(application_interval.yfilter)
	|| ydk::is_set(application_time_remaining.yfilter)
	|| ydk::is_set(collection_type.yfilter)
	|| ydk::is_set(down_threshold_max_reservable_bandwidth.yfilter)
	|| ydk::is_set(is_bandwidth_account_enabled.yfilter)
	|| ydk::is_set(last_application_timestamp.yfilter)
	|| ydk::is_set(last_sample_collection_timestamp.yfilter)
	|| ydk::is_set(max_reservable_bandwidth_threshold_are_default.yfilter)
	|| ydk::is_set(next_application.yfilter)
	|| ydk::is_set(next_sample_collection.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(sample_time_remaining.yfilter)
	|| ydk::is_set(up_threshold_max_reservable_bandwidth.yfilter)
	|| (rsvp_te_bandwidth_utilization !=  nullptr && rsvp_te_bandwidth_utilization->has_operation())
	|| (sr_bandwidth_utilization !=  nullptr && sr_bandwidth_utilization->has_operation());
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-common-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjustment_factor.is_set || is_set(adjustment_factor.yfilter)) leaf_name_data.push_back(adjustment_factor.get_name_leafdata());
    if (application_enforced.is_set || is_set(application_enforced.yfilter)) leaf_name_data.push_back(application_enforced.get_name_leafdata());
    if (application_interval.is_set || is_set(application_interval.yfilter)) leaf_name_data.push_back(application_interval.get_name_leafdata());
    if (application_time_remaining.is_set || is_set(application_time_remaining.yfilter)) leaf_name_data.push_back(application_time_remaining.get_name_leafdata());
    if (collection_type.is_set || is_set(collection_type.yfilter)) leaf_name_data.push_back(collection_type.get_name_leafdata());
    if (down_threshold_max_reservable_bandwidth.is_set || is_set(down_threshold_max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(down_threshold_max_reservable_bandwidth.get_name_leafdata());
    if (is_bandwidth_account_enabled.is_set || is_set(is_bandwidth_account_enabled.yfilter)) leaf_name_data.push_back(is_bandwidth_account_enabled.get_name_leafdata());
    if (last_application_timestamp.is_set || is_set(last_application_timestamp.yfilter)) leaf_name_data.push_back(last_application_timestamp.get_name_leafdata());
    if (last_sample_collection_timestamp.is_set || is_set(last_sample_collection_timestamp.yfilter)) leaf_name_data.push_back(last_sample_collection_timestamp.get_name_leafdata());
    if (max_reservable_bandwidth_threshold_are_default.is_set || is_set(max_reservable_bandwidth_threshold_are_default.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth_threshold_are_default.get_name_leafdata());
    if (next_application.is_set || is_set(next_application.yfilter)) leaf_name_data.push_back(next_application.get_name_leafdata());
    if (next_sample_collection.is_set || is_set(next_sample_collection.yfilter)) leaf_name_data.push_back(next_sample_collection.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_time_remaining.is_set || is_set(sample_time_remaining.yfilter)) leaf_name_data.push_back(sample_time_remaining.get_name_leafdata());
    if (up_threshold_max_reservable_bandwidth.is_set || is_set(up_threshold_max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(up_threshold_max_reservable_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te-bandwidth-utilization")
    {
        if(rsvp_te_bandwidth_utilization == nullptr)
        {
            rsvp_te_bandwidth_utilization = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization>();
        }
        return rsvp_te_bandwidth_utilization;
    }

    if(child_yang_name == "sr-bandwidth-utilization")
    {
        if(sr_bandwidth_utilization == nullptr)
        {
            sr_bandwidth_utilization = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization>();
        }
        return sr_bandwidth_utilization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_te_bandwidth_utilization != nullptr)
    {
        children["rsvp-te-bandwidth-utilization"] = rsvp_te_bandwidth_utilization;
    }

    if(sr_bandwidth_utilization != nullptr)
    {
        children["sr-bandwidth-utilization"] = sr_bandwidth_utilization;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjustment-factor")
    {
        adjustment_factor = value;
        adjustment_factor.value_namespace = name_space;
        adjustment_factor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-enforced")
    {
        application_enforced = value;
        application_enforced.value_namespace = name_space;
        application_enforced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-interval")
    {
        application_interval = value;
        application_interval.value_namespace = name_space;
        application_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-time-remaining")
    {
        application_time_remaining = value;
        application_time_remaining.value_namespace = name_space;
        application_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-type")
    {
        collection_type = value;
        collection_type.value_namespace = name_space;
        collection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-threshold-max-reservable-bandwidth")
    {
        down_threshold_max_reservable_bandwidth = value;
        down_threshold_max_reservable_bandwidth.value_namespace = name_space;
        down_threshold_max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled = value;
        is_bandwidth_account_enabled.value_namespace = name_space;
        is_bandwidth_account_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-application-timestamp")
    {
        last_application_timestamp = value;
        last_application_timestamp.value_namespace = name_space;
        last_application_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sample-collection-timestamp")
    {
        last_sample_collection_timestamp = value;
        last_sample_collection_timestamp.value_namespace = name_space;
        last_sample_collection_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth-threshold-are-default")
    {
        max_reservable_bandwidth_threshold_are_default = value;
        max_reservable_bandwidth_threshold_are_default.value_namespace = name_space;
        max_reservable_bandwidth_threshold_are_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-application")
    {
        next_application = value;
        next_application.value_namespace = name_space;
        next_application.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-sample-collection")
    {
        next_sample_collection = value;
        next_sample_collection.value_namespace = name_space;
        next_sample_collection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-time-remaining")
    {
        sample_time_remaining = value;
        sample_time_remaining.value_namespace = name_space;
        sample_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-threshold-max-reservable-bandwidth")
    {
        up_threshold_max_reservable_bandwidth = value;
        up_threshold_max_reservable_bandwidth.value_namespace = name_space;
        up_threshold_max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjustment-factor")
    {
        adjustment_factor.yfilter = yfilter;
    }
    if(value_path == "application-enforced")
    {
        application_enforced.yfilter = yfilter;
    }
    if(value_path == "application-interval")
    {
        application_interval.yfilter = yfilter;
    }
    if(value_path == "application-time-remaining")
    {
        application_time_remaining.yfilter = yfilter;
    }
    if(value_path == "collection-type")
    {
        collection_type.yfilter = yfilter;
    }
    if(value_path == "down-threshold-max-reservable-bandwidth")
    {
        down_threshold_max_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled.yfilter = yfilter;
    }
    if(value_path == "last-application-timestamp")
    {
        last_application_timestamp.yfilter = yfilter;
    }
    if(value_path == "last-sample-collection-timestamp")
    {
        last_sample_collection_timestamp.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth-threshold-are-default")
    {
        max_reservable_bandwidth_threshold_are_default.yfilter = yfilter;
    }
    if(value_path == "next-application")
    {
        next_application.yfilter = yfilter;
    }
    if(value_path == "next-sample-collection")
    {
        next_sample_collection.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "sample-time-remaining")
    {
        sample_time_remaining.yfilter = yfilter;
    }
    if(value_path == "up-threshold-max-reservable-bandwidth")
    {
        up_threshold_max_reservable_bandwidth.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te-bandwidth-utilization" || name == "sr-bandwidth-utilization" || name == "adjustment-factor" || name == "application-enforced" || name == "application-interval" || name == "application-time-remaining" || name == "collection-type" || name == "down-threshold-max-reservable-bandwidth" || name == "is-bandwidth-account-enabled" || name == "last-application-timestamp" || name == "last-sample-collection-timestamp" || name == "max-reservable-bandwidth-threshold-are-default" || name == "next-application" || name == "next-sample-collection" || name == "sample-interval" || name == "sample-time-remaining" || name == "up-threshold-max-reservable-bandwidth")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::RsvpTeBandwidthUtilization()
    :
    non_rsvp_te_bandwidth_utilization{YType::uint64, "non-rsvp-te-bandwidth-utilization"},
    rsvp_te_adjusted_bandwidth_utilization{YType::uint64, "rsvp-te-adjusted-bandwidth-utilization"},
    rsvp_te_bandwidth_utilization{YType::uint64, "rsvp-te-bandwidth-utilization"},
    rsvp_te_enforced_bandwidth_utilization{YType::uint64, "rsvp-te-enforced-bandwidth-utilization"},
    total_link_bandwidth_utilization{YType::uint64, "total-link-bandwidth-utilization"}
{

    yang_name = "rsvp-te-bandwidth-utilization"; yang_parent_name = "bandwidth-account-common-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::~RsvpTeBandwidthUtilization()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::has_data() const
{
    return non_rsvp_te_bandwidth_utilization.is_set
	|| rsvp_te_adjusted_bandwidth_utilization.is_set
	|| rsvp_te_bandwidth_utilization.is_set
	|| rsvp_te_enforced_bandwidth_utilization.is_set
	|| total_link_bandwidth_utilization.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_rsvp_te_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_adjusted_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_enforced_bandwidth_utilization.yfilter)
	|| ydk::is_set(total_link_bandwidth_utilization.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-bandwidth-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_bandwidth_utilization.is_set || is_set(non_rsvp_te_bandwidth_utilization.yfilter)) leaf_name_data.push_back(non_rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_adjusted_bandwidth_utilization.is_set || is_set(rsvp_te_adjusted_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_adjusted_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_bandwidth_utilization.is_set || is_set(rsvp_te_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_enforced_bandwidth_utilization.is_set || is_set(rsvp_te_enforced_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_enforced_bandwidth_utilization.get_name_leafdata());
    if (total_link_bandwidth_utilization.is_set || is_set(total_link_bandwidth_utilization.yfilter)) leaf_name_data.push_back(total_link_bandwidth_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-rsvp-te-bandwidth-utilization")
    {
        non_rsvp_te_bandwidth_utilization = value;
        non_rsvp_te_bandwidth_utilization.value_namespace = name_space;
        non_rsvp_te_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-adjusted-bandwidth-utilization")
    {
        rsvp_te_adjusted_bandwidth_utilization = value;
        rsvp_te_adjusted_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_adjusted_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-bandwidth-utilization")
    {
        rsvp_te_bandwidth_utilization = value;
        rsvp_te_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-enforced-bandwidth-utilization")
    {
        rsvp_te_enforced_bandwidth_utilization = value;
        rsvp_te_enforced_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_enforced_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-link-bandwidth-utilization")
    {
        total_link_bandwidth_utilization = value;
        total_link_bandwidth_utilization.value_namespace = name_space;
        total_link_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-rsvp-te-bandwidth-utilization")
    {
        non_rsvp_te_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-adjusted-bandwidth-utilization")
    {
        rsvp_te_adjusted_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-bandwidth-utilization")
    {
        rsvp_te_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-enforced-bandwidth-utilization")
    {
        rsvp_te_enforced_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "total-link-bandwidth-utilization")
    {
        total_link_bandwidth_utilization.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-rsvp-te-bandwidth-utilization" || name == "rsvp-te-adjusted-bandwidth-utilization" || name == "rsvp-te-bandwidth-utilization" || name == "rsvp-te-enforced-bandwidth-utilization" || name == "total-link-bandwidth-utilization")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::SrBandwidthUtilization()
    :
    sr_adjusted_bandwidth_utilization{YType::uint64, "sr-adjusted-bandwidth-utilization"},
    sr_bandwidth_utilization{YType::uint64, "sr-bandwidth-utilization"},
    sr_enforced_bandwidth_utilization{YType::uint64, "sr-enforced-bandwidth-utilization"}
{

    yang_name = "sr-bandwidth-utilization"; yang_parent_name = "bandwidth-account-common-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::~SrBandwidthUtilization()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::has_data() const
{
    return sr_adjusted_bandwidth_utilization.is_set
	|| sr_bandwidth_utilization.is_set
	|| sr_enforced_bandwidth_utilization.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_adjusted_bandwidth_utilization.yfilter)
	|| ydk::is_set(sr_bandwidth_utilization.yfilter)
	|| ydk::is_set(sr_enforced_bandwidth_utilization.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-bandwidth-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_adjusted_bandwidth_utilization.is_set || is_set(sr_adjusted_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_adjusted_bandwidth_utilization.get_name_leafdata());
    if (sr_bandwidth_utilization.is_set || is_set(sr_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_bandwidth_utilization.get_name_leafdata());
    if (sr_enforced_bandwidth_utilization.is_set || is_set(sr_enforced_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_enforced_bandwidth_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-adjusted-bandwidth-utilization")
    {
        sr_adjusted_bandwidth_utilization = value;
        sr_adjusted_bandwidth_utilization.value_namespace = name_space;
        sr_adjusted_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-bandwidth-utilization")
    {
        sr_bandwidth_utilization = value;
        sr_bandwidth_utilization.value_namespace = name_space;
        sr_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-enforced-bandwidth-utilization")
    {
        sr_enforced_bandwidth_utilization = value;
        sr_enforced_bandwidth_utilization.value_namespace = name_space;
        sr_enforced_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-adjusted-bandwidth-utilization")
    {
        sr_adjusted_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "sr-bandwidth-utilization")
    {
        sr_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "sr-enforced-bandwidth-utilization")
    {
        sr_enforced_bandwidth_utilization.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-adjusted-bandwidth-utilization" || name == "sr-bandwidth-utilization" || name == "sr-enforced-bandwidth-utilization")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeBandwidthSampleHistory()
{

    yang_name = "rsvp-te-bandwidth-sample-history"; yang_parent_name = "bandwidth-account"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::~RsvpTeBandwidthSampleHistory()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::has_data() const
{
    for (std::size_t index=0; index<rsvp_te_active_interval_sample.size(); index++)
    {
        if(rsvp_te_active_interval_sample[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsvp_te_previous_interval_sample.size(); index++)
    {
        if(rsvp_te_previous_interval_sample[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::has_operation() const
{
    for (std::size_t index=0; index<rsvp_te_active_interval_sample.size(); index++)
    {
        if(rsvp_te_active_interval_sample[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsvp_te_previous_interval_sample.size(); index++)
    {
        if(rsvp_te_previous_interval_sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-bandwidth-sample-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te-active-interval-sample")
    {
        for(auto const & c : rsvp_te_active_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample>();
        c->parent = this;
        rsvp_te_active_interval_sample.push_back(c);
        return c;
    }

    if(child_yang_name == "rsvp-te-previous-interval-sample")
    {
        for(auto const & c : rsvp_te_previous_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample>();
        c->parent = this;
        rsvp_te_previous_interval_sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rsvp_te_active_interval_sample)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rsvp_te_previous_interval_sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te-active-interval-sample" || name == "rsvp-te-previous-interval-sample")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::RsvpTeActiveIntervalSample()
    :
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    timestamp{YType::uint32, "timestamp"},
    total_rate{YType::uint64, "total-rate"}
{

    yang_name = "rsvp-te-active-interval-sample"; yang_parent_name = "rsvp-te-bandwidth-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::~RsvpTeActiveIntervalSample()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::has_data() const
{
    return non_rsvp_te_rate.is_set
	|| rsvp_te_rate.is_set
	|| timestamp.is_set
	|| total_rate.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_rsvp_te_rate.yfilter)
	|| ydk::is_set(rsvp_te_rate.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(total_rate.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-active-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.yfilter)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.yfilter)) leaf_name_data.push_back(total_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
        non_rsvp_te_rate.value_namespace = name_space;
        non_rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
        rsvp_te_rate.value_namespace = name_space;
        rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
        total_rate.value_namespace = name_space;
        total_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "total-rate")
    {
        total_rate.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-rsvp-te-rate" || name == "rsvp-te-rate" || name == "timestamp" || name == "total-rate")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::RsvpTePreviousIntervalSample()
    :
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    timestamp{YType::uint32, "timestamp"},
    total_rate{YType::uint64, "total-rate"}
{

    yang_name = "rsvp-te-previous-interval-sample"; yang_parent_name = "rsvp-te-bandwidth-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::~RsvpTePreviousIntervalSample()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::has_data() const
{
    return non_rsvp_te_rate.is_set
	|| rsvp_te_rate.is_set
	|| timestamp.is_set
	|| total_rate.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_rsvp_te_rate.yfilter)
	|| ydk::is_set(rsvp_te_rate.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(total_rate.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-previous-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.yfilter)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.yfilter)) leaf_name_data.push_back(total_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
        non_rsvp_te_rate.value_namespace = name_space;
        non_rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
        rsvp_te_rate.value_namespace = name_space;
        rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
        total_rate.value_namespace = name_space;
        total_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "total-rate")
    {
        total_rate.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-rsvp-te-rate" || name == "rsvp-te-rate" || name == "timestamp" || name == "total-rate")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrBandwidthSampleHistory()
{

    yang_name = "sr-bandwidth-sample-history"; yang_parent_name = "bandwidth-account"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::~SrBandwidthSampleHistory()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::has_data() const
{
    for (std::size_t index=0; index<sr_active_interval_sample.size(); index++)
    {
        if(sr_active_interval_sample[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_previous_interval_sample.size(); index++)
    {
        if(sr_previous_interval_sample[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::has_operation() const
{
    for (std::size_t index=0; index<sr_active_interval_sample.size(); index++)
    {
        if(sr_active_interval_sample[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_previous_interval_sample.size(); index++)
    {
        if(sr_previous_interval_sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-bandwidth-sample-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-active-interval-sample")
    {
        for(auto const & c : sr_active_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample>();
        c->parent = this;
        sr_active_interval_sample.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-previous-interval-sample")
    {
        for(auto const & c : sr_previous_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample>();
        c->parent = this;
        sr_previous_interval_sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_active_interval_sample)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sr_previous_interval_sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-active-interval-sample" || name == "sr-previous-interval-sample")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::SrActiveIntervalSample()
    :
    sr_rate{YType::uint64, "sr-rate"},
    timestamp{YType::uint32, "timestamp"}
{

    yang_name = "sr-active-interval-sample"; yang_parent_name = "sr-bandwidth-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::~SrActiveIntervalSample()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::has_data() const
{
    return sr_rate.is_set
	|| timestamp.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_rate.yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-active-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_rate.is_set || is_set(sr_rate.yfilter)) leaf_name_data.push_back(sr_rate.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-rate")
    {
        sr_rate = value;
        sr_rate.value_namespace = name_space;
        sr_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-rate")
    {
        sr_rate.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-rate" || name == "timestamp")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::SrPreviousIntervalSample()
    :
    sr_rate{YType::uint64, "sr-rate"},
    timestamp{YType::uint32, "timestamp"}
{

    yang_name = "sr-previous-interval-sample"; yang_parent_name = "sr-bandwidth-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::~SrPreviousIntervalSample()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::has_data() const
{
    return sr_rate.is_set
	|| timestamp.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_rate.yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-previous-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_rate.is_set || is_set(sr_rate.yfilter)) leaf_name_data.push_back(sr_rate.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-rate")
    {
        sr_rate = value;
        sr_rate.value_namespace = name_space;
        sr_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-rate")
    {
        sr_rate.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-rate" || name == "timestamp")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOor()
    :
    hw_o_or_green_recovery_time{YType::uint32, "hw-o-or-green-recovery-time"},
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    hw_oor_timestamp{YType::uint32, "hw-oor-timestamp"}
{

    yang_name = "hw-oor"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::HwOor::~HwOor()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::HwOor::has_data() const
{
    for (std::size_t index=0; index<hw_o_or_link_statistic.size(); index++)
    {
        if(hw_o_or_link_statistic[index]->has_data())
            return true;
    }
    return hw_o_or_green_recovery_time.is_set
	|| hw_oor_state.is_set
	|| hw_oor_timestamp.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::HwOor::has_operation() const
{
    for (std::size_t index=0; index<hw_o_or_link_statistic.size(); index++)
    {
        if(hw_o_or_link_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hw_o_or_green_recovery_time.yfilter)
	|| ydk::is_set(hw_oor_state.yfilter)
	|| ydk::is_set(hw_oor_timestamp.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::HwOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-oor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::HwOor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_o_or_green_recovery_time.is_set || is_set(hw_o_or_green_recovery_time.yfilter)) leaf_name_data.push_back(hw_o_or_green_recovery_time.get_name_leafdata());
    if (hw_oor_state.is_set || is_set(hw_oor_state.yfilter)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (hw_oor_timestamp.is_set || is_set(hw_oor_timestamp.yfilter)) leaf_name_data.push_back(hw_oor_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::HwOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-o-or-link-statistic")
    {
        for(auto const & c : hw_o_or_link_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic>();
        c->parent = this;
        hw_o_or_link_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::HwOor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hw_o_or_link_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::HwOor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hw-o-or-green-recovery-time")
    {
        hw_o_or_green_recovery_time = value;
        hw_o_or_green_recovery_time.value_namespace = name_space;
        hw_o_or_green_recovery_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
        hw_oor_state.value_namespace = name_space;
        hw_oor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-oor-timestamp")
    {
        hw_oor_timestamp = value;
        hw_oor_timestamp.value_namespace = name_space;
        hw_oor_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::HwOor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hw-o-or-green-recovery-time")
    {
        hw_o_or_green_recovery_time.yfilter = yfilter;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state.yfilter = yfilter;
    }
    if(value_path == "hw-oor-timestamp")
    {
        hw_oor_timestamp.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::HwOor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-o-or-link-statistic" || name == "hw-o-or-green-recovery-time" || name == "hw-oor-state" || name == "hw-oor-timestamp")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::HwOOrLinkStatistic()
    :
    accepted_ls_ps_number{YType::uint32, "accepted-ls-ps-number"},
    accepted_reopt_ls_ps_number{YType::uint32, "accepted-reopt-ls-ps-number"},
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    node_protection_disable_number{YType::uint32, "node-protection-disable-number"},
    rejected_ls_ps_number{YType::uint32, "rejected-ls-ps-number"},
    rejected_reopt_ls_ps_number{YType::uint32, "rejected-reopt-ls-ps-number"},
    transitions{YType::uint32, "transitions"}
{

    yang_name = "hw-o-or-link-statistic"; yang_parent_name = "hw-oor"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::~HwOOrLinkStatistic()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::has_data() const
{
    return accepted_ls_ps_number.is_set
	|| accepted_reopt_ls_ps_number.is_set
	|| hw_oor_state.is_set
	|| node_protection_disable_number.is_set
	|| rejected_ls_ps_number.is_set
	|| rejected_reopt_ls_ps_number.is_set
	|| transitions.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accepted_ls_ps_number.yfilter)
	|| ydk::is_set(accepted_reopt_ls_ps_number.yfilter)
	|| ydk::is_set(hw_oor_state.yfilter)
	|| ydk::is_set(node_protection_disable_number.yfilter)
	|| ydk::is_set(rejected_ls_ps_number.yfilter)
	|| ydk::is_set(rejected_reopt_ls_ps_number.yfilter)
	|| ydk::is_set(transitions.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-o-or-link-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_ls_ps_number.is_set || is_set(accepted_ls_ps_number.yfilter)) leaf_name_data.push_back(accepted_ls_ps_number.get_name_leafdata());
    if (accepted_reopt_ls_ps_number.is_set || is_set(accepted_reopt_ls_ps_number.yfilter)) leaf_name_data.push_back(accepted_reopt_ls_ps_number.get_name_leafdata());
    if (hw_oor_state.is_set || is_set(hw_oor_state.yfilter)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (node_protection_disable_number.is_set || is_set(node_protection_disable_number.yfilter)) leaf_name_data.push_back(node_protection_disable_number.get_name_leafdata());
    if (rejected_ls_ps_number.is_set || is_set(rejected_ls_ps_number.yfilter)) leaf_name_data.push_back(rejected_ls_ps_number.get_name_leafdata());
    if (rejected_reopt_ls_ps_number.is_set || is_set(rejected_reopt_ls_ps_number.yfilter)) leaf_name_data.push_back(rejected_reopt_ls_ps_number.get_name_leafdata());
    if (transitions.is_set || is_set(transitions.yfilter)) leaf_name_data.push_back(transitions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number = value;
        accepted_ls_ps_number.value_namespace = name_space;
        accepted_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number = value;
        accepted_reopt_ls_ps_number.value_namespace = name_space;
        accepted_reopt_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
        hw_oor_state.value_namespace = name_space;
        hw_oor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protection-disable-number")
    {
        node_protection_disable_number = value;
        node_protection_disable_number.value_namespace = name_space;
        node_protection_disable_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number = value;
        rejected_ls_ps_number.value_namespace = name_space;
        rejected_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number = value;
        rejected_reopt_ls_ps_number.value_namespace = name_space;
        rejected_reopt_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitions")
    {
        transitions = value;
        transitions.value_namespace = name_space;
        transitions.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state.yfilter = yfilter;
    }
    if(value_path == "node-protection-disable-number")
    {
        node_protection_disable_number.yfilter = yfilter;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "transitions")
    {
        transitions.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accepted-ls-ps-number" || name == "accepted-reopt-ls-ps-number" || name == "hw-oor-state" || name == "node-protection-disable-number" || name == "rejected-ls-ps-number" || name == "rejected-reopt-ls-ps-number" || name == "transitions")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkCommon()
    :
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    bcm_id{YType::uint16, "bcm-id"},
    capability{YType::uint32, "capability"},
    has_protection{YType::boolean, "has-protection"},
    igp_neighbors{YType::uint16, "igp-neighbors"},
    inbound_admission_method{YType::enumeration, "inbound-admission-method"},
    incoming_reservable_bandwidth_percentage{YType::uint8, "incoming-reservable-bandwidth-percentage"},
    incoming_reservable_pool0_bandwidth_percentage{YType::uint8, "incoming-reservable-pool0-bandwidth-percentage"},
    incoming_reservable_pool1_bandwidth_percentage{YType::uint8, "incoming-reservable-pool1-bandwidth-percentage"},
    is_resource_provider_installed{YType::boolean, "is-resource-provider-installed"},
    is_unnumbered{YType::boolean, "is-unnumbered"},
    last_flooded_effective_maximum_reservable_bandwidth{YType::uint64, "last-flooded-effective-maximum-reservable-bandwidth"},
    link_address{YType::str, "link-address"},
    link_id{YType::str, "link-id"},
    maximum_reservable_bandwidth{YType::uint64, "maximum-reservable-bandwidth"},
    maximum_reservable_pool0_bandwidth{YType::uint64, "maximum-reservable-pool0-bandwidth"},
    maximum_reservable_pool1_bandwidth{YType::uint64, "maximum-reservable-pool1-bandwidth"},
    outbound_admission_method{YType::enumeration, "outbound-admission-method"},
    outgoing_reservable_bandwidth_percentage{YType::uint8, "outgoing-reservable-bandwidth-percentage"},
    outgoing_reservable_pool0_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool0-bandwidth-percentage"},
    outgoing_reservable_pool1_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool1-bandwidth-percentage"},
    physical_bandwidth{YType::uint64, "physical-bandwidth"},
    resource_provider{YType::enumeration, "resource-provider"},
    working_priority{YType::uint32, "working-priority"}
    	,
    link_flags(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags>())
{
    link_flags->parent = this;

    yang_name = "link-common"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::~LinkCommon()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::has_data() const
{
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    return bandwidth_units.is_set
	|| bcm_id.is_set
	|| capability.is_set
	|| has_protection.is_set
	|| igp_neighbors.is_set
	|| inbound_admission_method.is_set
	|| incoming_reservable_bandwidth_percentage.is_set
	|| incoming_reservable_pool0_bandwidth_percentage.is_set
	|| incoming_reservable_pool1_bandwidth_percentage.is_set
	|| is_resource_provider_installed.is_set
	|| is_unnumbered.is_set
	|| last_flooded_effective_maximum_reservable_bandwidth.is_set
	|| link_address.is_set
	|| link_id.is_set
	|| maximum_reservable_bandwidth.is_set
	|| maximum_reservable_pool0_bandwidth.is_set
	|| maximum_reservable_pool1_bandwidth.is_set
	|| outbound_admission_method.is_set
	|| outgoing_reservable_bandwidth_percentage.is_set
	|| outgoing_reservable_pool0_bandwidth_percentage.is_set
	|| outgoing_reservable_pool1_bandwidth_percentage.is_set
	|| physical_bandwidth.is_set
	|| resource_provider.is_set
	|| working_priority.is_set
	|| (link_flags !=  nullptr && link_flags->has_data());
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::has_operation() const
{
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(bcm_id.yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(has_protection.yfilter)
	|| ydk::is_set(igp_neighbors.yfilter)
	|| ydk::is_set(inbound_admission_method.yfilter)
	|| ydk::is_set(incoming_reservable_bandwidth_percentage.yfilter)
	|| ydk::is_set(incoming_reservable_pool0_bandwidth_percentage.yfilter)
	|| ydk::is_set(incoming_reservable_pool1_bandwidth_percentage.yfilter)
	|| ydk::is_set(is_resource_provider_installed.yfilter)
	|| ydk::is_set(is_unnumbered.yfilter)
	|| ydk::is_set(last_flooded_effective_maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(maximum_reservable_pool0_bandwidth.yfilter)
	|| ydk::is_set(maximum_reservable_pool1_bandwidth.yfilter)
	|| ydk::is_set(outbound_admission_method.yfilter)
	|| ydk::is_set(outgoing_reservable_bandwidth_percentage.yfilter)
	|| ydk::is_set(outgoing_reservable_pool0_bandwidth_percentage.yfilter)
	|| ydk::is_set(outgoing_reservable_pool1_bandwidth_percentage.yfilter)
	|| ydk::is_set(physical_bandwidth.yfilter)
	|| ydk::is_set(resource_provider.yfilter)
	|| ydk::is_set(working_priority.yfilter)
	|| (link_flags !=  nullptr && link_flags->has_operation());
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (bcm_id.is_set || is_set(bcm_id.yfilter)) leaf_name_data.push_back(bcm_id.get_name_leafdata());
    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (has_protection.is_set || is_set(has_protection.yfilter)) leaf_name_data.push_back(has_protection.get_name_leafdata());
    if (igp_neighbors.is_set || is_set(igp_neighbors.yfilter)) leaf_name_data.push_back(igp_neighbors.get_name_leafdata());
    if (inbound_admission_method.is_set || is_set(inbound_admission_method.yfilter)) leaf_name_data.push_back(inbound_admission_method.get_name_leafdata());
    if (incoming_reservable_bandwidth_percentage.is_set || is_set(incoming_reservable_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_bandwidth_percentage.get_name_leafdata());
    if (incoming_reservable_pool0_bandwidth_percentage.is_set || is_set(incoming_reservable_pool0_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (incoming_reservable_pool1_bandwidth_percentage.is_set || is_set(incoming_reservable_pool1_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (is_resource_provider_installed.is_set || is_set(is_resource_provider_installed.yfilter)) leaf_name_data.push_back(is_resource_provider_installed.get_name_leafdata());
    if (is_unnumbered.is_set || is_set(is_unnumbered.yfilter)) leaf_name_data.push_back(is_unnumbered.get_name_leafdata());
    if (last_flooded_effective_maximum_reservable_bandwidth.is_set || is_set(last_flooded_effective_maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(last_flooded_effective_maximum_reservable_bandwidth.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (maximum_reservable_bandwidth.is_set || is_set(maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_bandwidth.get_name_leafdata());
    if (maximum_reservable_pool0_bandwidth.is_set || is_set(maximum_reservable_pool0_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_pool0_bandwidth.get_name_leafdata());
    if (maximum_reservable_pool1_bandwidth.is_set || is_set(maximum_reservable_pool1_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_pool1_bandwidth.get_name_leafdata());
    if (outbound_admission_method.is_set || is_set(outbound_admission_method.yfilter)) leaf_name_data.push_back(outbound_admission_method.get_name_leafdata());
    if (outgoing_reservable_bandwidth_percentage.is_set || is_set(outgoing_reservable_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool0_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool0_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool1_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool1_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (physical_bandwidth.is_set || is_set(physical_bandwidth.yfilter)) leaf_name_data.push_back(physical_bandwidth.get_name_leafdata());
    if (resource_provider.is_set || is_set(resource_provider.yfilter)) leaf_name_data.push_back(resource_provider.get_name_leafdata());
    if (working_priority.is_set || is_set(working_priority.yfilter)) leaf_name_data.push_back(working_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooded-areas")
    {
        for(auto const & c : flooded_areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas>();
        c->parent = this;
        flooded_areas.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-switching-capability-descriptor")
    {
        for(auto const & c : interface_switching_capability_descriptor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor>();
        c->parent = this;
        interface_switching_capability_descriptor.push_back(c);
        return c;
    }

    if(child_yang_name == "link-flags")
    {
        if(link_flags == nullptr)
        {
            link_flags = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags>();
        }
        return link_flags;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flooded_areas)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : interface_switching_capability_descriptor)
    {
        children[c->get_segment_path()] = c;
    }

    if(link_flags != nullptr)
    {
        children["link-flags"] = link_flags;
    }

    for (auto const & c : shared_risk_link_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcm-id")
    {
        bcm_id = value;
        bcm_id.value_namespace = name_space;
        bcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-protection")
    {
        has_protection = value;
        has_protection.value_namespace = name_space;
        has_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors = value;
        igp_neighbors.value_namespace = name_space;
        igp_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-admission-method")
    {
        inbound_admission_method = value;
        inbound_admission_method.value_namespace = name_space;
        inbound_admission_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-bandwidth-percentage")
    {
        incoming_reservable_bandwidth_percentage = value;
        incoming_reservable_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-pool0-bandwidth-percentage")
    {
        incoming_reservable_pool0_bandwidth_percentage = value;
        incoming_reservable_pool0_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_pool0_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-pool1-bandwidth-percentage")
    {
        incoming_reservable_pool1_bandwidth_percentage = value;
        incoming_reservable_pool1_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_pool1_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-resource-provider-installed")
    {
        is_resource_provider_installed = value;
        is_resource_provider_installed.value_namespace = name_space;
        is_resource_provider_installed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-unnumbered")
    {
        is_unnumbered = value;
        is_unnumbered.value_namespace = name_space;
        is_unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flooded-effective-maximum-reservable-bandwidth")
    {
        last_flooded_effective_maximum_reservable_bandwidth = value;
        last_flooded_effective_maximum_reservable_bandwidth.value_namespace = name_space;
        last_flooded_effective_maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-bandwidth")
    {
        maximum_reservable_bandwidth = value;
        maximum_reservable_bandwidth.value_namespace = name_space;
        maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-pool0-bandwidth")
    {
        maximum_reservable_pool0_bandwidth = value;
        maximum_reservable_pool0_bandwidth.value_namespace = name_space;
        maximum_reservable_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-pool1-bandwidth")
    {
        maximum_reservable_pool1_bandwidth = value;
        maximum_reservable_pool1_bandwidth.value_namespace = name_space;
        maximum_reservable_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-admission-method")
    {
        outbound_admission_method = value;
        outbound_admission_method.value_namespace = name_space;
        outbound_admission_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-bandwidth-percentage")
    {
        outgoing_reservable_bandwidth_percentage = value;
        outgoing_reservable_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-pool0-bandwidth-percentage")
    {
        outgoing_reservable_pool0_bandwidth_percentage = value;
        outgoing_reservable_pool0_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_pool0_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-pool1-bandwidth-percentage")
    {
        outgoing_reservable_pool1_bandwidth_percentage = value;
        outgoing_reservable_pool1_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_pool1_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth = value;
        physical_bandwidth.value_namespace = name_space;
        physical_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-provider")
    {
        resource_provider = value;
        resource_provider.value_namespace = name_space;
        resource_provider.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "working-priority")
    {
        working_priority = value;
        working_priority.value_namespace = name_space;
        working_priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "bcm-id")
    {
        bcm_id.yfilter = yfilter;
    }
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "has-protection")
    {
        has_protection.yfilter = yfilter;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors.yfilter = yfilter;
    }
    if(value_path == "inbound-admission-method")
    {
        inbound_admission_method.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-bandwidth-percentage")
    {
        incoming_reservable_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-pool0-bandwidth-percentage")
    {
        incoming_reservable_pool0_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-pool1-bandwidth-percentage")
    {
        incoming_reservable_pool1_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "is-resource-provider-installed")
    {
        is_resource_provider_installed.yfilter = yfilter;
    }
    if(value_path == "is-unnumbered")
    {
        is_unnumbered.yfilter = yfilter;
    }
    if(value_path == "last-flooded-effective-maximum-reservable-bandwidth")
    {
        last_flooded_effective_maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-bandwidth")
    {
        maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-pool0-bandwidth")
    {
        maximum_reservable_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-pool1-bandwidth")
    {
        maximum_reservable_pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "outbound-admission-method")
    {
        outbound_admission_method.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-bandwidth-percentage")
    {
        outgoing_reservable_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-pool0-bandwidth-percentage")
    {
        outgoing_reservable_pool0_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-pool1-bandwidth-percentage")
    {
        outgoing_reservable_pool1_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth.yfilter = yfilter;
    }
    if(value_path == "resource-provider")
    {
        resource_provider.yfilter = yfilter;
    }
    if(value_path == "working-priority")
    {
        working_priority.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooded-areas" || name == "interface-switching-capability-descriptor" || name == "link-flags" || name == "shared-risk-link-group" || name == "bandwidth-units" || name == "bcm-id" || name == "capability" || name == "has-protection" || name == "igp-neighbors" || name == "inbound-admission-method" || name == "incoming-reservable-bandwidth-percentage" || name == "incoming-reservable-pool0-bandwidth-percentage" || name == "incoming-reservable-pool1-bandwidth-percentage" || name == "is-resource-provider-installed" || name == "is-unnumbered" || name == "last-flooded-effective-maximum-reservable-bandwidth" || name == "link-address" || name == "link-id" || name == "maximum-reservable-bandwidth" || name == "maximum-reservable-pool0-bandwidth" || name == "maximum-reservable-pool1-bandwidth" || name == "outbound-admission-method" || name == "outgoing-reservable-bandwidth-percentage" || name == "outgoing-reservable-pool0-bandwidth-percentage" || name == "outgoing-reservable-pool1-bandwidth-percentage" || name == "physical-bandwidth" || name == "resource-provider" || name == "working-priority")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::FloodedAreas()
    :
    flooded_area{YType::str, "flooded-area"}
{

    yang_name = "flooded-areas"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::~FloodedAreas()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::has_data() const
{
    return flooded_area.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flooded_area.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooded-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flooded_area.is_set || is_set(flooded_area.yfilter)) leaf_name_data.push_back(flooded_area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flooded-area")
    {
        flooded_area = value;
        flooded_area.value_namespace = name_space;
        flooded_area.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flooded-area")
    {
        flooded_area.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooded-area")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::InterfaceSwitchingCapabilityDescriptor()
    :
    encoding{YType::uint8, "encoding"},
    key{YType::uint8, "key"},
    switching_capability{YType::uint8, "switching-capability"}
{

    yang_name = "interface-switching-capability-descriptor"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::~InterfaceSwitchingCapabilityDescriptor()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_data() const
{
    return encoding.is_set
	|| key.is_set
	|| switching_capability.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(switching_capability.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-switching-capability-descriptor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (switching_capability.is_set || is_set(switching_capability.yfilter)) leaf_name_data.push_back(switching_capability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-capability")
    {
        switching_capability = value;
        switching_capability.value_namespace = name_space;
        switching_capability.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "switching-capability")
    {
        switching_capability.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encoding" || name == "key" || name == "switching-capability")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::LinkFlags()
    :
    is_admin_up{YType::boolean, "is-admin-up"},
    is_mpls_te_on{YType::boolean, "is-mpls-te-on"},
    signaling_agent{YType::enumeration, "signaling-agent"}
{

    yang_name = "link-flags"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::~LinkFlags()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::has_data() const
{
    return is_admin_up.is_set
	|| is_mpls_te_on.is_set
	|| signaling_agent.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_admin_up.yfilter)
	|| ydk::is_set(is_mpls_te_on.yfilter)
	|| ydk::is_set(signaling_agent.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_admin_up.is_set || is_set(is_admin_up.yfilter)) leaf_name_data.push_back(is_admin_up.get_name_leafdata());
    if (is_mpls_te_on.is_set || is_set(is_mpls_te_on.yfilter)) leaf_name_data.push_back(is_mpls_te_on.get_name_leafdata());
    if (signaling_agent.is_set || is_set(signaling_agent.yfilter)) leaf_name_data.push_back(signaling_agent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-admin-up")
    {
        is_admin_up = value;
        is_admin_up.value_namespace = name_space;
        is_admin_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mpls-te-on")
    {
        is_mpls_te_on = value;
        is_mpls_te_on.value_namespace = name_space;
        is_mpls_te_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-agent")
    {
        signaling_agent = value;
        signaling_agent.value_namespace = name_space;
        signaling_agent.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-admin-up")
    {
        is_admin_up.yfilter = yfilter;
    }
    if(value_path == "is-mpls-te-on")
    {
        is_mpls_te_on.yfilter = yfilter;
    }
    if(value_path == "signaling-agent")
    {
        signaling_agent.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-admin-up" || name == "is-mpls-te-on" || name == "signaling-agent")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
        shared_risk_group.value_namespace = name_space;
        shared_risk_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::LinkExtendedAttribute()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "link-extended-attribute"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::~LinkExtendedAttribute()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::has_data() const
{
    return entry.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-extended-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::LinkForwadRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "link-forwad-ref-value"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::~LinkForwadRefValue()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-forwad-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::Lockout::Lockout()
    :
    is_lockout{YType::boolean, "is-lockout"},
    lockout_off_timestamp{YType::uint32, "lockout-off-timestamp"},
    lockout_on_timestamp{YType::uint32, "lockout-on-timestamp"}
{

    yang_name = "lockout"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::Lockout::~Lockout()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::Lockout::has_data() const
{
    return is_lockout.is_set
	|| lockout_off_timestamp.is_set
	|| lockout_on_timestamp.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::Lockout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_lockout.yfilter)
	|| ydk::is_set(lockout_off_timestamp.yfilter)
	|| ydk::is_set(lockout_on_timestamp.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::Lockout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lockout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::Lockout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_lockout.is_set || is_set(is_lockout.yfilter)) leaf_name_data.push_back(is_lockout.get_name_leafdata());
    if (lockout_off_timestamp.is_set || is_set(lockout_off_timestamp.yfilter)) leaf_name_data.push_back(lockout_off_timestamp.get_name_leafdata());
    if (lockout_on_timestamp.is_set || is_set(lockout_on_timestamp.yfilter)) leaf_name_data.push_back(lockout_on_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::Lockout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::Lockout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::Lockout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-lockout")
    {
        is_lockout = value;
        is_lockout.value_namespace = name_space;
        is_lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockout-off-timestamp")
    {
        lockout_off_timestamp = value;
        lockout_off_timestamp.value_namespace = name_space;
        lockout_off_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockout-on-timestamp")
    {
        lockout_on_timestamp = value;
        lockout_on_timestamp.value_namespace = name_space;
        lockout_on_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::Lockout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-lockout")
    {
        is_lockout.yfilter = yfilter;
    }
    if(value_path == "lockout-off-timestamp")
    {
        lockout_off_timestamp.yfilter = yfilter;
    }
    if(value_path == "lockout-on-timestamp")
    {
        lockout_on_timestamp.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::Lockout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-lockout" || name == "lockout-off-timestamp" || name == "lockout-on-timestamp")
        return true;
    return false;
}

MplsLcacStandby::LinkSummary::LinkSummary()
    :
    is_flooding_enabled{YType::boolean, "is-flooding-enabled"},
    is_role_standby{YType::boolean, "is-role-standby"},
    links{YType::uint16, "links"},
    maximum_links{YType::uint16, "maximum-links"}
    	,
    bandwidth_account_summary(std::make_shared<MplsLcacStandby::LinkSummary::BandwidthAccountSummary>())
{
    bandwidth_account_summary->parent = this;

    yang_name = "link-summary"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::LinkSummary::~LinkSummary()
{
}

bool MplsLcacStandby::LinkSummary::has_data() const
{
    for (std::size_t index=0; index<areas_summary.size(); index++)
    {
        if(areas_summary[index]->has_data())
            return true;
    }
    return is_flooding_enabled.is_set
	|| is_role_standby.is_set
	|| links.is_set
	|| maximum_links.is_set
	|| (bandwidth_account_summary !=  nullptr && bandwidth_account_summary->has_data());
}

bool MplsLcacStandby::LinkSummary::has_operation() const
{
    for (std::size_t index=0; index<areas_summary.size(); index++)
    {
        if(areas_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_flooding_enabled.yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(links.yfilter)
	|| ydk::is_set(maximum_links.yfilter)
	|| (bandwidth_account_summary !=  nullptr && bandwidth_account_summary->has_operation());
}

std::string MplsLcacStandby::LinkSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::LinkSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_flooding_enabled.is_set || is_set(is_flooding_enabled.yfilter)) leaf_name_data.push_back(is_flooding_enabled.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (maximum_links.is_set || is_set(maximum_links.yfilter)) leaf_name_data.push_back(maximum_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "areas-summary")
    {
        for(auto const & c : areas_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkSummary::AreasSummary>();
        c->parent = this;
        areas_summary.push_back(c);
        return c;
    }

    if(child_yang_name == "bandwidth-account-summary")
    {
        if(bandwidth_account_summary == nullptr)
        {
            bandwidth_account_summary = std::make_shared<MplsLcacStandby::LinkSummary::BandwidthAccountSummary>();
        }
        return bandwidth_account_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : areas_summary)
    {
        children[c->get_segment_path()] = c;
    }

    if(bandwidth_account_summary != nullptr)
    {
        children["bandwidth-account-summary"] = bandwidth_account_summary;
    }

    return children;
}

void MplsLcacStandby::LinkSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-flooding-enabled")
    {
        is_flooding_enabled = value;
        is_flooding_enabled.value_namespace = name_space;
        is_flooding_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-links")
    {
        maximum_links = value;
        maximum_links.value_namespace = name_space;
        maximum_links.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-flooding-enabled")
    {
        is_flooding_enabled.yfilter = yfilter;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
    if(value_path == "maximum-links")
    {
        maximum_links.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "areas-summary" || name == "bandwidth-account-summary" || name == "is-flooding-enabled" || name == "is-role-standby" || name == "links" || name == "maximum-links")
        return true;
    return false;
}

MplsLcacStandby::LinkSummary::AreasSummary::AreasSummary()
    :
    area_id{YType::str, "area-id"},
    igp_neighbors{YType::uint16, "igp-neighbors"},
    is_flooded{YType::boolean, "is-flooded"},
    is_periodic_flooding_on{YType::boolean, "is-periodic-flooding-on"},
    links_flooded{YType::uint16, "links-flooded"},
    local_node_router_id{YType::str, "local-node-router-id"},
    periodic_flooding_interval{YType::uint16, "periodic-flooding-interval"},
    protocol{YType::enumeration, "protocol"},
    system_id{YType::str, "system-id"}
{

    yang_name = "areas-summary"; yang_parent_name = "link-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::LinkSummary::AreasSummary::~AreasSummary()
{
}

bool MplsLcacStandby::LinkSummary::AreasSummary::has_data() const
{
    return area_id.is_set
	|| igp_neighbors.is_set
	|| is_flooded.is_set
	|| is_periodic_flooding_on.is_set
	|| links_flooded.is_set
	|| local_node_router_id.is_set
	|| periodic_flooding_interval.is_set
	|| protocol.is_set
	|| system_id.is_set;
}

bool MplsLcacStandby::LinkSummary::AreasSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(igp_neighbors.yfilter)
	|| ydk::is_set(is_flooded.yfilter)
	|| ydk::is_set(is_periodic_flooding_on.yfilter)
	|| ydk::is_set(links_flooded.yfilter)
	|| ydk::is_set(local_node_router_id.yfilter)
	|| ydk::is_set(periodic_flooding_interval.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string MplsLcacStandby::LinkSummary::AreasSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/link-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::LinkSummary::AreasSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkSummary::AreasSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (igp_neighbors.is_set || is_set(igp_neighbors.yfilter)) leaf_name_data.push_back(igp_neighbors.get_name_leafdata());
    if (is_flooded.is_set || is_set(is_flooded.yfilter)) leaf_name_data.push_back(is_flooded.get_name_leafdata());
    if (is_periodic_flooding_on.is_set || is_set(is_periodic_flooding_on.yfilter)) leaf_name_data.push_back(is_periodic_flooding_on.get_name_leafdata());
    if (links_flooded.is_set || is_set(links_flooded.yfilter)) leaf_name_data.push_back(links_flooded.get_name_leafdata());
    if (local_node_router_id.is_set || is_set(local_node_router_id.yfilter)) leaf_name_data.push_back(local_node_router_id.get_name_leafdata());
    if (periodic_flooding_interval.is_set || is_set(periodic_flooding_interval.yfilter)) leaf_name_data.push_back(periodic_flooding_interval.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkSummary::AreasSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkSummary::AreasSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkSummary::AreasSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors = value;
        igp_neighbors.value_namespace = name_space;
        igp_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flooded")
    {
        is_flooded = value;
        is_flooded.value_namespace = name_space;
        is_flooded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-periodic-flooding-on")
    {
        is_periodic_flooding_on = value;
        is_periodic_flooding_on.value_namespace = name_space;
        is_periodic_flooding_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links-flooded")
    {
        links_flooded = value;
        links_flooded.value_namespace = name_space;
        links_flooded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-node-router-id")
    {
        local_node_router_id = value;
        local_node_router_id.value_namespace = name_space;
        local_node_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-flooding-interval")
    {
        periodic_flooding_interval = value;
        periodic_flooding_interval.value_namespace = name_space;
        periodic_flooding_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkSummary::AreasSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors.yfilter = yfilter;
    }
    if(value_path == "is-flooded")
    {
        is_flooded.yfilter = yfilter;
    }
    if(value_path == "is-periodic-flooding-on")
    {
        is_periodic_flooding_on.yfilter = yfilter;
    }
    if(value_path == "links-flooded")
    {
        links_flooded.yfilter = yfilter;
    }
    if(value_path == "local-node-router-id")
    {
        local_node_router_id.yfilter = yfilter;
    }
    if(value_path == "periodic-flooding-interval")
    {
        periodic_flooding_interval.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkSummary::AreasSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-id" || name == "igp-neighbors" || name == "is-flooded" || name == "is-periodic-flooding-on" || name == "links-flooded" || name == "local-node-router-id" || name == "periodic-flooding-interval" || name == "protocol" || name == "system-id")
        return true;
    return false;
}

MplsLcacStandby::LinkSummary::BandwidthAccountSummary::BandwidthAccountSummary()
    :
    application_interval{YType::uint32, "application-interval"},
    application_time_remaining{YType::uint32, "application-time-remaining"},
    is_bandwidth_account_enabled{YType::boolean, "is-bandwidth-account-enabled"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_time_remaining{YType::uint32, "sample-time-remaining"}
{

    yang_name = "bandwidth-account-summary"; yang_parent_name = "link-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::LinkSummary::BandwidthAccountSummary::~BandwidthAccountSummary()
{
}

bool MplsLcacStandby::LinkSummary::BandwidthAccountSummary::has_data() const
{
    return application_interval.is_set
	|| application_time_remaining.is_set
	|| is_bandwidth_account_enabled.is_set
	|| sample_interval.is_set
	|| sample_time_remaining.is_set;
}

bool MplsLcacStandby::LinkSummary::BandwidthAccountSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_interval.yfilter)
	|| ydk::is_set(application_time_remaining.yfilter)
	|| ydk::is_set(is_bandwidth_account_enabled.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(sample_time_remaining.yfilter);
}

std::string MplsLcacStandby::LinkSummary::BandwidthAccountSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/link-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::LinkSummary::BandwidthAccountSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkSummary::BandwidthAccountSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_interval.is_set || is_set(application_interval.yfilter)) leaf_name_data.push_back(application_interval.get_name_leafdata());
    if (application_time_remaining.is_set || is_set(application_time_remaining.yfilter)) leaf_name_data.push_back(application_time_remaining.get_name_leafdata());
    if (is_bandwidth_account_enabled.is_set || is_set(is_bandwidth_account_enabled.yfilter)) leaf_name_data.push_back(is_bandwidth_account_enabled.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_time_remaining.is_set || is_set(sample_time_remaining.yfilter)) leaf_name_data.push_back(sample_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkSummary::BandwidthAccountSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkSummary::BandwidthAccountSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::LinkSummary::BandwidthAccountSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-interval")
    {
        application_interval = value;
        application_interval.value_namespace = name_space;
        application_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-time-remaining")
    {
        application_time_remaining = value;
        application_time_remaining.value_namespace = name_space;
        application_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled = value;
        is_bandwidth_account_enabled.value_namespace = name_space;
        is_bandwidth_account_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-time-remaining")
    {
        sample_time_remaining = value;
        sample_time_remaining.value_namespace = name_space;
        sample_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkSummary::BandwidthAccountSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-interval")
    {
        application_interval.yfilter = yfilter;
    }
    if(value_path == "application-time-remaining")
    {
        application_time_remaining.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "sample-time-remaining")
    {
        sample_time_remaining.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkSummary::BandwidthAccountSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-interval" || name == "application-time-remaining" || name == "is-bandwidth-account-enabled" || name == "sample-interval" || name == "sample-time-remaining")
        return true;
    return false;
}

MplsLcacStandby::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Neighbors::~Neighbors()
{
}

bool MplsLcacStandby::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::Neighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsLcacStandby::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

MplsLcacStandby::Neighbors::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Neighbors::Neighbor::~Neighbor()
{
}

bool MplsLcacStandby::Neighbors::Neighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool MplsLcacStandby::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsLcacStandby::Neighbors::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsLcacStandby::Neighbors::Neighbor::Neighbor_>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "interface-name")
        return true;
    return false;
}

MplsLcacStandby::Neighbors::Neighbor::Neighbor_::Neighbor_()
    :
    area_id{YType::str, "area-id"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::Neighbors::Neighbor::Neighbor_::~Neighbor_()
{
}

bool MplsLcacStandby::Neighbors::Neighbor::Neighbor_::has_data() const
{
    return area_id.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set;
}

bool MplsLcacStandby::Neighbors::Neighbor::Neighbor_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_id.yfilter);
}

std::string MplsLcacStandby::Neighbors::Neighbor::Neighbor_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Neighbors::Neighbor::Neighbor_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Neighbors::Neighbor::Neighbor_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Neighbors::Neighbor::Neighbor_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Neighbors::Neighbor::Neighbor_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLcacStandby::Neighbors::Neighbor::Neighbor_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
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
}

bool MplsLcacStandby::Neighbors::Neighbor::Neighbor_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-id" || name == "interface-name" || name == "neighbor-address" || name == "neighbor-id")
        return true;
    return false;
}

MplsLcacStandby::PreemptionEvents::PreemptionEvents()
{

    yang_name = "preemption-events"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::PreemptionEvents::~PreemptionEvents()
{
}

bool MplsLcacStandby::PreemptionEvents::has_data() const
{
    for (std::size_t index=0; index<preemption_event.size(); index++)
    {
        if(preemption_event[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::PreemptionEvents::has_operation() const
{
    for (std::size_t index=0; index<preemption_event.size(); index++)
    {
        if(preemption_event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::PreemptionEvents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::PreemptionEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preemption-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::PreemptionEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::PreemptionEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "preemption-event")
    {
        for(auto const & c : preemption_event)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::PreemptionEvents::PreemptionEvent>();
        c->parent = this;
        preemption_event.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::PreemptionEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : preemption_event)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::PreemptionEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::PreemptionEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::PreemptionEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preemption-event")
        return true;
    return false;
}

MplsLcacStandby::PreemptionEvents::PreemptionEvent::PreemptionEvent()
    :
    event_index{YType::uint32, "event-index"},
    bandwidth_overshoot0{YType::uint64, "bandwidth-overshoot0"},
    bandwidth_overshoot1{YType::uint64, "bandwidth-overshoot1"},
    bandwidth_type{YType::uint8, "bandwidth-type"},
    destination_address{YType::str, "destination-address"},
    event_time{YType::uint32, "event-time"},
    hard_preempted_bandwidth_bc0{YType::uint64, "hard-preempted-bandwidth-bc0"},
    hard_preempted_bandwidth_bc1{YType::uint64, "hard-preempted-bandwidth-bc1"},
    hard_preempted_ls_ps{YType::uint16, "hard-preempted-ls-ps"},
    hard_preempted_tunnels{YType::uint16, "hard-preempted-tunnels"},
    hold_priority{YType::uint8, "hold-priority"},
    interface_name{YType::str, "interface-name"},
    ls_ps{YType::uint16, "ls-ps"},
    lsp_id{YType::uint16, "lsp-id"},
    new_bandwidth_bc0{YType::uint64, "new-bandwidth-bc0"},
    new_bandwidth_bc1{YType::uint64, "new-bandwidth-bc1"},
    old_bandwidth_bc0{YType::uint64, "old-bandwidth-bc0"},
    old_bandwidth_bc1{YType::uint64, "old-bandwidth-bc1"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preempted_fr_rrewrite_bandwidth_bc0{YType::uint64, "soft-preempted-fr-rrewrite-bandwidth-bc0"},
    soft_preempted_fr_rrewrite_bandwidth_bc1{YType::uint64, "soft-preempted-fr-rrewrite-bandwidth-bc1"},
    soft_preempted_ls_ps{YType::uint16, "soft-preempted-ls-ps"},
    soft_preempted_ls_ps_fr_rrewrite{YType::uint16, "soft-preempted-ls-ps-fr-rrewrite"},
    soft_preempted_tunnels{YType::uint16, "soft-preempted-tunnels"},
    soft_preempted_tunnels_fr_rrewrite{YType::uint16, "soft-preempted-tunnels-fr-rrewrite"},
    softly_preempted_bandwidth_bc0{YType::uint64, "softly-preempted-bandwidth-bc0"},
    softly_preempted_bandwidth_bc1{YType::uint64, "softly-preempted-bandwidth-bc1"},
    source_address{YType::str, "source-address"},
    total_preempted_bandwidth_bc0{YType::uint64, "total-preempted-bandwidth-bc0"},
    total_preempted_bandwidth_bc1{YType::uint64, "total-preempted-bandwidth-bc1"},
    tunnel_id{YType::uint16, "tunnel-id"},
    tunnels{YType::uint16, "tunnels"}
{

    yang_name = "preemption-event"; yang_parent_name = "preemption-events"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::PreemptionEvents::PreemptionEvent::~PreemptionEvent()
{
}

bool MplsLcacStandby::PreemptionEvents::PreemptionEvent::has_data() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_data())
            return true;
    }
    return event_index.is_set
	|| bandwidth_overshoot0.is_set
	|| bandwidth_overshoot1.is_set
	|| bandwidth_type.is_set
	|| destination_address.is_set
	|| event_time.is_set
	|| hard_preempted_bandwidth_bc0.is_set
	|| hard_preempted_bandwidth_bc1.is_set
	|| hard_preempted_ls_ps.is_set
	|| hard_preempted_tunnels.is_set
	|| hold_priority.is_set
	|| interface_name.is_set
	|| ls_ps.is_set
	|| lsp_id.is_set
	|| new_bandwidth_bc0.is_set
	|| new_bandwidth_bc1.is_set
	|| old_bandwidth_bc0.is_set
	|| old_bandwidth_bc1.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| soft_preempted_fr_rrewrite_bandwidth_bc0.is_set
	|| soft_preempted_fr_rrewrite_bandwidth_bc1.is_set
	|| soft_preempted_ls_ps.is_set
	|| soft_preempted_ls_ps_fr_rrewrite.is_set
	|| soft_preempted_tunnels.is_set
	|| soft_preempted_tunnels_fr_rrewrite.is_set
	|| softly_preempted_bandwidth_bc0.is_set
	|| softly_preempted_bandwidth_bc1.is_set
	|| source_address.is_set
	|| total_preempted_bandwidth_bc0.is_set
	|| total_preempted_bandwidth_bc1.is_set
	|| tunnel_id.is_set
	|| tunnels.is_set;
}

bool MplsLcacStandby::PreemptionEvents::PreemptionEvent::has_operation() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_index.yfilter)
	|| ydk::is_set(bandwidth_overshoot0.yfilter)
	|| ydk::is_set(bandwidth_overshoot1.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(event_time.yfilter)
	|| ydk::is_set(hard_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(hard_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(hard_preempted_ls_ps.yfilter)
	|| ydk::is_set(hard_preempted_tunnels.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(new_bandwidth_bc0.yfilter)
	|| ydk::is_set(new_bandwidth_bc1.yfilter)
	|| ydk::is_set(old_bandwidth_bc0.yfilter)
	|| ydk::is_set(old_bandwidth_bc1.yfilter)
	|| ydk::is_set(requested_bandwidth.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(soft_preempted_fr_rrewrite_bandwidth_bc0.yfilter)
	|| ydk::is_set(soft_preempted_fr_rrewrite_bandwidth_bc1.yfilter)
	|| ydk::is_set(soft_preempted_ls_ps.yfilter)
	|| ydk::is_set(soft_preempted_ls_ps_fr_rrewrite.yfilter)
	|| ydk::is_set(soft_preempted_tunnels.yfilter)
	|| ydk::is_set(soft_preempted_tunnels_fr_rrewrite.yfilter)
	|| ydk::is_set(softly_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(softly_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(total_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(total_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnels.yfilter);
}

std::string MplsLcacStandby::PreemptionEvents::PreemptionEvent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/preemption-events/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::PreemptionEvents::PreemptionEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preemption-event" <<"[event-index='" <<event_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::PreemptionEvents::PreemptionEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_index.is_set || is_set(event_index.yfilter)) leaf_name_data.push_back(event_index.get_name_leafdata());
    if (bandwidth_overshoot0.is_set || is_set(bandwidth_overshoot0.yfilter)) leaf_name_data.push_back(bandwidth_overshoot0.get_name_leafdata());
    if (bandwidth_overshoot1.is_set || is_set(bandwidth_overshoot1.yfilter)) leaf_name_data.push_back(bandwidth_overshoot1.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (event_time.is_set || is_set(event_time.yfilter)) leaf_name_data.push_back(event_time.get_name_leafdata());
    if (hard_preempted_bandwidth_bc0.is_set || is_set(hard_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(hard_preempted_bandwidth_bc0.get_name_leafdata());
    if (hard_preempted_bandwidth_bc1.is_set || is_set(hard_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(hard_preempted_bandwidth_bc1.get_name_leafdata());
    if (hard_preempted_ls_ps.is_set || is_set(hard_preempted_ls_ps.yfilter)) leaf_name_data.push_back(hard_preempted_ls_ps.get_name_leafdata());
    if (hard_preempted_tunnels.is_set || is_set(hard_preempted_tunnels.yfilter)) leaf_name_data.push_back(hard_preempted_tunnels.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.yfilter)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (new_bandwidth_bc0.is_set || is_set(new_bandwidth_bc0.yfilter)) leaf_name_data.push_back(new_bandwidth_bc0.get_name_leafdata());
    if (new_bandwidth_bc1.is_set || is_set(new_bandwidth_bc1.yfilter)) leaf_name_data.push_back(new_bandwidth_bc1.get_name_leafdata());
    if (old_bandwidth_bc0.is_set || is_set(old_bandwidth_bc0.yfilter)) leaf_name_data.push_back(old_bandwidth_bc0.get_name_leafdata());
    if (old_bandwidth_bc1.is_set || is_set(old_bandwidth_bc1.yfilter)) leaf_name_data.push_back(old_bandwidth_bc1.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.yfilter)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preempted_fr_rrewrite_bandwidth_bc0.is_set || is_set(soft_preempted_fr_rrewrite_bandwidth_bc0.yfilter)) leaf_name_data.push_back(soft_preempted_fr_rrewrite_bandwidth_bc0.get_name_leafdata());
    if (soft_preempted_fr_rrewrite_bandwidth_bc1.is_set || is_set(soft_preempted_fr_rrewrite_bandwidth_bc1.yfilter)) leaf_name_data.push_back(soft_preempted_fr_rrewrite_bandwidth_bc1.get_name_leafdata());
    if (soft_preempted_ls_ps.is_set || is_set(soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(soft_preempted_ls_ps.get_name_leafdata());
    if (soft_preempted_ls_ps_fr_rrewrite.is_set || is_set(soft_preempted_ls_ps_fr_rrewrite.yfilter)) leaf_name_data.push_back(soft_preempted_ls_ps_fr_rrewrite.get_name_leafdata());
    if (soft_preempted_tunnels.is_set || is_set(soft_preempted_tunnels.yfilter)) leaf_name_data.push_back(soft_preempted_tunnels.get_name_leafdata());
    if (soft_preempted_tunnels_fr_rrewrite.is_set || is_set(soft_preempted_tunnels_fr_rrewrite.yfilter)) leaf_name_data.push_back(soft_preempted_tunnels_fr_rrewrite.get_name_leafdata());
    if (softly_preempted_bandwidth_bc0.is_set || is_set(softly_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(softly_preempted_bandwidth_bc0.get_name_leafdata());
    if (softly_preempted_bandwidth_bc1.is_set || is_set(softly_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(softly_preempted_bandwidth_bc1.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (total_preempted_bandwidth_bc0.is_set || is_set(total_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(total_preempted_bandwidth_bc0.get_name_leafdata());
    if (total_preempted_bandwidth_bc1.is_set || is_set(total_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(total_preempted_bandwidth_bc1.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.yfilter)) leaf_name_data.push_back(tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::PreemptionEvents::PreemptionEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp")
    {
        for(auto const & c : lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp>();
        c->parent = this;
        lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::PreemptionEvents::PreemptionEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::PreemptionEvents::PreemptionEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-index")
    {
        event_index = value;
        event_index.value_namespace = name_space;
        event_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-overshoot0")
    {
        bandwidth_overshoot0 = value;
        bandwidth_overshoot0.value_namespace = name_space;
        bandwidth_overshoot0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-overshoot1")
    {
        bandwidth_overshoot1 = value;
        bandwidth_overshoot1.value_namespace = name_space;
        bandwidth_overshoot1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-time")
    {
        event_time = value;
        event_time.value_namespace = name_space;
        event_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hard-preempted-bandwidth-bc0")
    {
        hard_preempted_bandwidth_bc0 = value;
        hard_preempted_bandwidth_bc0.value_namespace = name_space;
        hard_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hard-preempted-bandwidth-bc1")
    {
        hard_preempted_bandwidth_bc1 = value;
        hard_preempted_bandwidth_bc1.value_namespace = name_space;
        hard_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hard-preempted-ls-ps")
    {
        hard_preempted_ls_ps = value;
        hard_preempted_ls_ps.value_namespace = name_space;
        hard_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hard-preempted-tunnels")
    {
        hard_preempted_tunnels = value;
        hard_preempted_tunnels.value_namespace = name_space;
        hard_preempted_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
        ls_ps.value_namespace = name_space;
        ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-bandwidth-bc0")
    {
        new_bandwidth_bc0 = value;
        new_bandwidth_bc0.value_namespace = name_space;
        new_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-bandwidth-bc1")
    {
        new_bandwidth_bc1 = value;
        new_bandwidth_bc1.value_namespace = name_space;
        new_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-bandwidth-bc0")
    {
        old_bandwidth_bc0 = value;
        old_bandwidth_bc0.value_namespace = name_space;
        old_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-bandwidth-bc1")
    {
        old_bandwidth_bc1 = value;
        old_bandwidth_bc1.value_namespace = name_space;
        old_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
        requested_bandwidth.value_namespace = name_space;
        requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc0")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc0 = value;
        soft_preempted_fr_rrewrite_bandwidth_bc0.value_namespace = name_space;
        soft_preempted_fr_rrewrite_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc1")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc1 = value;
        soft_preempted_fr_rrewrite_bandwidth_bc1.value_namespace = name_space;
        soft_preempted_fr_rrewrite_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-ls-ps")
    {
        soft_preempted_ls_ps = value;
        soft_preempted_ls_ps.value_namespace = name_space;
        soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-ls-ps-fr-rrewrite")
    {
        soft_preempted_ls_ps_fr_rrewrite = value;
        soft_preempted_ls_ps_fr_rrewrite.value_namespace = name_space;
        soft_preempted_ls_ps_fr_rrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-tunnels")
    {
        soft_preempted_tunnels = value;
        soft_preempted_tunnels.value_namespace = name_space;
        soft_preempted_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-tunnels-fr-rrewrite")
    {
        soft_preempted_tunnels_fr_rrewrite = value;
        soft_preempted_tunnels_fr_rrewrite.value_namespace = name_space;
        soft_preempted_tunnels_fr_rrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "softly-preempted-bandwidth-bc0")
    {
        softly_preempted_bandwidth_bc0 = value;
        softly_preempted_bandwidth_bc0.value_namespace = name_space;
        softly_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "softly-preempted-bandwidth-bc1")
    {
        softly_preempted_bandwidth_bc1 = value;
        softly_preempted_bandwidth_bc1.value_namespace = name_space;
        softly_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-preempted-bandwidth-bc0")
    {
        total_preempted_bandwidth_bc0 = value;
        total_preempted_bandwidth_bc0.value_namespace = name_space;
        total_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-preempted-bandwidth-bc1")
    {
        total_preempted_bandwidth_bc1 = value;
        total_preempted_bandwidth_bc1.value_namespace = name_space;
        total_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
        tunnels.value_namespace = name_space;
        tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::PreemptionEvents::PreemptionEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-index")
    {
        event_index.yfilter = yfilter;
    }
    if(value_path == "bandwidth-overshoot0")
    {
        bandwidth_overshoot0.yfilter = yfilter;
    }
    if(value_path == "bandwidth-overshoot1")
    {
        bandwidth_overshoot1.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "event-time")
    {
        event_time.yfilter = yfilter;
    }
    if(value_path == "hard-preempted-bandwidth-bc0")
    {
        hard_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "hard-preempted-bandwidth-bc1")
    {
        hard_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "hard-preempted-ls-ps")
    {
        hard_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "hard-preempted-tunnels")
    {
        hard_preempted_tunnels.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "ls-ps")
    {
        ls_ps.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "new-bandwidth-bc0")
    {
        new_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "new-bandwidth-bc1")
    {
        new_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "old-bandwidth-bc0")
    {
        old_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "old-bandwidth-bc1")
    {
        old_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc0")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc1")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-ls-ps")
    {
        soft_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-ls-ps-fr-rrewrite")
    {
        soft_preempted_ls_ps_fr_rrewrite.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-tunnels")
    {
        soft_preempted_tunnels.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-tunnels-fr-rrewrite")
    {
        soft_preempted_tunnels_fr_rrewrite.yfilter = yfilter;
    }
    if(value_path == "softly-preempted-bandwidth-bc0")
    {
        softly_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "softly-preempted-bandwidth-bc1")
    {
        softly_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "total-preempted-bandwidth-bc0")
    {
        total_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "total-preempted-bandwidth-bc1")
    {
        total_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnels")
    {
        tunnels.yfilter = yfilter;
    }
}

bool MplsLcacStandby::PreemptionEvents::PreemptionEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp" || name == "event-index" || name == "bandwidth-overshoot0" || name == "bandwidth-overshoot1" || name == "bandwidth-type" || name == "destination-address" || name == "event-time" || name == "hard-preempted-bandwidth-bc0" || name == "hard-preempted-bandwidth-bc1" || name == "hard-preempted-ls-ps" || name == "hard-preempted-tunnels" || name == "hold-priority" || name == "interface-name" || name == "ls-ps" || name == "lsp-id" || name == "new-bandwidth-bc0" || name == "new-bandwidth-bc1" || name == "old-bandwidth-bc0" || name == "old-bandwidth-bc1" || name == "requested-bandwidth" || name == "setup-priority" || name == "soft-preempted-fr-rrewrite-bandwidth-bc0" || name == "soft-preempted-fr-rrewrite-bandwidth-bc1" || name == "soft-preempted-ls-ps" || name == "soft-preempted-ls-ps-fr-rrewrite" || name == "soft-preempted-tunnels" || name == "soft-preempted-tunnels-fr-rrewrite" || name == "softly-preempted-bandwidth-bc0" || name == "softly-preempted-bandwidth-bc1" || name == "source-address" || name == "total-preempted-bandwidth-bc0" || name == "total-preempted-bandwidth-bc1" || name == "tunnel-id" || name == "tunnels")
        return true;
    return false;
}

MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::Lsp()
    :
    bandwidth_preempted{YType::boolean, "bandwidth-preempted"},
    bandwidth_type{YType::uint8, "bandwidth-type"},
    destination_address{YType::str, "destination-address"},
    hold_priority{YType::uint8, "hold-priority"},
    lsp_id{YType::uint16, "lsp-id"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preempted{YType::boolean, "soft-preempted"},
    soft_preempted_fr_rrewrite{YType::boolean, "soft-preempted-fr-rrewrite"},
    soft_preemption_timeout{YType::uint16, "soft-preemption-timeout"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "lsp"; yang_parent_name = "preemption-event"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::~Lsp()
{
}

bool MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::has_data() const
{
    return bandwidth_preempted.is_set
	|| bandwidth_type.is_set
	|| destination_address.is_set
	|| hold_priority.is_set
	|| lsp_id.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| soft_preempted.is_set
	|| soft_preempted_fr_rrewrite.is_set
	|| soft_preemption_timeout.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_preempted.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(requested_bandwidth.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(soft_preempted.yfilter)
	|| ydk::is_set(soft_preempted_fr_rrewrite.yfilter)
	|| ydk::is_set(soft_preemption_timeout.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_preempted.is_set || is_set(bandwidth_preempted.yfilter)) leaf_name_data.push_back(bandwidth_preempted.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.yfilter)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preempted.is_set || is_set(soft_preempted.yfilter)) leaf_name_data.push_back(soft_preempted.get_name_leafdata());
    if (soft_preempted_fr_rrewrite.is_set || is_set(soft_preempted_fr_rrewrite.yfilter)) leaf_name_data.push_back(soft_preempted_fr_rrewrite.get_name_leafdata());
    if (soft_preemption_timeout.is_set || is_set(soft_preemption_timeout.yfilter)) leaf_name_data.push_back(soft_preemption_timeout.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-preempted")
    {
        bandwidth_preempted = value;
        bandwidth_preempted.value_namespace = name_space;
        bandwidth_preempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
        requested_bandwidth.value_namespace = name_space;
        requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted")
    {
        soft_preempted = value;
        soft_preempted.value_namespace = name_space;
        soft_preempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-fr-rrewrite")
    {
        soft_preempted_fr_rrewrite = value;
        soft_preempted_fr_rrewrite.value_namespace = name_space;
        soft_preempted_fr_rrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout = value;
        soft_preemption_timeout.value_namespace = name_space;
        soft_preemption_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-preempted")
    {
        bandwidth_preempted.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "soft-preempted")
    {
        soft_preempted.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-fr-rrewrite")
    {
        soft_preempted_fr_rrewrite.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-preempted" || name == "bandwidth-type" || name == "destination-address" || name == "hold-priority" || name == "lsp-id" || name == "requested-bandwidth" || name == "setup-priority" || name == "soft-preempted" || name == "soft-preempted-fr-rrewrite" || name == "soft-preemption-timeout" || name == "source-address" || name == "tunnel-id")
        return true;
    return false;
}

MplsLcacStandby::SoftPreemptionGlobalInfo::SoftPreemptionGlobalInfo()
    :
    is_configured{YType::boolean, "is-configured"},
    is_timeout_interval_configured{YType::boolean, "is-timeout-interval-configured"},
    timeout_interval{YType::uint32, "timeout-interval"}
{

    yang_name = "soft-preemption-global-info"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::SoftPreemptionGlobalInfo::~SoftPreemptionGlobalInfo()
{
}

bool MplsLcacStandby::SoftPreemptionGlobalInfo::has_data() const
{
    return is_configured.is_set
	|| is_timeout_interval_configured.is_set
	|| timeout_interval.is_set;
}

bool MplsLcacStandby::SoftPreemptionGlobalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_configured.yfilter)
	|| ydk::is_set(is_timeout_interval_configured.yfilter)
	|| ydk::is_set(timeout_interval.yfilter);
}

std::string MplsLcacStandby::SoftPreemptionGlobalInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::SoftPreemptionGlobalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption-global-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::SoftPreemptionGlobalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (is_timeout_interval_configured.is_set || is_set(is_timeout_interval_configured.yfilter)) leaf_name_data.push_back(is_timeout_interval_configured.get_name_leafdata());
    if (timeout_interval.is_set || is_set(timeout_interval.yfilter)) leaf_name_data.push_back(timeout_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::SoftPreemptionGlobalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::SoftPreemptionGlobalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::SoftPreemptionGlobalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-timeout-interval-configured")
    {
        is_timeout_interval_configured = value;
        is_timeout_interval_configured.value_namespace = name_space;
        is_timeout_interval_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-interval")
    {
        timeout_interval = value;
        timeout_interval.value_namespace = name_space;
        timeout_interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::SoftPreemptionGlobalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
    if(value_path == "is-timeout-interval-configured")
    {
        is_timeout_interval_configured.yfilter = yfilter;
    }
    if(value_path == "timeout-interval")
    {
        timeout_interval.yfilter = yfilter;
    }
}

bool MplsLcacStandby::SoftPreemptionGlobalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-configured" || name == "is-timeout-interval-configured" || name == "timeout-interval")
        return true;
    return false;
}

MplsLcacStandby::SoftPreemptions::SoftPreemptions()
{

    yang_name = "soft-preemptions"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::SoftPreemptions::~SoftPreemptions()
{
}

bool MplsLcacStandby::SoftPreemptions::has_data() const
{
    for (std::size_t index=0; index<soft_preemption.size(); index++)
    {
        if(soft_preemption[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::SoftPreemptions::has_operation() const
{
    for (std::size_t index=0; index<soft_preemption.size(); index++)
    {
        if(soft_preemption[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::SoftPreemptions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::SoftPreemptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemptions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::SoftPreemptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::SoftPreemptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "soft-preemption")
    {
        for(auto const & c : soft_preemption)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::SoftPreemptions::SoftPreemption>();
        c->parent = this;
        soft_preemption.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::SoftPreemptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : soft_preemption)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::SoftPreemptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::SoftPreemptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::SoftPreemptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "soft-preemption")
        return true;
    return false;
}

MplsLcacStandby::SoftPreemptions::SoftPreemption::SoftPreemption()
    :
    interface_name{YType::str, "interface-name"},
    current_over_subscribed_bandwidth_bc0{YType::uint64, "current-over-subscribed-bandwidth-bc0"},
    current_over_subscribed_bandwidth_bc1{YType::uint64, "current-over-subscribed-bandwidth-bc1"},
    current_soft_preempted_bandwidth_bc0{YType::uint64, "current-soft-preempted-bandwidth-bc0"},
    current_soft_preempted_bandwidth_bc1{YType::uint64, "current-soft-preempted-bandwidth-bc1"},
    link_address{YType::str, "link-address"},
    release_soft_preempted_bandwidth_bc0{YType::uint64, "release-soft-preempted-bandwidth-bc0"},
    release_soft_preempted_bandwidth_bc1{YType::uint64, "release-soft-preempted-bandwidth-bc1"},
    total_soft_preempted_bandwidth_bc0{YType::uint64, "total-soft-preempted-bandwidth-bc0"},
    total_soft_preempted_bandwidth_bc1{YType::uint64, "total-soft-preempted-bandwidth-bc1"}
{

    yang_name = "soft-preemption"; yang_parent_name = "soft-preemptions"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::SoftPreemptions::SoftPreemption::~SoftPreemption()
{
}

bool MplsLcacStandby::SoftPreemptions::SoftPreemption::has_data() const
{
    for (std::size_t index=0; index<current_soft_preemption_lsp.size(); index++)
    {
        if(current_soft_preemption_lsp[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| current_over_subscribed_bandwidth_bc0.is_set
	|| current_over_subscribed_bandwidth_bc1.is_set
	|| current_soft_preempted_bandwidth_bc0.is_set
	|| current_soft_preempted_bandwidth_bc1.is_set
	|| link_address.is_set
	|| release_soft_preempted_bandwidth_bc0.is_set
	|| release_soft_preempted_bandwidth_bc1.is_set
	|| total_soft_preempted_bandwidth_bc0.is_set
	|| total_soft_preempted_bandwidth_bc1.is_set;
}

bool MplsLcacStandby::SoftPreemptions::SoftPreemption::has_operation() const
{
    for (std::size_t index=0; index<current_soft_preemption_lsp.size(); index++)
    {
        if(current_soft_preemption_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(current_over_subscribed_bandwidth_bc0.yfilter)
	|| ydk::is_set(current_over_subscribed_bandwidth_bc1.yfilter)
	|| ydk::is_set(current_soft_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(current_soft_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(release_soft_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(release_soft_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(total_soft_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(total_soft_preempted_bandwidth_bc1.yfilter);
}

std::string MplsLcacStandby::SoftPreemptions::SoftPreemption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/soft-preemptions/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::SoftPreemptions::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::SoftPreemptions::SoftPreemption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (current_over_subscribed_bandwidth_bc0.is_set || is_set(current_over_subscribed_bandwidth_bc0.yfilter)) leaf_name_data.push_back(current_over_subscribed_bandwidth_bc0.get_name_leafdata());
    if (current_over_subscribed_bandwidth_bc1.is_set || is_set(current_over_subscribed_bandwidth_bc1.yfilter)) leaf_name_data.push_back(current_over_subscribed_bandwidth_bc1.get_name_leafdata());
    if (current_soft_preempted_bandwidth_bc0.is_set || is_set(current_soft_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(current_soft_preempted_bandwidth_bc0.get_name_leafdata());
    if (current_soft_preempted_bandwidth_bc1.is_set || is_set(current_soft_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(current_soft_preempted_bandwidth_bc1.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (release_soft_preempted_bandwidth_bc0.is_set || is_set(release_soft_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(release_soft_preempted_bandwidth_bc0.get_name_leafdata());
    if (release_soft_preempted_bandwidth_bc1.is_set || is_set(release_soft_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(release_soft_preempted_bandwidth_bc1.get_name_leafdata());
    if (total_soft_preempted_bandwidth_bc0.is_set || is_set(total_soft_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(total_soft_preempted_bandwidth_bc0.get_name_leafdata());
    if (total_soft_preempted_bandwidth_bc1.is_set || is_set(total_soft_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(total_soft_preempted_bandwidth_bc1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::SoftPreemptions::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-soft-preemption-lsp")
    {
        for(auto const & c : current_soft_preemption_lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp>();
        c->parent = this;
        current_soft_preemption_lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::SoftPreemptions::SoftPreemption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : current_soft_preemption_lsp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::SoftPreemptions::SoftPreemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-over-subscribed-bandwidth-bc0")
    {
        current_over_subscribed_bandwidth_bc0 = value;
        current_over_subscribed_bandwidth_bc0.value_namespace = name_space;
        current_over_subscribed_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-over-subscribed-bandwidth-bc1")
    {
        current_over_subscribed_bandwidth_bc1 = value;
        current_over_subscribed_bandwidth_bc1.value_namespace = name_space;
        current_over_subscribed_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-soft-preempted-bandwidth-bc0")
    {
        current_soft_preempted_bandwidth_bc0 = value;
        current_soft_preempted_bandwidth_bc0.value_namespace = name_space;
        current_soft_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-soft-preempted-bandwidth-bc1")
    {
        current_soft_preempted_bandwidth_bc1 = value;
        current_soft_preempted_bandwidth_bc1.value_namespace = name_space;
        current_soft_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "release-soft-preempted-bandwidth-bc0")
    {
        release_soft_preempted_bandwidth_bc0 = value;
        release_soft_preempted_bandwidth_bc0.value_namespace = name_space;
        release_soft_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "release-soft-preempted-bandwidth-bc1")
    {
        release_soft_preempted_bandwidth_bc1 = value;
        release_soft_preempted_bandwidth_bc1.value_namespace = name_space;
        release_soft_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-soft-preempted-bandwidth-bc0")
    {
        total_soft_preempted_bandwidth_bc0 = value;
        total_soft_preempted_bandwidth_bc0.value_namespace = name_space;
        total_soft_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-soft-preempted-bandwidth-bc1")
    {
        total_soft_preempted_bandwidth_bc1 = value;
        total_soft_preempted_bandwidth_bc1.value_namespace = name_space;
        total_soft_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::SoftPreemptions::SoftPreemption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "current-over-subscribed-bandwidth-bc0")
    {
        current_over_subscribed_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "current-over-subscribed-bandwidth-bc1")
    {
        current_over_subscribed_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "current-soft-preempted-bandwidth-bc0")
    {
        current_soft_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "current-soft-preempted-bandwidth-bc1")
    {
        current_soft_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "release-soft-preempted-bandwidth-bc0")
    {
        release_soft_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "release-soft-preempted-bandwidth-bc1")
    {
        release_soft_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "total-soft-preempted-bandwidth-bc0")
    {
        total_soft_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "total-soft-preempted-bandwidth-bc1")
    {
        total_soft_preempted_bandwidth_bc1.yfilter = yfilter;
    }
}

bool MplsLcacStandby::SoftPreemptions::SoftPreemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-soft-preemption-lsp" || name == "interface-name" || name == "current-over-subscribed-bandwidth-bc0" || name == "current-over-subscribed-bandwidth-bc1" || name == "current-soft-preempted-bandwidth-bc0" || name == "current-soft-preempted-bandwidth-bc1" || name == "link-address" || name == "release-soft-preempted-bandwidth-bc0" || name == "release-soft-preempted-bandwidth-bc1" || name == "total-soft-preempted-bandwidth-bc0" || name == "total-soft-preempted-bandwidth-bc1")
        return true;
    return false;
}

MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::CurrentSoftPreemptionLsp()
    :
    bandwidth_preempted{YType::boolean, "bandwidth-preempted"},
    bandwidth_type{YType::uint8, "bandwidth-type"},
    destination_address{YType::str, "destination-address"},
    hold_priority{YType::uint8, "hold-priority"},
    lsp_id{YType::uint16, "lsp-id"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preempted{YType::boolean, "soft-preempted"},
    soft_preempted_fr_rrewrite{YType::boolean, "soft-preempted-fr-rrewrite"},
    soft_preemption_timeout{YType::uint16, "soft-preemption-timeout"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "current-soft-preemption-lsp"; yang_parent_name = "soft-preemption"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::~CurrentSoftPreemptionLsp()
{
}

bool MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::has_data() const
{
    return bandwidth_preempted.is_set
	|| bandwidth_type.is_set
	|| destination_address.is_set
	|| hold_priority.is_set
	|| lsp_id.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| soft_preempted.is_set
	|| soft_preempted_fr_rrewrite.is_set
	|| soft_preemption_timeout.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_preempted.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(requested_bandwidth.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(soft_preempted.yfilter)
	|| ydk::is_set(soft_preempted_fr_rrewrite.yfilter)
	|| ydk::is_set(soft_preemption_timeout.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-soft-preemption-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_preempted.is_set || is_set(bandwidth_preempted.yfilter)) leaf_name_data.push_back(bandwidth_preempted.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.yfilter)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preempted.is_set || is_set(soft_preempted.yfilter)) leaf_name_data.push_back(soft_preempted.get_name_leafdata());
    if (soft_preempted_fr_rrewrite.is_set || is_set(soft_preempted_fr_rrewrite.yfilter)) leaf_name_data.push_back(soft_preempted_fr_rrewrite.get_name_leafdata());
    if (soft_preemption_timeout.is_set || is_set(soft_preemption_timeout.yfilter)) leaf_name_data.push_back(soft_preemption_timeout.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-preempted")
    {
        bandwidth_preempted = value;
        bandwidth_preempted.value_namespace = name_space;
        bandwidth_preempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
        requested_bandwidth.value_namespace = name_space;
        requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted")
    {
        soft_preempted = value;
        soft_preempted.value_namespace = name_space;
        soft_preempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-fr-rrewrite")
    {
        soft_preempted_fr_rrewrite = value;
        soft_preempted_fr_rrewrite.value_namespace = name_space;
        soft_preempted_fr_rrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout = value;
        soft_preemption_timeout.value_namespace = name_space;
        soft_preemption_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-preempted")
    {
        bandwidth_preempted.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "soft-preempted")
    {
        soft_preempted.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-fr-rrewrite")
    {
        soft_preempted_fr_rrewrite.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-preempted" || name == "bandwidth-type" || name == "destination-address" || name == "hold-priority" || name == "lsp-id" || name == "requested-bandwidth" || name == "setup-priority" || name == "soft-preempted" || name == "soft-preempted-fr-rrewrite" || name == "soft-preemption-timeout" || name == "source-address" || name == "tunnel-id")
        return true;
    return false;
}

MplsLcacStandby::Statistics::Statistics()
    :
    statstics_links(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks>())
	,summary(std::make_shared<MplsLcacStandby::Statistics::Summary>())
{
    statstics_links->parent = this;
    summary->parent = this;

    yang_name = "statistics"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Statistics::~Statistics()
{
}

bool MplsLcacStandby::Statistics::has_data() const
{
    return (statstics_links !=  nullptr && statstics_links->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsLcacStandby::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (statstics_links !=  nullptr && statstics_links->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsLcacStandby::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statstics-links")
    {
        if(statstics_links == nullptr)
        {
            statstics_links = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks>();
        }
        return statstics_links;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsLcacStandby::Statistics::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statstics_links != nullptr)
    {
        children["statstics-links"] = statstics_links;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsLcacStandby::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statstics-links" || name == "summary")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLinks()
{

    yang_name = "statstics-links"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Statistics::StatsticsLinks::~StatsticsLinks()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::has_data() const
{
    for (std::size_t index=0; index<statstics_link.size(); index++)
    {
        if(statstics_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::has_operation() const
{
    for (std::size_t index=0; index<statstics_link.size(); index++)
    {
        if(statstics_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statstics-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statstics-link")
    {
        for(auto const & c : statstics_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink>();
        c->parent = this;
        statstics_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statstics_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::Statistics::StatsticsLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statstics-link")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::StatsticsLink()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    link_address{YType::str, "link-address"}
    	,
    incoming_path_statistics(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics>())
	,incoming_path_statistics32_bit(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit>())
	,incoming_reservation_statistics(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics>())
	,incoming_reservation_statistics32_bit(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit>())
	,outgoing_path_statistics(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics>())
	,outgoing_path_statistics32_bit(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit>())
	,outgoing_reservation_statistics(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics>())
	,outgoing_reservation_statistics32_bit(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit>())
{
    incoming_path_statistics->parent = this;
    incoming_path_statistics32_bit->parent = this;
    incoming_reservation_statistics->parent = this;
    incoming_reservation_statistics32_bit->parent = this;
    outgoing_path_statistics->parent = this;
    outgoing_path_statistics32_bit->parent = this;
    outgoing_reservation_statistics->parent = this;
    outgoing_reservation_statistics32_bit->parent = this;

    yang_name = "statstics-link"; yang_parent_name = "statstics-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::~StatsticsLink()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| link_address.is_set
	|| (incoming_path_statistics !=  nullptr && incoming_path_statistics->has_data())
	|| (incoming_path_statistics32_bit !=  nullptr && incoming_path_statistics32_bit->has_data())
	|| (incoming_reservation_statistics !=  nullptr && incoming_reservation_statistics->has_data())
	|| (incoming_reservation_statistics32_bit !=  nullptr && incoming_reservation_statistics32_bit->has_data())
	|| (outgoing_path_statistics !=  nullptr && outgoing_path_statistics->has_data())
	|| (outgoing_path_statistics32_bit !=  nullptr && outgoing_path_statistics32_bit->has_data())
	|| (outgoing_reservation_statistics !=  nullptr && outgoing_reservation_statistics->has_data())
	|| (outgoing_reservation_statistics32_bit !=  nullptr && outgoing_reservation_statistics32_bit->has_data());
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| (incoming_path_statistics !=  nullptr && incoming_path_statistics->has_operation())
	|| (incoming_path_statistics32_bit !=  nullptr && incoming_path_statistics32_bit->has_operation())
	|| (incoming_reservation_statistics !=  nullptr && incoming_reservation_statistics->has_operation())
	|| (incoming_reservation_statistics32_bit !=  nullptr && incoming_reservation_statistics32_bit->has_operation())
	|| (outgoing_path_statistics !=  nullptr && outgoing_path_statistics->has_operation())
	|| (outgoing_path_statistics32_bit !=  nullptr && outgoing_path_statistics32_bit->has_operation())
	|| (outgoing_reservation_statistics !=  nullptr && outgoing_reservation_statistics->has_operation())
	|| (outgoing_reservation_statistics32_bit !=  nullptr && outgoing_reservation_statistics32_bit->has_operation());
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/statstics-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statstics-link" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incoming-path-statistics")
    {
        if(incoming_path_statistics == nullptr)
        {
            incoming_path_statistics = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics>();
        }
        return incoming_path_statistics;
    }

    if(child_yang_name == "incoming-path-statistics32-bit")
    {
        if(incoming_path_statistics32_bit == nullptr)
        {
            incoming_path_statistics32_bit = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit>();
        }
        return incoming_path_statistics32_bit;
    }

    if(child_yang_name == "incoming-reservation-statistics")
    {
        if(incoming_reservation_statistics == nullptr)
        {
            incoming_reservation_statistics = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics>();
        }
        return incoming_reservation_statistics;
    }

    if(child_yang_name == "incoming-reservation-statistics32-bit")
    {
        if(incoming_reservation_statistics32_bit == nullptr)
        {
            incoming_reservation_statistics32_bit = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit>();
        }
        return incoming_reservation_statistics32_bit;
    }

    if(child_yang_name == "outgoing-path-statistics")
    {
        if(outgoing_path_statistics == nullptr)
        {
            outgoing_path_statistics = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics>();
        }
        return outgoing_path_statistics;
    }

    if(child_yang_name == "outgoing-path-statistics32-bit")
    {
        if(outgoing_path_statistics32_bit == nullptr)
        {
            outgoing_path_statistics32_bit = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit>();
        }
        return outgoing_path_statistics32_bit;
    }

    if(child_yang_name == "outgoing-reservation-statistics")
    {
        if(outgoing_reservation_statistics == nullptr)
        {
            outgoing_reservation_statistics = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics>();
        }
        return outgoing_reservation_statistics;
    }

    if(child_yang_name == "outgoing-reservation-statistics32-bit")
    {
        if(outgoing_reservation_statistics32_bit == nullptr)
        {
            outgoing_reservation_statistics32_bit = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit>();
        }
        return outgoing_reservation_statistics32_bit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(incoming_path_statistics != nullptr)
    {
        children["incoming-path-statistics"] = incoming_path_statistics;
    }

    if(incoming_path_statistics32_bit != nullptr)
    {
        children["incoming-path-statistics32-bit"] = incoming_path_statistics32_bit;
    }

    if(incoming_reservation_statistics != nullptr)
    {
        children["incoming-reservation-statistics"] = incoming_reservation_statistics;
    }

    if(incoming_reservation_statistics32_bit != nullptr)
    {
        children["incoming-reservation-statistics32-bit"] = incoming_reservation_statistics32_bit;
    }

    if(outgoing_path_statistics != nullptr)
    {
        children["outgoing-path-statistics"] = outgoing_path_statistics;
    }

    if(outgoing_path_statistics32_bit != nullptr)
    {
        children["outgoing-path-statistics32-bit"] = outgoing_path_statistics32_bit;
    }

    if(outgoing_reservation_statistics != nullptr)
    {
        children["outgoing-reservation-statistics"] = outgoing_reservation_statistics;
    }

    if(outgoing_reservation_statistics32_bit != nullptr)
    {
        children["outgoing-reservation-statistics32-bit"] = outgoing_reservation_statistics32_bit;
    }

    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-path-statistics" || name == "incoming-path-statistics32-bit" || name == "incoming-reservation-statistics" || name == "incoming-reservation-statistics32-bit" || name == "outgoing-path-statistics" || name == "outgoing-path-statistics32-bit" || name == "outgoing-reservation-statistics" || name == "outgoing-reservation-statistics32-bit" || name == "interface-name" || name == "interface-name-xr" || name == "link-address")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::IncomingPathStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{

    yang_name = "incoming-path-statistics"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::~IncomingPathStatistics()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-path-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::IncomingPathStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{

    yang_name = "incoming-path-statistics32-bit"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::~IncomingPathStatistics32Bit()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-path-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::IncomingReservationStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{

    yang_name = "incoming-reservation-statistics"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::~IncomingReservationStatistics()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-reservation-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::IncomingReservationStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{

    yang_name = "incoming-reservation-statistics32-bit"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::~IncomingReservationStatistics32Bit()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-reservation-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::OutgoingPathStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{

    yang_name = "outgoing-path-statistics"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::~OutgoingPathStatistics()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-path-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::OutgoingPathStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{

    yang_name = "outgoing-path-statistics32-bit"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::~OutgoingPathStatistics32Bit()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-path-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::OutgoingReservationStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{

    yang_name = "outgoing-reservation-statistics"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::~OutgoingReservationStatistics()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-reservation-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::OutgoingReservationStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{

    yang_name = "outgoing-reservation-statistics32-bit"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::~OutgoingReservationStatistics32Bit()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-reservation-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcacStandby::Statistics::Summary::Summary()
    :
    is_role_standby{YType::boolean, "is-role-standby"}
    	,
    path_statistics(std::make_shared<MplsLcacStandby::Statistics::Summary::PathStatistics>())
	,path_statistics32_bit(std::make_shared<MplsLcacStandby::Statistics::Summary::PathStatistics32Bit>())
	,reservation_statistics(std::make_shared<MplsLcacStandby::Statistics::Summary::ReservationStatistics>())
	,reservation_statistics32_bit(std::make_shared<MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit>())
{
    path_statistics->parent = this;
    path_statistics32_bit->parent = this;
    reservation_statistics->parent = this;
    reservation_statistics32_bit->parent = this;

    yang_name = "summary"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Statistics::Summary::~Summary()
{
}

bool MplsLcacStandby::Statistics::Summary::has_data() const
{
    return is_role_standby.is_set
	|| (path_statistics !=  nullptr && path_statistics->has_data())
	|| (path_statistics32_bit !=  nullptr && path_statistics32_bit->has_data())
	|| (reservation_statistics !=  nullptr && reservation_statistics->has_data())
	|| (reservation_statistics32_bit !=  nullptr && reservation_statistics32_bit->has_data());
}

bool MplsLcacStandby::Statistics::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| (path_statistics !=  nullptr && path_statistics->has_operation())
	|| (path_statistics32_bit !=  nullptr && path_statistics32_bit->has_operation())
	|| (reservation_statistics !=  nullptr && reservation_statistics->has_operation())
	|| (reservation_statistics32_bit !=  nullptr && reservation_statistics32_bit->has_operation());
}

std::string MplsLcacStandby::Statistics::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Statistics::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-statistics")
    {
        if(path_statistics == nullptr)
        {
            path_statistics = std::make_shared<MplsLcacStandby::Statistics::Summary::PathStatistics>();
        }
        return path_statistics;
    }

    if(child_yang_name == "path-statistics32-bit")
    {
        if(path_statistics32_bit == nullptr)
        {
            path_statistics32_bit = std::make_shared<MplsLcacStandby::Statistics::Summary::PathStatistics32Bit>();
        }
        return path_statistics32_bit;
    }

    if(child_yang_name == "reservation-statistics")
    {
        if(reservation_statistics == nullptr)
        {
            reservation_statistics = std::make_shared<MplsLcacStandby::Statistics::Summary::ReservationStatistics>();
        }
        return reservation_statistics;
    }

    if(child_yang_name == "reservation-statistics32-bit")
    {
        if(reservation_statistics32_bit == nullptr)
        {
            reservation_statistics32_bit = std::make_shared<MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit>();
        }
        return reservation_statistics32_bit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_statistics != nullptr)
    {
        children["path-statistics"] = path_statistics;
    }

    if(path_statistics32_bit != nullptr)
    {
        children["path-statistics32-bit"] = path_statistics32_bit;
    }

    if(reservation_statistics != nullptr)
    {
        children["reservation-statistics"] = reservation_statistics;
    }

    if(reservation_statistics32_bit != nullptr)
    {
        children["reservation-statistics32-bit"] = reservation_statistics32_bit;
    }

    return children;
}

void MplsLcacStandby::Statistics::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-statistics" || name == "path-statistics32-bit" || name == "reservation-statistics" || name == "reservation-statistics32-bit" || name == "is-role-standby")
        return true;
    return false;
}

MplsLcacStandby::Statistics::Summary::PathStatistics::PathStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{

    yang_name = "path-statistics"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Statistics::Summary::PathStatistics::~PathStatistics()
{
}

bool MplsLcacStandby::Statistics::Summary::PathStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::Summary::PathStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcacStandby::Statistics::Summary::PathStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Statistics::Summary::PathStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::Summary::PathStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::Summary::PathStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::Summary::PathStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Statistics::Summary::PathStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::Summary::PathStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::Summary::PathStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::PathStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{

    yang_name = "path-statistics32-bit"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::~PathStatistics32Bit()
{
}

bool MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcacStandby::Statistics::Summary::ReservationStatistics::ReservationStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{

    yang_name = "reservation-statistics"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Statistics::Summary::ReservationStatistics::~ReservationStatistics()
{
}

bool MplsLcacStandby::Statistics::Summary::ReservationStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::Summary::ReservationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcacStandby::Statistics::Summary::ReservationStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Statistics::Summary::ReservationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::Summary::ReservationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::Summary::ReservationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::Summary::ReservationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Statistics::Summary::ReservationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::Summary::ReservationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::Summary::ReservationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::ReservationStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{

    yang_name = "reservation-statistics32-bit"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::~ReservationStatistics32Bit()
{
}

bool MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsPce::MplsPce()
    :
    lsps(std::make_shared<MplsPce::Lsps>())
	,peers(std::make_shared<MplsPce::Peers>())
	,statistics(std::make_shared<MplsPce::Statistics>())
	,topology(std::make_shared<MplsPce::Topology>())
	,tunnels(std::make_shared<MplsPce::Tunnels>())
{
    lsps->parent = this;
    peers->parent = this;
    statistics->parent = this;
    topology->parent = this;
    tunnels->parent = this;

    yang_name = "mpls-pce"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper"; is_top_level_class = true; has_list_ancestor = false;
}

MplsPce::~MplsPce()
{
}

bool MplsPce::has_data() const
{
    return (lsps !=  nullptr && lsps->has_data())
	|| (peers !=  nullptr && peers->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (topology !=  nullptr && topology->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool MplsPce::has_operation() const
{
    return is_set(yfilter)
	|| (lsps !=  nullptr && lsps->has_operation())
	|| (peers !=  nullptr && peers->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (topology !=  nullptr && topology->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string MplsPce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsps")
    {
        if(lsps == nullptr)
        {
            lsps = std::make_shared<MplsPce::Lsps>();
        }
        return lsps;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<MplsPce::Peers>();
        }
        return peers;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsPce::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<MplsPce::Topology>();
        }
        return topology;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<MplsPce::Tunnels>();
        }
        return tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsps != nullptr)
    {
        children["lsps"] = lsps;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(topology != nullptr)
    {
        children["topology"] = topology;
    }

    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    return children;
}

void MplsPce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsPce::clone_ptr() const
{
    return std::make_shared<MplsPce>();
}

std::string MplsPce::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsPce::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsPce::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsPce::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsPce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsps" || name == "peers" || name == "statistics" || name == "topology" || name == "tunnels")
        return true;
    return false;
}

MplsPce::Lsps::Lsps()
    :
    administrative{YType::boolean, "administrative"},
    backup_path{YType::str, "backup-path"},
    binding_sid{YType::uint32, "binding-sid"},
    cleanup_timer_exp{YType::int32, "cleanup-timer-exp"},
    create{YType::boolean, "create"},
    delegatable{YType::boolean, "delegatable"},
    delegation_timer_exp{YType::int32, "delegation-timer-exp"},
    destination_address{YType::str, "destination-address"},
    forward_class_id{YType::uint32, "forward-class-id"},
    load_share{YType::uint32, "load-share"},
    lspo_is_used{YType::boolean, "lspo-is-used"},
    operational{YType::enumeration, "operational"},
    path_setup_type{YType::uint8, "path-setup-type"},
    request_queue_size{YType::uint8, "request-queue-size"},
    session_internal_lsp_id{YType::uint32, "session-internal-lsp-id"},
    source_address{YType::str, "source-address"},
    state_timer_exp{YType::int32, "state-timer-exp"},
    stateful_request_parameter_id{YType::uint32, "stateful-request-parameter-id"},
    symbolic_name_xr{YType::str, "symbolic-name-xr"}
    	,
    autoroute(std::make_shared<MplsPce::Lsps::Autoroute>())
	,creator(std::make_shared<MplsPce::Lsps::Creator>())
	,delegated(std::make_shared<MplsPce::Lsps::Delegated>())
	,identifiers(std::make_shared<MplsPce::Lsps::Identifiers>())
{
    autoroute->parent = this;
    creator->parent = this;
    delegated->parent = this;
    identifiers->parent = this;

    yang_name = "lsps"; yang_parent_name = "mpls-pce"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::~Lsps()
{
}

bool MplsPce::Lsps::has_data() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (auto const & leaf : backup_path.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return administrative.is_set
	|| binding_sid.is_set
	|| cleanup_timer_exp.is_set
	|| create.is_set
	|| delegatable.is_set
	|| delegation_timer_exp.is_set
	|| destination_address.is_set
	|| forward_class_id.is_set
	|| load_share.is_set
	|| lspo_is_used.is_set
	|| operational.is_set
	|| path_setup_type.is_set
	|| request_queue_size.is_set
	|| session_internal_lsp_id.is_set
	|| source_address.is_set
	|| state_timer_exp.is_set
	|| stateful_request_parameter_id.is_set
	|| symbolic_name_xr.is_set
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (creator !=  nullptr && creator->has_data())
	|| (delegated !=  nullptr && delegated->has_data())
	|| (identifiers !=  nullptr && identifiers->has_data());
}

bool MplsPce::Lsps::has_operation() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (auto const & leaf : backup_path.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(administrative.yfilter)
	|| ydk::is_set(backup_path.yfilter)
	|| ydk::is_set(binding_sid.yfilter)
	|| ydk::is_set(cleanup_timer_exp.yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(delegatable.yfilter)
	|| ydk::is_set(delegation_timer_exp.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(forward_class_id.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(lspo_is_used.yfilter)
	|| ydk::is_set(operational.yfilter)
	|| ydk::is_set(path_setup_type.yfilter)
	|| ydk::is_set(request_queue_size.yfilter)
	|| ydk::is_set(session_internal_lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(state_timer_exp.yfilter)
	|| ydk::is_set(stateful_request_parameter_id.yfilter)
	|| ydk::is_set(symbolic_name_xr.yfilter)
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (creator !=  nullptr && creator->has_operation())
	|| (delegated !=  nullptr && delegated->has_operation())
	|| (identifiers !=  nullptr && identifiers->has_operation());
}

std::string MplsPce::Lsps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative.is_set || is_set(administrative.yfilter)) leaf_name_data.push_back(administrative.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.yfilter)) leaf_name_data.push_back(binding_sid.get_name_leafdata());
    if (cleanup_timer_exp.is_set || is_set(cleanup_timer_exp.yfilter)) leaf_name_data.push_back(cleanup_timer_exp.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (delegatable.is_set || is_set(delegatable.yfilter)) leaf_name_data.push_back(delegatable.get_name_leafdata());
    if (delegation_timer_exp.is_set || is_set(delegation_timer_exp.yfilter)) leaf_name_data.push_back(delegation_timer_exp.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (forward_class_id.is_set || is_set(forward_class_id.yfilter)) leaf_name_data.push_back(forward_class_id.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (lspo_is_used.is_set || is_set(lspo_is_used.yfilter)) leaf_name_data.push_back(lspo_is_used.get_name_leafdata());
    if (operational.is_set || is_set(operational.yfilter)) leaf_name_data.push_back(operational.get_name_leafdata());
    if (path_setup_type.is_set || is_set(path_setup_type.yfilter)) leaf_name_data.push_back(path_setup_type.get_name_leafdata());
    if (request_queue_size.is_set || is_set(request_queue_size.yfilter)) leaf_name_data.push_back(request_queue_size.get_name_leafdata());
    if (session_internal_lsp_id.is_set || is_set(session_internal_lsp_id.yfilter)) leaf_name_data.push_back(session_internal_lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (state_timer_exp.is_set || is_set(state_timer_exp.yfilter)) leaf_name_data.push_back(state_timer_exp.get_name_leafdata());
    if (stateful_request_parameter_id.is_set || is_set(stateful_request_parameter_id.yfilter)) leaf_name_data.push_back(stateful_request_parameter_id.get_name_leafdata());
    if (symbolic_name_xr.is_set || is_set(symbolic_name_xr.yfilter)) leaf_name_data.push_back(symbolic_name_xr.get_name_leafdata());

    auto backup_path_name_datas = backup_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_path_name_datas.begin(), backup_path_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<MplsPce::Lsps::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "creator")
    {
        if(creator == nullptr)
        {
            creator = std::make_shared<MplsPce::Lsps::Creator>();
        }
        return creator;
    }

    if(child_yang_name == "delegated")
    {
        if(delegated == nullptr)
        {
            delegated = std::make_shared<MplsPce::Lsps::Delegated>();
        }
        return delegated;
    }

    if(child_yang_name == "identifiers")
    {
        if(identifiers == nullptr)
        {
            identifiers = std::make_shared<MplsPce::Lsps::Identifiers>();
        }
        return identifiers;
    }

    if(child_yang_name == "lsp")
    {
        for(auto const & c : lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPce::Lsps::Lsp>();
        c->parent = this;
        lsp.push_back(c);
        return c;
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
        auto c = std::make_shared<MplsPce::Lsps::Paths>();
        c->parent = this;
        paths.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoroute != nullptr)
    {
        children["autoroute"] = autoroute;
    }

    if(creator != nullptr)
    {
        children["creator"] = creator;
    }

    if(delegated != nullptr)
    {
        children["delegated"] = delegated;
    }

    if(identifiers != nullptr)
    {
        children["identifiers"] = identifiers;
    }

    for (auto const & c : lsp)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : paths)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsPce::Lsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "administrative")
    {
        administrative = value;
        administrative.value_namespace = name_space;
        administrative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path")
    {
        backup_path.append(value);
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
        binding_sid.value_namespace = name_space;
        binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp = value;
        cleanup_timer_exp.value_namespace = name_space;
        cleanup_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegatable")
    {
        delegatable = value;
        delegatable.value_namespace = name_space;
        delegatable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp = value;
        delegation_timer_exp.value_namespace = name_space;
        delegation_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id = value;
        forward_class_id.value_namespace = name_space;
        forward_class_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used = value;
        lspo_is_used.value_namespace = name_space;
        lspo_is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational")
    {
        operational = value;
        operational.value_namespace = name_space;
        operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type = value;
        path_setup_type.value_namespace = name_space;
        path_setup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size = value;
        request_queue_size.value_namespace = name_space;
        request_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id = value;
        session_internal_lsp_id.value_namespace = name_space;
        session_internal_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp = value;
        state_timer_exp.value_namespace = name_space;
        state_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id = value;
        stateful_request_parameter_id.value_namespace = name_space;
        stateful_request_parameter_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr = value;
        symbolic_name_xr.value_namespace = name_space;
        symbolic_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "administrative")
    {
        administrative.yfilter = yfilter;
    }
    if(value_path == "backup-path")
    {
        backup_path.yfilter = yfilter;
    }
    if(value_path == "binding-sid")
    {
        binding_sid.yfilter = yfilter;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "delegatable")
    {
        delegatable.yfilter = yfilter;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used.yfilter = yfilter;
    }
    if(value_path == "operational")
    {
        operational.yfilter = yfilter;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type.yfilter = yfilter;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size.yfilter = yfilter;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp.yfilter = yfilter;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id.yfilter = yfilter;
    }
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoroute" || name == "creator" || name == "delegated" || name == "identifiers" || name == "lsp" || name == "paths" || name == "administrative" || name == "backup-path" || name == "binding-sid" || name == "cleanup-timer-exp" || name == "create" || name == "delegatable" || name == "delegation-timer-exp" || name == "destination-address" || name == "forward-class-id" || name == "load-share" || name == "lspo-is-used" || name == "operational" || name == "path-setup-type" || name == "request-queue-size" || name == "session-internal-lsp-id" || name == "source-address" || name == "state-timer-exp" || name == "stateful-request-parameter-id" || name == "symbolic-name-xr")
        return true;
    return false;
}

MplsPce::Lsps::Autoroute::Autoroute()
    :
    announced{YType::boolean, "announced"},
    destination{YType::str, "destination"},
    is_used{YType::boolean, "is-used"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"}
{

    yang_name = "autoroute"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Autoroute::~Autoroute()
{
}

bool MplsPce::Lsps::Autoroute::has_data() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return announced.is_set
	|| is_used.is_set
	|| metric.is_set
	|| metric_type.is_set;
}

bool MplsPce::Lsps::Autoroute::has_operation() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(announced.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter);
}

std::string MplsPce::Lsps::Autoroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Autoroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announced.is_set || is_set(announced.yfilter)) leaf_name_data.push_back(announced.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());

    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Lsps::Autoroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announced")
    {
        announced = value;
        announced.value_namespace = name_space;
        announced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Autoroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announced")
    {
        announced.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Autoroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announced" || name == "destination" || name == "is-used" || name == "metric" || name == "metric-type")
        return true;
    return false;
}

MplsPce::Lsps::Creator::Creator()
    :
    address{YType::str, "address"},
    node_identifier{YType::str, "node-identifier"}
{

    yang_name = "creator"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Creator::~Creator()
{
}

bool MplsPce::Lsps::Creator::has_data() const
{
    return address.is_set
	|| node_identifier.is_set;
}

bool MplsPce::Lsps::Creator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(node_identifier.yfilter);
}

std::string MplsPce::Lsps::Creator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Creator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Creator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Creator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Creator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Lsps::Creator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Creator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Creator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "node-identifier")
        return true;
    return false;
}

MplsPce::Lsps::Delegated::Delegated()
    :
    address{YType::str, "address"},
    node_identifier{YType::str, "node-identifier"}
{

    yang_name = "delegated"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Delegated::~Delegated()
{
}

bool MplsPce::Lsps::Delegated::has_data() const
{
    return address.is_set
	|| node_identifier.is_set;
}

bool MplsPce::Lsps::Delegated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(node_identifier.yfilter);
}

std::string MplsPce::Lsps::Delegated::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Delegated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delegated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Delegated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Delegated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Delegated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Lsps::Delegated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Delegated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Delegated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "node-identifier")
        return true;
    return false;
}

MplsPce::Lsps::Identifiers::Identifiers()
    :
    ext_tunnel_id{YType::uint32, "ext-tunnel-id"},
    is_used{YType::boolean, "is-used"},
    sender{YType::str, "sender"},
    te_lsp_id{YType::uint16, "te-lsp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "identifiers"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Identifiers::~Identifiers()
{
}

bool MplsPce::Lsps::Identifiers::has_data() const
{
    return ext_tunnel_id.is_set
	|| is_used.is_set
	|| sender.is_set
	|| te_lsp_id.is_set
	|| tunnel_id.is_set;
}

bool MplsPce::Lsps::Identifiers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ext_tunnel_id.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(sender.yfilter)
	|| ydk::is_set(te_lsp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsPce::Lsps::Identifiers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Identifiers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifiers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Identifiers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ext_tunnel_id.is_set || is_set(ext_tunnel_id.yfilter)) leaf_name_data.push_back(ext_tunnel_id.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (sender.is_set || is_set(sender.yfilter)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (te_lsp_id.is_set || is_set(te_lsp_id.yfilter)) leaf_name_data.push_back(te_lsp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Identifiers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Identifiers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Lsps::Identifiers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id = value;
        ext_tunnel_id.value_namespace = name_space;
        ext_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender")
    {
        sender = value;
        sender.value_namespace = name_space;
        sender.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id = value;
        te_lsp_id.value_namespace = name_space;
        te_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Identifiers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "sender")
    {
        sender.yfilter = yfilter;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Identifiers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-tunnel-id" || name == "is-used" || name == "sender" || name == "te-lsp-id" || name == "tunnel-id")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Lsp()
    :
    symbolic_name{YType::str, "symbolic-name"},
    administrative{YType::boolean, "administrative"},
    backup_path{YType::str, "backup-path"},
    binding_sid{YType::uint32, "binding-sid"},
    cleanup_timer_exp{YType::int32, "cleanup-timer-exp"},
    create{YType::boolean, "create"},
    delegatable{YType::boolean, "delegatable"},
    delegation_timer_exp{YType::int32, "delegation-timer-exp"},
    destination_address{YType::str, "destination-address"},
    forward_class_id{YType::uint32, "forward-class-id"},
    load_share{YType::uint32, "load-share"},
    lspo_is_used{YType::boolean, "lspo-is-used"},
    operational{YType::enumeration, "operational"},
    path_setup_type{YType::uint8, "path-setup-type"},
    request_queue_size{YType::uint8, "request-queue-size"},
    session_internal_lsp_id{YType::uint32, "session-internal-lsp-id"},
    source_address{YType::str, "source-address"},
    state_timer_exp{YType::int32, "state-timer-exp"},
    stateful_request_parameter_id{YType::uint32, "stateful-request-parameter-id"},
    symbolic_name_xr{YType::str, "symbolic-name-xr"}
    	,
    autoroute(std::make_shared<MplsPce::Lsps::Lsp::Autoroute>())
	,creator(std::make_shared<MplsPce::Lsps::Lsp::Creator>())
	,delegated(std::make_shared<MplsPce::Lsps::Lsp::Delegated>())
	,identifiers(std::make_shared<MplsPce::Lsps::Lsp::Identifiers>())
{
    autoroute->parent = this;
    creator->parent = this;
    delegated->parent = this;
    identifiers->parent = this;

    yang_name = "lsp"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Lsp::~Lsp()
{
}

bool MplsPce::Lsps::Lsp::has_data() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (auto const & leaf : backup_path.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return symbolic_name.is_set
	|| administrative.is_set
	|| binding_sid.is_set
	|| cleanup_timer_exp.is_set
	|| create.is_set
	|| delegatable.is_set
	|| delegation_timer_exp.is_set
	|| destination_address.is_set
	|| forward_class_id.is_set
	|| load_share.is_set
	|| lspo_is_used.is_set
	|| operational.is_set
	|| path_setup_type.is_set
	|| request_queue_size.is_set
	|| session_internal_lsp_id.is_set
	|| source_address.is_set
	|| state_timer_exp.is_set
	|| stateful_request_parameter_id.is_set
	|| symbolic_name_xr.is_set
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (creator !=  nullptr && creator->has_data())
	|| (delegated !=  nullptr && delegated->has_data())
	|| (identifiers !=  nullptr && identifiers->has_data());
}

bool MplsPce::Lsps::Lsp::has_operation() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (auto const & leaf : backup_path.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(symbolic_name.yfilter)
	|| ydk::is_set(administrative.yfilter)
	|| ydk::is_set(backup_path.yfilter)
	|| ydk::is_set(binding_sid.yfilter)
	|| ydk::is_set(cleanup_timer_exp.yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(delegatable.yfilter)
	|| ydk::is_set(delegation_timer_exp.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(forward_class_id.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(lspo_is_used.yfilter)
	|| ydk::is_set(operational.yfilter)
	|| ydk::is_set(path_setup_type.yfilter)
	|| ydk::is_set(request_queue_size.yfilter)
	|| ydk::is_set(session_internal_lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(state_timer_exp.yfilter)
	|| ydk::is_set(stateful_request_parameter_id.yfilter)
	|| ydk::is_set(symbolic_name_xr.yfilter)
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (creator !=  nullptr && creator->has_operation())
	|| (delegated !=  nullptr && delegated->has_operation())
	|| (identifiers !=  nullptr && identifiers->has_operation());
}

std::string MplsPce::Lsps::Lsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp" <<"[symbolic-name='" <<symbolic_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (symbolic_name.is_set || is_set(symbolic_name.yfilter)) leaf_name_data.push_back(symbolic_name.get_name_leafdata());
    if (administrative.is_set || is_set(administrative.yfilter)) leaf_name_data.push_back(administrative.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.yfilter)) leaf_name_data.push_back(binding_sid.get_name_leafdata());
    if (cleanup_timer_exp.is_set || is_set(cleanup_timer_exp.yfilter)) leaf_name_data.push_back(cleanup_timer_exp.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (delegatable.is_set || is_set(delegatable.yfilter)) leaf_name_data.push_back(delegatable.get_name_leafdata());
    if (delegation_timer_exp.is_set || is_set(delegation_timer_exp.yfilter)) leaf_name_data.push_back(delegation_timer_exp.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (forward_class_id.is_set || is_set(forward_class_id.yfilter)) leaf_name_data.push_back(forward_class_id.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (lspo_is_used.is_set || is_set(lspo_is_used.yfilter)) leaf_name_data.push_back(lspo_is_used.get_name_leafdata());
    if (operational.is_set || is_set(operational.yfilter)) leaf_name_data.push_back(operational.get_name_leafdata());
    if (path_setup_type.is_set || is_set(path_setup_type.yfilter)) leaf_name_data.push_back(path_setup_type.get_name_leafdata());
    if (request_queue_size.is_set || is_set(request_queue_size.yfilter)) leaf_name_data.push_back(request_queue_size.get_name_leafdata());
    if (session_internal_lsp_id.is_set || is_set(session_internal_lsp_id.yfilter)) leaf_name_data.push_back(session_internal_lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (state_timer_exp.is_set || is_set(state_timer_exp.yfilter)) leaf_name_data.push_back(state_timer_exp.get_name_leafdata());
    if (stateful_request_parameter_id.is_set || is_set(stateful_request_parameter_id.yfilter)) leaf_name_data.push_back(stateful_request_parameter_id.get_name_leafdata());
    if (symbolic_name_xr.is_set || is_set(symbolic_name_xr.yfilter)) leaf_name_data.push_back(symbolic_name_xr.get_name_leafdata());

    auto backup_path_name_datas = backup_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_path_name_datas.begin(), backup_path_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<MplsPce::Lsps::Lsp::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "creator")
    {
        if(creator == nullptr)
        {
            creator = std::make_shared<MplsPce::Lsps::Lsp::Creator>();
        }
        return creator;
    }

    if(child_yang_name == "delegated")
    {
        if(delegated == nullptr)
        {
            delegated = std::make_shared<MplsPce::Lsps::Lsp::Delegated>();
        }
        return delegated;
    }

    if(child_yang_name == "identifiers")
    {
        if(identifiers == nullptr)
        {
            identifiers = std::make_shared<MplsPce::Lsps::Lsp::Identifiers>();
        }
        return identifiers;
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
        auto c = std::make_shared<MplsPce::Lsps::Lsp::Paths>();
        c->parent = this;
        paths.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoroute != nullptr)
    {
        children["autoroute"] = autoroute;
    }

    if(creator != nullptr)
    {
        children["creator"] = creator;
    }

    if(delegated != nullptr)
    {
        children["delegated"] = delegated;
    }

    if(identifiers != nullptr)
    {
        children["identifiers"] = identifiers;
    }

    for (auto const & c : paths)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsPce::Lsps::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "symbolic-name")
    {
        symbolic_name = value;
        symbolic_name.value_namespace = name_space;
        symbolic_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative")
    {
        administrative = value;
        administrative.value_namespace = name_space;
        administrative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path")
    {
        backup_path.append(value);
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
        binding_sid.value_namespace = name_space;
        binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp = value;
        cleanup_timer_exp.value_namespace = name_space;
        cleanup_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegatable")
    {
        delegatable = value;
        delegatable.value_namespace = name_space;
        delegatable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp = value;
        delegation_timer_exp.value_namespace = name_space;
        delegation_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id = value;
        forward_class_id.value_namespace = name_space;
        forward_class_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used = value;
        lspo_is_used.value_namespace = name_space;
        lspo_is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational")
    {
        operational = value;
        operational.value_namespace = name_space;
        operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type = value;
        path_setup_type.value_namespace = name_space;
        path_setup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size = value;
        request_queue_size.value_namespace = name_space;
        request_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id = value;
        session_internal_lsp_id.value_namespace = name_space;
        session_internal_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp = value;
        state_timer_exp.value_namespace = name_space;
        state_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id = value;
        stateful_request_parameter_id.value_namespace = name_space;
        stateful_request_parameter_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr = value;
        symbolic_name_xr.value_namespace = name_space;
        symbolic_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "symbolic-name")
    {
        symbolic_name.yfilter = yfilter;
    }
    if(value_path == "administrative")
    {
        administrative.yfilter = yfilter;
    }
    if(value_path == "backup-path")
    {
        backup_path.yfilter = yfilter;
    }
    if(value_path == "binding-sid")
    {
        binding_sid.yfilter = yfilter;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "delegatable")
    {
        delegatable.yfilter = yfilter;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used.yfilter = yfilter;
    }
    if(value_path == "operational")
    {
        operational.yfilter = yfilter;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type.yfilter = yfilter;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size.yfilter = yfilter;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp.yfilter = yfilter;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id.yfilter = yfilter;
    }
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoroute" || name == "creator" || name == "delegated" || name == "identifiers" || name == "paths" || name == "symbolic-name" || name == "administrative" || name == "backup-path" || name == "binding-sid" || name == "cleanup-timer-exp" || name == "create" || name == "delegatable" || name == "delegation-timer-exp" || name == "destination-address" || name == "forward-class-id" || name == "load-share" || name == "lspo-is-used" || name == "operational" || name == "path-setup-type" || name == "request-queue-size" || name == "session-internal-lsp-id" || name == "source-address" || name == "state-timer-exp" || name == "stateful-request-parameter-id" || name == "symbolic-name-xr")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Autoroute::Autoroute()
    :
    announced{YType::boolean, "announced"},
    destination{YType::str, "destination"},
    is_used{YType::boolean, "is-used"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"}
{

    yang_name = "autoroute"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Autoroute::~Autoroute()
{
}

bool MplsPce::Lsps::Lsp::Autoroute::has_data() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return announced.is_set
	|| is_used.is_set
	|| metric.is_set
	|| metric_type.is_set;
}

bool MplsPce::Lsps::Lsp::Autoroute::has_operation() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(announced.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter);
}

std::string MplsPce::Lsps::Lsp::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Autoroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announced.is_set || is_set(announced.yfilter)) leaf_name_data.push_back(announced.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());

    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Lsps::Lsp::Autoroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announced")
    {
        announced = value;
        announced.value_namespace = name_space;
        announced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Autoroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announced")
    {
        announced.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Autoroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announced" || name == "destination" || name == "is-used" || name == "metric" || name == "metric-type")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Creator::Creator()
    :
    address{YType::str, "address"},
    node_identifier{YType::str, "node-identifier"}
{

    yang_name = "creator"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Creator::~Creator()
{
}

bool MplsPce::Lsps::Lsp::Creator::has_data() const
{
    return address.is_set
	|| node_identifier.is_set;
}

bool MplsPce::Lsps::Lsp::Creator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(node_identifier.yfilter);
}

std::string MplsPce::Lsps::Lsp::Creator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Creator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Creator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Creator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Lsps::Lsp::Creator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Creator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Creator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "node-identifier")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Delegated::Delegated()
    :
    address{YType::str, "address"},
    node_identifier{YType::str, "node-identifier"}
{

    yang_name = "delegated"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Delegated::~Delegated()
{
}

bool MplsPce::Lsps::Lsp::Delegated::has_data() const
{
    return address.is_set
	|| node_identifier.is_set;
}

bool MplsPce::Lsps::Lsp::Delegated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(node_identifier.yfilter);
}

std::string MplsPce::Lsps::Lsp::Delegated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delegated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Delegated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Delegated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Delegated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Lsps::Lsp::Delegated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Delegated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Delegated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "node-identifier")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Identifiers::Identifiers()
    :
    ext_tunnel_id{YType::uint32, "ext-tunnel-id"},
    is_used{YType::boolean, "is-used"},
    sender{YType::str, "sender"},
    te_lsp_id{YType::uint16, "te-lsp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "identifiers"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Identifiers::~Identifiers()
{
}

bool MplsPce::Lsps::Lsp::Identifiers::has_data() const
{
    return ext_tunnel_id.is_set
	|| is_used.is_set
	|| sender.is_set
	|| te_lsp_id.is_set
	|| tunnel_id.is_set;
}

bool MplsPce::Lsps::Lsp::Identifiers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ext_tunnel_id.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(sender.yfilter)
	|| ydk::is_set(te_lsp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsPce::Lsps::Lsp::Identifiers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifiers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Identifiers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ext_tunnel_id.is_set || is_set(ext_tunnel_id.yfilter)) leaf_name_data.push_back(ext_tunnel_id.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (sender.is_set || is_set(sender.yfilter)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (te_lsp_id.is_set || is_set(te_lsp_id.yfilter)) leaf_name_data.push_back(te_lsp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Identifiers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Identifiers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Lsps::Lsp::Identifiers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id = value;
        ext_tunnel_id.value_namespace = name_space;
        ext_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender")
    {
        sender = value;
        sender.value_namespace = name_space;
        sender.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id = value;
        te_lsp_id.value_namespace = name_space;
        te_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Identifiers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "sender")
    {
        sender.yfilter = yfilter;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Identifiers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-tunnel-id" || name == "is-used" || name == "sender" || name == "te-lsp-id" || name == "tunnel-id")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Paths::Paths()
    :
    applied_bw{YType::uint32, "applied-bw"},
    bw{YType::uint32, "bw"},
    is_applied_bw_used{YType::boolean, "is-applied-bw-used"},
    is_bw_used{YType::boolean, "is-bw-used"},
    is_reopt_bw_used{YType::boolean, "is-reopt-bw-used"},
    reopt_bw{YType::uint32, "reopt-bw"}
    	,
    ero(std::make_shared<MplsPce::Lsps::Lsp::Paths::Ero>())
	,lspa(std::make_shared<MplsPce::Lsps::Lsp::Paths::Lspa>())
	,rro(std::make_shared<MplsPce::Lsps::Lsp::Paths::Rro>())
{
    ero->parent = this;
    lspa->parent = this;
    rro->parent = this;

    yang_name = "paths"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Paths::~Paths()
{
}

bool MplsPce::Lsps::Lsp::Paths::has_data() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return applied_bw.is_set
	|| bw.is_set
	|| is_applied_bw_used.is_set
	|| is_bw_used.is_set
	|| is_reopt_bw_used.is_set
	|| reopt_bw.is_set
	|| (ero !=  nullptr && ero->has_data())
	|| (lspa !=  nullptr && lspa->has_data())
	|| (rro !=  nullptr && rro->has_data());
}

bool MplsPce::Lsps::Lsp::Paths::has_operation() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(applied_bw.yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(is_applied_bw_used.yfilter)
	|| ydk::is_set(is_bw_used.yfilter)
	|| ydk::is_set(is_reopt_bw_used.yfilter)
	|| ydk::is_set(reopt_bw.yfilter)
	|| (ero !=  nullptr && ero->has_operation())
	|| (lspa !=  nullptr && lspa->has_operation())
	|| (rro !=  nullptr && rro->has_operation());
}

std::string MplsPce::Lsps::Lsp::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applied_bw.is_set || is_set(applied_bw.yfilter)) leaf_name_data.push_back(applied_bw.get_name_leafdata());
    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (is_applied_bw_used.is_set || is_set(is_applied_bw_used.yfilter)) leaf_name_data.push_back(is_applied_bw_used.get_name_leafdata());
    if (is_bw_used.is_set || is_set(is_bw_used.yfilter)) leaf_name_data.push_back(is_bw_used.get_name_leafdata());
    if (is_reopt_bw_used.is_set || is_set(is_reopt_bw_used.yfilter)) leaf_name_data.push_back(is_reopt_bw_used.get_name_leafdata());
    if (reopt_bw.is_set || is_set(reopt_bw.yfilter)) leaf_name_data.push_back(reopt_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ero")
    {
        if(ero == nullptr)
        {
            ero = std::make_shared<MplsPce::Lsps::Lsp::Paths::Ero>();
        }
        return ero;
    }

    if(child_yang_name == "lspa")
    {
        if(lspa == nullptr)
        {
            lspa = std::make_shared<MplsPce::Lsps::Lsp::Paths::Lspa>();
        }
        return lspa;
    }

    if(child_yang_name == "metric")
    {
        for(auto const & c : metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPce::Lsps::Lsp::Paths::Metric>();
        c->parent = this;
        metric.push_back(c);
        return c;
    }

    if(child_yang_name == "rro")
    {
        if(rro == nullptr)
        {
            rro = std::make_shared<MplsPce::Lsps::Lsp::Paths::Rro>();
        }
        return rro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ero != nullptr)
    {
        children["ero"] = ero;
    }

    if(lspa != nullptr)
    {
        children["lspa"] = lspa;
    }

    for (auto const & c : metric)
    {
        children[c->get_segment_path()] = c;
    }

    if(rro != nullptr)
    {
        children["rro"] = rro;
    }

    return children;
}

void MplsPce::Lsps::Lsp::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "applied-bw")
    {
        applied_bw = value;
        applied_bw.value_namespace = name_space;
        applied_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used = value;
        is_applied_bw_used.value_namespace = name_space;
        is_applied_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used = value;
        is_bw_used.value_namespace = name_space;
        is_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used = value;
        is_reopt_bw_used.value_namespace = name_space;
        is_reopt_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw = value;
        reopt_bw.value_namespace = name_space;
        reopt_bw.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "applied-bw")
    {
        applied_bw.yfilter = yfilter;
    }
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used.yfilter = yfilter;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used.yfilter = yfilter;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used.yfilter = yfilter;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero" || name == "lspa" || name == "metric" || name == "rro" || name == "applied-bw" || name == "bw" || name == "is-applied-bw-used" || name == "is-bw-used" || name == "is-reopt-bw-used" || name == "reopt-bw")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Paths::Ero::Ero()
    :
    address{YType::str, "address"},
    cost{YType::uint32, "cost"},
    is_used{YType::boolean, "is-used"}
{

    yang_name = "ero"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Paths::Ero::~Ero()
{
}

bool MplsPce::Lsps::Lsp::Paths::Ero::has_data() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return cost.is_set
	|| is_used.is_set;
}

bool MplsPce::Lsps::Lsp::Paths::Ero::has_operation() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(is_used.yfilter);
}

std::string MplsPce::Lsps::Lsp::Paths::Ero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Paths::Ero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subobject")
    {
        for(auto const & c : subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPce::Lsps::Lsp::Paths::Ero::Subobject>();
        c->parent = this;
        subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Paths::Ero::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsPce::Lsps::Lsp::Paths::Ero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Paths::Ero::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Paths::Ero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobject" || name == "address" || name == "cost" || name == "is-used")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Paths::Ero::Subobject::Subobject()
    :
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    global{YType::boolean, "global"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    local_address{YType::str, "local-address"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    mpls_label{YType::uint32, "mpls-label"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    remote_address{YType::str, "remote-address"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    segment_id_value{YType::uint32, "segment-id-value"},
    strict{YType::boolean, "strict"},
    subobj_type{YType::uint8, "subobj-type"}
{

    yang_name = "subobject"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Paths::Ero::Subobject::~Subobject()
{
}

bool MplsPce::Lsps::Lsp::Paths::Ero::Subobject::has_data() const
{
    return complete_mpls_label_entry.is_set
	|| global.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| local_address.is_set
	|| missing_node_adjcency_id.is_set
	|| missing_segment_id.is_set
	|| mpls_label.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| only_valid_mpls_label.is_set
	|| remote_address.is_set
	|| segment_id_exists.is_set
	|| segment_id_type.is_set
	|| segment_id_value.is_set
	|| strict.is_set
	|| subobj_type.is_set;
}

bool MplsPce::Lsps::Lsp::Paths::Ero::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(subobj_type.yfilter);
}

std::string MplsPce::Lsps::Lsp::Paths::Ero::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Paths::Ero::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::Ero::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Paths::Ero::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Lsps::Lsp::Paths::Ero::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Paths::Ero::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Paths::Ero::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complete-mpls-label-entry" || name == "global" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "local-address" || name == "missing-node-adjcency-id" || name == "missing-segment-id" || name == "mpls-label" || name == "node-adjacency-id-exists" || name == "node-id" || name == "only-valid-mpls-label" || name == "remote-address" || name == "segment-id-exists" || name == "segment-id-type" || name == "segment-id-value" || name == "strict" || name == "subobj-type")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Paths::Lspa::Lspa()
    :
    exlude_any{YType::uint32, "exlude-any"},
    hold{YType::uint8, "hold"},
    include_all{YType::uint32, "include-all"},
    include_any{YType::uint32, "include-any"},
    is_used{YType::boolean, "is-used"},
    lbit{YType::boolean, "lbit"},
    setup{YType::uint8, "setup"}
{

    yang_name = "lspa"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Paths::Lspa::~Lspa()
{
}

bool MplsPce::Lsps::Lsp::Paths::Lspa::has_data() const
{
    return exlude_any.is_set
	|| hold.is_set
	|| include_all.is_set
	|| include_any.is_set
	|| is_used.is_set
	|| lbit.is_set
	|| setup.is_set;
}

bool MplsPce::Lsps::Lsp::Paths::Lspa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exlude_any.yfilter)
	|| ydk::is_set(hold.yfilter)
	|| ydk::is_set(include_all.yfilter)
	|| ydk::is_set(include_any.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(lbit.yfilter)
	|| ydk::is_set(setup.yfilter);
}

std::string MplsPce::Lsps::Lsp::Paths::Lspa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Paths::Lspa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exlude_any.is_set || is_set(exlude_any.yfilter)) leaf_name_data.push_back(exlude_any.get_name_leafdata());
    if (hold.is_set || is_set(hold.yfilter)) leaf_name_data.push_back(hold.get_name_leafdata());
    if (include_all.is_set || is_set(include_all.yfilter)) leaf_name_data.push_back(include_all.get_name_leafdata());
    if (include_any.is_set || is_set(include_any.yfilter)) leaf_name_data.push_back(include_any.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (lbit.is_set || is_set(lbit.yfilter)) leaf_name_data.push_back(lbit.get_name_leafdata());
    if (setup.is_set || is_set(setup.yfilter)) leaf_name_data.push_back(setup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::Lspa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Paths::Lspa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Lsps::Lsp::Paths::Lspa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exlude-any")
    {
        exlude_any = value;
        exlude_any.value_namespace = name_space;
        exlude_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold")
    {
        hold = value;
        hold.value_namespace = name_space;
        hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-all")
    {
        include_all = value;
        include_all.value_namespace = name_space;
        include_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-any")
    {
        include_any = value;
        include_any.value_namespace = name_space;
        include_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbit")
    {
        lbit = value;
        lbit.value_namespace = name_space;
        lbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup")
    {
        setup = value;
        setup.value_namespace = name_space;
        setup.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Paths::Lspa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exlude-any")
    {
        exlude_any.yfilter = yfilter;
    }
    if(value_path == "hold")
    {
        hold.yfilter = yfilter;
    }
    if(value_path == "include-all")
    {
        include_all.yfilter = yfilter;
    }
    if(value_path == "include-any")
    {
        include_any.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "lbit")
    {
        lbit.yfilter = yfilter;
    }
    if(value_path == "setup")
    {
        setup.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Paths::Lspa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exlude-any" || name == "hold" || name == "include-all" || name == "include-any" || name == "is-used" || name == "lbit" || name == "setup")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Paths::Metric::Metric()
    :
    cost{YType::uint32, "cost"},
    type{YType::uint8, "type"}
{

    yang_name = "metric"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Paths::Metric::~Metric()
{
}

bool MplsPce::Lsps::Lsp::Paths::Metric::has_data() const
{
    return cost.is_set
	|| type.is_set;
}

bool MplsPce::Lsps::Lsp::Paths::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsPce::Lsps::Lsp::Paths::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Paths::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Paths::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Lsps::Lsp::Paths::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Paths::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Paths::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "type")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Paths::Rro::Rro()
    :
    address{YType::str, "address"},
    cost{YType::uint32, "cost"},
    is_used{YType::boolean, "is-used"}
{

    yang_name = "rro"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Paths::Rro::~Rro()
{
}

bool MplsPce::Lsps::Lsp::Paths::Rro::has_data() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return cost.is_set
	|| is_used.is_set;
}

bool MplsPce::Lsps::Lsp::Paths::Rro::has_operation() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(is_used.yfilter);
}

std::string MplsPce::Lsps::Lsp::Paths::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Paths::Rro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subobject")
    {
        for(auto const & c : subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPce::Lsps::Lsp::Paths::Rro::Subobject>();
        c->parent = this;
        subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Paths::Rro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsPce::Lsps::Lsp::Paths::Rro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Paths::Rro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Paths::Rro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobject" || name == "address" || name == "cost" || name == "is-used")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Paths::Rro::Subobject::Subobject()
    :
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    global{YType::boolean, "global"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    local_address{YType::str, "local-address"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    mpls_label{YType::uint32, "mpls-label"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    remote_address{YType::str, "remote-address"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    segment_id_value{YType::uint32, "segment-id-value"},
    strict{YType::boolean, "strict"},
    subobj_type{YType::uint8, "subobj-type"}
{

    yang_name = "subobject"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Paths::Rro::Subobject::~Subobject()
{
}

bool MplsPce::Lsps::Lsp::Paths::Rro::Subobject::has_data() const
{
    return complete_mpls_label_entry.is_set
	|| global.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| local_address.is_set
	|| missing_node_adjcency_id.is_set
	|| missing_segment_id.is_set
	|| mpls_label.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| only_valid_mpls_label.is_set
	|| remote_address.is_set
	|| segment_id_exists.is_set
	|| segment_id_type.is_set
	|| segment_id_value.is_set
	|| strict.is_set
	|| subobj_type.is_set;
}

bool MplsPce::Lsps::Lsp::Paths::Rro::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(subobj_type.yfilter);
}

std::string MplsPce::Lsps::Lsp::Paths::Rro::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Paths::Rro::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::Rro::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Paths::Rro::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Lsps::Lsp::Paths::Rro::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Paths::Rro::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Paths::Rro::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complete-mpls-label-entry" || name == "global" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "local-address" || name == "missing-node-adjcency-id" || name == "missing-segment-id" || name == "mpls-label" || name == "node-adjacency-id-exists" || name == "node-id" || name == "only-valid-mpls-label" || name == "remote-address" || name == "segment-id-exists" || name == "segment-id-type" || name == "segment-id-value" || name == "strict" || name == "subobj-type")
        return true;
    return false;
}

MplsPce::Lsps::Paths::Paths()
    :
    applied_bw{YType::uint32, "applied-bw"},
    bw{YType::uint32, "bw"},
    is_applied_bw_used{YType::boolean, "is-applied-bw-used"},
    is_bw_used{YType::boolean, "is-bw-used"},
    is_reopt_bw_used{YType::boolean, "is-reopt-bw-used"},
    reopt_bw{YType::uint32, "reopt-bw"}
    	,
    ero(std::make_shared<MplsPce::Lsps::Paths::Ero>())
	,lspa(std::make_shared<MplsPce::Lsps::Paths::Lspa>())
	,rro(std::make_shared<MplsPce::Lsps::Paths::Rro>())
{
    ero->parent = this;
    lspa->parent = this;
    rro->parent = this;

    yang_name = "paths"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Paths::~Paths()
{
}

bool MplsPce::Lsps::Paths::has_data() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return applied_bw.is_set
	|| bw.is_set
	|| is_applied_bw_used.is_set
	|| is_bw_used.is_set
	|| is_reopt_bw_used.is_set
	|| reopt_bw.is_set
	|| (ero !=  nullptr && ero->has_data())
	|| (lspa !=  nullptr && lspa->has_data())
	|| (rro !=  nullptr && rro->has_data());
}

bool MplsPce::Lsps::Paths::has_operation() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(applied_bw.yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(is_applied_bw_used.yfilter)
	|| ydk::is_set(is_bw_used.yfilter)
	|| ydk::is_set(is_reopt_bw_used.yfilter)
	|| ydk::is_set(reopt_bw.yfilter)
	|| (ero !=  nullptr && ero->has_operation())
	|| (lspa !=  nullptr && lspa->has_operation())
	|| (rro !=  nullptr && rro->has_operation());
}

std::string MplsPce::Lsps::Paths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applied_bw.is_set || is_set(applied_bw.yfilter)) leaf_name_data.push_back(applied_bw.get_name_leafdata());
    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (is_applied_bw_used.is_set || is_set(is_applied_bw_used.yfilter)) leaf_name_data.push_back(is_applied_bw_used.get_name_leafdata());
    if (is_bw_used.is_set || is_set(is_bw_used.yfilter)) leaf_name_data.push_back(is_bw_used.get_name_leafdata());
    if (is_reopt_bw_used.is_set || is_set(is_reopt_bw_used.yfilter)) leaf_name_data.push_back(is_reopt_bw_used.get_name_leafdata());
    if (reopt_bw.is_set || is_set(reopt_bw.yfilter)) leaf_name_data.push_back(reopt_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ero")
    {
        if(ero == nullptr)
        {
            ero = std::make_shared<MplsPce::Lsps::Paths::Ero>();
        }
        return ero;
    }

    if(child_yang_name == "lspa")
    {
        if(lspa == nullptr)
        {
            lspa = std::make_shared<MplsPce::Lsps::Paths::Lspa>();
        }
        return lspa;
    }

    if(child_yang_name == "metric")
    {
        for(auto const & c : metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPce::Lsps::Paths::Metric>();
        c->parent = this;
        metric.push_back(c);
        return c;
    }

    if(child_yang_name == "rro")
    {
        if(rro == nullptr)
        {
            rro = std::make_shared<MplsPce::Lsps::Paths::Rro>();
        }
        return rro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ero != nullptr)
    {
        children["ero"] = ero;
    }

    if(lspa != nullptr)
    {
        children["lspa"] = lspa;
    }

    for (auto const & c : metric)
    {
        children[c->get_segment_path()] = c;
    }

    if(rro != nullptr)
    {
        children["rro"] = rro;
    }

    return children;
}

void MplsPce::Lsps::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "applied-bw")
    {
        applied_bw = value;
        applied_bw.value_namespace = name_space;
        applied_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used = value;
        is_applied_bw_used.value_namespace = name_space;
        is_applied_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used = value;
        is_bw_used.value_namespace = name_space;
        is_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used = value;
        is_reopt_bw_used.value_namespace = name_space;
        is_reopt_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw = value;
        reopt_bw.value_namespace = name_space;
        reopt_bw.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "applied-bw")
    {
        applied_bw.yfilter = yfilter;
    }
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used.yfilter = yfilter;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used.yfilter = yfilter;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used.yfilter = yfilter;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero" || name == "lspa" || name == "metric" || name == "rro" || name == "applied-bw" || name == "bw" || name == "is-applied-bw-used" || name == "is-bw-used" || name == "is-reopt-bw-used" || name == "reopt-bw")
        return true;
    return false;
}

MplsPce::Lsps::Paths::Ero::Ero()
    :
    address{YType::str, "address"},
    cost{YType::uint32, "cost"},
    is_used{YType::boolean, "is-used"}
{

    yang_name = "ero"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Paths::Ero::~Ero()
{
}

bool MplsPce::Lsps::Paths::Ero::has_data() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return cost.is_set
	|| is_used.is_set;
}

bool MplsPce::Lsps::Paths::Ero::has_operation() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(is_used.yfilter);
}

std::string MplsPce::Lsps::Paths::Ero::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Paths::Ero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Paths::Ero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subobject")
    {
        for(auto const & c : subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPce::Lsps::Paths::Ero::Subobject>();
        c->parent = this;
        subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Paths::Ero::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsPce::Lsps::Paths::Ero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Paths::Ero::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Paths::Ero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobject" || name == "address" || name == "cost" || name == "is-used")
        return true;
    return false;
}

MplsPce::Lsps::Paths::Ero::Subobject::Subobject()
    :
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    global{YType::boolean, "global"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    local_address{YType::str, "local-address"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    mpls_label{YType::uint32, "mpls-label"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    remote_address{YType::str, "remote-address"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    segment_id_value{YType::uint32, "segment-id-value"},
    strict{YType::boolean, "strict"},
    subobj_type{YType::uint8, "subobj-type"}
{

    yang_name = "subobject"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Paths::Ero::Subobject::~Subobject()
{
}

bool MplsPce::Lsps::Paths::Ero::Subobject::has_data() const
{
    return complete_mpls_label_entry.is_set
	|| global.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| local_address.is_set
	|| missing_node_adjcency_id.is_set
	|| missing_segment_id.is_set
	|| mpls_label.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| only_valid_mpls_label.is_set
	|| remote_address.is_set
	|| segment_id_exists.is_set
	|| segment_id_type.is_set
	|| segment_id_value.is_set
	|| strict.is_set
	|| subobj_type.is_set;
}

bool MplsPce::Lsps::Paths::Ero::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(subobj_type.yfilter);
}

std::string MplsPce::Lsps::Paths::Ero::Subobject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/paths/ero/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Paths::Ero::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Paths::Ero::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::Ero::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Paths::Ero::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Lsps::Paths::Ero::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Paths::Ero::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Paths::Ero::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complete-mpls-label-entry" || name == "global" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "local-address" || name == "missing-node-adjcency-id" || name == "missing-segment-id" || name == "mpls-label" || name == "node-adjacency-id-exists" || name == "node-id" || name == "only-valid-mpls-label" || name == "remote-address" || name == "segment-id-exists" || name == "segment-id-type" || name == "segment-id-value" || name == "strict" || name == "subobj-type")
        return true;
    return false;
}

MplsPce::Lsps::Paths::Lspa::Lspa()
    :
    exlude_any{YType::uint32, "exlude-any"},
    hold{YType::uint8, "hold"},
    include_all{YType::uint32, "include-all"},
    include_any{YType::uint32, "include-any"},
    is_used{YType::boolean, "is-used"},
    lbit{YType::boolean, "lbit"},
    setup{YType::uint8, "setup"}
{

    yang_name = "lspa"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Paths::Lspa::~Lspa()
{
}

bool MplsPce::Lsps::Paths::Lspa::has_data() const
{
    return exlude_any.is_set
	|| hold.is_set
	|| include_all.is_set
	|| include_any.is_set
	|| is_used.is_set
	|| lbit.is_set
	|| setup.is_set;
}

bool MplsPce::Lsps::Paths::Lspa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exlude_any.yfilter)
	|| ydk::is_set(hold.yfilter)
	|| ydk::is_set(include_all.yfilter)
	|| ydk::is_set(include_any.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(lbit.yfilter)
	|| ydk::is_set(setup.yfilter);
}

std::string MplsPce::Lsps::Paths::Lspa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Paths::Lspa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Paths::Lspa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exlude_any.is_set || is_set(exlude_any.yfilter)) leaf_name_data.push_back(exlude_any.get_name_leafdata());
    if (hold.is_set || is_set(hold.yfilter)) leaf_name_data.push_back(hold.get_name_leafdata());
    if (include_all.is_set || is_set(include_all.yfilter)) leaf_name_data.push_back(include_all.get_name_leafdata());
    if (include_any.is_set || is_set(include_any.yfilter)) leaf_name_data.push_back(include_any.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (lbit.is_set || is_set(lbit.yfilter)) leaf_name_data.push_back(lbit.get_name_leafdata());
    if (setup.is_set || is_set(setup.yfilter)) leaf_name_data.push_back(setup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::Lspa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Paths::Lspa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Lsps::Paths::Lspa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exlude-any")
    {
        exlude_any = value;
        exlude_any.value_namespace = name_space;
        exlude_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold")
    {
        hold = value;
        hold.value_namespace = name_space;
        hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-all")
    {
        include_all = value;
        include_all.value_namespace = name_space;
        include_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-any")
    {
        include_any = value;
        include_any.value_namespace = name_space;
        include_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbit")
    {
        lbit = value;
        lbit.value_namespace = name_space;
        lbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup")
    {
        setup = value;
        setup.value_namespace = name_space;
        setup.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Paths::Lspa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exlude-any")
    {
        exlude_any.yfilter = yfilter;
    }
    if(value_path == "hold")
    {
        hold.yfilter = yfilter;
    }
    if(value_path == "include-all")
    {
        include_all.yfilter = yfilter;
    }
    if(value_path == "include-any")
    {
        include_any.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "lbit")
    {
        lbit.yfilter = yfilter;
    }
    if(value_path == "setup")
    {
        setup.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Paths::Lspa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exlude-any" || name == "hold" || name == "include-all" || name == "include-any" || name == "is-used" || name == "lbit" || name == "setup")
        return true;
    return false;
}

MplsPce::Lsps::Paths::Metric::Metric()
    :
    cost{YType::uint32, "cost"},
    type{YType::uint8, "type"}
{

    yang_name = "metric"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Paths::Metric::~Metric()
{
}

bool MplsPce::Lsps::Paths::Metric::has_data() const
{
    return cost.is_set
	|| type.is_set;
}

bool MplsPce::Lsps::Paths::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsPce::Lsps::Paths::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Paths::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Paths::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Paths::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Lsps::Paths::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Paths::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Paths::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "type")
        return true;
    return false;
}

MplsPce::Lsps::Paths::Rro::Rro()
    :
    address{YType::str, "address"},
    cost{YType::uint32, "cost"},
    is_used{YType::boolean, "is-used"}
{

    yang_name = "rro"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Paths::Rro::~Rro()
{
}

bool MplsPce::Lsps::Paths::Rro::has_data() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return cost.is_set
	|| is_used.is_set;
}

bool MplsPce::Lsps::Paths::Rro::has_operation() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(is_used.yfilter);
}

std::string MplsPce::Lsps::Paths::Rro::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Paths::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Paths::Rro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subobject")
    {
        for(auto const & c : subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPce::Lsps::Paths::Rro::Subobject>();
        c->parent = this;
        subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Paths::Rro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsPce::Lsps::Paths::Rro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Paths::Rro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Paths::Rro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobject" || name == "address" || name == "cost" || name == "is-used")
        return true;
    return false;
}

MplsPce::Lsps::Paths::Rro::Subobject::Subobject()
    :
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    global{YType::boolean, "global"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    local_address{YType::str, "local-address"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    mpls_label{YType::uint32, "mpls-label"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    remote_address{YType::str, "remote-address"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    segment_id_value{YType::uint32, "segment-id-value"},
    strict{YType::boolean, "strict"},
    subobj_type{YType::uint8, "subobj-type"}
{

    yang_name = "subobject"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Paths::Rro::Subobject::~Subobject()
{
}

bool MplsPce::Lsps::Paths::Rro::Subobject::has_data() const
{
    return complete_mpls_label_entry.is_set
	|| global.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| local_address.is_set
	|| missing_node_adjcency_id.is_set
	|| missing_segment_id.is_set
	|| mpls_label.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| only_valid_mpls_label.is_set
	|| remote_address.is_set
	|| segment_id_exists.is_set
	|| segment_id_type.is_set
	|| segment_id_value.is_set
	|| strict.is_set
	|| subobj_type.is_set;
}

bool MplsPce::Lsps::Paths::Rro::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(subobj_type.yfilter);
}

std::string MplsPce::Lsps::Paths::Rro::Subobject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/paths/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Paths::Rro::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Paths::Rro::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::Rro::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Paths::Rro::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Lsps::Paths::Rro::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Paths::Rro::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Paths::Rro::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complete-mpls-label-entry" || name == "global" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "local-address" || name == "missing-node-adjcency-id" || name == "missing-segment-id" || name == "mpls-label" || name == "node-adjacency-id-exists" || name == "node-id" || name == "only-valid-mpls-label" || name == "remote-address" || name == "segment-id-exists" || name == "segment-id-type" || name == "segment-id-value" || name == "strict" || name == "subobj-type")
        return true;
    return false;
}

MplsPce::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "mpls-pce"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Peers::~Peers()
{
}

bool MplsPce::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool MplsPce::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsPce::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPce::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsPce::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPce::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsPce::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

MplsPce::Peers::Peer::Peer()
    :
    peer_address{YType::str, "peer-address"},
    candidate{YType::boolean, "candidate"},
    capability_db_version{YType::boolean, "capability-db-version"},
    capability_instantiate{YType::boolean, "capability-instantiate"},
    capability_segment_routing{YType::boolean, "capability-segment-routing"},
    capability_update{YType::boolean, "capability-update"},
    delta_sync_capability{YType::boolean, "delta-sync-capability"},
    error{YType::str, "error"},
    keepalives{YType::uint32, "keepalives"},
    keychain_enabled{YType::boolean, "keychain-enabled"},
    local_sid{YType::uint8, "local-sid"},
    max_dead_interval{YType::uint8, "max-dead-interval"},
    md5_enabled{YType::boolean, "md5-enabled"},
    min_keepalive_interval{YType::uint8, "min-keepalive-interval"},
    negotated_dead_time{YType::uint32, "negotated-dead-time"},
    negotiated_keepalive{YType::uint32, "negotiated-keepalive"},
    pce_err_rx{YType::uint32, "pce-err-rx"},
    pce_err_tx{YType::uint32, "pce-err-tx"},
    pce_init_rx{YType::uint32, "pce-init-rx"},
    pce_init_tx{YType::uint32, "pce-init-tx"},
    pce_keepalive_rx{YType::uint64, "pce-keepalive-rx"},
    pce_keepalive_tx{YType::uint64, "pce-keepalive-tx"},
    pce_open_rx{YType::uint32, "pce-open-rx"},
    pce_open_tx{YType::uint32, "pce-open-tx"},
    pce_rep_rx{YType::uint32, "pce-rep-rx"},
    pce_rep_tx{YType::uint32, "pce-rep-tx"},
    pce_req_rx{YType::uint32, "pce-req-rx"},
    pce_req_tx{YType::uint32, "pce-req-tx"},
    pce_rpt_rx{YType::uint32, "pce-rpt-rx"},
    pce_rpt_tx{YType::uint32, "pce-rpt-tx"},
    pce_state{YType::enumeration, "pce-state"},
    pce_upd_rx{YType::uint32, "pce-upd-rx"},
    pce_upd_tx{YType::uint32, "pce-upd-tx"},
    pcep_up_time{YType::uint32, "pcep-up-time"},
    precedence{YType::uint32, "precedence"},
    remote_sid{YType::uint8, "remote-sid"},
    req_reply_avg{YType::uint64, "req-reply-avg"},
    req_reply_max{YType::uint64, "req-reply-max"},
    req_reply_min{YType::uint64, "req-reply-min"},
    request_timeouts{YType::uint64, "request-timeouts"},
    stateful{YType::boolean, "stateful"},
    statically_configured{YType::boolean, "statically-configured"},
    triggered_sync_capability{YType::boolean, "triggered-sync-capability"}
    	,
    last_rx_pce_err(std::make_shared<MplsPce::Peers::Peer::LastRxPceErr>())
	,last_tx_pce_err(std::make_shared<MplsPce::Peers::Peer::LastTxPceErr>())
{
    last_rx_pce_err->parent = this;
    last_tx_pce_err->parent = this;

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Peers::Peer::~Peer()
{
}

bool MplsPce::Peers::Peer::has_data() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_data())
            return true;
    }
    return peer_address.is_set
	|| candidate.is_set
	|| capability_db_version.is_set
	|| capability_instantiate.is_set
	|| capability_segment_routing.is_set
	|| capability_update.is_set
	|| delta_sync_capability.is_set
	|| error.is_set
	|| keepalives.is_set
	|| keychain_enabled.is_set
	|| local_sid.is_set
	|| max_dead_interval.is_set
	|| md5_enabled.is_set
	|| min_keepalive_interval.is_set
	|| negotated_dead_time.is_set
	|| negotiated_keepalive.is_set
	|| pce_err_rx.is_set
	|| pce_err_tx.is_set
	|| pce_init_rx.is_set
	|| pce_init_tx.is_set
	|| pce_keepalive_rx.is_set
	|| pce_keepalive_tx.is_set
	|| pce_open_rx.is_set
	|| pce_open_tx.is_set
	|| pce_rep_rx.is_set
	|| pce_rep_tx.is_set
	|| pce_req_rx.is_set
	|| pce_req_tx.is_set
	|| pce_rpt_rx.is_set
	|| pce_rpt_tx.is_set
	|| pce_state.is_set
	|| pce_upd_rx.is_set
	|| pce_upd_tx.is_set
	|| pcep_up_time.is_set
	|| precedence.is_set
	|| remote_sid.is_set
	|| req_reply_avg.is_set
	|| req_reply_max.is_set
	|| req_reply_min.is_set
	|| request_timeouts.is_set
	|| stateful.is_set
	|| statically_configured.is_set
	|| triggered_sync_capability.is_set
	|| (last_rx_pce_err !=  nullptr && last_rx_pce_err->has_data())
	|| (last_tx_pce_err !=  nullptr && last_tx_pce_err->has_data());
}

bool MplsPce::Peers::Peer::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(candidate.yfilter)
	|| ydk::is_set(capability_db_version.yfilter)
	|| ydk::is_set(capability_instantiate.yfilter)
	|| ydk::is_set(capability_segment_routing.yfilter)
	|| ydk::is_set(capability_update.yfilter)
	|| ydk::is_set(delta_sync_capability.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(keepalives.yfilter)
	|| ydk::is_set(keychain_enabled.yfilter)
	|| ydk::is_set(local_sid.yfilter)
	|| ydk::is_set(max_dead_interval.yfilter)
	|| ydk::is_set(md5_enabled.yfilter)
	|| ydk::is_set(min_keepalive_interval.yfilter)
	|| ydk::is_set(negotated_dead_time.yfilter)
	|| ydk::is_set(negotiated_keepalive.yfilter)
	|| ydk::is_set(pce_err_rx.yfilter)
	|| ydk::is_set(pce_err_tx.yfilter)
	|| ydk::is_set(pce_init_rx.yfilter)
	|| ydk::is_set(pce_init_tx.yfilter)
	|| ydk::is_set(pce_keepalive_rx.yfilter)
	|| ydk::is_set(pce_keepalive_tx.yfilter)
	|| ydk::is_set(pce_open_rx.yfilter)
	|| ydk::is_set(pce_open_tx.yfilter)
	|| ydk::is_set(pce_rep_rx.yfilter)
	|| ydk::is_set(pce_rep_tx.yfilter)
	|| ydk::is_set(pce_req_rx.yfilter)
	|| ydk::is_set(pce_req_tx.yfilter)
	|| ydk::is_set(pce_rpt_rx.yfilter)
	|| ydk::is_set(pce_rpt_tx.yfilter)
	|| ydk::is_set(pce_state.yfilter)
	|| ydk::is_set(pce_upd_rx.yfilter)
	|| ydk::is_set(pce_upd_tx.yfilter)
	|| ydk::is_set(pcep_up_time.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(remote_sid.yfilter)
	|| ydk::is_set(req_reply_avg.yfilter)
	|| ydk::is_set(req_reply_max.yfilter)
	|| ydk::is_set(req_reply_min.yfilter)
	|| ydk::is_set(request_timeouts.yfilter)
	|| ydk::is_set(stateful.yfilter)
	|| ydk::is_set(statically_configured.yfilter)
	|| ydk::is_set(triggered_sync_capability.yfilter)
	|| (last_rx_pce_err !=  nullptr && last_rx_pce_err->has_operation())
	|| (last_tx_pce_err !=  nullptr && last_tx_pce_err->has_operation());
}

std::string MplsPce::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[peer-address='" <<peer_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (candidate.is_set || is_set(candidate.yfilter)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (capability_db_version.is_set || is_set(capability_db_version.yfilter)) leaf_name_data.push_back(capability_db_version.get_name_leafdata());
    if (capability_instantiate.is_set || is_set(capability_instantiate.yfilter)) leaf_name_data.push_back(capability_instantiate.get_name_leafdata());
    if (capability_segment_routing.is_set || is_set(capability_segment_routing.yfilter)) leaf_name_data.push_back(capability_segment_routing.get_name_leafdata());
    if (capability_update.is_set || is_set(capability_update.yfilter)) leaf_name_data.push_back(capability_update.get_name_leafdata());
    if (delta_sync_capability.is_set || is_set(delta_sync_capability.yfilter)) leaf_name_data.push_back(delta_sync_capability.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (keepalives.is_set || is_set(keepalives.yfilter)) leaf_name_data.push_back(keepalives.get_name_leafdata());
    if (keychain_enabled.is_set || is_set(keychain_enabled.yfilter)) leaf_name_data.push_back(keychain_enabled.get_name_leafdata());
    if (local_sid.is_set || is_set(local_sid.yfilter)) leaf_name_data.push_back(local_sid.get_name_leafdata());
    if (max_dead_interval.is_set || is_set(max_dead_interval.yfilter)) leaf_name_data.push_back(max_dead_interval.get_name_leafdata());
    if (md5_enabled.is_set || is_set(md5_enabled.yfilter)) leaf_name_data.push_back(md5_enabled.get_name_leafdata());
    if (min_keepalive_interval.is_set || is_set(min_keepalive_interval.yfilter)) leaf_name_data.push_back(min_keepalive_interval.get_name_leafdata());
    if (negotated_dead_time.is_set || is_set(negotated_dead_time.yfilter)) leaf_name_data.push_back(negotated_dead_time.get_name_leafdata());
    if (negotiated_keepalive.is_set || is_set(negotiated_keepalive.yfilter)) leaf_name_data.push_back(negotiated_keepalive.get_name_leafdata());
    if (pce_err_rx.is_set || is_set(pce_err_rx.yfilter)) leaf_name_data.push_back(pce_err_rx.get_name_leafdata());
    if (pce_err_tx.is_set || is_set(pce_err_tx.yfilter)) leaf_name_data.push_back(pce_err_tx.get_name_leafdata());
    if (pce_init_rx.is_set || is_set(pce_init_rx.yfilter)) leaf_name_data.push_back(pce_init_rx.get_name_leafdata());
    if (pce_init_tx.is_set || is_set(pce_init_tx.yfilter)) leaf_name_data.push_back(pce_init_tx.get_name_leafdata());
    if (pce_keepalive_rx.is_set || is_set(pce_keepalive_rx.yfilter)) leaf_name_data.push_back(pce_keepalive_rx.get_name_leafdata());
    if (pce_keepalive_tx.is_set || is_set(pce_keepalive_tx.yfilter)) leaf_name_data.push_back(pce_keepalive_tx.get_name_leafdata());
    if (pce_open_rx.is_set || is_set(pce_open_rx.yfilter)) leaf_name_data.push_back(pce_open_rx.get_name_leafdata());
    if (pce_open_tx.is_set || is_set(pce_open_tx.yfilter)) leaf_name_data.push_back(pce_open_tx.get_name_leafdata());
    if (pce_rep_rx.is_set || is_set(pce_rep_rx.yfilter)) leaf_name_data.push_back(pce_rep_rx.get_name_leafdata());
    if (pce_rep_tx.is_set || is_set(pce_rep_tx.yfilter)) leaf_name_data.push_back(pce_rep_tx.get_name_leafdata());
    if (pce_req_rx.is_set || is_set(pce_req_rx.yfilter)) leaf_name_data.push_back(pce_req_rx.get_name_leafdata());
    if (pce_req_tx.is_set || is_set(pce_req_tx.yfilter)) leaf_name_data.push_back(pce_req_tx.get_name_leafdata());
    if (pce_rpt_rx.is_set || is_set(pce_rpt_rx.yfilter)) leaf_name_data.push_back(pce_rpt_rx.get_name_leafdata());
    if (pce_rpt_tx.is_set || is_set(pce_rpt_tx.yfilter)) leaf_name_data.push_back(pce_rpt_tx.get_name_leafdata());
    if (pce_state.is_set || is_set(pce_state.yfilter)) leaf_name_data.push_back(pce_state.get_name_leafdata());
    if (pce_upd_rx.is_set || is_set(pce_upd_rx.yfilter)) leaf_name_data.push_back(pce_upd_rx.get_name_leafdata());
    if (pce_upd_tx.is_set || is_set(pce_upd_tx.yfilter)) leaf_name_data.push_back(pce_upd_tx.get_name_leafdata());
    if (pcep_up_time.is_set || is_set(pcep_up_time.yfilter)) leaf_name_data.push_back(pcep_up_time.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (remote_sid.is_set || is_set(remote_sid.yfilter)) leaf_name_data.push_back(remote_sid.get_name_leafdata());
    if (req_reply_avg.is_set || is_set(req_reply_avg.yfilter)) leaf_name_data.push_back(req_reply_avg.get_name_leafdata());
    if (req_reply_max.is_set || is_set(req_reply_max.yfilter)) leaf_name_data.push_back(req_reply_max.get_name_leafdata());
    if (req_reply_min.is_set || is_set(req_reply_min.yfilter)) leaf_name_data.push_back(req_reply_min.get_name_leafdata());
    if (request_timeouts.is_set || is_set(request_timeouts.yfilter)) leaf_name_data.push_back(request_timeouts.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (statically_configured.is_set || is_set(statically_configured.yfilter)) leaf_name_data.push_back(statically_configured.get_name_leafdata());
    if (triggered_sync_capability.is_set || is_set(triggered_sync_capability.yfilter)) leaf_name_data.push_back(triggered_sync_capability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ig-ps")
    {
        for(auto const & c : ig_ps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPce::Peers::Peer::IgPs>();
        c->parent = this;
        ig_ps.push_back(c);
        return c;
    }

    if(child_yang_name == "last-rx-pce-err")
    {
        if(last_rx_pce_err == nullptr)
        {
            last_rx_pce_err = std::make_shared<MplsPce::Peers::Peer::LastRxPceErr>();
        }
        return last_rx_pce_err;
    }

    if(child_yang_name == "last-tx-pce-err")
    {
        if(last_tx_pce_err == nullptr)
        {
            last_tx_pce_err = std::make_shared<MplsPce::Peers::Peer::LastTxPceErr>();
        }
        return last_tx_pce_err;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ig_ps)
    {
        children[c->get_segment_path()] = c;
    }

    if(last_rx_pce_err != nullptr)
    {
        children["last-rx-pce-err"] = last_rx_pce_err;
    }

    if(last_tx_pce_err != nullptr)
    {
        children["last-tx-pce-err"] = last_tx_pce_err;
    }

    return children;
}

void MplsPce::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate")
    {
        candidate = value;
        candidate.value_namespace = name_space;
        candidate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version = value;
        capability_db_version.value_namespace = name_space;
        capability_db_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate = value;
        capability_instantiate.value_namespace = name_space;
        capability_instantiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing = value;
        capability_segment_routing.value_namespace = name_space;
        capability_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-update")
    {
        capability_update = value;
        capability_update.value_namespace = name_space;
        capability_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delta-sync-capability")
    {
        delta_sync_capability = value;
        delta_sync_capability.value_namespace = name_space;
        delta_sync_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalives")
    {
        keepalives = value;
        keepalives.value_namespace = name_space;
        keepalives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled = value;
        keychain_enabled.value_namespace = name_space;
        keychain_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-sid")
    {
        local_sid = value;
        local_sid.value_namespace = name_space;
        local_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-dead-interval")
    {
        max_dead_interval = value;
        max_dead_interval.value_namespace = name_space;
        max_dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled = value;
        md5_enabled.value_namespace = name_space;
        md5_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-keepalive-interval")
    {
        min_keepalive_interval = value;
        min_keepalive_interval.value_namespace = name_space;
        min_keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotated-dead-time")
    {
        negotated_dead_time = value;
        negotated_dead_time.value_namespace = name_space;
        negotated_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-keepalive")
    {
        negotiated_keepalive = value;
        negotiated_keepalive.value_namespace = name_space;
        negotiated_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-rx")
    {
        pce_err_rx = value;
        pce_err_rx.value_namespace = name_space;
        pce_err_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-tx")
    {
        pce_err_tx = value;
        pce_err_tx.value_namespace = name_space;
        pce_err_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-init-rx")
    {
        pce_init_rx = value;
        pce_init_rx.value_namespace = name_space;
        pce_init_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-init-tx")
    {
        pce_init_tx = value;
        pce_init_tx.value_namespace = name_space;
        pce_init_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx = value;
        pce_keepalive_rx.value_namespace = name_space;
        pce_keepalive_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx = value;
        pce_keepalive_tx.value_namespace = name_space;
        pce_keepalive_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx = value;
        pce_open_rx.value_namespace = name_space;
        pce_open_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx = value;
        pce_open_tx.value_namespace = name_space;
        pce_open_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rep-rx")
    {
        pce_rep_rx = value;
        pce_rep_rx.value_namespace = name_space;
        pce_rep_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rep-tx")
    {
        pce_rep_tx = value;
        pce_rep_tx.value_namespace = name_space;
        pce_rep_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-rx")
    {
        pce_req_rx = value;
        pce_req_rx.value_namespace = name_space;
        pce_req_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-tx")
    {
        pce_req_tx = value;
        pce_req_tx.value_namespace = name_space;
        pce_req_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rpt-rx")
    {
        pce_rpt_rx = value;
        pce_rpt_rx.value_namespace = name_space;
        pce_rpt_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rpt-tx")
    {
        pce_rpt_tx = value;
        pce_rpt_tx.value_namespace = name_space;
        pce_rpt_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-state")
    {
        pce_state = value;
        pce_state.value_namespace = name_space;
        pce_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-upd-rx")
    {
        pce_upd_rx = value;
        pce_upd_rx.value_namespace = name_space;
        pce_upd_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-upd-tx")
    {
        pce_upd_tx = value;
        pce_upd_tx.value_namespace = name_space;
        pce_upd_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time = value;
        pcep_up_time.value_namespace = name_space;
        pcep_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-sid")
    {
        remote_sid = value;
        remote_sid.value_namespace = name_space;
        remote_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-reply-avg")
    {
        req_reply_avg = value;
        req_reply_avg.value_namespace = name_space;
        req_reply_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-reply-max")
    {
        req_reply_max = value;
        req_reply_max.value_namespace = name_space;
        req_reply_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-reply-min")
    {
        req_reply_min = value;
        req_reply_min.value_namespace = name_space;
        req_reply_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-timeouts")
    {
        request_timeouts = value;
        request_timeouts.value_namespace = name_space;
        request_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statically-configured")
    {
        statically_configured = value;
        statically_configured.value_namespace = name_space;
        statically_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "triggered-sync-capability")
    {
        triggered_sync_capability = value;
        triggered_sync_capability.value_namespace = name_space;
        triggered_sync_capability.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "candidate")
    {
        candidate.yfilter = yfilter;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version.yfilter = yfilter;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate.yfilter = yfilter;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing.yfilter = yfilter;
    }
    if(value_path == "capability-update")
    {
        capability_update.yfilter = yfilter;
    }
    if(value_path == "delta-sync-capability")
    {
        delta_sync_capability.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "keepalives")
    {
        keepalives.yfilter = yfilter;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled.yfilter = yfilter;
    }
    if(value_path == "local-sid")
    {
        local_sid.yfilter = yfilter;
    }
    if(value_path == "max-dead-interval")
    {
        max_dead_interval.yfilter = yfilter;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled.yfilter = yfilter;
    }
    if(value_path == "min-keepalive-interval")
    {
        min_keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "negotated-dead-time")
    {
        negotated_dead_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-keepalive")
    {
        negotiated_keepalive.yfilter = yfilter;
    }
    if(value_path == "pce-err-rx")
    {
        pce_err_rx.yfilter = yfilter;
    }
    if(value_path == "pce-err-tx")
    {
        pce_err_tx.yfilter = yfilter;
    }
    if(value_path == "pce-init-rx")
    {
        pce_init_rx.yfilter = yfilter;
    }
    if(value_path == "pce-init-tx")
    {
        pce_init_tx.yfilter = yfilter;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx.yfilter = yfilter;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx.yfilter = yfilter;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx.yfilter = yfilter;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx.yfilter = yfilter;
    }
    if(value_path == "pce-rep-rx")
    {
        pce_rep_rx.yfilter = yfilter;
    }
    if(value_path == "pce-rep-tx")
    {
        pce_rep_tx.yfilter = yfilter;
    }
    if(value_path == "pce-req-rx")
    {
        pce_req_rx.yfilter = yfilter;
    }
    if(value_path == "pce-req-tx")
    {
        pce_req_tx.yfilter = yfilter;
    }
    if(value_path == "pce-rpt-rx")
    {
        pce_rpt_rx.yfilter = yfilter;
    }
    if(value_path == "pce-rpt-tx")
    {
        pce_rpt_tx.yfilter = yfilter;
    }
    if(value_path == "pce-state")
    {
        pce_state.yfilter = yfilter;
    }
    if(value_path == "pce-upd-rx")
    {
        pce_upd_rx.yfilter = yfilter;
    }
    if(value_path == "pce-upd-tx")
    {
        pce_upd_tx.yfilter = yfilter;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "remote-sid")
    {
        remote_sid.yfilter = yfilter;
    }
    if(value_path == "req-reply-avg")
    {
        req_reply_avg.yfilter = yfilter;
    }
    if(value_path == "req-reply-max")
    {
        req_reply_max.yfilter = yfilter;
    }
    if(value_path == "req-reply-min")
    {
        req_reply_min.yfilter = yfilter;
    }
    if(value_path == "request-timeouts")
    {
        request_timeouts.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
    if(value_path == "statically-configured")
    {
        statically_configured.yfilter = yfilter;
    }
    if(value_path == "triggered-sync-capability")
    {
        triggered_sync_capability.yfilter = yfilter;
    }
}

bool MplsPce::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ig-ps" || name == "last-rx-pce-err" || name == "last-tx-pce-err" || name == "peer-address" || name == "candidate" || name == "capability-db-version" || name == "capability-instantiate" || name == "capability-segment-routing" || name == "capability-update" || name == "delta-sync-capability" || name == "error" || name == "keepalives" || name == "keychain-enabled" || name == "local-sid" || name == "max-dead-interval" || name == "md5-enabled" || name == "min-keepalive-interval" || name == "negotated-dead-time" || name == "negotiated-keepalive" || name == "pce-err-rx" || name == "pce-err-tx" || name == "pce-init-rx" || name == "pce-init-tx" || name == "pce-keepalive-rx" || name == "pce-keepalive-tx" || name == "pce-open-rx" || name == "pce-open-tx" || name == "pce-rep-rx" || name == "pce-rep-tx" || name == "pce-req-rx" || name == "pce-req-tx" || name == "pce-rpt-rx" || name == "pce-rpt-tx" || name == "pce-state" || name == "pce-upd-rx" || name == "pce-upd-tx" || name == "pcep-up-time" || name == "precedence" || name == "remote-sid" || name == "req-reply-avg" || name == "req-reply-max" || name == "req-reply-min" || name == "request-timeouts" || name == "stateful" || name == "statically-configured" || name == "triggered-sync-capability")
        return true;
    return false;
}

MplsPce::Peers::Peer::IgPs::IgPs()
    :
    igp_instance_id{YType::str, "igp-instance-id"},
    igp_type{YType::enumeration, "igp-type"}
{

    yang_name = "ig-ps"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Peers::Peer::IgPs::~IgPs()
{
}

bool MplsPce::Peers::Peer::IgPs::has_data() const
{
    return igp_instance_id.is_set
	|| igp_type.is_set;
}

bool MplsPce::Peers::Peer::IgPs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_instance_id.yfilter)
	|| ydk::is_set(igp_type.yfilter);
}

std::string MplsPce::Peers::Peer::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Peers::Peer::IgPs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_instance_id.is_set || is_set(igp_instance_id.yfilter)) leaf_name_data.push_back(igp_instance_id.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Peers::Peer::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Peers::Peer::IgPs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Peers::Peer::IgPs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-instance-id")
    {
        igp_instance_id = value;
        igp_instance_id.value_namespace = name_space;
        igp_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Peers::Peer::IgPs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-instance-id")
    {
        igp_instance_id.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
}

bool MplsPce::Peers::Peer::IgPs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-instance-id" || name == "igp-type")
        return true;
    return false;
}

MplsPce::Peers::Peer::LastRxPceErr::LastRxPceErr()
    :
    has_open_object{YType::boolean, "has-open-object"},
    has_rp_object{YType::boolean, "has-rp-object"},
    open_dead_time{YType::uint32, "open-dead-time"},
    open_keepalive{YType::uint32, "open-keepalive"},
    openversion{YType::uint32, "openversion"},
    pce_err_type{YType::uint32, "pce-err-type"},
    pce_err_value{YType::uint32, "pce-err-value"},
    rp_request_id{YType::uint32, "rp-request-id"}
{

    yang_name = "last-rx-pce-err"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Peers::Peer::LastRxPceErr::~LastRxPceErr()
{
}

bool MplsPce::Peers::Peer::LastRxPceErr::has_data() const
{
    return has_open_object.is_set
	|| has_rp_object.is_set
	|| open_dead_time.is_set
	|| open_keepalive.is_set
	|| openversion.is_set
	|| pce_err_type.is_set
	|| pce_err_value.is_set
	|| rp_request_id.is_set;
}

bool MplsPce::Peers::Peer::LastRxPceErr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(has_open_object.yfilter)
	|| ydk::is_set(has_rp_object.yfilter)
	|| ydk::is_set(open_dead_time.yfilter)
	|| ydk::is_set(open_keepalive.yfilter)
	|| ydk::is_set(openversion.yfilter)
	|| ydk::is_set(pce_err_type.yfilter)
	|| ydk::is_set(pce_err_value.yfilter)
	|| ydk::is_set(rp_request_id.yfilter);
}

std::string MplsPce::Peers::Peer::LastRxPceErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rx-pce-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Peers::Peer::LastRxPceErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_open_object.is_set || is_set(has_open_object.yfilter)) leaf_name_data.push_back(has_open_object.get_name_leafdata());
    if (has_rp_object.is_set || is_set(has_rp_object.yfilter)) leaf_name_data.push_back(has_rp_object.get_name_leafdata());
    if (open_dead_time.is_set || is_set(open_dead_time.yfilter)) leaf_name_data.push_back(open_dead_time.get_name_leafdata());
    if (open_keepalive.is_set || is_set(open_keepalive.yfilter)) leaf_name_data.push_back(open_keepalive.get_name_leafdata());
    if (openversion.is_set || is_set(openversion.yfilter)) leaf_name_data.push_back(openversion.get_name_leafdata());
    if (pce_err_type.is_set || is_set(pce_err_type.yfilter)) leaf_name_data.push_back(pce_err_type.get_name_leafdata());
    if (pce_err_value.is_set || is_set(pce_err_value.yfilter)) leaf_name_data.push_back(pce_err_value.get_name_leafdata());
    if (rp_request_id.is_set || is_set(rp_request_id.yfilter)) leaf_name_data.push_back(rp_request_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Peers::Peer::LastRxPceErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Peers::Peer::LastRxPceErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Peers::Peer::LastRxPceErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "has-open-object")
    {
        has_open_object = value;
        has_open_object.value_namespace = name_space;
        has_open_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object = value;
        has_rp_object.value_namespace = name_space;
        has_rp_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time = value;
        open_dead_time.value_namespace = name_space;
        open_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive = value;
        open_keepalive.value_namespace = name_space;
        open_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openversion")
    {
        openversion = value;
        openversion.value_namespace = name_space;
        openversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-type")
    {
        pce_err_type = value;
        pce_err_type.value_namespace = name_space;
        pce_err_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value = value;
        pce_err_value.value_namespace = name_space;
        pce_err_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id = value;
        rp_request_id.value_namespace = name_space;
        rp_request_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Peers::Peer::LastRxPceErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "has-open-object")
    {
        has_open_object.yfilter = yfilter;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object.yfilter = yfilter;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time.yfilter = yfilter;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive.yfilter = yfilter;
    }
    if(value_path == "openversion")
    {
        openversion.yfilter = yfilter;
    }
    if(value_path == "pce-err-type")
    {
        pce_err_type.yfilter = yfilter;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value.yfilter = yfilter;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id.yfilter = yfilter;
    }
}

bool MplsPce::Peers::Peer::LastRxPceErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "has-open-object" || name == "has-rp-object" || name == "open-dead-time" || name == "open-keepalive" || name == "openversion" || name == "pce-err-type" || name == "pce-err-value" || name == "rp-request-id")
        return true;
    return false;
}

MplsPce::Peers::Peer::LastTxPceErr::LastTxPceErr()
    :
    has_open_object{YType::boolean, "has-open-object"},
    has_rp_object{YType::boolean, "has-rp-object"},
    open_dead_time{YType::uint32, "open-dead-time"},
    open_keepalive{YType::uint32, "open-keepalive"},
    openversion{YType::uint32, "openversion"},
    pce_err_type{YType::uint32, "pce-err-type"},
    pce_err_value{YType::uint32, "pce-err-value"},
    rp_request_id{YType::uint32, "rp-request-id"}
{

    yang_name = "last-tx-pce-err"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Peers::Peer::LastTxPceErr::~LastTxPceErr()
{
}

bool MplsPce::Peers::Peer::LastTxPceErr::has_data() const
{
    return has_open_object.is_set
	|| has_rp_object.is_set
	|| open_dead_time.is_set
	|| open_keepalive.is_set
	|| openversion.is_set
	|| pce_err_type.is_set
	|| pce_err_value.is_set
	|| rp_request_id.is_set;
}

bool MplsPce::Peers::Peer::LastTxPceErr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(has_open_object.yfilter)
	|| ydk::is_set(has_rp_object.yfilter)
	|| ydk::is_set(open_dead_time.yfilter)
	|| ydk::is_set(open_keepalive.yfilter)
	|| ydk::is_set(openversion.yfilter)
	|| ydk::is_set(pce_err_type.yfilter)
	|| ydk::is_set(pce_err_value.yfilter)
	|| ydk::is_set(rp_request_id.yfilter);
}

std::string MplsPce::Peers::Peer::LastTxPceErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-tx-pce-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Peers::Peer::LastTxPceErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_open_object.is_set || is_set(has_open_object.yfilter)) leaf_name_data.push_back(has_open_object.get_name_leafdata());
    if (has_rp_object.is_set || is_set(has_rp_object.yfilter)) leaf_name_data.push_back(has_rp_object.get_name_leafdata());
    if (open_dead_time.is_set || is_set(open_dead_time.yfilter)) leaf_name_data.push_back(open_dead_time.get_name_leafdata());
    if (open_keepalive.is_set || is_set(open_keepalive.yfilter)) leaf_name_data.push_back(open_keepalive.get_name_leafdata());
    if (openversion.is_set || is_set(openversion.yfilter)) leaf_name_data.push_back(openversion.get_name_leafdata());
    if (pce_err_type.is_set || is_set(pce_err_type.yfilter)) leaf_name_data.push_back(pce_err_type.get_name_leafdata());
    if (pce_err_value.is_set || is_set(pce_err_value.yfilter)) leaf_name_data.push_back(pce_err_value.get_name_leafdata());
    if (rp_request_id.is_set || is_set(rp_request_id.yfilter)) leaf_name_data.push_back(rp_request_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Peers::Peer::LastTxPceErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Peers::Peer::LastTxPceErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Peers::Peer::LastTxPceErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "has-open-object")
    {
        has_open_object = value;
        has_open_object.value_namespace = name_space;
        has_open_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object = value;
        has_rp_object.value_namespace = name_space;
        has_rp_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time = value;
        open_dead_time.value_namespace = name_space;
        open_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive = value;
        open_keepalive.value_namespace = name_space;
        open_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openversion")
    {
        openversion = value;
        openversion.value_namespace = name_space;
        openversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-type")
    {
        pce_err_type = value;
        pce_err_type.value_namespace = name_space;
        pce_err_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value = value;
        pce_err_value.value_namespace = name_space;
        pce_err_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id = value;
        rp_request_id.value_namespace = name_space;
        rp_request_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Peers::Peer::LastTxPceErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "has-open-object")
    {
        has_open_object.yfilter = yfilter;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object.yfilter = yfilter;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time.yfilter = yfilter;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive.yfilter = yfilter;
    }
    if(value_path == "openversion")
    {
        openversion.yfilter = yfilter;
    }
    if(value_path == "pce-err-type")
    {
        pce_err_type.yfilter = yfilter;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value.yfilter = yfilter;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id.yfilter = yfilter;
    }
}

bool MplsPce::Peers::Peer::LastTxPceErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "has-open-object" || name == "has-rp-object" || name == "open-dead-time" || name == "open-keepalive" || name == "openversion" || name == "pce-err-type" || name == "pce-err-value" || name == "rp-request-id")
        return true;
    return false;
}

MplsPce::Statistics::Statistics()
    :
    average_in_queue_depth{YType::uint32, "average-in-queue-depth"},
    current_file_descriptors{YType::uint32, "current-file-descriptors"},
    current_pceq_length{YType::uint32, "current-pceq-length"},
    current_teq_length{YType::uint32, "current-teq-length"},
    max_file_descriptors{YType::uint32, "max-file-descriptors"},
    max_pceq_length{YType::uint32, "max-pceq-length"},
    max_teq_length{YType::uint32, "max-teq-length"},
    maximum_in_queue_depth{YType::uint32, "maximum-in-queue-depth"},
    neighbors{YType::uint32, "neighbors"},
    pce_req_pending{YType::uint32, "pce-req-pending"},
    pce_req_timed_out{YType::uint32, "pce-req-timed-out"},
    pce_req_total{YType::uint32, "pce-req-total"},
    tunnels{YType::uint32, "tunnels"}
    	,
    igp_statistics(std::make_shared<MplsPce::Statistics::IgpStatistics>())
{
    igp_statistics->parent = this;

    yang_name = "statistics"; yang_parent_name = "mpls-pce"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Statistics::~Statistics()
{
}

bool MplsPce::Statistics::has_data() const
{
    for (auto const & leaf : average_in_queue_depth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : maximum_in_queue_depth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return current_file_descriptors.is_set
	|| current_pceq_length.is_set
	|| current_teq_length.is_set
	|| max_file_descriptors.is_set
	|| max_pceq_length.is_set
	|| max_teq_length.is_set
	|| neighbors.is_set
	|| pce_req_pending.is_set
	|| pce_req_timed_out.is_set
	|| pce_req_total.is_set
	|| tunnels.is_set
	|| (igp_statistics !=  nullptr && igp_statistics->has_data());
}

bool MplsPce::Statistics::has_operation() const
{
    for (auto const & leaf : average_in_queue_depth.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : maximum_in_queue_depth.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(average_in_queue_depth.yfilter)
	|| ydk::is_set(current_file_descriptors.yfilter)
	|| ydk::is_set(current_pceq_length.yfilter)
	|| ydk::is_set(current_teq_length.yfilter)
	|| ydk::is_set(max_file_descriptors.yfilter)
	|| ydk::is_set(max_pceq_length.yfilter)
	|| ydk::is_set(max_teq_length.yfilter)
	|| ydk::is_set(maximum_in_queue_depth.yfilter)
	|| ydk::is_set(neighbors.yfilter)
	|| ydk::is_set(pce_req_pending.yfilter)
	|| ydk::is_set(pce_req_timed_out.yfilter)
	|| ydk::is_set(pce_req_total.yfilter)
	|| ydk::is_set(tunnels.yfilter)
	|| (igp_statistics !=  nullptr && igp_statistics->has_operation());
}

std::string MplsPce::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_file_descriptors.is_set || is_set(current_file_descriptors.yfilter)) leaf_name_data.push_back(current_file_descriptors.get_name_leafdata());
    if (current_pceq_length.is_set || is_set(current_pceq_length.yfilter)) leaf_name_data.push_back(current_pceq_length.get_name_leafdata());
    if (current_teq_length.is_set || is_set(current_teq_length.yfilter)) leaf_name_data.push_back(current_teq_length.get_name_leafdata());
    if (max_file_descriptors.is_set || is_set(max_file_descriptors.yfilter)) leaf_name_data.push_back(max_file_descriptors.get_name_leafdata());
    if (max_pceq_length.is_set || is_set(max_pceq_length.yfilter)) leaf_name_data.push_back(max_pceq_length.get_name_leafdata());
    if (max_teq_length.is_set || is_set(max_teq_length.yfilter)) leaf_name_data.push_back(max_teq_length.get_name_leafdata());
    if (neighbors.is_set || is_set(neighbors.yfilter)) leaf_name_data.push_back(neighbors.get_name_leafdata());
    if (pce_req_pending.is_set || is_set(pce_req_pending.yfilter)) leaf_name_data.push_back(pce_req_pending.get_name_leafdata());
    if (pce_req_timed_out.is_set || is_set(pce_req_timed_out.yfilter)) leaf_name_data.push_back(pce_req_timed_out.get_name_leafdata());
    if (pce_req_total.is_set || is_set(pce_req_total.yfilter)) leaf_name_data.push_back(pce_req_total.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.yfilter)) leaf_name_data.push_back(tunnels.get_name_leafdata());

    auto average_in_queue_depth_name_datas = average_in_queue_depth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), average_in_queue_depth_name_datas.begin(), average_in_queue_depth_name_datas.end());
    auto maximum_in_queue_depth_name_datas = maximum_in_queue_depth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), maximum_in_queue_depth_name_datas.begin(), maximum_in_queue_depth_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-statistics")
    {
        if(igp_statistics == nullptr)
        {
            igp_statistics = std::make_shared<MplsPce::Statistics::IgpStatistics>();
        }
        return igp_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp_statistics != nullptr)
    {
        children["igp-statistics"] = igp_statistics;
    }

    return children;
}

void MplsPce::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-in-queue-depth")
    {
        average_in_queue_depth.append(value);
    }
    if(value_path == "current-file-descriptors")
    {
        current_file_descriptors = value;
        current_file_descriptors.value_namespace = name_space;
        current_file_descriptors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-pceq-length")
    {
        current_pceq_length = value;
        current_pceq_length.value_namespace = name_space;
        current_pceq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-teq-length")
    {
        current_teq_length = value;
        current_teq_length.value_namespace = name_space;
        current_teq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-file-descriptors")
    {
        max_file_descriptors = value;
        max_file_descriptors.value_namespace = name_space;
        max_file_descriptors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pceq-length")
    {
        max_pceq_length = value;
        max_pceq_length.value_namespace = name_space;
        max_pceq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-teq-length")
    {
        max_teq_length = value;
        max_teq_length.value_namespace = name_space;
        max_teq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-in-queue-depth")
    {
        maximum_in_queue_depth.append(value);
    }
    if(value_path == "neighbors")
    {
        neighbors = value;
        neighbors.value_namespace = name_space;
        neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-pending")
    {
        pce_req_pending = value;
        pce_req_pending.value_namespace = name_space;
        pce_req_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-timed-out")
    {
        pce_req_timed_out = value;
        pce_req_timed_out.value_namespace = name_space;
        pce_req_timed_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-total")
    {
        pce_req_total = value;
        pce_req_total.value_namespace = name_space;
        pce_req_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
        tunnels.value_namespace = name_space;
        tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-in-queue-depth")
    {
        average_in_queue_depth.yfilter = yfilter;
    }
    if(value_path == "current-file-descriptors")
    {
        current_file_descriptors.yfilter = yfilter;
    }
    if(value_path == "current-pceq-length")
    {
        current_pceq_length.yfilter = yfilter;
    }
    if(value_path == "current-teq-length")
    {
        current_teq_length.yfilter = yfilter;
    }
    if(value_path == "max-file-descriptors")
    {
        max_file_descriptors.yfilter = yfilter;
    }
    if(value_path == "max-pceq-length")
    {
        max_pceq_length.yfilter = yfilter;
    }
    if(value_path == "max-teq-length")
    {
        max_teq_length.yfilter = yfilter;
    }
    if(value_path == "maximum-in-queue-depth")
    {
        maximum_in_queue_depth.yfilter = yfilter;
    }
    if(value_path == "neighbors")
    {
        neighbors.yfilter = yfilter;
    }
    if(value_path == "pce-req-pending")
    {
        pce_req_pending.yfilter = yfilter;
    }
    if(value_path == "pce-req-timed-out")
    {
        pce_req_timed_out.yfilter = yfilter;
    }
    if(value_path == "pce-req-total")
    {
        pce_req_total.yfilter = yfilter;
    }
    if(value_path == "tunnels")
    {
        tunnels.yfilter = yfilter;
    }
}

bool MplsPce::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-statistics" || name == "average-in-queue-depth" || name == "current-file-descriptors" || name == "current-pceq-length" || name == "current-teq-length" || name == "max-file-descriptors" || name == "max-pceq-length" || name == "max-teq-length" || name == "maximum-in-queue-depth" || name == "neighbors" || name == "pce-req-pending" || name == "pce-req-timed-out" || name == "pce-req-total" || name == "tunnels")
        return true;
    return false;
}

MplsPce::Statistics::IgpStatistics::IgpStatistics()
    :
    abr_lookup_avg{YType::uint64, "abr-lookup-avg"},
    abr_lookup_complete{YType::uint64, "abr-lookup-complete"},
    abr_lookup_max{YType::uint64, "abr-lookup-max"},
    abr_lookup_min{YType::uint64, "abr-lookup-min"},
    abr_lookup_timeout{YType::uint64, "abr-lookup-timeout"}
{

    yang_name = "igp-statistics"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Statistics::IgpStatistics::~IgpStatistics()
{
}

bool MplsPce::Statistics::IgpStatistics::has_data() const
{
    return abr_lookup_avg.is_set
	|| abr_lookup_complete.is_set
	|| abr_lookup_max.is_set
	|| abr_lookup_min.is_set
	|| abr_lookup_timeout.is_set;
}

bool MplsPce::Statistics::IgpStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(abr_lookup_avg.yfilter)
	|| ydk::is_set(abr_lookup_complete.yfilter)
	|| ydk::is_set(abr_lookup_max.yfilter)
	|| ydk::is_set(abr_lookup_min.yfilter)
	|| ydk::is_set(abr_lookup_timeout.yfilter);
}

std::string MplsPce::Statistics::IgpStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Statistics::IgpStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Statistics::IgpStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abr_lookup_avg.is_set || is_set(abr_lookup_avg.yfilter)) leaf_name_data.push_back(abr_lookup_avg.get_name_leafdata());
    if (abr_lookup_complete.is_set || is_set(abr_lookup_complete.yfilter)) leaf_name_data.push_back(abr_lookup_complete.get_name_leafdata());
    if (abr_lookup_max.is_set || is_set(abr_lookup_max.yfilter)) leaf_name_data.push_back(abr_lookup_max.get_name_leafdata());
    if (abr_lookup_min.is_set || is_set(abr_lookup_min.yfilter)) leaf_name_data.push_back(abr_lookup_min.get_name_leafdata());
    if (abr_lookup_timeout.is_set || is_set(abr_lookup_timeout.yfilter)) leaf_name_data.push_back(abr_lookup_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Statistics::IgpStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Statistics::IgpStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Statistics::IgpStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abr-lookup-avg")
    {
        abr_lookup_avg = value;
        abr_lookup_avg.value_namespace = name_space;
        abr_lookup_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-complete")
    {
        abr_lookup_complete = value;
        abr_lookup_complete.value_namespace = name_space;
        abr_lookup_complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-max")
    {
        abr_lookup_max = value;
        abr_lookup_max.value_namespace = name_space;
        abr_lookup_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-min")
    {
        abr_lookup_min = value;
        abr_lookup_min.value_namespace = name_space;
        abr_lookup_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-timeout")
    {
        abr_lookup_timeout = value;
        abr_lookup_timeout.value_namespace = name_space;
        abr_lookup_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Statistics::IgpStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abr-lookup-avg")
    {
        abr_lookup_avg.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-complete")
    {
        abr_lookup_complete.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-max")
    {
        abr_lookup_max.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-min")
    {
        abr_lookup_min.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-timeout")
    {
        abr_lookup_timeout.yfilter = yfilter;
    }
}

bool MplsPce::Statistics::IgpStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abr-lookup-avg" || name == "abr-lookup-complete" || name == "abr-lookup-max" || name == "abr-lookup-min" || name == "abr-lookup-timeout")
        return true;
    return false;
}

MplsPce::Topology::Topology()
    :
    global(std::make_shared<MplsPce::Topology::Global>())
{
    global->parent = this;

    yang_name = "topology"; yang_parent_name = "mpls-pce"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Topology::~Topology()
{
}

bool MplsPce::Topology::has_data() const
{
    return (global !=  nullptr && global->has_data());
}

bool MplsPce::Topology::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string MplsPce::Topology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsPce::Topology::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void MplsPce::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPce::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsPce::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

MplsPce::Topology::Global::Global()
{

    yang_name = "global"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Topology::Global::~Global()
{
}

bool MplsPce::Topology::Global::has_data() const
{
    for (std::size_t index=0; index<nodes.size(); index++)
    {
        if(nodes[index]->has_data())
            return true;
    }
    return false;
}

bool MplsPce::Topology::Global::has_operation() const
{
    for (std::size_t index=0; index<nodes.size(); index++)
    {
        if(nodes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsPce::Topology::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Topology::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Topology::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Topology::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        for(auto const & c : nodes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPce::Topology::Global::Nodes>();
        c->parent = this;
        nodes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Topology::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nodes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsPce::Topology::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPce::Topology::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsPce::Topology::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

MplsPce::Topology::Global::Nodes::Nodes()
    :
    igp_area_format{YType::enumeration, "igp-area-format"},
    igp_area_id{YType::uint32, "igp-area-id"},
    is_pce_border_node{YType::boolean, "is-pce-border-node"},
    node_id{YType::str, "node-id"},
    pce_cost{YType::uint32, "pce-cost"},
    router_id{YType::str, "router-id"}
{

    yang_name = "nodes"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Topology::Global::Nodes::~Nodes()
{
}

bool MplsPce::Topology::Global::Nodes::has_data() const
{
    return igp_area_format.is_set
	|| igp_area_id.is_set
	|| is_pce_border_node.is_set
	|| node_id.is_set
	|| pce_cost.is_set
	|| router_id.is_set;
}

bool MplsPce::Topology::Global::Nodes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_area_format.yfilter)
	|| ydk::is_set(igp_area_id.yfilter)
	|| ydk::is_set(is_pce_border_node.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(pce_cost.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string MplsPce::Topology::Global::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/topology/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Topology::Global::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Topology::Global::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area_format.is_set || is_set(igp_area_format.yfilter)) leaf_name_data.push_back(igp_area_format.get_name_leafdata());
    if (igp_area_id.is_set || is_set(igp_area_id.yfilter)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());
    if (is_pce_border_node.is_set || is_set(is_pce_border_node.yfilter)) leaf_name_data.push_back(is_pce_border_node.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (pce_cost.is_set || is_set(pce_cost.yfilter)) leaf_name_data.push_back(pce_cost.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Topology::Global::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Topology::Global::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Topology::Global::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-area-format")
    {
        igp_area_format = value;
        igp_area_format.value_namespace = name_space;
        igp_area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
        igp_area_id.value_namespace = name_space;
        igp_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-border-node")
    {
        is_pce_border_node = value;
        is_pce_border_node.value_namespace = name_space;
        is_pce_border_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-cost")
    {
        pce_cost = value;
        pce_cost.value_namespace = name_space;
        pce_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Topology::Global::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-area-format")
    {
        igp_area_format.yfilter = yfilter;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id.yfilter = yfilter;
    }
    if(value_path == "is-pce-border-node")
    {
        is_pce_border_node.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "pce-cost")
    {
        pce_cost.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool MplsPce::Topology::Global::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-area-format" || name == "igp-area-id" || name == "is-pce-border-node" || name == "node-id" || name == "pce-cost" || name == "router-id")
        return true;
    return false;
}

MplsPce::Tunnels::Tunnels()
    :
    admin_weight{YType::uint32, "admin-weight"},
    configured_pce_address{YType::str, "configured-pce-address"},
    curr_path_option_index{YType::uint32, "curr-path-option-index"},
    destination_address{YType::str, "destination-address"},
    hop_count{YType::uint32, "hop-count"},
    is_curr_path_option_pce{YType::boolean, "is-curr-path-option-pce"},
    path_state{YType::enumeration, "path-state"},
    sender_pce_address{YType::str, "sender-pce-address"},
    source_address{YType::str, "source-address"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{

    yang_name = "tunnels"; yang_parent_name = "mpls-pce"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Tunnels::~Tunnels()
{
}

bool MplsPce::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return admin_weight.is_set
	|| configured_pce_address.is_set
	|| curr_path_option_index.is_set
	|| destination_address.is_set
	|| hop_count.is_set
	|| is_curr_path_option_pce.is_set
	|| path_state.is_set
	|| sender_pce_address.is_set
	|| source_address.is_set
	|| tunnel_state.is_set;
}

bool MplsPce::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(configured_pce_address.yfilter)
	|| ydk::is_set(curr_path_option_index.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(hop_count.yfilter)
	|| ydk::is_set(is_curr_path_option_pce.yfilter)
	|| ydk::is_set(path_state.yfilter)
	|| ydk::is_set(sender_pce_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_state.yfilter);
}

std::string MplsPce::Tunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (configured_pce_address.is_set || is_set(configured_pce_address.yfilter)) leaf_name_data.push_back(configured_pce_address.get_name_leafdata());
    if (curr_path_option_index.is_set || is_set(curr_path_option_index.yfilter)) leaf_name_data.push_back(curr_path_option_index.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.yfilter)) leaf_name_data.push_back(hop_count.get_name_leafdata());
    if (is_curr_path_option_pce.is_set || is_set(is_curr_path_option_pce.yfilter)) leaf_name_data.push_back(is_curr_path_option_pce.get_name_leafdata());
    if (path_state.is_set || is_set(path_state.yfilter)) leaf_name_data.push_back(path_state.get_name_leafdata());
    if (sender_pce_address.is_set || is_set(sender_pce_address.yfilter)) leaf_name_data.push_back(sender_pce_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPce::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsPce::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address = value;
        configured_pce_address.value_namespace = name_space;
        configured_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index = value;
        curr_path_option_index.value_namespace = name_space;
        curr_path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
        hop_count.value_namespace = name_space;
        hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce = value;
        is_curr_path_option_pce.value_namespace = name_space;
        is_curr_path_option_pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-state")
    {
        path_state = value;
        path_state.value_namespace = name_space;
        path_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address = value;
        sender_pce_address.value_namespace = name_space;
        sender_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address.yfilter = yfilter;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "hop-count")
    {
        hop_count.yfilter = yfilter;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce.yfilter = yfilter;
    }
    if(value_path == "path-state")
    {
        path_state.yfilter = yfilter;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
}

bool MplsPce::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel" || name == "admin-weight" || name == "configured-pce-address" || name == "curr-path-option-index" || name == "destination-address" || name == "hop-count" || name == "is-curr-path-option-pce" || name == "path-state" || name == "sender-pce-address" || name == "source-address" || name == "tunnel-state")
        return true;
    return false;
}

MplsPce::Tunnels::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    admin_weight{YType::uint32, "admin-weight"},
    configured_pce_address{YType::str, "configured-pce-address"},
    curr_path_option_index{YType::uint32, "curr-path-option-index"},
    destination_address{YType::str, "destination-address"},
    hop_count{YType::uint32, "hop-count"},
    is_curr_path_option_pce{YType::boolean, "is-curr-path-option-pce"},
    path_state{YType::enumeration, "path-state"},
    sender_pce_address{YType::str, "sender-pce-address"},
    source_address{YType::str, "source-address"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Tunnels::Tunnel::~Tunnel()
{
}

bool MplsPce::Tunnels::Tunnel::has_data() const
{
    return tunnel_name.is_set
	|| admin_weight.is_set
	|| configured_pce_address.is_set
	|| curr_path_option_index.is_set
	|| destination_address.is_set
	|| hop_count.is_set
	|| is_curr_path_option_pce.is_set
	|| path_state.is_set
	|| sender_pce_address.is_set
	|| source_address.is_set
	|| tunnel_state.is_set;
}

bool MplsPce::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(configured_pce_address.yfilter)
	|| ydk::is_set(curr_path_option_index.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(hop_count.yfilter)
	|| ydk::is_set(is_curr_path_option_pce.yfilter)
	|| ydk::is_set(path_state.yfilter)
	|| ydk::is_set(sender_pce_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_state.yfilter);
}

std::string MplsPce::Tunnels::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (configured_pce_address.is_set || is_set(configured_pce_address.yfilter)) leaf_name_data.push_back(configured_pce_address.get_name_leafdata());
    if (curr_path_option_index.is_set || is_set(curr_path_option_index.yfilter)) leaf_name_data.push_back(curr_path_option_index.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.yfilter)) leaf_name_data.push_back(hop_count.get_name_leafdata());
    if (is_curr_path_option_pce.is_set || is_set(is_curr_path_option_pce.yfilter)) leaf_name_data.push_back(is_curr_path_option_pce.get_name_leafdata());
    if (path_state.is_set || is_set(path_state.yfilter)) leaf_name_data.push_back(path_state.get_name_leafdata());
    if (sender_pce_address.is_set || is_set(sender_pce_address.yfilter)) leaf_name_data.push_back(sender_pce_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPce::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address = value;
        configured_pce_address.value_namespace = name_space;
        configured_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index = value;
        curr_path_option_index.value_namespace = name_space;
        curr_path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
        hop_count.value_namespace = name_space;
        hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce = value;
        is_curr_path_option_pce.value_namespace = name_space;
        is_curr_path_option_pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-state")
    {
        path_state = value;
        path_state.value_namespace = name_space;
        path_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address = value;
        sender_pce_address.value_namespace = name_space;
        sender_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address.yfilter = yfilter;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "hop-count")
    {
        hop_count.yfilter = yfilter;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce.yfilter = yfilter;
    }
    if(value_path == "path-state")
    {
        path_state.yfilter = yfilter;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
}

bool MplsPce::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-name" || name == "admin-weight" || name == "configured-pce-address" || name == "curr-path-option-index" || name == "destination-address" || name == "hop-count" || name == "is-curr-path-option-pce" || name == "path-state" || name == "sender-pce-address" || name == "source-address" || name == "tunnel-state")
        return true;
    return false;
}

MplsPceStdby::MplsPceStdby()
    :
    lsps(std::make_shared<MplsPceStdby::Lsps>())
	,peers(std::make_shared<MplsPceStdby::Peers>())
	,statistics(std::make_shared<MplsPceStdby::Statistics>())
	,topology(std::make_shared<MplsPceStdby::Topology>())
	,tunnels(std::make_shared<MplsPceStdby::Tunnels>())
{
    lsps->parent = this;
    peers->parent = this;
    statistics->parent = this;
    topology->parent = this;
    tunnels->parent = this;

    yang_name = "mpls-pce-stdby"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper"; is_top_level_class = true; has_list_ancestor = false;
}

MplsPceStdby::~MplsPceStdby()
{
}

bool MplsPceStdby::has_data() const
{
    return (lsps !=  nullptr && lsps->has_data())
	|| (peers !=  nullptr && peers->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (topology !=  nullptr && topology->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool MplsPceStdby::has_operation() const
{
    return is_set(yfilter)
	|| (lsps !=  nullptr && lsps->has_operation())
	|| (peers !=  nullptr && peers->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (topology !=  nullptr && topology->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string MplsPceStdby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsps")
    {
        if(lsps == nullptr)
        {
            lsps = std::make_shared<MplsPceStdby::Lsps>();
        }
        return lsps;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<MplsPceStdby::Peers>();
        }
        return peers;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsPceStdby::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<MplsPceStdby::Topology>();
        }
        return topology;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<MplsPceStdby::Tunnels>();
        }
        return tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsps != nullptr)
    {
        children["lsps"] = lsps;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(topology != nullptr)
    {
        children["topology"] = topology;
    }

    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    return children;
}

void MplsPceStdby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPceStdby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsPceStdby::clone_ptr() const
{
    return std::make_shared<MplsPceStdby>();
}

std::string MplsPceStdby::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsPceStdby::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsPceStdby::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsPceStdby::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsPceStdby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsps" || name == "peers" || name == "statistics" || name == "topology" || name == "tunnels")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsps()
    :
    administrative{YType::boolean, "administrative"},
    backup_path{YType::str, "backup-path"},
    binding_sid{YType::uint32, "binding-sid"},
    cleanup_timer_exp{YType::int32, "cleanup-timer-exp"},
    create{YType::boolean, "create"},
    delegatable{YType::boolean, "delegatable"},
    delegation_timer_exp{YType::int32, "delegation-timer-exp"},
    destination_address{YType::str, "destination-address"},
    forward_class_id{YType::uint32, "forward-class-id"},
    load_share{YType::uint32, "load-share"},
    lspo_is_used{YType::boolean, "lspo-is-used"},
    operational{YType::enumeration, "operational"},
    path_setup_type{YType::uint8, "path-setup-type"},
    request_queue_size{YType::uint8, "request-queue-size"},
    session_internal_lsp_id{YType::uint32, "session-internal-lsp-id"},
    source_address{YType::str, "source-address"},
    state_timer_exp{YType::int32, "state-timer-exp"},
    stateful_request_parameter_id{YType::uint32, "stateful-request-parameter-id"},
    symbolic_name_xr{YType::str, "symbolic-name-xr"}
    	,
    autoroute(std::make_shared<MplsPceStdby::Lsps::Autoroute>())
	,creator(std::make_shared<MplsPceStdby::Lsps::Creator>())
	,delegated(std::make_shared<MplsPceStdby::Lsps::Delegated>())
	,identifiers(std::make_shared<MplsPceStdby::Lsps::Identifiers>())
{
    autoroute->parent = this;
    creator->parent = this;
    delegated->parent = this;
    identifiers->parent = this;

    yang_name = "lsps"; yang_parent_name = "mpls-pce-stdby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::~Lsps()
{
}

bool MplsPceStdby::Lsps::has_data() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (auto const & leaf : backup_path.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return administrative.is_set
	|| binding_sid.is_set
	|| cleanup_timer_exp.is_set
	|| create.is_set
	|| delegatable.is_set
	|| delegation_timer_exp.is_set
	|| destination_address.is_set
	|| forward_class_id.is_set
	|| load_share.is_set
	|| lspo_is_used.is_set
	|| operational.is_set
	|| path_setup_type.is_set
	|| request_queue_size.is_set
	|| session_internal_lsp_id.is_set
	|| source_address.is_set
	|| state_timer_exp.is_set
	|| stateful_request_parameter_id.is_set
	|| symbolic_name_xr.is_set
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (creator !=  nullptr && creator->has_data())
	|| (delegated !=  nullptr && delegated->has_data())
	|| (identifiers !=  nullptr && identifiers->has_data());
}

bool MplsPceStdby::Lsps::has_operation() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (auto const & leaf : backup_path.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(administrative.yfilter)
	|| ydk::is_set(backup_path.yfilter)
	|| ydk::is_set(binding_sid.yfilter)
	|| ydk::is_set(cleanup_timer_exp.yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(delegatable.yfilter)
	|| ydk::is_set(delegation_timer_exp.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(forward_class_id.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(lspo_is_used.yfilter)
	|| ydk::is_set(operational.yfilter)
	|| ydk::is_set(path_setup_type.yfilter)
	|| ydk::is_set(request_queue_size.yfilter)
	|| ydk::is_set(session_internal_lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(state_timer_exp.yfilter)
	|| ydk::is_set(stateful_request_parameter_id.yfilter)
	|| ydk::is_set(symbolic_name_xr.yfilter)
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (creator !=  nullptr && creator->has_operation())
	|| (delegated !=  nullptr && delegated->has_operation())
	|| (identifiers !=  nullptr && identifiers->has_operation());
}

std::string MplsPceStdby::Lsps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative.is_set || is_set(administrative.yfilter)) leaf_name_data.push_back(administrative.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.yfilter)) leaf_name_data.push_back(binding_sid.get_name_leafdata());
    if (cleanup_timer_exp.is_set || is_set(cleanup_timer_exp.yfilter)) leaf_name_data.push_back(cleanup_timer_exp.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (delegatable.is_set || is_set(delegatable.yfilter)) leaf_name_data.push_back(delegatable.get_name_leafdata());
    if (delegation_timer_exp.is_set || is_set(delegation_timer_exp.yfilter)) leaf_name_data.push_back(delegation_timer_exp.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (forward_class_id.is_set || is_set(forward_class_id.yfilter)) leaf_name_data.push_back(forward_class_id.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (lspo_is_used.is_set || is_set(lspo_is_used.yfilter)) leaf_name_data.push_back(lspo_is_used.get_name_leafdata());
    if (operational.is_set || is_set(operational.yfilter)) leaf_name_data.push_back(operational.get_name_leafdata());
    if (path_setup_type.is_set || is_set(path_setup_type.yfilter)) leaf_name_data.push_back(path_setup_type.get_name_leafdata());
    if (request_queue_size.is_set || is_set(request_queue_size.yfilter)) leaf_name_data.push_back(request_queue_size.get_name_leafdata());
    if (session_internal_lsp_id.is_set || is_set(session_internal_lsp_id.yfilter)) leaf_name_data.push_back(session_internal_lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (state_timer_exp.is_set || is_set(state_timer_exp.yfilter)) leaf_name_data.push_back(state_timer_exp.get_name_leafdata());
    if (stateful_request_parameter_id.is_set || is_set(stateful_request_parameter_id.yfilter)) leaf_name_data.push_back(stateful_request_parameter_id.get_name_leafdata());
    if (symbolic_name_xr.is_set || is_set(symbolic_name_xr.yfilter)) leaf_name_data.push_back(symbolic_name_xr.get_name_leafdata());

    auto backup_path_name_datas = backup_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_path_name_datas.begin(), backup_path_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<MplsPceStdby::Lsps::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "creator")
    {
        if(creator == nullptr)
        {
            creator = std::make_shared<MplsPceStdby::Lsps::Creator>();
        }
        return creator;
    }

    if(child_yang_name == "delegated")
    {
        if(delegated == nullptr)
        {
            delegated = std::make_shared<MplsPceStdby::Lsps::Delegated>();
        }
        return delegated;
    }

    if(child_yang_name == "identifiers")
    {
        if(identifiers == nullptr)
        {
            identifiers = std::make_shared<MplsPceStdby::Lsps::Identifiers>();
        }
        return identifiers;
    }

    if(child_yang_name == "lsp")
    {
        for(auto const & c : lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPceStdby::Lsps::Lsp>();
        c->parent = this;
        lsp.push_back(c);
        return c;
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
        auto c = std::make_shared<MplsPceStdby::Lsps::Paths>();
        c->parent = this;
        paths.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoroute != nullptr)
    {
        children["autoroute"] = autoroute;
    }

    if(creator != nullptr)
    {
        children["creator"] = creator;
    }

    if(delegated != nullptr)
    {
        children["delegated"] = delegated;
    }

    if(identifiers != nullptr)
    {
        children["identifiers"] = identifiers;
    }

    for (auto const & c : lsp)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : paths)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsPceStdby::Lsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "administrative")
    {
        administrative = value;
        administrative.value_namespace = name_space;
        administrative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path")
    {
        backup_path.append(value);
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
        binding_sid.value_namespace = name_space;
        binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp = value;
        cleanup_timer_exp.value_namespace = name_space;
        cleanup_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegatable")
    {
        delegatable = value;
        delegatable.value_namespace = name_space;
        delegatable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp = value;
        delegation_timer_exp.value_namespace = name_space;
        delegation_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id = value;
        forward_class_id.value_namespace = name_space;
        forward_class_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used = value;
        lspo_is_used.value_namespace = name_space;
        lspo_is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational")
    {
        operational = value;
        operational.value_namespace = name_space;
        operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type = value;
        path_setup_type.value_namespace = name_space;
        path_setup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size = value;
        request_queue_size.value_namespace = name_space;
        request_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id = value;
        session_internal_lsp_id.value_namespace = name_space;
        session_internal_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp = value;
        state_timer_exp.value_namespace = name_space;
        state_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id = value;
        stateful_request_parameter_id.value_namespace = name_space;
        stateful_request_parameter_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr = value;
        symbolic_name_xr.value_namespace = name_space;
        symbolic_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "administrative")
    {
        administrative.yfilter = yfilter;
    }
    if(value_path == "backup-path")
    {
        backup_path.yfilter = yfilter;
    }
    if(value_path == "binding-sid")
    {
        binding_sid.yfilter = yfilter;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "delegatable")
    {
        delegatable.yfilter = yfilter;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used.yfilter = yfilter;
    }
    if(value_path == "operational")
    {
        operational.yfilter = yfilter;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type.yfilter = yfilter;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size.yfilter = yfilter;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp.yfilter = yfilter;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id.yfilter = yfilter;
    }
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoroute" || name == "creator" || name == "delegated" || name == "identifiers" || name == "lsp" || name == "paths" || name == "administrative" || name == "backup-path" || name == "binding-sid" || name == "cleanup-timer-exp" || name == "create" || name == "delegatable" || name == "delegation-timer-exp" || name == "destination-address" || name == "forward-class-id" || name == "load-share" || name == "lspo-is-used" || name == "operational" || name == "path-setup-type" || name == "request-queue-size" || name == "session-internal-lsp-id" || name == "source-address" || name == "state-timer-exp" || name == "stateful-request-parameter-id" || name == "symbolic-name-xr")
        return true;
    return false;
}

MplsPceStdby::Lsps::Autoroute::Autoroute()
    :
    announced{YType::boolean, "announced"},
    destination{YType::str, "destination"},
    is_used{YType::boolean, "is-used"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"}
{

    yang_name = "autoroute"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Autoroute::~Autoroute()
{
}

bool MplsPceStdby::Lsps::Autoroute::has_data() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return announced.is_set
	|| is_used.is_set
	|| metric.is_set
	|| metric_type.is_set;
}

bool MplsPceStdby::Lsps::Autoroute::has_operation() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(announced.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter);
}

std::string MplsPceStdby::Lsps::Autoroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Autoroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announced.is_set || is_set(announced.yfilter)) leaf_name_data.push_back(announced.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());

    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Lsps::Autoroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announced")
    {
        announced = value;
        announced.value_namespace = name_space;
        announced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Autoroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announced")
    {
        announced.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Autoroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announced" || name == "destination" || name == "is-used" || name == "metric" || name == "metric-type")
        return true;
    return false;
}

MplsPceStdby::Lsps::Creator::Creator()
    :
    address{YType::str, "address"},
    node_identifier{YType::str, "node-identifier"}
{

    yang_name = "creator"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Creator::~Creator()
{
}

bool MplsPceStdby::Lsps::Creator::has_data() const
{
    return address.is_set
	|| node_identifier.is_set;
}

bool MplsPceStdby::Lsps::Creator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(node_identifier.yfilter);
}

std::string MplsPceStdby::Lsps::Creator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Creator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Creator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Creator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Creator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Lsps::Creator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Creator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Creator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "node-identifier")
        return true;
    return false;
}

MplsPceStdby::Lsps::Delegated::Delegated()
    :
    address{YType::str, "address"},
    node_identifier{YType::str, "node-identifier"}
{

    yang_name = "delegated"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Delegated::~Delegated()
{
}

bool MplsPceStdby::Lsps::Delegated::has_data() const
{
    return address.is_set
	|| node_identifier.is_set;
}

bool MplsPceStdby::Lsps::Delegated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(node_identifier.yfilter);
}

std::string MplsPceStdby::Lsps::Delegated::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Delegated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delegated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Delegated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Delegated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Delegated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Lsps::Delegated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Delegated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Delegated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "node-identifier")
        return true;
    return false;
}

MplsPceStdby::Lsps::Identifiers::Identifiers()
    :
    ext_tunnel_id{YType::uint32, "ext-tunnel-id"},
    is_used{YType::boolean, "is-used"},
    sender{YType::str, "sender"},
    te_lsp_id{YType::uint16, "te-lsp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "identifiers"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Identifiers::~Identifiers()
{
}

bool MplsPceStdby::Lsps::Identifiers::has_data() const
{
    return ext_tunnel_id.is_set
	|| is_used.is_set
	|| sender.is_set
	|| te_lsp_id.is_set
	|| tunnel_id.is_set;
}

bool MplsPceStdby::Lsps::Identifiers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ext_tunnel_id.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(sender.yfilter)
	|| ydk::is_set(te_lsp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsPceStdby::Lsps::Identifiers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Identifiers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifiers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Identifiers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ext_tunnel_id.is_set || is_set(ext_tunnel_id.yfilter)) leaf_name_data.push_back(ext_tunnel_id.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (sender.is_set || is_set(sender.yfilter)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (te_lsp_id.is_set || is_set(te_lsp_id.yfilter)) leaf_name_data.push_back(te_lsp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Identifiers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Identifiers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Lsps::Identifiers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id = value;
        ext_tunnel_id.value_namespace = name_space;
        ext_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender")
    {
        sender = value;
        sender.value_namespace = name_space;
        sender.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id = value;
        te_lsp_id.value_namespace = name_space;
        te_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Identifiers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "sender")
    {
        sender.yfilter = yfilter;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Identifiers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-tunnel-id" || name == "is-used" || name == "sender" || name == "te-lsp-id" || name == "tunnel-id")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Lsp()
    :
    symbolic_name{YType::str, "symbolic-name"},
    administrative{YType::boolean, "administrative"},
    backup_path{YType::str, "backup-path"},
    binding_sid{YType::uint32, "binding-sid"},
    cleanup_timer_exp{YType::int32, "cleanup-timer-exp"},
    create{YType::boolean, "create"},
    delegatable{YType::boolean, "delegatable"},
    delegation_timer_exp{YType::int32, "delegation-timer-exp"},
    destination_address{YType::str, "destination-address"},
    forward_class_id{YType::uint32, "forward-class-id"},
    load_share{YType::uint32, "load-share"},
    lspo_is_used{YType::boolean, "lspo-is-used"},
    operational{YType::enumeration, "operational"},
    path_setup_type{YType::uint8, "path-setup-type"},
    request_queue_size{YType::uint8, "request-queue-size"},
    session_internal_lsp_id{YType::uint32, "session-internal-lsp-id"},
    source_address{YType::str, "source-address"},
    state_timer_exp{YType::int32, "state-timer-exp"},
    stateful_request_parameter_id{YType::uint32, "stateful-request-parameter-id"},
    symbolic_name_xr{YType::str, "symbolic-name-xr"}
    	,
    autoroute(std::make_shared<MplsPceStdby::Lsps::Lsp::Autoroute>())
	,creator(std::make_shared<MplsPceStdby::Lsps::Lsp::Creator>())
	,delegated(std::make_shared<MplsPceStdby::Lsps::Lsp::Delegated>())
	,identifiers(std::make_shared<MplsPceStdby::Lsps::Lsp::Identifiers>())
{
    autoroute->parent = this;
    creator->parent = this;
    delegated->parent = this;
    identifiers->parent = this;

    yang_name = "lsp"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Lsp::~Lsp()
{
}

bool MplsPceStdby::Lsps::Lsp::has_data() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (auto const & leaf : backup_path.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return symbolic_name.is_set
	|| administrative.is_set
	|| binding_sid.is_set
	|| cleanup_timer_exp.is_set
	|| create.is_set
	|| delegatable.is_set
	|| delegation_timer_exp.is_set
	|| destination_address.is_set
	|| forward_class_id.is_set
	|| load_share.is_set
	|| lspo_is_used.is_set
	|| operational.is_set
	|| path_setup_type.is_set
	|| request_queue_size.is_set
	|| session_internal_lsp_id.is_set
	|| source_address.is_set
	|| state_timer_exp.is_set
	|| stateful_request_parameter_id.is_set
	|| symbolic_name_xr.is_set
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (creator !=  nullptr && creator->has_data())
	|| (delegated !=  nullptr && delegated->has_data())
	|| (identifiers !=  nullptr && identifiers->has_data());
}

bool MplsPceStdby::Lsps::Lsp::has_operation() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (auto const & leaf : backup_path.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(symbolic_name.yfilter)
	|| ydk::is_set(administrative.yfilter)
	|| ydk::is_set(backup_path.yfilter)
	|| ydk::is_set(binding_sid.yfilter)
	|| ydk::is_set(cleanup_timer_exp.yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(delegatable.yfilter)
	|| ydk::is_set(delegation_timer_exp.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(forward_class_id.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(lspo_is_used.yfilter)
	|| ydk::is_set(operational.yfilter)
	|| ydk::is_set(path_setup_type.yfilter)
	|| ydk::is_set(request_queue_size.yfilter)
	|| ydk::is_set(session_internal_lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(state_timer_exp.yfilter)
	|| ydk::is_set(stateful_request_parameter_id.yfilter)
	|| ydk::is_set(symbolic_name_xr.yfilter)
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (creator !=  nullptr && creator->has_operation())
	|| (delegated !=  nullptr && delegated->has_operation())
	|| (identifiers !=  nullptr && identifiers->has_operation());
}

std::string MplsPceStdby::Lsps::Lsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp" <<"[symbolic-name='" <<symbolic_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (symbolic_name.is_set || is_set(symbolic_name.yfilter)) leaf_name_data.push_back(symbolic_name.get_name_leafdata());
    if (administrative.is_set || is_set(administrative.yfilter)) leaf_name_data.push_back(administrative.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.yfilter)) leaf_name_data.push_back(binding_sid.get_name_leafdata());
    if (cleanup_timer_exp.is_set || is_set(cleanup_timer_exp.yfilter)) leaf_name_data.push_back(cleanup_timer_exp.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (delegatable.is_set || is_set(delegatable.yfilter)) leaf_name_data.push_back(delegatable.get_name_leafdata());
    if (delegation_timer_exp.is_set || is_set(delegation_timer_exp.yfilter)) leaf_name_data.push_back(delegation_timer_exp.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (forward_class_id.is_set || is_set(forward_class_id.yfilter)) leaf_name_data.push_back(forward_class_id.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (lspo_is_used.is_set || is_set(lspo_is_used.yfilter)) leaf_name_data.push_back(lspo_is_used.get_name_leafdata());
    if (operational.is_set || is_set(operational.yfilter)) leaf_name_data.push_back(operational.get_name_leafdata());
    if (path_setup_type.is_set || is_set(path_setup_type.yfilter)) leaf_name_data.push_back(path_setup_type.get_name_leafdata());
    if (request_queue_size.is_set || is_set(request_queue_size.yfilter)) leaf_name_data.push_back(request_queue_size.get_name_leafdata());
    if (session_internal_lsp_id.is_set || is_set(session_internal_lsp_id.yfilter)) leaf_name_data.push_back(session_internal_lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (state_timer_exp.is_set || is_set(state_timer_exp.yfilter)) leaf_name_data.push_back(state_timer_exp.get_name_leafdata());
    if (stateful_request_parameter_id.is_set || is_set(stateful_request_parameter_id.yfilter)) leaf_name_data.push_back(stateful_request_parameter_id.get_name_leafdata());
    if (symbolic_name_xr.is_set || is_set(symbolic_name_xr.yfilter)) leaf_name_data.push_back(symbolic_name_xr.get_name_leafdata());

    auto backup_path_name_datas = backup_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_path_name_datas.begin(), backup_path_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<MplsPceStdby::Lsps::Lsp::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "creator")
    {
        if(creator == nullptr)
        {
            creator = std::make_shared<MplsPceStdby::Lsps::Lsp::Creator>();
        }
        return creator;
    }

    if(child_yang_name == "delegated")
    {
        if(delegated == nullptr)
        {
            delegated = std::make_shared<MplsPceStdby::Lsps::Lsp::Delegated>();
        }
        return delegated;
    }

    if(child_yang_name == "identifiers")
    {
        if(identifiers == nullptr)
        {
            identifiers = std::make_shared<MplsPceStdby::Lsps::Lsp::Identifiers>();
        }
        return identifiers;
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
        auto c = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths>();
        c->parent = this;
        paths.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoroute != nullptr)
    {
        children["autoroute"] = autoroute;
    }

    if(creator != nullptr)
    {
        children["creator"] = creator;
    }

    if(delegated != nullptr)
    {
        children["delegated"] = delegated;
    }

    if(identifiers != nullptr)
    {
        children["identifiers"] = identifiers;
    }

    for (auto const & c : paths)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsPceStdby::Lsps::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "symbolic-name")
    {
        symbolic_name = value;
        symbolic_name.value_namespace = name_space;
        symbolic_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative")
    {
        administrative = value;
        administrative.value_namespace = name_space;
        administrative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path")
    {
        backup_path.append(value);
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
        binding_sid.value_namespace = name_space;
        binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp = value;
        cleanup_timer_exp.value_namespace = name_space;
        cleanup_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegatable")
    {
        delegatable = value;
        delegatable.value_namespace = name_space;
        delegatable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp = value;
        delegation_timer_exp.value_namespace = name_space;
        delegation_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id = value;
        forward_class_id.value_namespace = name_space;
        forward_class_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used = value;
        lspo_is_used.value_namespace = name_space;
        lspo_is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational")
    {
        operational = value;
        operational.value_namespace = name_space;
        operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type = value;
        path_setup_type.value_namespace = name_space;
        path_setup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size = value;
        request_queue_size.value_namespace = name_space;
        request_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id = value;
        session_internal_lsp_id.value_namespace = name_space;
        session_internal_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp = value;
        state_timer_exp.value_namespace = name_space;
        state_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id = value;
        stateful_request_parameter_id.value_namespace = name_space;
        stateful_request_parameter_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr = value;
        symbolic_name_xr.value_namespace = name_space;
        symbolic_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "symbolic-name")
    {
        symbolic_name.yfilter = yfilter;
    }
    if(value_path == "administrative")
    {
        administrative.yfilter = yfilter;
    }
    if(value_path == "backup-path")
    {
        backup_path.yfilter = yfilter;
    }
    if(value_path == "binding-sid")
    {
        binding_sid.yfilter = yfilter;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "delegatable")
    {
        delegatable.yfilter = yfilter;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used.yfilter = yfilter;
    }
    if(value_path == "operational")
    {
        operational.yfilter = yfilter;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type.yfilter = yfilter;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size.yfilter = yfilter;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp.yfilter = yfilter;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id.yfilter = yfilter;
    }
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoroute" || name == "creator" || name == "delegated" || name == "identifiers" || name == "paths" || name == "symbolic-name" || name == "administrative" || name == "backup-path" || name == "binding-sid" || name == "cleanup-timer-exp" || name == "create" || name == "delegatable" || name == "delegation-timer-exp" || name == "destination-address" || name == "forward-class-id" || name == "load-share" || name == "lspo-is-used" || name == "operational" || name == "path-setup-type" || name == "request-queue-size" || name == "session-internal-lsp-id" || name == "source-address" || name == "state-timer-exp" || name == "stateful-request-parameter-id" || name == "symbolic-name-xr")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Autoroute::Autoroute()
    :
    announced{YType::boolean, "announced"},
    destination{YType::str, "destination"},
    is_used{YType::boolean, "is-used"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"}
{

    yang_name = "autoroute"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Autoroute::~Autoroute()
{
}

bool MplsPceStdby::Lsps::Lsp::Autoroute::has_data() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return announced.is_set
	|| is_used.is_set
	|| metric.is_set
	|| metric_type.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Autoroute::has_operation() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(announced.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Autoroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announced.is_set || is_set(announced.yfilter)) leaf_name_data.push_back(announced.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());

    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Lsps::Lsp::Autoroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announced")
    {
        announced = value;
        announced.value_namespace = name_space;
        announced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Autoroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announced")
    {
        announced.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Autoroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announced" || name == "destination" || name == "is-used" || name == "metric" || name == "metric-type")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Creator::Creator()
    :
    address{YType::str, "address"},
    node_identifier{YType::str, "node-identifier"}
{

    yang_name = "creator"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Creator::~Creator()
{
}

bool MplsPceStdby::Lsps::Lsp::Creator::has_data() const
{
    return address.is_set
	|| node_identifier.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Creator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(node_identifier.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Creator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Creator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Creator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Creator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Lsps::Lsp::Creator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Creator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Creator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "node-identifier")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Delegated::Delegated()
    :
    address{YType::str, "address"},
    node_identifier{YType::str, "node-identifier"}
{

    yang_name = "delegated"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Delegated::~Delegated()
{
}

bool MplsPceStdby::Lsps::Lsp::Delegated::has_data() const
{
    return address.is_set
	|| node_identifier.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Delegated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(node_identifier.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Delegated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delegated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Delegated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Delegated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Delegated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Lsps::Lsp::Delegated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Delegated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Delegated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "node-identifier")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Identifiers::Identifiers()
    :
    ext_tunnel_id{YType::uint32, "ext-tunnel-id"},
    is_used{YType::boolean, "is-used"},
    sender{YType::str, "sender"},
    te_lsp_id{YType::uint16, "te-lsp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "identifiers"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Identifiers::~Identifiers()
{
}

bool MplsPceStdby::Lsps::Lsp::Identifiers::has_data() const
{
    return ext_tunnel_id.is_set
	|| is_used.is_set
	|| sender.is_set
	|| te_lsp_id.is_set
	|| tunnel_id.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Identifiers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ext_tunnel_id.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(sender.yfilter)
	|| ydk::is_set(te_lsp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Identifiers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifiers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Identifiers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ext_tunnel_id.is_set || is_set(ext_tunnel_id.yfilter)) leaf_name_data.push_back(ext_tunnel_id.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (sender.is_set || is_set(sender.yfilter)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (te_lsp_id.is_set || is_set(te_lsp_id.yfilter)) leaf_name_data.push_back(te_lsp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Identifiers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Identifiers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Lsps::Lsp::Identifiers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id = value;
        ext_tunnel_id.value_namespace = name_space;
        ext_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender")
    {
        sender = value;
        sender.value_namespace = name_space;
        sender.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id = value;
        te_lsp_id.value_namespace = name_space;
        te_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Identifiers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "sender")
    {
        sender.yfilter = yfilter;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Identifiers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-tunnel-id" || name == "is-used" || name == "sender" || name == "te-lsp-id" || name == "tunnel-id")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Paths()
    :
    applied_bw{YType::uint32, "applied-bw"},
    bw{YType::uint32, "bw"},
    is_applied_bw_used{YType::boolean, "is-applied-bw-used"},
    is_bw_used{YType::boolean, "is-bw-used"},
    is_reopt_bw_used{YType::boolean, "is-reopt-bw-used"},
    reopt_bw{YType::uint32, "reopt-bw"}
    	,
    ero(std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Ero>())
	,lspa(std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Lspa>())
	,rro(std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Rro>())
{
    ero->parent = this;
    lspa->parent = this;
    rro->parent = this;

    yang_name = "paths"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Paths::~Paths()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::has_data() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return applied_bw.is_set
	|| bw.is_set
	|| is_applied_bw_used.is_set
	|| is_bw_used.is_set
	|| is_reopt_bw_used.is_set
	|| reopt_bw.is_set
	|| (ero !=  nullptr && ero->has_data())
	|| (lspa !=  nullptr && lspa->has_data())
	|| (rro !=  nullptr && rro->has_data());
}

bool MplsPceStdby::Lsps::Lsp::Paths::has_operation() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(applied_bw.yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(is_applied_bw_used.yfilter)
	|| ydk::is_set(is_bw_used.yfilter)
	|| ydk::is_set(is_reopt_bw_used.yfilter)
	|| ydk::is_set(reopt_bw.yfilter)
	|| (ero !=  nullptr && ero->has_operation())
	|| (lspa !=  nullptr && lspa->has_operation())
	|| (rro !=  nullptr && rro->has_operation());
}

std::string MplsPceStdby::Lsps::Lsp::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applied_bw.is_set || is_set(applied_bw.yfilter)) leaf_name_data.push_back(applied_bw.get_name_leafdata());
    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (is_applied_bw_used.is_set || is_set(is_applied_bw_used.yfilter)) leaf_name_data.push_back(is_applied_bw_used.get_name_leafdata());
    if (is_bw_used.is_set || is_set(is_bw_used.yfilter)) leaf_name_data.push_back(is_bw_used.get_name_leafdata());
    if (is_reopt_bw_used.is_set || is_set(is_reopt_bw_used.yfilter)) leaf_name_data.push_back(is_reopt_bw_used.get_name_leafdata());
    if (reopt_bw.is_set || is_set(reopt_bw.yfilter)) leaf_name_data.push_back(reopt_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ero")
    {
        if(ero == nullptr)
        {
            ero = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Ero>();
        }
        return ero;
    }

    if(child_yang_name == "lspa")
    {
        if(lspa == nullptr)
        {
            lspa = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Lspa>();
        }
        return lspa;
    }

    if(child_yang_name == "metric")
    {
        for(auto const & c : metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Metric>();
        c->parent = this;
        metric.push_back(c);
        return c;
    }

    if(child_yang_name == "rro")
    {
        if(rro == nullptr)
        {
            rro = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Rro>();
        }
        return rro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ero != nullptr)
    {
        children["ero"] = ero;
    }

    if(lspa != nullptr)
    {
        children["lspa"] = lspa;
    }

    for (auto const & c : metric)
    {
        children[c->get_segment_path()] = c;
    }

    if(rro != nullptr)
    {
        children["rro"] = rro;
    }

    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "applied-bw")
    {
        applied_bw = value;
        applied_bw.value_namespace = name_space;
        applied_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used = value;
        is_applied_bw_used.value_namespace = name_space;
        is_applied_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used = value;
        is_bw_used.value_namespace = name_space;
        is_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used = value;
        is_reopt_bw_used.value_namespace = name_space;
        is_reopt_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw = value;
        reopt_bw.value_namespace = name_space;
        reopt_bw.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "applied-bw")
    {
        applied_bw.yfilter = yfilter;
    }
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used.yfilter = yfilter;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used.yfilter = yfilter;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used.yfilter = yfilter;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero" || name == "lspa" || name == "metric" || name == "rro" || name == "applied-bw" || name == "bw" || name == "is-applied-bw-used" || name == "is-bw-used" || name == "is-reopt-bw-used" || name == "reopt-bw")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Ero::Ero()
    :
    address{YType::str, "address"},
    cost{YType::uint32, "cost"},
    is_used{YType::boolean, "is-used"}
{

    yang_name = "ero"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Paths::Ero::~Ero()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::has_data() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return cost.is_set
	|| is_used.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::has_operation() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(is_used.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Ero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Ero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subobject")
    {
        for(auto const & c : subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject>();
        c->parent = this;
        subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Paths::Ero::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Ero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Ero::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobject" || name == "address" || name == "cost" || name == "is-used")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::Subobject()
    :
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    global{YType::boolean, "global"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    local_address{YType::str, "local-address"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    mpls_label{YType::uint32, "mpls-label"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    remote_address{YType::str, "remote-address"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    segment_id_value{YType::uint32, "segment-id-value"},
    strict{YType::boolean, "strict"},
    subobj_type{YType::uint8, "subobj-type"}
{

    yang_name = "subobject"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::~Subobject()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::has_data() const
{
    return complete_mpls_label_entry.is_set
	|| global.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| local_address.is_set
	|| missing_node_adjcency_id.is_set
	|| missing_segment_id.is_set
	|| mpls_label.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| only_valid_mpls_label.is_set
	|| remote_address.is_set
	|| segment_id_exists.is_set
	|| segment_id_type.is_set
	|| segment_id_value.is_set
	|| strict.is_set
	|| subobj_type.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(subobj_type.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complete-mpls-label-entry" || name == "global" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "local-address" || name == "missing-node-adjcency-id" || name == "missing-segment-id" || name == "mpls-label" || name == "node-adjacency-id-exists" || name == "node-id" || name == "only-valid-mpls-label" || name == "remote-address" || name == "segment-id-exists" || name == "segment-id-type" || name == "segment-id-value" || name == "strict" || name == "subobj-type")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Lspa::Lspa()
    :
    exlude_any{YType::uint32, "exlude-any"},
    hold{YType::uint8, "hold"},
    include_all{YType::uint32, "include-all"},
    include_any{YType::uint32, "include-any"},
    is_used{YType::boolean, "is-used"},
    lbit{YType::boolean, "lbit"},
    setup{YType::uint8, "setup"}
{

    yang_name = "lspa"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Paths::Lspa::~Lspa()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Lspa::has_data() const
{
    return exlude_any.is_set
	|| hold.is_set
	|| include_all.is_set
	|| include_any.is_set
	|| is_used.is_set
	|| lbit.is_set
	|| setup.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Lspa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exlude_any.yfilter)
	|| ydk::is_set(hold.yfilter)
	|| ydk::is_set(include_all.yfilter)
	|| ydk::is_set(include_any.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(lbit.yfilter)
	|| ydk::is_set(setup.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Lspa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Lspa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exlude_any.is_set || is_set(exlude_any.yfilter)) leaf_name_data.push_back(exlude_any.get_name_leafdata());
    if (hold.is_set || is_set(hold.yfilter)) leaf_name_data.push_back(hold.get_name_leafdata());
    if (include_all.is_set || is_set(include_all.yfilter)) leaf_name_data.push_back(include_all.get_name_leafdata());
    if (include_any.is_set || is_set(include_any.yfilter)) leaf_name_data.push_back(include_any.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (lbit.is_set || is_set(lbit.yfilter)) leaf_name_data.push_back(lbit.get_name_leafdata());
    if (setup.is_set || is_set(setup.yfilter)) leaf_name_data.push_back(setup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::Lspa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Paths::Lspa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Lspa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exlude-any")
    {
        exlude_any = value;
        exlude_any.value_namespace = name_space;
        exlude_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold")
    {
        hold = value;
        hold.value_namespace = name_space;
        hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-all")
    {
        include_all = value;
        include_all.value_namespace = name_space;
        include_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-any")
    {
        include_any = value;
        include_any.value_namespace = name_space;
        include_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbit")
    {
        lbit = value;
        lbit.value_namespace = name_space;
        lbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup")
    {
        setup = value;
        setup.value_namespace = name_space;
        setup.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Lspa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exlude-any")
    {
        exlude_any.yfilter = yfilter;
    }
    if(value_path == "hold")
    {
        hold.yfilter = yfilter;
    }
    if(value_path == "include-all")
    {
        include_all.yfilter = yfilter;
    }
    if(value_path == "include-any")
    {
        include_any.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "lbit")
    {
        lbit.yfilter = yfilter;
    }
    if(value_path == "setup")
    {
        setup.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Lspa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exlude-any" || name == "hold" || name == "include-all" || name == "include-any" || name == "is-used" || name == "lbit" || name == "setup")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Metric::Metric()
    :
    cost{YType::uint32, "cost"},
    type{YType::uint8, "type"}
{

    yang_name = "metric"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Paths::Metric::~Metric()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Metric::has_data() const
{
    return cost.is_set
	|| type.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Paths::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "type")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Rro::Rro()
    :
    address{YType::str, "address"},
    cost{YType::uint32, "cost"},
    is_used{YType::boolean, "is-used"}
{

    yang_name = "rro"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Paths::Rro::~Rro()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::has_data() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return cost.is_set
	|| is_used.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::has_operation() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(is_used.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Rro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subobject")
    {
        for(auto const & c : subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject>();
        c->parent = this;
        subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Paths::Rro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Rro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Rro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobject" || name == "address" || name == "cost" || name == "is-used")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::Subobject()
    :
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    global{YType::boolean, "global"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    local_address{YType::str, "local-address"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    mpls_label{YType::uint32, "mpls-label"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    remote_address{YType::str, "remote-address"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    segment_id_value{YType::uint32, "segment-id-value"},
    strict{YType::boolean, "strict"},
    subobj_type{YType::uint8, "subobj-type"}
{

    yang_name = "subobject"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::~Subobject()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::has_data() const
{
    return complete_mpls_label_entry.is_set
	|| global.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| local_address.is_set
	|| missing_node_adjcency_id.is_set
	|| missing_segment_id.is_set
	|| mpls_label.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| only_valid_mpls_label.is_set
	|| remote_address.is_set
	|| segment_id_exists.is_set
	|| segment_id_type.is_set
	|| segment_id_value.is_set
	|| strict.is_set
	|| subobj_type.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(subobj_type.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complete-mpls-label-entry" || name == "global" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "local-address" || name == "missing-node-adjcency-id" || name == "missing-segment-id" || name == "mpls-label" || name == "node-adjacency-id-exists" || name == "node-id" || name == "only-valid-mpls-label" || name == "remote-address" || name == "segment-id-exists" || name == "segment-id-type" || name == "segment-id-value" || name == "strict" || name == "subobj-type")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Paths()
    :
    applied_bw{YType::uint32, "applied-bw"},
    bw{YType::uint32, "bw"},
    is_applied_bw_used{YType::boolean, "is-applied-bw-used"},
    is_bw_used{YType::boolean, "is-bw-used"},
    is_reopt_bw_used{YType::boolean, "is-reopt-bw-used"},
    reopt_bw{YType::uint32, "reopt-bw"}
    	,
    ero(std::make_shared<MplsPceStdby::Lsps::Paths::Ero>())
	,lspa(std::make_shared<MplsPceStdby::Lsps::Paths::Lspa>())
	,rro(std::make_shared<MplsPceStdby::Lsps::Paths::Rro>())
{
    ero->parent = this;
    lspa->parent = this;
    rro->parent = this;

    yang_name = "paths"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Paths::~Paths()
{
}

bool MplsPceStdby::Lsps::Paths::has_data() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return applied_bw.is_set
	|| bw.is_set
	|| is_applied_bw_used.is_set
	|| is_bw_used.is_set
	|| is_reopt_bw_used.is_set
	|| reopt_bw.is_set
	|| (ero !=  nullptr && ero->has_data())
	|| (lspa !=  nullptr && lspa->has_data())
	|| (rro !=  nullptr && rro->has_data());
}

bool MplsPceStdby::Lsps::Paths::has_operation() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(applied_bw.yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(is_applied_bw_used.yfilter)
	|| ydk::is_set(is_bw_used.yfilter)
	|| ydk::is_set(is_reopt_bw_used.yfilter)
	|| ydk::is_set(reopt_bw.yfilter)
	|| (ero !=  nullptr && ero->has_operation())
	|| (lspa !=  nullptr && lspa->has_operation())
	|| (rro !=  nullptr && rro->has_operation());
}

std::string MplsPceStdby::Lsps::Paths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applied_bw.is_set || is_set(applied_bw.yfilter)) leaf_name_data.push_back(applied_bw.get_name_leafdata());
    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (is_applied_bw_used.is_set || is_set(is_applied_bw_used.yfilter)) leaf_name_data.push_back(is_applied_bw_used.get_name_leafdata());
    if (is_bw_used.is_set || is_set(is_bw_used.yfilter)) leaf_name_data.push_back(is_bw_used.get_name_leafdata());
    if (is_reopt_bw_used.is_set || is_set(is_reopt_bw_used.yfilter)) leaf_name_data.push_back(is_reopt_bw_used.get_name_leafdata());
    if (reopt_bw.is_set || is_set(reopt_bw.yfilter)) leaf_name_data.push_back(reopt_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ero")
    {
        if(ero == nullptr)
        {
            ero = std::make_shared<MplsPceStdby::Lsps::Paths::Ero>();
        }
        return ero;
    }

    if(child_yang_name == "lspa")
    {
        if(lspa == nullptr)
        {
            lspa = std::make_shared<MplsPceStdby::Lsps::Paths::Lspa>();
        }
        return lspa;
    }

    if(child_yang_name == "metric")
    {
        for(auto const & c : metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPceStdby::Lsps::Paths::Metric>();
        c->parent = this;
        metric.push_back(c);
        return c;
    }

    if(child_yang_name == "rro")
    {
        if(rro == nullptr)
        {
            rro = std::make_shared<MplsPceStdby::Lsps::Paths::Rro>();
        }
        return rro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ero != nullptr)
    {
        children["ero"] = ero;
    }

    if(lspa != nullptr)
    {
        children["lspa"] = lspa;
    }

    for (auto const & c : metric)
    {
        children[c->get_segment_path()] = c;
    }

    if(rro != nullptr)
    {
        children["rro"] = rro;
    }

    return children;
}

void MplsPceStdby::Lsps::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "applied-bw")
    {
        applied_bw = value;
        applied_bw.value_namespace = name_space;
        applied_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used = value;
        is_applied_bw_used.value_namespace = name_space;
        is_applied_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used = value;
        is_bw_used.value_namespace = name_space;
        is_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used = value;
        is_reopt_bw_used.value_namespace = name_space;
        is_reopt_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw = value;
        reopt_bw.value_namespace = name_space;
        reopt_bw.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "applied-bw")
    {
        applied_bw.yfilter = yfilter;
    }
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used.yfilter = yfilter;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used.yfilter = yfilter;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used.yfilter = yfilter;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero" || name == "lspa" || name == "metric" || name == "rro" || name == "applied-bw" || name == "bw" || name == "is-applied-bw-used" || name == "is-bw-used" || name == "is-reopt-bw-used" || name == "reopt-bw")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Ero::Ero()
    :
    address{YType::str, "address"},
    cost{YType::uint32, "cost"},
    is_used{YType::boolean, "is-used"}
{

    yang_name = "ero"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Paths::Ero::~Ero()
{
}

bool MplsPceStdby::Lsps::Paths::Ero::has_data() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return cost.is_set
	|| is_used.is_set;
}

bool MplsPceStdby::Lsps::Paths::Ero::has_operation() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(is_used.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Ero::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Ero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Ero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subobject")
    {
        for(auto const & c : subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPceStdby::Lsps::Paths::Ero::Subobject>();
        c->parent = this;
        subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Paths::Ero::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsPceStdby::Lsps::Paths::Ero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::Ero::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Ero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobject" || name == "address" || name == "cost" || name == "is-used")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Ero::Subobject::Subobject()
    :
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    global{YType::boolean, "global"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    local_address{YType::str, "local-address"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    mpls_label{YType::uint32, "mpls-label"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    remote_address{YType::str, "remote-address"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    segment_id_value{YType::uint32, "segment-id-value"},
    strict{YType::boolean, "strict"},
    subobj_type{YType::uint8, "subobj-type"}
{

    yang_name = "subobject"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Paths::Ero::Subobject::~Subobject()
{
}

bool MplsPceStdby::Lsps::Paths::Ero::Subobject::has_data() const
{
    return complete_mpls_label_entry.is_set
	|| global.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| local_address.is_set
	|| missing_node_adjcency_id.is_set
	|| missing_segment_id.is_set
	|| mpls_label.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| only_valid_mpls_label.is_set
	|| remote_address.is_set
	|| segment_id_exists.is_set
	|| segment_id_type.is_set
	|| segment_id_value.is_set
	|| strict.is_set
	|| subobj_type.is_set;
}

bool MplsPceStdby::Lsps::Paths::Ero::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(subobj_type.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Ero::Subobject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/ero/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Ero::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Ero::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::Ero::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Paths::Ero::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Lsps::Paths::Ero::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::Ero::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Ero::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complete-mpls-label-entry" || name == "global" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "local-address" || name == "missing-node-adjcency-id" || name == "missing-segment-id" || name == "mpls-label" || name == "node-adjacency-id-exists" || name == "node-id" || name == "only-valid-mpls-label" || name == "remote-address" || name == "segment-id-exists" || name == "segment-id-type" || name == "segment-id-value" || name == "strict" || name == "subobj-type")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Lspa::Lspa()
    :
    exlude_any{YType::uint32, "exlude-any"},
    hold{YType::uint8, "hold"},
    include_all{YType::uint32, "include-all"},
    include_any{YType::uint32, "include-any"},
    is_used{YType::boolean, "is-used"},
    lbit{YType::boolean, "lbit"},
    setup{YType::uint8, "setup"}
{

    yang_name = "lspa"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Paths::Lspa::~Lspa()
{
}

bool MplsPceStdby::Lsps::Paths::Lspa::has_data() const
{
    return exlude_any.is_set
	|| hold.is_set
	|| include_all.is_set
	|| include_any.is_set
	|| is_used.is_set
	|| lbit.is_set
	|| setup.is_set;
}

bool MplsPceStdby::Lsps::Paths::Lspa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exlude_any.yfilter)
	|| ydk::is_set(hold.yfilter)
	|| ydk::is_set(include_all.yfilter)
	|| ydk::is_set(include_any.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(lbit.yfilter)
	|| ydk::is_set(setup.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Lspa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Lspa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Lspa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exlude_any.is_set || is_set(exlude_any.yfilter)) leaf_name_data.push_back(exlude_any.get_name_leafdata());
    if (hold.is_set || is_set(hold.yfilter)) leaf_name_data.push_back(hold.get_name_leafdata());
    if (include_all.is_set || is_set(include_all.yfilter)) leaf_name_data.push_back(include_all.get_name_leafdata());
    if (include_any.is_set || is_set(include_any.yfilter)) leaf_name_data.push_back(include_any.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (lbit.is_set || is_set(lbit.yfilter)) leaf_name_data.push_back(lbit.get_name_leafdata());
    if (setup.is_set || is_set(setup.yfilter)) leaf_name_data.push_back(setup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::Lspa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Paths::Lspa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Lsps::Paths::Lspa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exlude-any")
    {
        exlude_any = value;
        exlude_any.value_namespace = name_space;
        exlude_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold")
    {
        hold = value;
        hold.value_namespace = name_space;
        hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-all")
    {
        include_all = value;
        include_all.value_namespace = name_space;
        include_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-any")
    {
        include_any = value;
        include_any.value_namespace = name_space;
        include_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbit")
    {
        lbit = value;
        lbit.value_namespace = name_space;
        lbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup")
    {
        setup = value;
        setup.value_namespace = name_space;
        setup.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::Lspa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exlude-any")
    {
        exlude_any.yfilter = yfilter;
    }
    if(value_path == "hold")
    {
        hold.yfilter = yfilter;
    }
    if(value_path == "include-all")
    {
        include_all.yfilter = yfilter;
    }
    if(value_path == "include-any")
    {
        include_any.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "lbit")
    {
        lbit.yfilter = yfilter;
    }
    if(value_path == "setup")
    {
        setup.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Lspa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exlude-any" || name == "hold" || name == "include-all" || name == "include-any" || name == "is-used" || name == "lbit" || name == "setup")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Metric::Metric()
    :
    cost{YType::uint32, "cost"},
    type{YType::uint8, "type"}
{

    yang_name = "metric"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Paths::Metric::~Metric()
{
}

bool MplsPceStdby::Lsps::Paths::Metric::has_data() const
{
    return cost.is_set
	|| type.is_set;
}

bool MplsPceStdby::Lsps::Paths::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Paths::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Lsps::Paths::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "type")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Rro::Rro()
    :
    address{YType::str, "address"},
    cost{YType::uint32, "cost"},
    is_used{YType::boolean, "is-used"}
{

    yang_name = "rro"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Paths::Rro::~Rro()
{
}

bool MplsPceStdby::Lsps::Paths::Rro::has_data() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return cost.is_set
	|| is_used.is_set;
}

bool MplsPceStdby::Lsps::Paths::Rro::has_operation() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(is_used.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Rro::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Rro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subobject")
    {
        for(auto const & c : subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPceStdby::Lsps::Paths::Rro::Subobject>();
        c->parent = this;
        subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Paths::Rro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsPceStdby::Lsps::Paths::Rro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::Rro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Rro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobject" || name == "address" || name == "cost" || name == "is-used")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Rro::Subobject::Subobject()
    :
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    global{YType::boolean, "global"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    local_address{YType::str, "local-address"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    mpls_label{YType::uint32, "mpls-label"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    remote_address{YType::str, "remote-address"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    segment_id_value{YType::uint32, "segment-id-value"},
    strict{YType::boolean, "strict"},
    subobj_type{YType::uint8, "subobj-type"}
{

    yang_name = "subobject"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Paths::Rro::Subobject::~Subobject()
{
}

bool MplsPceStdby::Lsps::Paths::Rro::Subobject::has_data() const
{
    return complete_mpls_label_entry.is_set
	|| global.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| local_address.is_set
	|| missing_node_adjcency_id.is_set
	|| missing_segment_id.is_set
	|| mpls_label.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| only_valid_mpls_label.is_set
	|| remote_address.is_set
	|| segment_id_exists.is_set
	|| segment_id_type.is_set
	|| segment_id_value.is_set
	|| strict.is_set
	|| subobj_type.is_set;
}

bool MplsPceStdby::Lsps::Paths::Rro::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(subobj_type.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Rro::Subobject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Rro::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Rro::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::Rro::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Paths::Rro::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Lsps::Paths::Rro::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::Rro::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Rro::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complete-mpls-label-entry" || name == "global" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "local-address" || name == "missing-node-adjcency-id" || name == "missing-segment-id" || name == "mpls-label" || name == "node-adjacency-id-exists" || name == "node-id" || name == "only-valid-mpls-label" || name == "remote-address" || name == "segment-id-exists" || name == "segment-id-type" || name == "segment-id-value" || name == "strict" || name == "subobj-type")
        return true;
    return false;
}

MplsPceStdby::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "mpls-pce-stdby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Peers::~Peers()
{
}

bool MplsPceStdby::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool MplsPceStdby::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsPceStdby::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPceStdby::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsPceStdby::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPceStdby::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsPceStdby::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

MplsPceStdby::Peers::Peer::Peer()
    :
    peer_address{YType::str, "peer-address"},
    candidate{YType::boolean, "candidate"},
    capability_db_version{YType::boolean, "capability-db-version"},
    capability_instantiate{YType::boolean, "capability-instantiate"},
    capability_segment_routing{YType::boolean, "capability-segment-routing"},
    capability_update{YType::boolean, "capability-update"},
    delta_sync_capability{YType::boolean, "delta-sync-capability"},
    error{YType::str, "error"},
    keepalives{YType::uint32, "keepalives"},
    keychain_enabled{YType::boolean, "keychain-enabled"},
    local_sid{YType::uint8, "local-sid"},
    max_dead_interval{YType::uint8, "max-dead-interval"},
    md5_enabled{YType::boolean, "md5-enabled"},
    min_keepalive_interval{YType::uint8, "min-keepalive-interval"},
    negotated_dead_time{YType::uint32, "negotated-dead-time"},
    negotiated_keepalive{YType::uint32, "negotiated-keepalive"},
    pce_err_rx{YType::uint32, "pce-err-rx"},
    pce_err_tx{YType::uint32, "pce-err-tx"},
    pce_init_rx{YType::uint32, "pce-init-rx"},
    pce_init_tx{YType::uint32, "pce-init-tx"},
    pce_keepalive_rx{YType::uint64, "pce-keepalive-rx"},
    pce_keepalive_tx{YType::uint64, "pce-keepalive-tx"},
    pce_open_rx{YType::uint32, "pce-open-rx"},
    pce_open_tx{YType::uint32, "pce-open-tx"},
    pce_rep_rx{YType::uint32, "pce-rep-rx"},
    pce_rep_tx{YType::uint32, "pce-rep-tx"},
    pce_req_rx{YType::uint32, "pce-req-rx"},
    pce_req_tx{YType::uint32, "pce-req-tx"},
    pce_rpt_rx{YType::uint32, "pce-rpt-rx"},
    pce_rpt_tx{YType::uint32, "pce-rpt-tx"},
    pce_state{YType::enumeration, "pce-state"},
    pce_upd_rx{YType::uint32, "pce-upd-rx"},
    pce_upd_tx{YType::uint32, "pce-upd-tx"},
    pcep_up_time{YType::uint32, "pcep-up-time"},
    precedence{YType::uint32, "precedence"},
    remote_sid{YType::uint8, "remote-sid"},
    req_reply_avg{YType::uint64, "req-reply-avg"},
    req_reply_max{YType::uint64, "req-reply-max"},
    req_reply_min{YType::uint64, "req-reply-min"},
    request_timeouts{YType::uint64, "request-timeouts"},
    stateful{YType::boolean, "stateful"},
    statically_configured{YType::boolean, "statically-configured"},
    triggered_sync_capability{YType::boolean, "triggered-sync-capability"}
    	,
    last_rx_pce_err(std::make_shared<MplsPceStdby::Peers::Peer::LastRxPceErr>())
	,last_tx_pce_err(std::make_shared<MplsPceStdby::Peers::Peer::LastTxPceErr>())
{
    last_rx_pce_err->parent = this;
    last_tx_pce_err->parent = this;

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Peers::Peer::~Peer()
{
}

bool MplsPceStdby::Peers::Peer::has_data() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_data())
            return true;
    }
    return peer_address.is_set
	|| candidate.is_set
	|| capability_db_version.is_set
	|| capability_instantiate.is_set
	|| capability_segment_routing.is_set
	|| capability_update.is_set
	|| delta_sync_capability.is_set
	|| error.is_set
	|| keepalives.is_set
	|| keychain_enabled.is_set
	|| local_sid.is_set
	|| max_dead_interval.is_set
	|| md5_enabled.is_set
	|| min_keepalive_interval.is_set
	|| negotated_dead_time.is_set
	|| negotiated_keepalive.is_set
	|| pce_err_rx.is_set
	|| pce_err_tx.is_set
	|| pce_init_rx.is_set
	|| pce_init_tx.is_set
	|| pce_keepalive_rx.is_set
	|| pce_keepalive_tx.is_set
	|| pce_open_rx.is_set
	|| pce_open_tx.is_set
	|| pce_rep_rx.is_set
	|| pce_rep_tx.is_set
	|| pce_req_rx.is_set
	|| pce_req_tx.is_set
	|| pce_rpt_rx.is_set
	|| pce_rpt_tx.is_set
	|| pce_state.is_set
	|| pce_upd_rx.is_set
	|| pce_upd_tx.is_set
	|| pcep_up_time.is_set
	|| precedence.is_set
	|| remote_sid.is_set
	|| req_reply_avg.is_set
	|| req_reply_max.is_set
	|| req_reply_min.is_set
	|| request_timeouts.is_set
	|| stateful.is_set
	|| statically_configured.is_set
	|| triggered_sync_capability.is_set
	|| (last_rx_pce_err !=  nullptr && last_rx_pce_err->has_data())
	|| (last_tx_pce_err !=  nullptr && last_tx_pce_err->has_data());
}

bool MplsPceStdby::Peers::Peer::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(candidate.yfilter)
	|| ydk::is_set(capability_db_version.yfilter)
	|| ydk::is_set(capability_instantiate.yfilter)
	|| ydk::is_set(capability_segment_routing.yfilter)
	|| ydk::is_set(capability_update.yfilter)
	|| ydk::is_set(delta_sync_capability.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(keepalives.yfilter)
	|| ydk::is_set(keychain_enabled.yfilter)
	|| ydk::is_set(local_sid.yfilter)
	|| ydk::is_set(max_dead_interval.yfilter)
	|| ydk::is_set(md5_enabled.yfilter)
	|| ydk::is_set(min_keepalive_interval.yfilter)
	|| ydk::is_set(negotated_dead_time.yfilter)
	|| ydk::is_set(negotiated_keepalive.yfilter)
	|| ydk::is_set(pce_err_rx.yfilter)
	|| ydk::is_set(pce_err_tx.yfilter)
	|| ydk::is_set(pce_init_rx.yfilter)
	|| ydk::is_set(pce_init_tx.yfilter)
	|| ydk::is_set(pce_keepalive_rx.yfilter)
	|| ydk::is_set(pce_keepalive_tx.yfilter)
	|| ydk::is_set(pce_open_rx.yfilter)
	|| ydk::is_set(pce_open_tx.yfilter)
	|| ydk::is_set(pce_rep_rx.yfilter)
	|| ydk::is_set(pce_rep_tx.yfilter)
	|| ydk::is_set(pce_req_rx.yfilter)
	|| ydk::is_set(pce_req_tx.yfilter)
	|| ydk::is_set(pce_rpt_rx.yfilter)
	|| ydk::is_set(pce_rpt_tx.yfilter)
	|| ydk::is_set(pce_state.yfilter)
	|| ydk::is_set(pce_upd_rx.yfilter)
	|| ydk::is_set(pce_upd_tx.yfilter)
	|| ydk::is_set(pcep_up_time.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(remote_sid.yfilter)
	|| ydk::is_set(req_reply_avg.yfilter)
	|| ydk::is_set(req_reply_max.yfilter)
	|| ydk::is_set(req_reply_min.yfilter)
	|| ydk::is_set(request_timeouts.yfilter)
	|| ydk::is_set(stateful.yfilter)
	|| ydk::is_set(statically_configured.yfilter)
	|| ydk::is_set(triggered_sync_capability.yfilter)
	|| (last_rx_pce_err !=  nullptr && last_rx_pce_err->has_operation())
	|| (last_tx_pce_err !=  nullptr && last_tx_pce_err->has_operation());
}

std::string MplsPceStdby::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[peer-address='" <<peer_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (candidate.is_set || is_set(candidate.yfilter)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (capability_db_version.is_set || is_set(capability_db_version.yfilter)) leaf_name_data.push_back(capability_db_version.get_name_leafdata());
    if (capability_instantiate.is_set || is_set(capability_instantiate.yfilter)) leaf_name_data.push_back(capability_instantiate.get_name_leafdata());
    if (capability_segment_routing.is_set || is_set(capability_segment_routing.yfilter)) leaf_name_data.push_back(capability_segment_routing.get_name_leafdata());
    if (capability_update.is_set || is_set(capability_update.yfilter)) leaf_name_data.push_back(capability_update.get_name_leafdata());
    if (delta_sync_capability.is_set || is_set(delta_sync_capability.yfilter)) leaf_name_data.push_back(delta_sync_capability.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (keepalives.is_set || is_set(keepalives.yfilter)) leaf_name_data.push_back(keepalives.get_name_leafdata());
    if (keychain_enabled.is_set || is_set(keychain_enabled.yfilter)) leaf_name_data.push_back(keychain_enabled.get_name_leafdata());
    if (local_sid.is_set || is_set(local_sid.yfilter)) leaf_name_data.push_back(local_sid.get_name_leafdata());
    if (max_dead_interval.is_set || is_set(max_dead_interval.yfilter)) leaf_name_data.push_back(max_dead_interval.get_name_leafdata());
    if (md5_enabled.is_set || is_set(md5_enabled.yfilter)) leaf_name_data.push_back(md5_enabled.get_name_leafdata());
    if (min_keepalive_interval.is_set || is_set(min_keepalive_interval.yfilter)) leaf_name_data.push_back(min_keepalive_interval.get_name_leafdata());
    if (negotated_dead_time.is_set || is_set(negotated_dead_time.yfilter)) leaf_name_data.push_back(negotated_dead_time.get_name_leafdata());
    if (negotiated_keepalive.is_set || is_set(negotiated_keepalive.yfilter)) leaf_name_data.push_back(negotiated_keepalive.get_name_leafdata());
    if (pce_err_rx.is_set || is_set(pce_err_rx.yfilter)) leaf_name_data.push_back(pce_err_rx.get_name_leafdata());
    if (pce_err_tx.is_set || is_set(pce_err_tx.yfilter)) leaf_name_data.push_back(pce_err_tx.get_name_leafdata());
    if (pce_init_rx.is_set || is_set(pce_init_rx.yfilter)) leaf_name_data.push_back(pce_init_rx.get_name_leafdata());
    if (pce_init_tx.is_set || is_set(pce_init_tx.yfilter)) leaf_name_data.push_back(pce_init_tx.get_name_leafdata());
    if (pce_keepalive_rx.is_set || is_set(pce_keepalive_rx.yfilter)) leaf_name_data.push_back(pce_keepalive_rx.get_name_leafdata());
    if (pce_keepalive_tx.is_set || is_set(pce_keepalive_tx.yfilter)) leaf_name_data.push_back(pce_keepalive_tx.get_name_leafdata());
    if (pce_open_rx.is_set || is_set(pce_open_rx.yfilter)) leaf_name_data.push_back(pce_open_rx.get_name_leafdata());
    if (pce_open_tx.is_set || is_set(pce_open_tx.yfilter)) leaf_name_data.push_back(pce_open_tx.get_name_leafdata());
    if (pce_rep_rx.is_set || is_set(pce_rep_rx.yfilter)) leaf_name_data.push_back(pce_rep_rx.get_name_leafdata());
    if (pce_rep_tx.is_set || is_set(pce_rep_tx.yfilter)) leaf_name_data.push_back(pce_rep_tx.get_name_leafdata());
    if (pce_req_rx.is_set || is_set(pce_req_rx.yfilter)) leaf_name_data.push_back(pce_req_rx.get_name_leafdata());
    if (pce_req_tx.is_set || is_set(pce_req_tx.yfilter)) leaf_name_data.push_back(pce_req_tx.get_name_leafdata());
    if (pce_rpt_rx.is_set || is_set(pce_rpt_rx.yfilter)) leaf_name_data.push_back(pce_rpt_rx.get_name_leafdata());
    if (pce_rpt_tx.is_set || is_set(pce_rpt_tx.yfilter)) leaf_name_data.push_back(pce_rpt_tx.get_name_leafdata());
    if (pce_state.is_set || is_set(pce_state.yfilter)) leaf_name_data.push_back(pce_state.get_name_leafdata());
    if (pce_upd_rx.is_set || is_set(pce_upd_rx.yfilter)) leaf_name_data.push_back(pce_upd_rx.get_name_leafdata());
    if (pce_upd_tx.is_set || is_set(pce_upd_tx.yfilter)) leaf_name_data.push_back(pce_upd_tx.get_name_leafdata());
    if (pcep_up_time.is_set || is_set(pcep_up_time.yfilter)) leaf_name_data.push_back(pcep_up_time.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (remote_sid.is_set || is_set(remote_sid.yfilter)) leaf_name_data.push_back(remote_sid.get_name_leafdata());
    if (req_reply_avg.is_set || is_set(req_reply_avg.yfilter)) leaf_name_data.push_back(req_reply_avg.get_name_leafdata());
    if (req_reply_max.is_set || is_set(req_reply_max.yfilter)) leaf_name_data.push_back(req_reply_max.get_name_leafdata());
    if (req_reply_min.is_set || is_set(req_reply_min.yfilter)) leaf_name_data.push_back(req_reply_min.get_name_leafdata());
    if (request_timeouts.is_set || is_set(request_timeouts.yfilter)) leaf_name_data.push_back(request_timeouts.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (statically_configured.is_set || is_set(statically_configured.yfilter)) leaf_name_data.push_back(statically_configured.get_name_leafdata());
    if (triggered_sync_capability.is_set || is_set(triggered_sync_capability.yfilter)) leaf_name_data.push_back(triggered_sync_capability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ig-ps")
    {
        for(auto const & c : ig_ps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPceStdby::Peers::Peer::IgPs>();
        c->parent = this;
        ig_ps.push_back(c);
        return c;
    }

    if(child_yang_name == "last-rx-pce-err")
    {
        if(last_rx_pce_err == nullptr)
        {
            last_rx_pce_err = std::make_shared<MplsPceStdby::Peers::Peer::LastRxPceErr>();
        }
        return last_rx_pce_err;
    }

    if(child_yang_name == "last-tx-pce-err")
    {
        if(last_tx_pce_err == nullptr)
        {
            last_tx_pce_err = std::make_shared<MplsPceStdby::Peers::Peer::LastTxPceErr>();
        }
        return last_tx_pce_err;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ig_ps)
    {
        children[c->get_segment_path()] = c;
    }

    if(last_rx_pce_err != nullptr)
    {
        children["last-rx-pce-err"] = last_rx_pce_err;
    }

    if(last_tx_pce_err != nullptr)
    {
        children["last-tx-pce-err"] = last_tx_pce_err;
    }

    return children;
}

void MplsPceStdby::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate")
    {
        candidate = value;
        candidate.value_namespace = name_space;
        candidate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version = value;
        capability_db_version.value_namespace = name_space;
        capability_db_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate = value;
        capability_instantiate.value_namespace = name_space;
        capability_instantiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing = value;
        capability_segment_routing.value_namespace = name_space;
        capability_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-update")
    {
        capability_update = value;
        capability_update.value_namespace = name_space;
        capability_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delta-sync-capability")
    {
        delta_sync_capability = value;
        delta_sync_capability.value_namespace = name_space;
        delta_sync_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalives")
    {
        keepalives = value;
        keepalives.value_namespace = name_space;
        keepalives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled = value;
        keychain_enabled.value_namespace = name_space;
        keychain_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-sid")
    {
        local_sid = value;
        local_sid.value_namespace = name_space;
        local_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-dead-interval")
    {
        max_dead_interval = value;
        max_dead_interval.value_namespace = name_space;
        max_dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled = value;
        md5_enabled.value_namespace = name_space;
        md5_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-keepalive-interval")
    {
        min_keepalive_interval = value;
        min_keepalive_interval.value_namespace = name_space;
        min_keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotated-dead-time")
    {
        negotated_dead_time = value;
        negotated_dead_time.value_namespace = name_space;
        negotated_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-keepalive")
    {
        negotiated_keepalive = value;
        negotiated_keepalive.value_namespace = name_space;
        negotiated_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-rx")
    {
        pce_err_rx = value;
        pce_err_rx.value_namespace = name_space;
        pce_err_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-tx")
    {
        pce_err_tx = value;
        pce_err_tx.value_namespace = name_space;
        pce_err_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-init-rx")
    {
        pce_init_rx = value;
        pce_init_rx.value_namespace = name_space;
        pce_init_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-init-tx")
    {
        pce_init_tx = value;
        pce_init_tx.value_namespace = name_space;
        pce_init_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx = value;
        pce_keepalive_rx.value_namespace = name_space;
        pce_keepalive_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx = value;
        pce_keepalive_tx.value_namespace = name_space;
        pce_keepalive_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx = value;
        pce_open_rx.value_namespace = name_space;
        pce_open_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx = value;
        pce_open_tx.value_namespace = name_space;
        pce_open_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rep-rx")
    {
        pce_rep_rx = value;
        pce_rep_rx.value_namespace = name_space;
        pce_rep_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rep-tx")
    {
        pce_rep_tx = value;
        pce_rep_tx.value_namespace = name_space;
        pce_rep_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-rx")
    {
        pce_req_rx = value;
        pce_req_rx.value_namespace = name_space;
        pce_req_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-tx")
    {
        pce_req_tx = value;
        pce_req_tx.value_namespace = name_space;
        pce_req_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rpt-rx")
    {
        pce_rpt_rx = value;
        pce_rpt_rx.value_namespace = name_space;
        pce_rpt_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rpt-tx")
    {
        pce_rpt_tx = value;
        pce_rpt_tx.value_namespace = name_space;
        pce_rpt_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-state")
    {
        pce_state = value;
        pce_state.value_namespace = name_space;
        pce_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-upd-rx")
    {
        pce_upd_rx = value;
        pce_upd_rx.value_namespace = name_space;
        pce_upd_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-upd-tx")
    {
        pce_upd_tx = value;
        pce_upd_tx.value_namespace = name_space;
        pce_upd_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time = value;
        pcep_up_time.value_namespace = name_space;
        pcep_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-sid")
    {
        remote_sid = value;
        remote_sid.value_namespace = name_space;
        remote_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-reply-avg")
    {
        req_reply_avg = value;
        req_reply_avg.value_namespace = name_space;
        req_reply_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-reply-max")
    {
        req_reply_max = value;
        req_reply_max.value_namespace = name_space;
        req_reply_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-reply-min")
    {
        req_reply_min = value;
        req_reply_min.value_namespace = name_space;
        req_reply_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-timeouts")
    {
        request_timeouts = value;
        request_timeouts.value_namespace = name_space;
        request_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statically-configured")
    {
        statically_configured = value;
        statically_configured.value_namespace = name_space;
        statically_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "triggered-sync-capability")
    {
        triggered_sync_capability = value;
        triggered_sync_capability.value_namespace = name_space;
        triggered_sync_capability.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "candidate")
    {
        candidate.yfilter = yfilter;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version.yfilter = yfilter;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate.yfilter = yfilter;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing.yfilter = yfilter;
    }
    if(value_path == "capability-update")
    {
        capability_update.yfilter = yfilter;
    }
    if(value_path == "delta-sync-capability")
    {
        delta_sync_capability.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "keepalives")
    {
        keepalives.yfilter = yfilter;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled.yfilter = yfilter;
    }
    if(value_path == "local-sid")
    {
        local_sid.yfilter = yfilter;
    }
    if(value_path == "max-dead-interval")
    {
        max_dead_interval.yfilter = yfilter;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled.yfilter = yfilter;
    }
    if(value_path == "min-keepalive-interval")
    {
        min_keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "negotated-dead-time")
    {
        negotated_dead_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-keepalive")
    {
        negotiated_keepalive.yfilter = yfilter;
    }
    if(value_path == "pce-err-rx")
    {
        pce_err_rx.yfilter = yfilter;
    }
    if(value_path == "pce-err-tx")
    {
        pce_err_tx.yfilter = yfilter;
    }
    if(value_path == "pce-init-rx")
    {
        pce_init_rx.yfilter = yfilter;
    }
    if(value_path == "pce-init-tx")
    {
        pce_init_tx.yfilter = yfilter;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx.yfilter = yfilter;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx.yfilter = yfilter;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx.yfilter = yfilter;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx.yfilter = yfilter;
    }
    if(value_path == "pce-rep-rx")
    {
        pce_rep_rx.yfilter = yfilter;
    }
    if(value_path == "pce-rep-tx")
    {
        pce_rep_tx.yfilter = yfilter;
    }
    if(value_path == "pce-req-rx")
    {
        pce_req_rx.yfilter = yfilter;
    }
    if(value_path == "pce-req-tx")
    {
        pce_req_tx.yfilter = yfilter;
    }
    if(value_path == "pce-rpt-rx")
    {
        pce_rpt_rx.yfilter = yfilter;
    }
    if(value_path == "pce-rpt-tx")
    {
        pce_rpt_tx.yfilter = yfilter;
    }
    if(value_path == "pce-state")
    {
        pce_state.yfilter = yfilter;
    }
    if(value_path == "pce-upd-rx")
    {
        pce_upd_rx.yfilter = yfilter;
    }
    if(value_path == "pce-upd-tx")
    {
        pce_upd_tx.yfilter = yfilter;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "remote-sid")
    {
        remote_sid.yfilter = yfilter;
    }
    if(value_path == "req-reply-avg")
    {
        req_reply_avg.yfilter = yfilter;
    }
    if(value_path == "req-reply-max")
    {
        req_reply_max.yfilter = yfilter;
    }
    if(value_path == "req-reply-min")
    {
        req_reply_min.yfilter = yfilter;
    }
    if(value_path == "request-timeouts")
    {
        request_timeouts.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
    if(value_path == "statically-configured")
    {
        statically_configured.yfilter = yfilter;
    }
    if(value_path == "triggered-sync-capability")
    {
        triggered_sync_capability.yfilter = yfilter;
    }
}

bool MplsPceStdby::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ig-ps" || name == "last-rx-pce-err" || name == "last-tx-pce-err" || name == "peer-address" || name == "candidate" || name == "capability-db-version" || name == "capability-instantiate" || name == "capability-segment-routing" || name == "capability-update" || name == "delta-sync-capability" || name == "error" || name == "keepalives" || name == "keychain-enabled" || name == "local-sid" || name == "max-dead-interval" || name == "md5-enabled" || name == "min-keepalive-interval" || name == "negotated-dead-time" || name == "negotiated-keepalive" || name == "pce-err-rx" || name == "pce-err-tx" || name == "pce-init-rx" || name == "pce-init-tx" || name == "pce-keepalive-rx" || name == "pce-keepalive-tx" || name == "pce-open-rx" || name == "pce-open-tx" || name == "pce-rep-rx" || name == "pce-rep-tx" || name == "pce-req-rx" || name == "pce-req-tx" || name == "pce-rpt-rx" || name == "pce-rpt-tx" || name == "pce-state" || name == "pce-upd-rx" || name == "pce-upd-tx" || name == "pcep-up-time" || name == "precedence" || name == "remote-sid" || name == "req-reply-avg" || name == "req-reply-max" || name == "req-reply-min" || name == "request-timeouts" || name == "stateful" || name == "statically-configured" || name == "triggered-sync-capability")
        return true;
    return false;
}

MplsPceStdby::Peers::Peer::IgPs::IgPs()
    :
    igp_instance_id{YType::str, "igp-instance-id"},
    igp_type{YType::enumeration, "igp-type"}
{

    yang_name = "ig-ps"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Peers::Peer::IgPs::~IgPs()
{
}

bool MplsPceStdby::Peers::Peer::IgPs::has_data() const
{
    return igp_instance_id.is_set
	|| igp_type.is_set;
}

bool MplsPceStdby::Peers::Peer::IgPs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_instance_id.yfilter)
	|| ydk::is_set(igp_type.yfilter);
}

std::string MplsPceStdby::Peers::Peer::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Peers::Peer::IgPs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_instance_id.is_set || is_set(igp_instance_id.yfilter)) leaf_name_data.push_back(igp_instance_id.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Peers::Peer::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Peers::Peer::IgPs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Peers::Peer::IgPs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-instance-id")
    {
        igp_instance_id = value;
        igp_instance_id.value_namespace = name_space;
        igp_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Peers::Peer::IgPs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-instance-id")
    {
        igp_instance_id.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
}

bool MplsPceStdby::Peers::Peer::IgPs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-instance-id" || name == "igp-type")
        return true;
    return false;
}

MplsPceStdby::Peers::Peer::LastRxPceErr::LastRxPceErr()
    :
    has_open_object{YType::boolean, "has-open-object"},
    has_rp_object{YType::boolean, "has-rp-object"},
    open_dead_time{YType::uint32, "open-dead-time"},
    open_keepalive{YType::uint32, "open-keepalive"},
    openversion{YType::uint32, "openversion"},
    pce_err_type{YType::uint32, "pce-err-type"},
    pce_err_value{YType::uint32, "pce-err-value"},
    rp_request_id{YType::uint32, "rp-request-id"}
{

    yang_name = "last-rx-pce-err"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Peers::Peer::LastRxPceErr::~LastRxPceErr()
{
}

bool MplsPceStdby::Peers::Peer::LastRxPceErr::has_data() const
{
    return has_open_object.is_set
	|| has_rp_object.is_set
	|| open_dead_time.is_set
	|| open_keepalive.is_set
	|| openversion.is_set
	|| pce_err_type.is_set
	|| pce_err_value.is_set
	|| rp_request_id.is_set;
}

bool MplsPceStdby::Peers::Peer::LastRxPceErr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(has_open_object.yfilter)
	|| ydk::is_set(has_rp_object.yfilter)
	|| ydk::is_set(open_dead_time.yfilter)
	|| ydk::is_set(open_keepalive.yfilter)
	|| ydk::is_set(openversion.yfilter)
	|| ydk::is_set(pce_err_type.yfilter)
	|| ydk::is_set(pce_err_value.yfilter)
	|| ydk::is_set(rp_request_id.yfilter);
}

std::string MplsPceStdby::Peers::Peer::LastRxPceErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rx-pce-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Peers::Peer::LastRxPceErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_open_object.is_set || is_set(has_open_object.yfilter)) leaf_name_data.push_back(has_open_object.get_name_leafdata());
    if (has_rp_object.is_set || is_set(has_rp_object.yfilter)) leaf_name_data.push_back(has_rp_object.get_name_leafdata());
    if (open_dead_time.is_set || is_set(open_dead_time.yfilter)) leaf_name_data.push_back(open_dead_time.get_name_leafdata());
    if (open_keepalive.is_set || is_set(open_keepalive.yfilter)) leaf_name_data.push_back(open_keepalive.get_name_leafdata());
    if (openversion.is_set || is_set(openversion.yfilter)) leaf_name_data.push_back(openversion.get_name_leafdata());
    if (pce_err_type.is_set || is_set(pce_err_type.yfilter)) leaf_name_data.push_back(pce_err_type.get_name_leafdata());
    if (pce_err_value.is_set || is_set(pce_err_value.yfilter)) leaf_name_data.push_back(pce_err_value.get_name_leafdata());
    if (rp_request_id.is_set || is_set(rp_request_id.yfilter)) leaf_name_data.push_back(rp_request_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Peers::Peer::LastRxPceErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Peers::Peer::LastRxPceErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Peers::Peer::LastRxPceErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "has-open-object")
    {
        has_open_object = value;
        has_open_object.value_namespace = name_space;
        has_open_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object = value;
        has_rp_object.value_namespace = name_space;
        has_rp_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time = value;
        open_dead_time.value_namespace = name_space;
        open_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive = value;
        open_keepalive.value_namespace = name_space;
        open_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openversion")
    {
        openversion = value;
        openversion.value_namespace = name_space;
        openversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-type")
    {
        pce_err_type = value;
        pce_err_type.value_namespace = name_space;
        pce_err_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value = value;
        pce_err_value.value_namespace = name_space;
        pce_err_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id = value;
        rp_request_id.value_namespace = name_space;
        rp_request_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Peers::Peer::LastRxPceErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "has-open-object")
    {
        has_open_object.yfilter = yfilter;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object.yfilter = yfilter;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time.yfilter = yfilter;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive.yfilter = yfilter;
    }
    if(value_path == "openversion")
    {
        openversion.yfilter = yfilter;
    }
    if(value_path == "pce-err-type")
    {
        pce_err_type.yfilter = yfilter;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value.yfilter = yfilter;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id.yfilter = yfilter;
    }
}

bool MplsPceStdby::Peers::Peer::LastRxPceErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "has-open-object" || name == "has-rp-object" || name == "open-dead-time" || name == "open-keepalive" || name == "openversion" || name == "pce-err-type" || name == "pce-err-value" || name == "rp-request-id")
        return true;
    return false;
}

MplsPceStdby::Peers::Peer::LastTxPceErr::LastTxPceErr()
    :
    has_open_object{YType::boolean, "has-open-object"},
    has_rp_object{YType::boolean, "has-rp-object"},
    open_dead_time{YType::uint32, "open-dead-time"},
    open_keepalive{YType::uint32, "open-keepalive"},
    openversion{YType::uint32, "openversion"},
    pce_err_type{YType::uint32, "pce-err-type"},
    pce_err_value{YType::uint32, "pce-err-value"},
    rp_request_id{YType::uint32, "rp-request-id"}
{

    yang_name = "last-tx-pce-err"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Peers::Peer::LastTxPceErr::~LastTxPceErr()
{
}

bool MplsPceStdby::Peers::Peer::LastTxPceErr::has_data() const
{
    return has_open_object.is_set
	|| has_rp_object.is_set
	|| open_dead_time.is_set
	|| open_keepalive.is_set
	|| openversion.is_set
	|| pce_err_type.is_set
	|| pce_err_value.is_set
	|| rp_request_id.is_set;
}

bool MplsPceStdby::Peers::Peer::LastTxPceErr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(has_open_object.yfilter)
	|| ydk::is_set(has_rp_object.yfilter)
	|| ydk::is_set(open_dead_time.yfilter)
	|| ydk::is_set(open_keepalive.yfilter)
	|| ydk::is_set(openversion.yfilter)
	|| ydk::is_set(pce_err_type.yfilter)
	|| ydk::is_set(pce_err_value.yfilter)
	|| ydk::is_set(rp_request_id.yfilter);
}

std::string MplsPceStdby::Peers::Peer::LastTxPceErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-tx-pce-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Peers::Peer::LastTxPceErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_open_object.is_set || is_set(has_open_object.yfilter)) leaf_name_data.push_back(has_open_object.get_name_leafdata());
    if (has_rp_object.is_set || is_set(has_rp_object.yfilter)) leaf_name_data.push_back(has_rp_object.get_name_leafdata());
    if (open_dead_time.is_set || is_set(open_dead_time.yfilter)) leaf_name_data.push_back(open_dead_time.get_name_leafdata());
    if (open_keepalive.is_set || is_set(open_keepalive.yfilter)) leaf_name_data.push_back(open_keepalive.get_name_leafdata());
    if (openversion.is_set || is_set(openversion.yfilter)) leaf_name_data.push_back(openversion.get_name_leafdata());
    if (pce_err_type.is_set || is_set(pce_err_type.yfilter)) leaf_name_data.push_back(pce_err_type.get_name_leafdata());
    if (pce_err_value.is_set || is_set(pce_err_value.yfilter)) leaf_name_data.push_back(pce_err_value.get_name_leafdata());
    if (rp_request_id.is_set || is_set(rp_request_id.yfilter)) leaf_name_data.push_back(rp_request_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Peers::Peer::LastTxPceErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Peers::Peer::LastTxPceErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Peers::Peer::LastTxPceErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "has-open-object")
    {
        has_open_object = value;
        has_open_object.value_namespace = name_space;
        has_open_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object = value;
        has_rp_object.value_namespace = name_space;
        has_rp_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time = value;
        open_dead_time.value_namespace = name_space;
        open_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive = value;
        open_keepalive.value_namespace = name_space;
        open_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openversion")
    {
        openversion = value;
        openversion.value_namespace = name_space;
        openversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-type")
    {
        pce_err_type = value;
        pce_err_type.value_namespace = name_space;
        pce_err_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value = value;
        pce_err_value.value_namespace = name_space;
        pce_err_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id = value;
        rp_request_id.value_namespace = name_space;
        rp_request_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Peers::Peer::LastTxPceErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "has-open-object")
    {
        has_open_object.yfilter = yfilter;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object.yfilter = yfilter;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time.yfilter = yfilter;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive.yfilter = yfilter;
    }
    if(value_path == "openversion")
    {
        openversion.yfilter = yfilter;
    }
    if(value_path == "pce-err-type")
    {
        pce_err_type.yfilter = yfilter;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value.yfilter = yfilter;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id.yfilter = yfilter;
    }
}

bool MplsPceStdby::Peers::Peer::LastTxPceErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "has-open-object" || name == "has-rp-object" || name == "open-dead-time" || name == "open-keepalive" || name == "openversion" || name == "pce-err-type" || name == "pce-err-value" || name == "rp-request-id")
        return true;
    return false;
}

MplsPceStdby::Statistics::Statistics()
    :
    average_in_queue_depth{YType::uint32, "average-in-queue-depth"},
    current_file_descriptors{YType::uint32, "current-file-descriptors"},
    current_pceq_length{YType::uint32, "current-pceq-length"},
    current_teq_length{YType::uint32, "current-teq-length"},
    max_file_descriptors{YType::uint32, "max-file-descriptors"},
    max_pceq_length{YType::uint32, "max-pceq-length"},
    max_teq_length{YType::uint32, "max-teq-length"},
    maximum_in_queue_depth{YType::uint32, "maximum-in-queue-depth"},
    neighbors{YType::uint32, "neighbors"},
    pce_req_pending{YType::uint32, "pce-req-pending"},
    pce_req_timed_out{YType::uint32, "pce-req-timed-out"},
    pce_req_total{YType::uint32, "pce-req-total"},
    tunnels{YType::uint32, "tunnels"}
    	,
    igp_statistics(std::make_shared<MplsPceStdby::Statistics::IgpStatistics>())
{
    igp_statistics->parent = this;

    yang_name = "statistics"; yang_parent_name = "mpls-pce-stdby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Statistics::~Statistics()
{
}

bool MplsPceStdby::Statistics::has_data() const
{
    for (auto const & leaf : average_in_queue_depth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : maximum_in_queue_depth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return current_file_descriptors.is_set
	|| current_pceq_length.is_set
	|| current_teq_length.is_set
	|| max_file_descriptors.is_set
	|| max_pceq_length.is_set
	|| max_teq_length.is_set
	|| neighbors.is_set
	|| pce_req_pending.is_set
	|| pce_req_timed_out.is_set
	|| pce_req_total.is_set
	|| tunnels.is_set
	|| (igp_statistics !=  nullptr && igp_statistics->has_data());
}

bool MplsPceStdby::Statistics::has_operation() const
{
    for (auto const & leaf : average_in_queue_depth.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : maximum_in_queue_depth.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(average_in_queue_depth.yfilter)
	|| ydk::is_set(current_file_descriptors.yfilter)
	|| ydk::is_set(current_pceq_length.yfilter)
	|| ydk::is_set(current_teq_length.yfilter)
	|| ydk::is_set(max_file_descriptors.yfilter)
	|| ydk::is_set(max_pceq_length.yfilter)
	|| ydk::is_set(max_teq_length.yfilter)
	|| ydk::is_set(maximum_in_queue_depth.yfilter)
	|| ydk::is_set(neighbors.yfilter)
	|| ydk::is_set(pce_req_pending.yfilter)
	|| ydk::is_set(pce_req_timed_out.yfilter)
	|| ydk::is_set(pce_req_total.yfilter)
	|| ydk::is_set(tunnels.yfilter)
	|| (igp_statistics !=  nullptr && igp_statistics->has_operation());
}

std::string MplsPceStdby::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_file_descriptors.is_set || is_set(current_file_descriptors.yfilter)) leaf_name_data.push_back(current_file_descriptors.get_name_leafdata());
    if (current_pceq_length.is_set || is_set(current_pceq_length.yfilter)) leaf_name_data.push_back(current_pceq_length.get_name_leafdata());
    if (current_teq_length.is_set || is_set(current_teq_length.yfilter)) leaf_name_data.push_back(current_teq_length.get_name_leafdata());
    if (max_file_descriptors.is_set || is_set(max_file_descriptors.yfilter)) leaf_name_data.push_back(max_file_descriptors.get_name_leafdata());
    if (max_pceq_length.is_set || is_set(max_pceq_length.yfilter)) leaf_name_data.push_back(max_pceq_length.get_name_leafdata());
    if (max_teq_length.is_set || is_set(max_teq_length.yfilter)) leaf_name_data.push_back(max_teq_length.get_name_leafdata());
    if (neighbors.is_set || is_set(neighbors.yfilter)) leaf_name_data.push_back(neighbors.get_name_leafdata());
    if (pce_req_pending.is_set || is_set(pce_req_pending.yfilter)) leaf_name_data.push_back(pce_req_pending.get_name_leafdata());
    if (pce_req_timed_out.is_set || is_set(pce_req_timed_out.yfilter)) leaf_name_data.push_back(pce_req_timed_out.get_name_leafdata());
    if (pce_req_total.is_set || is_set(pce_req_total.yfilter)) leaf_name_data.push_back(pce_req_total.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.yfilter)) leaf_name_data.push_back(tunnels.get_name_leafdata());

    auto average_in_queue_depth_name_datas = average_in_queue_depth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), average_in_queue_depth_name_datas.begin(), average_in_queue_depth_name_datas.end());
    auto maximum_in_queue_depth_name_datas = maximum_in_queue_depth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), maximum_in_queue_depth_name_datas.begin(), maximum_in_queue_depth_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-statistics")
    {
        if(igp_statistics == nullptr)
        {
            igp_statistics = std::make_shared<MplsPceStdby::Statistics::IgpStatistics>();
        }
        return igp_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp_statistics != nullptr)
    {
        children["igp-statistics"] = igp_statistics;
    }

    return children;
}

void MplsPceStdby::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-in-queue-depth")
    {
        average_in_queue_depth.append(value);
    }
    if(value_path == "current-file-descriptors")
    {
        current_file_descriptors = value;
        current_file_descriptors.value_namespace = name_space;
        current_file_descriptors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-pceq-length")
    {
        current_pceq_length = value;
        current_pceq_length.value_namespace = name_space;
        current_pceq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-teq-length")
    {
        current_teq_length = value;
        current_teq_length.value_namespace = name_space;
        current_teq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-file-descriptors")
    {
        max_file_descriptors = value;
        max_file_descriptors.value_namespace = name_space;
        max_file_descriptors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pceq-length")
    {
        max_pceq_length = value;
        max_pceq_length.value_namespace = name_space;
        max_pceq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-teq-length")
    {
        max_teq_length = value;
        max_teq_length.value_namespace = name_space;
        max_teq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-in-queue-depth")
    {
        maximum_in_queue_depth.append(value);
    }
    if(value_path == "neighbors")
    {
        neighbors = value;
        neighbors.value_namespace = name_space;
        neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-pending")
    {
        pce_req_pending = value;
        pce_req_pending.value_namespace = name_space;
        pce_req_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-timed-out")
    {
        pce_req_timed_out = value;
        pce_req_timed_out.value_namespace = name_space;
        pce_req_timed_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-total")
    {
        pce_req_total = value;
        pce_req_total.value_namespace = name_space;
        pce_req_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
        tunnels.value_namespace = name_space;
        tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-in-queue-depth")
    {
        average_in_queue_depth.yfilter = yfilter;
    }
    if(value_path == "current-file-descriptors")
    {
        current_file_descriptors.yfilter = yfilter;
    }
    if(value_path == "current-pceq-length")
    {
        current_pceq_length.yfilter = yfilter;
    }
    if(value_path == "current-teq-length")
    {
        current_teq_length.yfilter = yfilter;
    }
    if(value_path == "max-file-descriptors")
    {
        max_file_descriptors.yfilter = yfilter;
    }
    if(value_path == "max-pceq-length")
    {
        max_pceq_length.yfilter = yfilter;
    }
    if(value_path == "max-teq-length")
    {
        max_teq_length.yfilter = yfilter;
    }
    if(value_path == "maximum-in-queue-depth")
    {
        maximum_in_queue_depth.yfilter = yfilter;
    }
    if(value_path == "neighbors")
    {
        neighbors.yfilter = yfilter;
    }
    if(value_path == "pce-req-pending")
    {
        pce_req_pending.yfilter = yfilter;
    }
    if(value_path == "pce-req-timed-out")
    {
        pce_req_timed_out.yfilter = yfilter;
    }
    if(value_path == "pce-req-total")
    {
        pce_req_total.yfilter = yfilter;
    }
    if(value_path == "tunnels")
    {
        tunnels.yfilter = yfilter;
    }
}

bool MplsPceStdby::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-statistics" || name == "average-in-queue-depth" || name == "current-file-descriptors" || name == "current-pceq-length" || name == "current-teq-length" || name == "max-file-descriptors" || name == "max-pceq-length" || name == "max-teq-length" || name == "maximum-in-queue-depth" || name == "neighbors" || name == "pce-req-pending" || name == "pce-req-timed-out" || name == "pce-req-total" || name == "tunnels")
        return true;
    return false;
}

MplsPceStdby::Statistics::IgpStatistics::IgpStatistics()
    :
    abr_lookup_avg{YType::uint64, "abr-lookup-avg"},
    abr_lookup_complete{YType::uint64, "abr-lookup-complete"},
    abr_lookup_max{YType::uint64, "abr-lookup-max"},
    abr_lookup_min{YType::uint64, "abr-lookup-min"},
    abr_lookup_timeout{YType::uint64, "abr-lookup-timeout"}
{

    yang_name = "igp-statistics"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Statistics::IgpStatistics::~IgpStatistics()
{
}

bool MplsPceStdby::Statistics::IgpStatistics::has_data() const
{
    return abr_lookup_avg.is_set
	|| abr_lookup_complete.is_set
	|| abr_lookup_max.is_set
	|| abr_lookup_min.is_set
	|| abr_lookup_timeout.is_set;
}

bool MplsPceStdby::Statistics::IgpStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(abr_lookup_avg.yfilter)
	|| ydk::is_set(abr_lookup_complete.yfilter)
	|| ydk::is_set(abr_lookup_max.yfilter)
	|| ydk::is_set(abr_lookup_min.yfilter)
	|| ydk::is_set(abr_lookup_timeout.yfilter);
}

std::string MplsPceStdby::Statistics::IgpStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Statistics::IgpStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Statistics::IgpStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abr_lookup_avg.is_set || is_set(abr_lookup_avg.yfilter)) leaf_name_data.push_back(abr_lookup_avg.get_name_leafdata());
    if (abr_lookup_complete.is_set || is_set(abr_lookup_complete.yfilter)) leaf_name_data.push_back(abr_lookup_complete.get_name_leafdata());
    if (abr_lookup_max.is_set || is_set(abr_lookup_max.yfilter)) leaf_name_data.push_back(abr_lookup_max.get_name_leafdata());
    if (abr_lookup_min.is_set || is_set(abr_lookup_min.yfilter)) leaf_name_data.push_back(abr_lookup_min.get_name_leafdata());
    if (abr_lookup_timeout.is_set || is_set(abr_lookup_timeout.yfilter)) leaf_name_data.push_back(abr_lookup_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Statistics::IgpStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Statistics::IgpStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Statistics::IgpStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abr-lookup-avg")
    {
        abr_lookup_avg = value;
        abr_lookup_avg.value_namespace = name_space;
        abr_lookup_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-complete")
    {
        abr_lookup_complete = value;
        abr_lookup_complete.value_namespace = name_space;
        abr_lookup_complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-max")
    {
        abr_lookup_max = value;
        abr_lookup_max.value_namespace = name_space;
        abr_lookup_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-min")
    {
        abr_lookup_min = value;
        abr_lookup_min.value_namespace = name_space;
        abr_lookup_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-timeout")
    {
        abr_lookup_timeout = value;
        abr_lookup_timeout.value_namespace = name_space;
        abr_lookup_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Statistics::IgpStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abr-lookup-avg")
    {
        abr_lookup_avg.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-complete")
    {
        abr_lookup_complete.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-max")
    {
        abr_lookup_max.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-min")
    {
        abr_lookup_min.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-timeout")
    {
        abr_lookup_timeout.yfilter = yfilter;
    }
}

bool MplsPceStdby::Statistics::IgpStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abr-lookup-avg" || name == "abr-lookup-complete" || name == "abr-lookup-max" || name == "abr-lookup-min" || name == "abr-lookup-timeout")
        return true;
    return false;
}

MplsPceStdby::Topology::Topology()
    :
    global(std::make_shared<MplsPceStdby::Topology::Global>())
{
    global->parent = this;

    yang_name = "topology"; yang_parent_name = "mpls-pce-stdby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Topology::~Topology()
{
}

bool MplsPceStdby::Topology::has_data() const
{
    return (global !=  nullptr && global->has_data());
}

bool MplsPceStdby::Topology::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string MplsPceStdby::Topology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsPceStdby::Topology::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void MplsPceStdby::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPceStdby::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsPceStdby::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

MplsPceStdby::Topology::Global::Global()
{

    yang_name = "global"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Topology::Global::~Global()
{
}

bool MplsPceStdby::Topology::Global::has_data() const
{
    for (std::size_t index=0; index<nodes.size(); index++)
    {
        if(nodes[index]->has_data())
            return true;
    }
    return false;
}

bool MplsPceStdby::Topology::Global::has_operation() const
{
    for (std::size_t index=0; index<nodes.size(); index++)
    {
        if(nodes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsPceStdby::Topology::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Topology::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Topology::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Topology::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        for(auto const & c : nodes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPceStdby::Topology::Global::Nodes>();
        c->parent = this;
        nodes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Topology::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nodes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsPceStdby::Topology::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPceStdby::Topology::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsPceStdby::Topology::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

MplsPceStdby::Topology::Global::Nodes::Nodes()
    :
    igp_area_format{YType::enumeration, "igp-area-format"},
    igp_area_id{YType::uint32, "igp-area-id"},
    is_pce_border_node{YType::boolean, "is-pce-border-node"},
    node_id{YType::str, "node-id"},
    pce_cost{YType::uint32, "pce-cost"},
    router_id{YType::str, "router-id"}
{

    yang_name = "nodes"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Topology::Global::Nodes::~Nodes()
{
}

bool MplsPceStdby::Topology::Global::Nodes::has_data() const
{
    return igp_area_format.is_set
	|| igp_area_id.is_set
	|| is_pce_border_node.is_set
	|| node_id.is_set
	|| pce_cost.is_set
	|| router_id.is_set;
}

bool MplsPceStdby::Topology::Global::Nodes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_area_format.yfilter)
	|| ydk::is_set(igp_area_id.yfilter)
	|| ydk::is_set(is_pce_border_node.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(pce_cost.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string MplsPceStdby::Topology::Global::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/topology/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Topology::Global::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Topology::Global::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area_format.is_set || is_set(igp_area_format.yfilter)) leaf_name_data.push_back(igp_area_format.get_name_leafdata());
    if (igp_area_id.is_set || is_set(igp_area_id.yfilter)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());
    if (is_pce_border_node.is_set || is_set(is_pce_border_node.yfilter)) leaf_name_data.push_back(is_pce_border_node.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (pce_cost.is_set || is_set(pce_cost.yfilter)) leaf_name_data.push_back(pce_cost.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Topology::Global::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Topology::Global::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Topology::Global::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-area-format")
    {
        igp_area_format = value;
        igp_area_format.value_namespace = name_space;
        igp_area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
        igp_area_id.value_namespace = name_space;
        igp_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-border-node")
    {
        is_pce_border_node = value;
        is_pce_border_node.value_namespace = name_space;
        is_pce_border_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-cost")
    {
        pce_cost = value;
        pce_cost.value_namespace = name_space;
        pce_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Topology::Global::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-area-format")
    {
        igp_area_format.yfilter = yfilter;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id.yfilter = yfilter;
    }
    if(value_path == "is-pce-border-node")
    {
        is_pce_border_node.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "pce-cost")
    {
        pce_cost.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool MplsPceStdby::Topology::Global::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-area-format" || name == "igp-area-id" || name == "is-pce-border-node" || name == "node-id" || name == "pce-cost" || name == "router-id")
        return true;
    return false;
}

MplsPceStdby::Tunnels::Tunnels()
    :
    admin_weight{YType::uint32, "admin-weight"},
    configured_pce_address{YType::str, "configured-pce-address"},
    curr_path_option_index{YType::uint32, "curr-path-option-index"},
    destination_address{YType::str, "destination-address"},
    hop_count{YType::uint32, "hop-count"},
    is_curr_path_option_pce{YType::boolean, "is-curr-path-option-pce"},
    path_state{YType::enumeration, "path-state"},
    sender_pce_address{YType::str, "sender-pce-address"},
    source_address{YType::str, "source-address"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{

    yang_name = "tunnels"; yang_parent_name = "mpls-pce-stdby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Tunnels::~Tunnels()
{
}

bool MplsPceStdby::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return admin_weight.is_set
	|| configured_pce_address.is_set
	|| curr_path_option_index.is_set
	|| destination_address.is_set
	|| hop_count.is_set
	|| is_curr_path_option_pce.is_set
	|| path_state.is_set
	|| sender_pce_address.is_set
	|| source_address.is_set
	|| tunnel_state.is_set;
}

bool MplsPceStdby::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(configured_pce_address.yfilter)
	|| ydk::is_set(curr_path_option_index.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(hop_count.yfilter)
	|| ydk::is_set(is_curr_path_option_pce.yfilter)
	|| ydk::is_set(path_state.yfilter)
	|| ydk::is_set(sender_pce_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_state.yfilter);
}

std::string MplsPceStdby::Tunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (configured_pce_address.is_set || is_set(configured_pce_address.yfilter)) leaf_name_data.push_back(configured_pce_address.get_name_leafdata());
    if (curr_path_option_index.is_set || is_set(curr_path_option_index.yfilter)) leaf_name_data.push_back(curr_path_option_index.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.yfilter)) leaf_name_data.push_back(hop_count.get_name_leafdata());
    if (is_curr_path_option_pce.is_set || is_set(is_curr_path_option_pce.yfilter)) leaf_name_data.push_back(is_curr_path_option_pce.get_name_leafdata());
    if (path_state.is_set || is_set(path_state.yfilter)) leaf_name_data.push_back(path_state.get_name_leafdata());
    if (sender_pce_address.is_set || is_set(sender_pce_address.yfilter)) leaf_name_data.push_back(sender_pce_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsPceStdby::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsPceStdby::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address = value;
        configured_pce_address.value_namespace = name_space;
        configured_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index = value;
        curr_path_option_index.value_namespace = name_space;
        curr_path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
        hop_count.value_namespace = name_space;
        hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce = value;
        is_curr_path_option_pce.value_namespace = name_space;
        is_curr_path_option_pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-state")
    {
        path_state = value;
        path_state.value_namespace = name_space;
        path_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address = value;
        sender_pce_address.value_namespace = name_space;
        sender_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address.yfilter = yfilter;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "hop-count")
    {
        hop_count.yfilter = yfilter;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce.yfilter = yfilter;
    }
    if(value_path == "path-state")
    {
        path_state.yfilter = yfilter;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
}

bool MplsPceStdby::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel" || name == "admin-weight" || name == "configured-pce-address" || name == "curr-path-option-index" || name == "destination-address" || name == "hop-count" || name == "is-curr-path-option-pce" || name == "path-state" || name == "sender-pce-address" || name == "source-address" || name == "tunnel-state")
        return true;
    return false;
}

MplsPceStdby::Tunnels::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    admin_weight{YType::uint32, "admin-weight"},
    configured_pce_address{YType::str, "configured-pce-address"},
    curr_path_option_index{YType::uint32, "curr-path-option-index"},
    destination_address{YType::str, "destination-address"},
    hop_count{YType::uint32, "hop-count"},
    is_curr_path_option_pce{YType::boolean, "is-curr-path-option-pce"},
    path_state{YType::enumeration, "path-state"},
    sender_pce_address{YType::str, "sender-pce-address"},
    source_address{YType::str, "source-address"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Tunnels::Tunnel::~Tunnel()
{
}

bool MplsPceStdby::Tunnels::Tunnel::has_data() const
{
    return tunnel_name.is_set
	|| admin_weight.is_set
	|| configured_pce_address.is_set
	|| curr_path_option_index.is_set
	|| destination_address.is_set
	|| hop_count.is_set
	|| is_curr_path_option_pce.is_set
	|| path_state.is_set
	|| sender_pce_address.is_set
	|| source_address.is_set
	|| tunnel_state.is_set;
}

bool MplsPceStdby::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(configured_pce_address.yfilter)
	|| ydk::is_set(curr_path_option_index.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(hop_count.yfilter)
	|| ydk::is_set(is_curr_path_option_pce.yfilter)
	|| ydk::is_set(path_state.yfilter)
	|| ydk::is_set(sender_pce_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_state.yfilter);
}

std::string MplsPceStdby::Tunnels::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (configured_pce_address.is_set || is_set(configured_pce_address.yfilter)) leaf_name_data.push_back(configured_pce_address.get_name_leafdata());
    if (curr_path_option_index.is_set || is_set(curr_path_option_index.yfilter)) leaf_name_data.push_back(curr_path_option_index.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.yfilter)) leaf_name_data.push_back(hop_count.get_name_leafdata());
    if (is_curr_path_option_pce.is_set || is_set(is_curr_path_option_pce.yfilter)) leaf_name_data.push_back(is_curr_path_option_pce.get_name_leafdata());
    if (path_state.is_set || is_set(path_state.yfilter)) leaf_name_data.push_back(path_state.get_name_leafdata());
    if (sender_pce_address.is_set || is_set(sender_pce_address.yfilter)) leaf_name_data.push_back(sender_pce_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsPceStdby::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address = value;
        configured_pce_address.value_namespace = name_space;
        configured_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index = value;
        curr_path_option_index.value_namespace = name_space;
        curr_path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
        hop_count.value_namespace = name_space;
        hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce = value;
        is_curr_path_option_pce.value_namespace = name_space;
        is_curr_path_option_pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-state")
    {
        path_state = value;
        path_state.value_namespace = name_space;
        path_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address = value;
        sender_pce_address.value_namespace = name_space;
        sender_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address.yfilter = yfilter;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "hop-count")
    {
        hop_count.yfilter = yfilter;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce.yfilter = yfilter;
    }
    if(value_path == "path-state")
    {
        path_state.yfilter = yfilter;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
}

bool MplsPceStdby::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-name" || name == "admin-weight" || name == "configured-pce-address" || name == "curr-path-option-index" || name == "destination-address" || name == "hop-count" || name == "is-curr-path-option-pce" || name == "path-state" || name == "sender-pce-address" || name == "source-address" || name == "tunnel-state")
        return true;
    return false;
}

MplsTe::MplsTe()
    :
    affinity_map(std::make_shared<MplsTe::AffinityMap>())
	,announce_tunnels_info(std::make_shared<MplsTe::AnnounceTunnelsInfo>())
	,attribute_sets(std::make_shared<MplsTe::AttributeSets>())
	,auto_route_destination_entries(std::make_shared<MplsTe::AutoRouteDestinationEntries>())
	,auto_tunnel(std::make_shared<MplsTe::AutoTunnel>())
	,auto_tunnel_services(std::make_shared<MplsTe::AutoTunnelServices>())
	,bfd(std::make_shared<MplsTe::Bfd>())
	,collaborator_timers(std::make_shared<MplsTe::CollaboratorTimers>())
	,diff_serv_te_classes(std::make_shared<MplsTe::DiffServTeClasses>())
	,fast_reroute(std::make_shared<MplsTe::FastReroute>())
	,fib_next_hop_label_routes(std::make_shared<MplsTe::FibNextHopLabelRoutes>())
	,fib_next_hop_routes(std::make_shared<MplsTe::FibNextHopRoutes>())
	,forwarding_adjacency_destinations(std::make_shared<MplsTe::ForwardingAdjacencyDestinations>())
	,hardware_out_of_resources(std::make_shared<MplsTe::HardwareOutOfResources>())
	,igp_area_briefs(std::make_shared<MplsTe::IgpAreaBriefs>())
	,igp_areas(std::make_shared<MplsTe::IgpAreas>())
	,issu(std::make_shared<MplsTe::Issu>())
	,lsp_out_of_resources(std::make_shared<MplsTe::LspOutOfResources>())
	,maximum_tunnels(std::make_shared<MplsTe::MaximumTunnels>())
	,next_hop_routes(std::make_shared<MplsTe::NextHopRoutes>())
	,nsr(std::make_shared<MplsTe::Nsr>())
	,open_config(std::make_shared<MplsTe::OpenConfig>())
	,p2mp(std::make_shared<MplsTe::P2Mp>())
	,p2p_p2mp_tunnel(std::make_shared<MplsTe::P2PP2MpTunnel>())
	,path_protection(std::make_shared<MplsTe::PathProtection>())
	,segment_routing(std::make_shared<MplsTe::SegmentRouting>())
	,signalling_counters(std::make_shared<MplsTe::SignallingCounters>())
	,soft_preemption(std::make_shared<MplsTe::SoftPreemption>())
	,te_mib(std::make_shared<MplsTe::TeMib>())
	,topology(std::make_shared<MplsTe::Topology>())
	,topology_briefs(std::make_shared<MplsTe::TopologyBriefs>())
	,topology_nodes(std::make_shared<MplsTe::TopologyNodes>())
	,tunnels(std::make_shared<MplsTe::Tunnels>())
	,wrap_protection(std::make_shared<MplsTe::WrapProtection>())
{
    affinity_map->parent = this;
    announce_tunnels_info->parent = this;
    attribute_sets->parent = this;
    auto_route_destination_entries->parent = this;
    auto_tunnel->parent = this;
    auto_tunnel_services->parent = this;
    bfd->parent = this;
    collaborator_timers->parent = this;
    diff_serv_te_classes->parent = this;
    fast_reroute->parent = this;
    fib_next_hop_label_routes->parent = this;
    fib_next_hop_routes->parent = this;
    forwarding_adjacency_destinations->parent = this;
    hardware_out_of_resources->parent = this;
    igp_area_briefs->parent = this;
    igp_areas->parent = this;
    issu->parent = this;
    lsp_out_of_resources->parent = this;
    maximum_tunnels->parent = this;
    next_hop_routes->parent = this;
    nsr->parent = this;
    open_config->parent = this;
    p2mp->parent = this;
    p2p_p2mp_tunnel->parent = this;
    path_protection->parent = this;
    segment_routing->parent = this;
    signalling_counters->parent = this;
    soft_preemption->parent = this;
    te_mib->parent = this;
    topology->parent = this;
    topology_briefs->parent = this;
    topology_nodes->parent = this;
    tunnels->parent = this;
    wrap_protection->parent = this;

    yang_name = "mpls-te"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper"; is_top_level_class = true; has_list_ancestor = false;
}

MplsTe::~MplsTe()
{
}

bool MplsTe::has_data() const
{
    return (affinity_map !=  nullptr && affinity_map->has_data())
	|| (announce_tunnels_info !=  nullptr && announce_tunnels_info->has_data())
	|| (attribute_sets !=  nullptr && attribute_sets->has_data())
	|| (auto_route_destination_entries !=  nullptr && auto_route_destination_entries->has_data())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_data())
	|| (auto_tunnel_services !=  nullptr && auto_tunnel_services->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (collaborator_timers !=  nullptr && collaborator_timers->has_data())
	|| (diff_serv_te_classes !=  nullptr && diff_serv_te_classes->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (fib_next_hop_label_routes !=  nullptr && fib_next_hop_label_routes->has_data())
	|| (fib_next_hop_routes !=  nullptr && fib_next_hop_routes->has_data())
	|| (forwarding_adjacency_destinations !=  nullptr && forwarding_adjacency_destinations->has_data())
	|| (hardware_out_of_resources !=  nullptr && hardware_out_of_resources->has_data())
	|| (igp_area_briefs !=  nullptr && igp_area_briefs->has_data())
	|| (igp_areas !=  nullptr && igp_areas->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (lsp_out_of_resources !=  nullptr && lsp_out_of_resources->has_data())
	|| (maximum_tunnels !=  nullptr && maximum_tunnels->has_data())
	|| (next_hop_routes !=  nullptr && next_hop_routes->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (open_config !=  nullptr && open_config->has_data())
	|| (p2mp !=  nullptr && p2mp->has_data())
	|| (p2p_p2mp_tunnel !=  nullptr && p2p_p2mp_tunnel->has_data())
	|| (path_protection !=  nullptr && path_protection->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (signalling_counters !=  nullptr && signalling_counters->has_data())
	|| (soft_preemption !=  nullptr && soft_preemption->has_data())
	|| (te_mib !=  nullptr && te_mib->has_data())
	|| (topology !=  nullptr && topology->has_data())
	|| (topology_briefs !=  nullptr && topology_briefs->has_data())
	|| (topology_nodes !=  nullptr && topology_nodes->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data())
	|| (wrap_protection !=  nullptr && wrap_protection->has_data());
}

bool MplsTe::has_operation() const
{
    return is_set(yfilter)
	|| (affinity_map !=  nullptr && affinity_map->has_operation())
	|| (announce_tunnels_info !=  nullptr && announce_tunnels_info->has_operation())
	|| (attribute_sets !=  nullptr && attribute_sets->has_operation())
	|| (auto_route_destination_entries !=  nullptr && auto_route_destination_entries->has_operation())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_operation())
	|| (auto_tunnel_services !=  nullptr && auto_tunnel_services->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (collaborator_timers !=  nullptr && collaborator_timers->has_operation())
	|| (diff_serv_te_classes !=  nullptr && diff_serv_te_classes->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (fib_next_hop_label_routes !=  nullptr && fib_next_hop_label_routes->has_operation())
	|| (fib_next_hop_routes !=  nullptr && fib_next_hop_routes->has_operation())
	|| (forwarding_adjacency_destinations !=  nullptr && forwarding_adjacency_destinations->has_operation())
	|| (hardware_out_of_resources !=  nullptr && hardware_out_of_resources->has_operation())
	|| (igp_area_briefs !=  nullptr && igp_area_briefs->has_operation())
	|| (igp_areas !=  nullptr && igp_areas->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (lsp_out_of_resources !=  nullptr && lsp_out_of_resources->has_operation())
	|| (maximum_tunnels !=  nullptr && maximum_tunnels->has_operation())
	|| (next_hop_routes !=  nullptr && next_hop_routes->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (open_config !=  nullptr && open_config->has_operation())
	|| (p2mp !=  nullptr && p2mp->has_operation())
	|| (p2p_p2mp_tunnel !=  nullptr && p2p_p2mp_tunnel->has_operation())
	|| (path_protection !=  nullptr && path_protection->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (signalling_counters !=  nullptr && signalling_counters->has_operation())
	|| (soft_preemption !=  nullptr && soft_preemption->has_operation())
	|| (te_mib !=  nullptr && te_mib->has_operation())
	|| (topology !=  nullptr && topology->has_operation())
	|| (topology_briefs !=  nullptr && topology_briefs->has_operation())
	|| (topology_nodes !=  nullptr && topology_nodes->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation())
	|| (wrap_protection !=  nullptr && wrap_protection->has_operation());
}

std::string MplsTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-map")
    {
        if(affinity_map == nullptr)
        {
            affinity_map = std::make_shared<MplsTe::AffinityMap>();
        }
        return affinity_map;
    }

    if(child_yang_name == "announce-tunnels-info")
    {
        if(announce_tunnels_info == nullptr)
        {
            announce_tunnels_info = std::make_shared<MplsTe::AnnounceTunnelsInfo>();
        }
        return announce_tunnels_info;
    }

    if(child_yang_name == "attribute-sets")
    {
        if(attribute_sets == nullptr)
        {
            attribute_sets = std::make_shared<MplsTe::AttributeSets>();
        }
        return attribute_sets;
    }

    if(child_yang_name == "auto-route-destination-entries")
    {
        if(auto_route_destination_entries == nullptr)
        {
            auto_route_destination_entries = std::make_shared<MplsTe::AutoRouteDestinationEntries>();
        }
        return auto_route_destination_entries;
    }

    if(child_yang_name == "auto-tunnel")
    {
        if(auto_tunnel == nullptr)
        {
            auto_tunnel = std::make_shared<MplsTe::AutoTunnel>();
        }
        return auto_tunnel;
    }

    if(child_yang_name == "auto-tunnel-services")
    {
        if(auto_tunnel_services == nullptr)
        {
            auto_tunnel_services = std::make_shared<MplsTe::AutoTunnelServices>();
        }
        return auto_tunnel_services;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<MplsTe::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "collaborator-timers")
    {
        if(collaborator_timers == nullptr)
        {
            collaborator_timers = std::make_shared<MplsTe::CollaboratorTimers>();
        }
        return collaborator_timers;
    }

    if(child_yang_name == "diff-serv-te-classes")
    {
        if(diff_serv_te_classes == nullptr)
        {
            diff_serv_te_classes = std::make_shared<MplsTe::DiffServTeClasses>();
        }
        return diff_serv_te_classes;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<MplsTe::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "fib-next-hop-label-routes")
    {
        if(fib_next_hop_label_routes == nullptr)
        {
            fib_next_hop_label_routes = std::make_shared<MplsTe::FibNextHopLabelRoutes>();
        }
        return fib_next_hop_label_routes;
    }

    if(child_yang_name == "fib-next-hop-routes")
    {
        if(fib_next_hop_routes == nullptr)
        {
            fib_next_hop_routes = std::make_shared<MplsTe::FibNextHopRoutes>();
        }
        return fib_next_hop_routes;
    }

    if(child_yang_name == "forwarding-adjacency-destinations")
    {
        if(forwarding_adjacency_destinations == nullptr)
        {
            forwarding_adjacency_destinations = std::make_shared<MplsTe::ForwardingAdjacencyDestinations>();
        }
        return forwarding_adjacency_destinations;
    }

    if(child_yang_name == "hardware-out-of-resources")
    {
        if(hardware_out_of_resources == nullptr)
        {
            hardware_out_of_resources = std::make_shared<MplsTe::HardwareOutOfResources>();
        }
        return hardware_out_of_resources;
    }

    if(child_yang_name == "igp-area-briefs")
    {
        if(igp_area_briefs == nullptr)
        {
            igp_area_briefs = std::make_shared<MplsTe::IgpAreaBriefs>();
        }
        return igp_area_briefs;
    }

    if(child_yang_name == "igp-areas")
    {
        if(igp_areas == nullptr)
        {
            igp_areas = std::make_shared<MplsTe::IgpAreas>();
        }
        return igp_areas;
    }

    if(child_yang_name == "issu")
    {
        if(issu == nullptr)
        {
            issu = std::make_shared<MplsTe::Issu>();
        }
        return issu;
    }

    if(child_yang_name == "lsp-out-of-resources")
    {
        if(lsp_out_of_resources == nullptr)
        {
            lsp_out_of_resources = std::make_shared<MplsTe::LspOutOfResources>();
        }
        return lsp_out_of_resources;
    }

    if(child_yang_name == "maximum-tunnels")
    {
        if(maximum_tunnels == nullptr)
        {
            maximum_tunnels = std::make_shared<MplsTe::MaximumTunnels>();
        }
        return maximum_tunnels;
    }

    if(child_yang_name == "next-hop-routes")
    {
        if(next_hop_routes == nullptr)
        {
            next_hop_routes = std::make_shared<MplsTe::NextHopRoutes>();
        }
        return next_hop_routes;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<MplsTe::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "open-config")
    {
        if(open_config == nullptr)
        {
            open_config = std::make_shared<MplsTe::OpenConfig>();
        }
        return open_config;
    }

    if(child_yang_name == "p2mp")
    {
        if(p2mp == nullptr)
        {
            p2mp = std::make_shared<MplsTe::P2Mp>();
        }
        return p2mp;
    }

    if(child_yang_name == "p2p-p2mp-tunnel")
    {
        if(p2p_p2mp_tunnel == nullptr)
        {
            p2p_p2mp_tunnel = std::make_shared<MplsTe::P2PP2MpTunnel>();
        }
        return p2p_p2mp_tunnel;
    }

    if(child_yang_name == "path-protection")
    {
        if(path_protection == nullptr)
        {
            path_protection = std::make_shared<MplsTe::PathProtection>();
        }
        return path_protection;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<MplsTe::SegmentRouting>();
        }
        return segment_routing;
    }

    if(child_yang_name == "signalling-counters")
    {
        if(signalling_counters == nullptr)
        {
            signalling_counters = std::make_shared<MplsTe::SignallingCounters>();
        }
        return signalling_counters;
    }

    if(child_yang_name == "soft-preemption")
    {
        if(soft_preemption == nullptr)
        {
            soft_preemption = std::make_shared<MplsTe::SoftPreemption>();
        }
        return soft_preemption;
    }

    if(child_yang_name == "te-mib")
    {
        if(te_mib == nullptr)
        {
            te_mib = std::make_shared<MplsTe::TeMib>();
        }
        return te_mib;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<MplsTe::Topology>();
        }
        return topology;
    }

    if(child_yang_name == "topology-briefs")
    {
        if(topology_briefs == nullptr)
        {
            topology_briefs = std::make_shared<MplsTe::TopologyBriefs>();
        }
        return topology_briefs;
    }

    if(child_yang_name == "topology-nodes")
    {
        if(topology_nodes == nullptr)
        {
            topology_nodes = std::make_shared<MplsTe::TopologyNodes>();
        }
        return topology_nodes;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<MplsTe::Tunnels>();
        }
        return tunnels;
    }

    if(child_yang_name == "wrap-protection")
    {
        if(wrap_protection == nullptr)
        {
            wrap_protection = std::make_shared<MplsTe::WrapProtection>();
        }
        return wrap_protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity_map != nullptr)
    {
        children["affinity-map"] = affinity_map;
    }

    if(announce_tunnels_info != nullptr)
    {
        children["announce-tunnels-info"] = announce_tunnels_info;
    }

    if(attribute_sets != nullptr)
    {
        children["attribute-sets"] = attribute_sets;
    }

    if(auto_route_destination_entries != nullptr)
    {
        children["auto-route-destination-entries"] = auto_route_destination_entries;
    }

    if(auto_tunnel != nullptr)
    {
        children["auto-tunnel"] = auto_tunnel;
    }

    if(auto_tunnel_services != nullptr)
    {
        children["auto-tunnel-services"] = auto_tunnel_services;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(collaborator_timers != nullptr)
    {
        children["collaborator-timers"] = collaborator_timers;
    }

    if(diff_serv_te_classes != nullptr)
    {
        children["diff-serv-te-classes"] = diff_serv_te_classes;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(fib_next_hop_label_routes != nullptr)
    {
        children["fib-next-hop-label-routes"] = fib_next_hop_label_routes;
    }

    if(fib_next_hop_routes != nullptr)
    {
        children["fib-next-hop-routes"] = fib_next_hop_routes;
    }

    if(forwarding_adjacency_destinations != nullptr)
    {
        children["forwarding-adjacency-destinations"] = forwarding_adjacency_destinations;
    }

    if(hardware_out_of_resources != nullptr)
    {
        children["hardware-out-of-resources"] = hardware_out_of_resources;
    }

    if(igp_area_briefs != nullptr)
    {
        children["igp-area-briefs"] = igp_area_briefs;
    }

    if(igp_areas != nullptr)
    {
        children["igp-areas"] = igp_areas;
    }

    if(issu != nullptr)
    {
        children["issu"] = issu;
    }

    if(lsp_out_of_resources != nullptr)
    {
        children["lsp-out-of-resources"] = lsp_out_of_resources;
    }

    if(maximum_tunnels != nullptr)
    {
        children["maximum-tunnels"] = maximum_tunnels;
    }

    if(next_hop_routes != nullptr)
    {
        children["next-hop-routes"] = next_hop_routes;
    }

    if(nsr != nullptr)
    {
        children["nsr"] = nsr;
    }

    if(open_config != nullptr)
    {
        children["open-config"] = open_config;
    }

    if(p2mp != nullptr)
    {
        children["p2mp"] = p2mp;
    }

    if(p2p_p2mp_tunnel != nullptr)
    {
        children["p2p-p2mp-tunnel"] = p2p_p2mp_tunnel;
    }

    if(path_protection != nullptr)
    {
        children["path-protection"] = path_protection;
    }

    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    if(signalling_counters != nullptr)
    {
        children["signalling-counters"] = signalling_counters;
    }

    if(soft_preemption != nullptr)
    {
        children["soft-preemption"] = soft_preemption;
    }

    if(te_mib != nullptr)
    {
        children["te-mib"] = te_mib;
    }

    if(topology != nullptr)
    {
        children["topology"] = topology;
    }

    if(topology_briefs != nullptr)
    {
        children["topology-briefs"] = topology_briefs;
    }

    if(topology_nodes != nullptr)
    {
        children["topology-nodes"] = topology_nodes;
    }

    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    if(wrap_protection != nullptr)
    {
        children["wrap-protection"] = wrap_protection;
    }

    return children;
}

void MplsTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(name == "affinity-map" || name == "announce-tunnels-info" || name == "attribute-sets" || name == "auto-route-destination-entries" || name == "auto-tunnel" || name == "auto-tunnel-services" || name == "bfd" || name == "collaborator-timers" || name == "diff-serv-te-classes" || name == "fast-reroute" || name == "fib-next-hop-label-routes" || name == "fib-next-hop-routes" || name == "forwarding-adjacency-destinations" || name == "hardware-out-of-resources" || name == "igp-area-briefs" || name == "igp-areas" || name == "issu" || name == "lsp-out-of-resources" || name == "maximum-tunnels" || name == "next-hop-routes" || name == "nsr" || name == "open-config" || name == "p2mp" || name == "p2p-p2mp-tunnel" || name == "path-protection" || name == "segment-routing" || name == "signalling-counters" || name == "soft-preemption" || name == "te-mib" || name == "topology" || name == "topology-briefs" || name == "topology-nodes" || name == "tunnels" || name == "wrap-protection")
        return true;
    return false;
}

MplsTe::AffinityMap::AffinityMap()
{

    yang_name = "affinity-map"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::AffinityMap::~AffinityMap()
{
}

bool MplsTe::AffinityMap::has_data() const
{
    for (std::size_t index=0; index<affinity_map_array.size(); index++)
    {
        if(affinity_map_array[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AffinityMap::has_operation() const
{
    for (std::size_t index=0; index<affinity_map_array.size(); index++)
    {
        if(affinity_map_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::AffinityMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AffinityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AffinityMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AffinityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-map-array")
    {
        for(auto const & c : affinity_map_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::AffinityMap::AffinityMapArray>();
        c->parent = this;
        affinity_map_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AffinityMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : affinity_map_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::AffinityMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AffinityMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AffinityMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-map-array")
        return true;
    return false;
}

MplsTe::AffinityMap::AffinityMapArray::AffinityMapArray()
    :
    affinity_bit_position{YType::uint8, "affinity-bit-position"},
    affinity_name{YType::str, "affinity-name"},
    affinity_table_id{YType::enumeration, "affinity-table-id"},
    affinity_value{YType::uint32, "affinity-value"}
{

    yang_name = "affinity-map-array"; yang_parent_name = "affinity-map"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::AffinityMap::AffinityMapArray::~AffinityMapArray()
{
}

bool MplsTe::AffinityMap::AffinityMapArray::has_data() const
{
    for (std::size_t index=0; index<affinity_extended_value.size(); index++)
    {
        if(affinity_extended_value[index]->has_data())
            return true;
    }
    return affinity_bit_position.is_set
	|| affinity_name.is_set
	|| affinity_table_id.is_set
	|| affinity_value.is_set;
}

bool MplsTe::AffinityMap::AffinityMapArray::has_operation() const
{
    for (std::size_t index=0; index<affinity_extended_value.size(); index++)
    {
        if(affinity_extended_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bit_position.yfilter)
	|| ydk::is_set(affinity_name.yfilter)
	|| ydk::is_set(affinity_table_id.yfilter)
	|| ydk::is_set(affinity_value.yfilter);
}

std::string MplsTe::AffinityMap::AffinityMapArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/affinity-map/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AffinityMap::AffinityMapArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-map-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AffinityMap::AffinityMapArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bit_position.is_set || is_set(affinity_bit_position.yfilter)) leaf_name_data.push_back(affinity_bit_position.get_name_leafdata());
    if (affinity_name.is_set || is_set(affinity_name.yfilter)) leaf_name_data.push_back(affinity_name.get_name_leafdata());
    if (affinity_table_id.is_set || is_set(affinity_table_id.yfilter)) leaf_name_data.push_back(affinity_table_id.get_name_leafdata());
    if (affinity_value.is_set || is_set(affinity_value.yfilter)) leaf_name_data.push_back(affinity_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AffinityMap::AffinityMapArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-extended-value")
    {
        for(auto const & c : affinity_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue>();
        c->parent = this;
        affinity_extended_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AffinityMap::AffinityMapArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : affinity_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::AffinityMap::AffinityMapArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bit-position")
    {
        affinity_bit_position = value;
        affinity_bit_position.value_namespace = name_space;
        affinity_bit_position.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-name")
    {
        affinity_name = value;
        affinity_name.value_namespace = name_space;
        affinity_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-table-id")
    {
        affinity_table_id = value;
        affinity_table_id.value_namespace = name_space;
        affinity_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-value")
    {
        affinity_value = value;
        affinity_value.value_namespace = name_space;
        affinity_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AffinityMap::AffinityMapArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bit-position")
    {
        affinity_bit_position.yfilter = yfilter;
    }
    if(value_path == "affinity-name")
    {
        affinity_name.yfilter = yfilter;
    }
    if(value_path == "affinity-table-id")
    {
        affinity_table_id.yfilter = yfilter;
    }
    if(value_path == "affinity-value")
    {
        affinity_value.yfilter = yfilter;
    }
}

bool MplsTe::AffinityMap::AffinityMapArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-extended-value" || name == "affinity-bit-position" || name == "affinity-name" || name == "affinity-table-id" || name == "affinity-value")
        return true;
    return false;
}

MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::AffinityExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "affinity-extended-value"; yang_parent_name = "affinity-map-array"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::~AffinityExtendedValue()
{
}

bool MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/affinity-map/affinity-map-array/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}


}
}

