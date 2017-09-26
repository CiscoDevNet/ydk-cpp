
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_cfg_2.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_cfg_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_cfg {

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "area-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_enable.yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.yfilter)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_link != nullptr)
    {
        children["per-link"] = per_link;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
        fast_reroute_enable.value_namespace = name_space;
        fast_reroute_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix" || name == "fast-reroute-enable")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"},
    topology_independent_lfa{YType::boolean, "topology-independent-lfa"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>())
	,remote_lfa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa>())
	,tiebreakers(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;
    remote_lfa->parent = this;
    tiebreakers->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| topology_independent_lfa.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data())
	|| (tiebreakers !=  nullptr && tiebreakers->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| ydk::is_set(topology_independent_lfa.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation())
	|| (tiebreakers !=  nullptr && tiebreakers->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());
    if (topology_independent_lfa.is_set || is_set(topology_independent_lfa.yfilter)) leaf_name_data.push_back(topology_independent_lfa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa>();
        }
        return remote_lfa;
    }

    if(child_yang_name == "tiebreakers")
    {
        if(tiebreakers == nullptr)
        {
            tiebreakers = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers>();
        }
        return tiebreakers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    if(remote_lfa != nullptr)
    {
        children["remote-lfa"] = remote_lfa;
    }

    if(tiebreakers != nullptr)
    {
        children["tiebreakers"] = tiebreakers;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-independent-lfa")
    {
        topology_independent_lfa = value;
        topology_independent_lfa.value_namespace = name_space;
        topology_independent_lfa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
    if(value_path == "topology-independent-lfa")
    {
        topology_independent_lfa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "remote-lfa" || name == "tiebreakers" || name == "fast-reroute-use-candidate-only" || name == "topology-independent-lfa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::RemoteLfa()
    :
    maximum_cost{YType::uint32, "maximum-cost"},
    tunnel{YType::enumeration, "tunnel"}
{

    yang_name = "remote-lfa"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::~RemoteLfa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::has_data() const
{
    return maximum_cost.is_set
	|| tunnel.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_cost.yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cost.is_set || is_set(maximum_cost.yfilter)) leaf_name_data.push_back(maximum_cost.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost = value;
        maximum_cost.value_namespace = name_space;
        maximum_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-cost" || name == "tunnel")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreakers()
{

    yang_name = "tiebreakers"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::~Tiebreakers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::has_data() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::has_operation() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tiebreaker")
    {
        for(auto const & c : tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker>();
        c->parent = this;
        tiebreaker.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tiebreaker)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::Tiebreaker()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{

    yang_name = "tiebreaker"; yang_parent_name = "tiebreakers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::~Tiebreaker()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tiebreaker_type.yfilter)
	|| ydk::is_set(tiebreaker_index.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreaker" <<"[tiebreaker-type='" <<tiebreaker_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.yfilter)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.yfilter)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker-type" || name == "tiebreaker-index")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Security()
    :
    ttl(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl>())
{
    ttl->parent = this;

    yang_name = "security"; yang_parent_name = "area-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::~Security()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::has_data() const
{
    return (ttl !=  nullptr && ttl->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::has_operation() const
{
    return is_set(yfilter)
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl>();
        }
        return ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::Ttl()
    :
    enable{YType::boolean, "enable"},
    hop_count{YType::uint32, "hop-count"}
{

    yang_name = "ttl"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::~Ttl()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::has_data() const
{
    return enable.is_set
	|| hop_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hop_count.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.yfilter)) leaf_name_data.push_back(hop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
        hop_count.value_namespace = name_space;
        hop_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hop-count")
    {
        hop_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "hop-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScopes()
{

    yang_name = "multi-area-interface-scopes"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::~MultiAreaInterfaceScopes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::has_data() const
{
    for (std::size_t index=0; index<multi_area_interface_scope.size(); index++)
    {
        if(multi_area_interface_scope[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::has_operation() const
{
    for (std::size_t index=0; index<multi_area_interface_scope.size(); index++)
    {
        if(multi_area_interface_scope[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area-interface-scopes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multi-area-interface-scope")
    {
        for(auto const & c : multi_area_interface_scope)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope>();
        c->parent = this;
        multi_area_interface_scope.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : multi_area_interface_scope)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-area-interface-scope")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::MultiAreaInterfaceScope()
    :
    interface_name{YType::str, "interface-name"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    hello_interval{YType::uint32, "hello-interval"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    packet_size{YType::uint32, "packet-size"},
    passive{YType::boolean, "passive"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    running{YType::empty, "running"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication>())
	,cost_fallback(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal>())
	,distribute_list(nullptr) // presence node
	,fast_reroute(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute>())
	,neighbors(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors>())
{
    authentication->parent = this;
    cost_fallback->parent = this;
    dead_interval_minimal->parent = this;
    fast_reroute->parent = this;
    neighbors->parent = this;

    yang_name = "multi-area-interface-scope"; yang_parent_name = "multi-area-interface-scopes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::~MultiAreaInterfaceScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::has_data() const
{
    return interface_name.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| hello_interval.is_set
	|| mtu_ignore.is_set
	|| packet_size.is_set
	|| passive.is_set
	|| retransmit_interval.is_set
	|| running.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (cost_fallback !=  nullptr && cost_fallback->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(database_filter.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(packet_size.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (cost_fallback !=  nullptr && cost_fallback->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area-interface-scope" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.yfilter)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.yfilter)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "cost-fallback")
    {
        if(cost_fallback == nullptr)
        {
            cost_fallback = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback>();
        }
        return cost_fallback;
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal == nullptr)
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal>();
        }
        return dead_interval_minimal;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(cost_fallback != nullptr)
    {
        children["cost-fallback"] = cost_fallback;
    }

    if(dead_interval_minimal != nullptr)
    {
        children["dead-interval-minimal"] = dead_interval_minimal;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
        database_filter.value_namespace = name_space;
        database_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
        packet_size.value_namespace = name_space;
        packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "database-filter")
    {
        database_filter.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "packet-size")
    {
        packet_size.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "cost-fallback" || name == "dead-interval-minimal" || name == "distribute-list" || name == "fast-reroute" || name == "neighbors" || name == "interface-name" || name == "cost" || name == "database-filter" || name == "hello-interval" || name == "mtu-ignore" || name == "packet-size" || name == "passive" || name == "retransmit-interval" || name == "running" || name == "transmit-delay")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    type->parent = this;

    yang_name = "authentication"; yang_parent_name = "multi-area-interface-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies == nullptr)
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies>();
        }
        return message_digest_keies;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(message_digest_keies != nullptr)
    {
        children["message-digest-keies"] = message_digest_keies;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-keies" || name == "type" || name == "key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{

    yang_name = "message-digest-keies"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{

    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-id" || name == "password")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "type"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authen_type.yfilter)
	|| ydk::is_set(keychain_authen_type.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.yfilter)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.yfilter)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
        authen_type.value_namespace = name_space;
        authen_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type = value;
        keychain_authen_type.value_namespace = name_space;
        keychain_authen_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
        keychain_name.value_namespace = name_space;
        keychain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authen-type")
    {
        authen_type.yfilter = yfilter;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type.yfilter = yfilter;
    }
    if(value_path == "keychain-name")
    {
        keychain_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authen-type" || name == "keychain-authen-type" || name == "keychain-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::CostFallback()
    :
    cost{YType::uint32, "cost"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost-fallback"; yang_parent_name = "multi-area-interface-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::~CostFallback()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::has_data() const
{
    return cost.is_set
	|| threshold.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "threshold")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{

    yang_name = "dead-interval-minimal"; yang_parent_name = "multi-area-interface-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "multiplier")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::DistributeList()
    :
    access_list_name{YType::str, "access-list-name"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "distribute-list"; yang_parent_name = "multi-area-interface-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::~DistributeList()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::has_data() const
{
    return access_list_name.is_set
	|| route_policy_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-name" || name == "route-policy-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "multi-area-interface-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_enable.yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.yfilter)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_link != nullptr)
    {
        children["per-link"] = per_link;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
        fast_reroute_enable.value_namespace = name_space;
        fast_reroute_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix" || name == "fast-reroute-enable")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"},
    topology_independent_lfa{YType::boolean, "topology-independent-lfa"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces>())
	,remote_lfa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa>())
	,tiebreakers(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;
    remote_lfa->parent = this;
    tiebreakers->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| topology_independent_lfa.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data())
	|| (tiebreakers !=  nullptr && tiebreakers->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| ydk::is_set(topology_independent_lfa.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation())
	|| (tiebreakers !=  nullptr && tiebreakers->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());
    if (topology_independent_lfa.is_set || is_set(topology_independent_lfa.yfilter)) leaf_name_data.push_back(topology_independent_lfa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa>();
        }
        return remote_lfa;
    }

    if(child_yang_name == "tiebreakers")
    {
        if(tiebreakers == nullptr)
        {
            tiebreakers = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers>();
        }
        return tiebreakers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    if(remote_lfa != nullptr)
    {
        children["remote-lfa"] = remote_lfa;
    }

    if(tiebreakers != nullptr)
    {
        children["tiebreakers"] = tiebreakers;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-independent-lfa")
    {
        topology_independent_lfa = value;
        topology_independent_lfa.value_namespace = name_space;
        topology_independent_lfa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
    if(value_path == "topology-independent-lfa")
    {
        topology_independent_lfa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "remote-lfa" || name == "tiebreakers" || name == "fast-reroute-use-candidate-only" || name == "topology-independent-lfa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::RemoteLfa()
    :
    maximum_cost{YType::uint32, "maximum-cost"},
    tunnel{YType::enumeration, "tunnel"}
{

    yang_name = "remote-lfa"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::~RemoteLfa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::has_data() const
{
    return maximum_cost.is_set
	|| tunnel.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_cost.yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cost.is_set || is_set(maximum_cost.yfilter)) leaf_name_data.push_back(maximum_cost.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost = value;
        maximum_cost.value_namespace = name_space;
        maximum_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-cost" || name == "tunnel")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreakers()
{

    yang_name = "tiebreakers"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::~Tiebreakers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::has_data() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::has_operation() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tiebreaker")
    {
        for(auto const & c : tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker>();
        c->parent = this;
        tiebreaker.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tiebreaker)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::Tiebreaker()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{

    yang_name = "tiebreaker"; yang_parent_name = "tiebreakers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::~Tiebreaker()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tiebreaker_type.yfilter)
	|| ydk::is_set(tiebreaker_index.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreaker" <<"[tiebreaker-type='" <<tiebreaker_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.yfilter)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.yfilter)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker-type" || name == "tiebreaker-index")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "multi-area-interface-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::~Neighbors()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint32, "priority"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| poll_interval.is_set
	|| priority.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(database_filter.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.yfilter)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
        database_filter.value_namespace = name_space;
        database_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "database-filter")
    {
        database_filter.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "cost" || name == "database-filter" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScopes()
{

    yang_name = "name-scopes"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::~NameScopes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::has_data() const
{
    for (std::size_t index=0; index<name_scope.size(); index++)
    {
        if(name_scope[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::has_operation() const
{
    for (std::size_t index=0; index<name_scope.size(); index++)
    {
        if(name_scope[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-scopes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-scope")
    {
        for(auto const & c : name_scope)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope>();
        c->parent = this;
        name_scope.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : name_scope)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-scope")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::NameScope()
    :
    interface_name{YType::str, "interface-name"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    demand_circuit{YType::boolean, "demand-circuit"},
    flood_reduction{YType::boolean, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    ldp_auto_config{YType::empty, "ldp-auto-config"},
    ldp_sync{YType::boolean, "ldp-sync"},
    ldp_sync_igp_shortcuts{YType::boolean, "ldp-sync-igp-shortcuts"},
    link_down_fast_detect{YType::boolean, "link-down-fast-detect"},
    loopback_stub_network{YType::boolean, "loopback-stub-network"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    network_type{YType::enumeration, "network-type"},
    packet_size{YType::uint32, "packet-size"},
    passive{YType::boolean, "passive"},
    prefix_suppression_primary{YType::boolean, "prefix-suppression-primary"},
    prefix_suppression_secondary{YType::boolean, "prefix-suppression-secondary"},
    priority{YType::uint32, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    running{YType::empty, "running"},
    segment_routing_forwarding{YType::enumeration, "segment-routing-forwarding"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication>())
	,bfd(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd>())
	,cost_fallback(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal>())
	,distribute_list(nullptr) // presence node
	,fast_reroute(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute>())
	,neighbors(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors>())
	,prefix_sid(nullptr) // presence node
	,prefix_sid_strict(nullptr) // presence node
	,security(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security>())
{
    authentication->parent = this;
    bfd->parent = this;
    cost_fallback->parent = this;
    dead_interval_minimal->parent = this;
    fast_reroute->parent = this;
    neighbors->parent = this;
    security->parent = this;

    yang_name = "name-scope"; yang_parent_name = "name-scopes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::~NameScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::has_data() const
{
    return interface_name.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| demand_circuit.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| ldp_auto_config.is_set
	|| ldp_sync.is_set
	|| ldp_sync_igp_shortcuts.is_set
	|| link_down_fast_detect.is_set
	|| loopback_stub_network.is_set
	|| mtu_ignore.is_set
	|| network_type.is_set
	|| packet_size.is_set
	|| passive.is_set
	|| prefix_suppression_primary.is_set
	|| prefix_suppression_secondary.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| running.is_set
	|| segment_routing_forwarding.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost_fallback !=  nullptr && cost_fallback->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (prefix_sid !=  nullptr && prefix_sid->has_data())
	|| (prefix_sid_strict !=  nullptr && prefix_sid_strict->has_data())
	|| (security !=  nullptr && security->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(database_filter.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(ldp_auto_config.yfilter)
	|| ydk::is_set(ldp_sync.yfilter)
	|| ydk::is_set(ldp_sync_igp_shortcuts.yfilter)
	|| ydk::is_set(link_down_fast_detect.yfilter)
	|| ydk::is_set(loopback_stub_network.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(network_type.yfilter)
	|| ydk::is_set(packet_size.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(prefix_suppression_primary.yfilter)
	|| ydk::is_set(prefix_suppression_secondary.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(segment_routing_forwarding.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost_fallback !=  nullptr && cost_fallback->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (prefix_sid !=  nullptr && prefix_sid->has_operation())
	|| (prefix_sid_strict !=  nullptr && prefix_sid_strict->has_operation())
	|| (security !=  nullptr && security->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-scope" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.yfilter)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (ldp_auto_config.is_set || is_set(ldp_auto_config.yfilter)) leaf_name_data.push_back(ldp_auto_config.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.yfilter)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (ldp_sync_igp_shortcuts.is_set || is_set(ldp_sync_igp_shortcuts.yfilter)) leaf_name_data.push_back(ldp_sync_igp_shortcuts.get_name_leafdata());
    if (link_down_fast_detect.is_set || is_set(link_down_fast_detect.yfilter)) leaf_name_data.push_back(link_down_fast_detect.get_name_leafdata());
    if (loopback_stub_network.is_set || is_set(loopback_stub_network.yfilter)) leaf_name_data.push_back(loopback_stub_network.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.yfilter)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.yfilter)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression_primary.is_set || is_set(prefix_suppression_primary.yfilter)) leaf_name_data.push_back(prefix_suppression_primary.get_name_leafdata());
    if (prefix_suppression_secondary.is_set || is_set(prefix_suppression_secondary.yfilter)) leaf_name_data.push_back(prefix_suppression_secondary.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (segment_routing_forwarding.is_set || is_set(segment_routing_forwarding.yfilter)) leaf_name_data.push_back(segment_routing_forwarding.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost-fallback")
    {
        if(cost_fallback == nullptr)
        {
            cost_fallback = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback>();
        }
        return cost_fallback;
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal == nullptr)
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal>();
        }
        return dead_interval_minimal;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "prefix-sid")
    {
        if(prefix_sid == nullptr)
        {
            prefix_sid = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid>();
        }
        return prefix_sid;
    }

    if(child_yang_name == "prefix-sid-strict")
    {
        if(prefix_sid_strict == nullptr)
        {
            prefix_sid_strict = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict>();
        }
        return prefix_sid_strict;
    }

    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security>();
        }
        return security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cost_fallback != nullptr)
    {
        children["cost-fallback"] = cost_fallback;
    }

    if(dead_interval_minimal != nullptr)
    {
        children["dead-interval-minimal"] = dead_interval_minimal;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(prefix_sid != nullptr)
    {
        children["prefix-sid"] = prefix_sid;
    }

    if(prefix_sid_strict != nullptr)
    {
        children["prefix-sid-strict"] = prefix_sid_strict;
    }

    if(security != nullptr)
    {
        children["security"] = security;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
        database_filter.value_namespace = name_space;
        database_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-auto-config")
    {
        ldp_auto_config = value;
        ldp_auto_config.value_namespace = name_space;
        ldp_auto_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
        ldp_sync.value_namespace = name_space;
        ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-sync-igp-shortcuts")
    {
        ldp_sync_igp_shortcuts = value;
        ldp_sync_igp_shortcuts.value_namespace = name_space;
        ldp_sync_igp_shortcuts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-down-fast-detect")
    {
        link_down_fast_detect = value;
        link_down_fast_detect.value_namespace = name_space;
        link_down_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback-stub-network")
    {
        loopback_stub_network = value;
        loopback_stub_network.value_namespace = name_space;
        loopback_stub_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-type")
    {
        network_type = value;
        network_type.value_namespace = name_space;
        network_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
        packet_size.value_namespace = name_space;
        packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression-primary")
    {
        prefix_suppression_primary = value;
        prefix_suppression_primary.value_namespace = name_space;
        prefix_suppression_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression-secondary")
    {
        prefix_suppression_secondary = value;
        prefix_suppression_secondary.value_namespace = name_space;
        prefix_suppression_secondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-forwarding")
    {
        segment_routing_forwarding = value;
        segment_routing_forwarding.value_namespace = name_space;
        segment_routing_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "database-filter")
    {
        database_filter.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "ldp-auto-config")
    {
        ldp_auto_config.yfilter = yfilter;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync.yfilter = yfilter;
    }
    if(value_path == "ldp-sync-igp-shortcuts")
    {
        ldp_sync_igp_shortcuts.yfilter = yfilter;
    }
    if(value_path == "link-down-fast-detect")
    {
        link_down_fast_detect.yfilter = yfilter;
    }
    if(value_path == "loopback-stub-network")
    {
        loopback_stub_network.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "network-type")
    {
        network_type.yfilter = yfilter;
    }
    if(value_path == "packet-size")
    {
        packet_size.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression-primary")
    {
        prefix_suppression_primary.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression-secondary")
    {
        prefix_suppression_secondary.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "segment-routing-forwarding")
    {
        segment_routing_forwarding.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bfd" || name == "cost-fallback" || name == "dead-interval-minimal" || name == "distribute-list" || name == "fast-reroute" || name == "neighbors" || name == "prefix-sid" || name == "prefix-sid-strict" || name == "security" || name == "interface-name" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "flood-reduction" || name == "hello-interval" || name == "ldp-auto-config" || name == "ldp-sync" || name == "ldp-sync-igp-shortcuts" || name == "link-down-fast-detect" || name == "loopback-stub-network" || name == "mtu-ignore" || name == "network-type" || name == "packet-size" || name == "passive" || name == "prefix-suppression-primary" || name == "prefix-suppression-secondary" || name == "priority" || name == "retransmit-interval" || name == "running" || name == "segment-routing-forwarding" || name == "transmit-delay")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    type->parent = this;

    yang_name = "authentication"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies == nullptr)
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies>();
        }
        return message_digest_keies;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(message_digest_keies != nullptr)
    {
        children["message-digest-keies"] = message_digest_keies;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-keies" || name == "type" || name == "key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{

    yang_name = "message-digest-keies"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{

    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-id" || name == "password")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "type"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authen_type.yfilter)
	|| ydk::is_set(keychain_authen_type.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.yfilter)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.yfilter)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
        authen_type.value_namespace = name_space;
        authen_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type = value;
        keychain_authen_type.value_namespace = name_space;
        keychain_authen_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
        keychain_name.value_namespace = name_space;
        keychain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authen-type")
    {
        authen_type.yfilter = yfilter;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type.yfilter = yfilter;
    }
    if(value_path == "keychain-name")
    {
        keychain_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authen-type" || name == "keychain-authen-type" || name == "keychain-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{

    yang_name = "bfd"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::~Bfd()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| fast_detect_mode.is_set
	|| interval.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(fast_detect_mode.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.yfilter)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
        fast_detect_mode.value_namespace = name_space;
        fast_detect_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "fast-detect-mode" || name == "interval")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::CostFallback()
    :
    cost{YType::uint32, "cost"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost-fallback"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::~CostFallback()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::has_data() const
{
    return cost.is_set
	|| threshold.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "threshold")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{

    yang_name = "dead-interval-minimal"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "multiplier")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::DistributeList()
    :
    access_list_name{YType::str, "access-list-name"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "distribute-list"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::~DistributeList()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::has_data() const
{
    return access_list_name.is_set
	|| route_policy_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-name" || name == "route-policy-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_enable.yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.yfilter)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_link != nullptr)
    {
        children["per-link"] = per_link;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
        fast_reroute_enable.value_namespace = name_space;
        fast_reroute_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix" || name == "fast-reroute-enable")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"},
    topology_independent_lfa{YType::boolean, "topology-independent-lfa"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces>())
	,remote_lfa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa>())
	,tiebreakers(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;
    remote_lfa->parent = this;
    tiebreakers->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| topology_independent_lfa.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data())
	|| (tiebreakers !=  nullptr && tiebreakers->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| ydk::is_set(topology_independent_lfa.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation())
	|| (tiebreakers !=  nullptr && tiebreakers->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());
    if (topology_independent_lfa.is_set || is_set(topology_independent_lfa.yfilter)) leaf_name_data.push_back(topology_independent_lfa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa>();
        }
        return remote_lfa;
    }

    if(child_yang_name == "tiebreakers")
    {
        if(tiebreakers == nullptr)
        {
            tiebreakers = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers>();
        }
        return tiebreakers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    if(remote_lfa != nullptr)
    {
        children["remote-lfa"] = remote_lfa;
    }

    if(tiebreakers != nullptr)
    {
        children["tiebreakers"] = tiebreakers;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-independent-lfa")
    {
        topology_independent_lfa = value;
        topology_independent_lfa.value_namespace = name_space;
        topology_independent_lfa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
    if(value_path == "topology-independent-lfa")
    {
        topology_independent_lfa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "remote-lfa" || name == "tiebreakers" || name == "fast-reroute-use-candidate-only" || name == "topology-independent-lfa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::RemoteLfa()
    :
    maximum_cost{YType::uint32, "maximum-cost"},
    tunnel{YType::enumeration, "tunnel"}
{

    yang_name = "remote-lfa"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::~RemoteLfa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::has_data() const
{
    return maximum_cost.is_set
	|| tunnel.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_cost.yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cost.is_set || is_set(maximum_cost.yfilter)) leaf_name_data.push_back(maximum_cost.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost = value;
        maximum_cost.value_namespace = name_space;
        maximum_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-cost" || name == "tunnel")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreakers()
{

    yang_name = "tiebreakers"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::~Tiebreakers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::has_data() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::has_operation() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tiebreaker")
    {
        for(auto const & c : tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker>();
        c->parent = this;
        tiebreaker.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tiebreaker)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::Tiebreaker()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{

    yang_name = "tiebreaker"; yang_parent_name = "tiebreakers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::~Tiebreaker()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tiebreaker_type.yfilter)
	|| ydk::is_set(tiebreaker_index.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreaker" <<"[tiebreaker-type='" <<tiebreaker_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.yfilter)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.yfilter)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker-type" || name == "tiebreaker-index")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::~Neighbors()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint32, "priority"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| poll_interval.is_set
	|| priority.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(database_filter.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.yfilter)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
        database_filter.value_namespace = name_space;
        database_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "database-filter")
    {
        database_filter.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "cost" || name == "database-filter" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::PrefixSid()
    :
    explicit_null{YType::boolean, "explicit-null"},
    n_flag_clear{YType::boolean, "n-flag-clear"},
    sid_value{YType::uint32, "sid-value"},
    type{YType::enumeration, "type"}
{

    yang_name = "prefix-sid"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::~PrefixSid()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::has_data() const
{
    return explicit_null.is_set
	|| n_flag_clear.is_set
	|| sid_value.is_set
	|| type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(n_flag_clear.yfilter)
	|| ydk::is_set(sid_value.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (n_flag_clear.is_set || is_set(n_flag_clear.yfilter)) leaf_name_data.push_back(n_flag_clear.get_name_leafdata());
    if (sid_value.is_set || is_set(sid_value.yfilter)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "n-flag-clear")
    {
        n_flag_clear = value;
        n_flag_clear.value_namespace = name_space;
        n_flag_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-value")
    {
        sid_value = value;
        sid_value.value_namespace = name_space;
        sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "n-flag-clear")
    {
        n_flag_clear.yfilter = yfilter;
    }
    if(value_path == "sid-value")
    {
        sid_value.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null" || name == "n-flag-clear" || name == "sid-value" || name == "type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::PrefixSidStrict()
    :
    explicit_null{YType::boolean, "explicit-null"},
    n_flag_clear{YType::boolean, "n-flag-clear"},
    sid_value{YType::uint32, "sid-value"},
    type{YType::enumeration, "type"}
{

    yang_name = "prefix-sid-strict"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::~PrefixSidStrict()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::has_data() const
{
    return explicit_null.is_set
	|| n_flag_clear.is_set
	|| sid_value.is_set
	|| type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(n_flag_clear.yfilter)
	|| ydk::is_set(sid_value.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-strict";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (n_flag_clear.is_set || is_set(n_flag_clear.yfilter)) leaf_name_data.push_back(n_flag_clear.get_name_leafdata());
    if (sid_value.is_set || is_set(sid_value.yfilter)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "n-flag-clear")
    {
        n_flag_clear = value;
        n_flag_clear.value_namespace = name_space;
        n_flag_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-value")
    {
        sid_value = value;
        sid_value.value_namespace = name_space;
        sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "n-flag-clear")
    {
        n_flag_clear.yfilter = yfilter;
    }
    if(value_path == "sid-value")
    {
        sid_value.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null" || name == "n-flag-clear" || name == "sid-value" || name == "type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Security()
    :
    ttl(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl>())
{
    ttl->parent = this;

    yang_name = "security"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::~Security()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::has_data() const
{
    return (ttl !=  nullptr && ttl->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::has_operation() const
{
    return is_set(yfilter)
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl>();
        }
        return ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::Ttl()
    :
    enable{YType::boolean, "enable"},
    hop_count{YType::uint32, "hop-count"}
{

    yang_name = "ttl"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::~Ttl()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::has_data() const
{
    return enable.is_set
	|| hop_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hop_count.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.yfilter)) leaf_name_data.push_back(hop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
        hop_count.value_namespace = name_space;
        hop_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hop-count")
    {
        hop_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "hop-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::Nssa()
    :
    default_info_originate{YType::boolean, "default-info-originate"},
    metric_type{YType::enumeration, "metric-type"},
    no_redistribution{YType::boolean, "no-redistribution"},
    no_summary{YType::boolean, "no-summary"},
    nssa_def_metric{YType::uint32, "nssa-def-metric"}
{

    yang_name = "nssa"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::~Nssa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::has_data() const
{
    return default_info_originate.is_set
	|| metric_type.is_set
	|| no_redistribution.is_set
	|| no_summary.is_set
	|| nssa_def_metric.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_info_originate.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(no_redistribution.yfilter)
	|| ydk::is_set(no_summary.yfilter)
	|| ydk::is_set(nssa_def_metric.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_info_originate.is_set || is_set(default_info_originate.yfilter)) leaf_name_data.push_back(default_info_originate.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (no_redistribution.is_set || is_set(no_redistribution.yfilter)) leaf_name_data.push_back(no_redistribution.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.yfilter)) leaf_name_data.push_back(no_summary.get_name_leafdata());
    if (nssa_def_metric.is_set || is_set(nssa_def_metric.yfilter)) leaf_name_data.push_back(nssa_def_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-info-originate")
    {
        default_info_originate = value;
        default_info_originate.value_namespace = name_space;
        default_info_originate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution = value;
        no_redistribution.value_namespace = name_space;
        no_redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-summary")
    {
        no_summary = value;
        no_summary.value_namespace = name_space;
        no_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-def-metric")
    {
        nssa_def_metric = value;
        nssa_def_metric.value_namespace = name_space;
        nssa_def_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-info-originate")
    {
        default_info_originate.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution.yfilter = yfilter;
    }
    if(value_path == "no-summary")
    {
        no_summary.yfilter = yfilter;
    }
    if(value_path == "nssa-def-metric")
    {
        nssa_def_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-info-originate" || name == "metric-type" || name == "no-redistribution" || name == "no-summary" || name == "nssa-def-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScopes()
{

    yang_name = "sham-link-scopes"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::~ShamLinkScopes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::has_data() const
{
    for (std::size_t index=0; index<sham_link_scope.size(); index++)
    {
        if(sham_link_scope[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::has_operation() const
{
    for (std::size_t index=0; index<sham_link_scope.size(); index++)
    {
        if(sham_link_scope[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link-scopes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sham-link-scope")
    {
        for(auto const & c : sham_link_scope)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope>();
        c->parent = this;
        sham_link_scope.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sham_link_scope)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sham-link-scope")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::ShamLinkScope()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    cost{YType::uint32, "cost"},
    hello_interval{YType::uint32, "hello-interval"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    running{YType::empty, "running"},
    source{YType::str, "source"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal>())
{
    authentication->parent = this;
    dead_interval_minimal->parent = this;

    yang_name = "sham-link-scope"; yang_parent_name = "sham-link-scopes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::~ShamLinkScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| cost.is_set
	|| hello_interval.is_set
	|| retransmit_interval.is_set
	|| running.is_set
	|| source.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link-scope" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal == nullptr)
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal>();
        }
        return dead_interval_minimal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(dead_interval_minimal != nullptr)
    {
        children["dead-interval-minimal"] = dead_interval_minimal;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "dead-interval-minimal" || name == "source-address" || name == "destination-address" || name == "cost" || name == "hello-interval" || name == "retransmit-interval" || name == "running" || name == "source" || name == "transmit-delay")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    type->parent = this;

    yang_name = "authentication"; yang_parent_name = "sham-link-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies == nullptr)
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies>();
        }
        return message_digest_keies;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(message_digest_keies != nullptr)
    {
        children["message-digest-keies"] = message_digest_keies;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-keies" || name == "type" || name == "key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{

    yang_name = "message-digest-keies"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{

    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-id" || name == "password")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "type"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authen_type.yfilter)
	|| ydk::is_set(keychain_authen_type.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.yfilter)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.yfilter)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
        authen_type.value_namespace = name_space;
        authen_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type = value;
        keychain_authen_type.value_namespace = name_space;
        keychain_authen_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
        keychain_name.value_namespace = name_space;
        keychain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authen-type")
    {
        authen_type.yfilter = yfilter;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type.yfilter = yfilter;
    }
    if(value_path == "keychain-name")
    {
        keychain_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authen-type" || name == "keychain-authen-type" || name == "keychain-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{

    yang_name = "dead-interval-minimal"; yang_parent_name = "sham-link-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "multiplier")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScopes()
{

    yang_name = "virtual-link-scopes"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::~VirtualLinkScopes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::has_data() const
{
    for (std::size_t index=0; index<virtual_link_scope.size(); index++)
    {
        if(virtual_link_scope[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::has_operation() const
{
    for (std::size_t index=0; index<virtual_link_scope.size(); index++)
    {
        if(virtual_link_scope[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link-scopes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-link-scope")
    {
        for(auto const & c : virtual_link_scope)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope>();
        c->parent = this;
        virtual_link_scope.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtual_link_scope)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-link-scope")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::VirtualLinkScope()
    :
    address{YType::str, "address"},
    hello_interval{YType::uint32, "hello-interval"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    running{YType::empty, "running"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal>())
{
    authentication->parent = this;
    dead_interval_minimal->parent = this;

    yang_name = "virtual-link-scope"; yang_parent_name = "virtual-link-scopes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::~VirtualLinkScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::has_data() const
{
    return address.is_set
	|| hello_interval.is_set
	|| retransmit_interval.is_set
	|| running.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link-scope" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal == nullptr)
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal>();
        }
        return dead_interval_minimal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(dead_interval_minimal != nullptr)
    {
        children["dead-interval-minimal"] = dead_interval_minimal;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "dead-interval-minimal" || name == "address" || name == "hello-interval" || name == "retransmit-interval" || name == "running" || name == "transmit-delay")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    type->parent = this;

    yang_name = "authentication"; yang_parent_name = "virtual-link-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies == nullptr)
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies>();
        }
        return message_digest_keies;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(message_digest_keies != nullptr)
    {
        children["message-digest-keies"] = message_digest_keies;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-keies" || name == "type" || name == "key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{

    yang_name = "message-digest-keies"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{

    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-id" || name == "password")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "type"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authen_type.yfilter)
	|| ydk::is_set(keychain_authen_type.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.yfilter)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.yfilter)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
        authen_type.value_namespace = name_space;
        authen_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type = value;
        keychain_authen_type.value_namespace = name_space;
        keychain_authen_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
        keychain_name.value_namespace = name_space;
        keychain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authen-type")
    {
        authen_type.yfilter = yfilter;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type.yfilter = yfilter;
    }
    if(value_path == "keychain-name")
    {
        keychain_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authen-type" || name == "keychain-authen-type" || name == "keychain-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{

    yang_name = "dead-interval-minimal"; yang_parent_name = "virtual-link-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "multiplier")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaAreaId()
    :
    area_id{YType::uint32, "area-id"},
    default_cost{YType::uint32, "default-cost"},
    external_out{YType::boolean, "external-out"},
    mpls_traffic_eng{YType::empty, "mpls-traffic-eng"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    running{YType::empty, "running"},
    segment_routing{YType::enumeration, "segment-routing"},
    stub{YType::boolean, "stub"},
    summary_in{YType::boolean, "summary-in"}
    	,
    area_ranges(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges>())
	,area_scope(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope>())
	,multi_area_interface_scopes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes>())
	,name_scopes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes>())
	,nssa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa>())
	,sham_link_scopes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes>())
	,virtual_link_scopes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes>())
{
    area_ranges->parent = this;
    area_scope->parent = this;
    multi_area_interface_scopes->parent = this;
    name_scopes->parent = this;
    nssa->parent = this;
    sham_link_scopes->parent = this;
    virtual_link_scopes->parent = this;

    yang_name = "area-area-id"; yang_parent_name = "area-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::~AreaAreaId()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::has_data() const
{
    return area_id.is_set
	|| default_cost.is_set
	|| external_out.is_set
	|| mpls_traffic_eng.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| running.is_set
	|| segment_routing.is_set
	|| stub.is_set
	|| summary_in.is_set
	|| (area_ranges !=  nullptr && area_ranges->has_data())
	|| (area_scope !=  nullptr && area_scope->has_data())
	|| (multi_area_interface_scopes !=  nullptr && multi_area_interface_scopes->has_data())
	|| (name_scopes !=  nullptr && name_scopes->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (sham_link_scopes !=  nullptr && sham_link_scopes->has_data())
	|| (virtual_link_scopes !=  nullptr && virtual_link_scopes->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(default_cost.yfilter)
	|| ydk::is_set(external_out.yfilter)
	|| ydk::is_set(mpls_traffic_eng.yfilter)
	|| ydk::is_set(route_policy_in.yfilter)
	|| ydk::is_set(route_policy_out.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(stub.yfilter)
	|| ydk::is_set(summary_in.yfilter)
	|| (area_ranges !=  nullptr && area_ranges->has_operation())
	|| (area_scope !=  nullptr && area_scope->has_operation())
	|| (multi_area_interface_scopes !=  nullptr && multi_area_interface_scopes->has_operation())
	|| (name_scopes !=  nullptr && name_scopes->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (sham_link_scopes !=  nullptr && sham_link_scopes->has_operation())
	|| (virtual_link_scopes !=  nullptr && virtual_link_scopes->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-area-id" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (default_cost.is_set || is_set(default_cost.yfilter)) leaf_name_data.push_back(default_cost.get_name_leafdata());
    if (external_out.is_set || is_set(external_out.yfilter)) leaf_name_data.push_back(external_out.get_name_leafdata());
    if (mpls_traffic_eng.is_set || is_set(mpls_traffic_eng.yfilter)) leaf_name_data.push_back(mpls_traffic_eng.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.yfilter)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.yfilter)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (stub.is_set || is_set(stub.yfilter)) leaf_name_data.push_back(stub.get_name_leafdata());
    if (summary_in.is_set || is_set(summary_in.yfilter)) leaf_name_data.push_back(summary_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-ranges")
    {
        if(area_ranges == nullptr)
        {
            area_ranges = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges>();
        }
        return area_ranges;
    }

    if(child_yang_name == "area-scope")
    {
        if(area_scope == nullptr)
        {
            area_scope = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope>();
        }
        return area_scope;
    }

    if(child_yang_name == "multi-area-interface-scopes")
    {
        if(multi_area_interface_scopes == nullptr)
        {
            multi_area_interface_scopes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes>();
        }
        return multi_area_interface_scopes;
    }

    if(child_yang_name == "name-scopes")
    {
        if(name_scopes == nullptr)
        {
            name_scopes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes>();
        }
        return name_scopes;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "sham-link-scopes")
    {
        if(sham_link_scopes == nullptr)
        {
            sham_link_scopes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes>();
        }
        return sham_link_scopes;
    }

    if(child_yang_name == "virtual-link-scopes")
    {
        if(virtual_link_scopes == nullptr)
        {
            virtual_link_scopes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes>();
        }
        return virtual_link_scopes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_ranges != nullptr)
    {
        children["area-ranges"] = area_ranges;
    }

    if(area_scope != nullptr)
    {
        children["area-scope"] = area_scope;
    }

    if(multi_area_interface_scopes != nullptr)
    {
        children["multi-area-interface-scopes"] = multi_area_interface_scopes;
    }

    if(name_scopes != nullptr)
    {
        children["name-scopes"] = name_scopes;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    if(sham_link_scopes != nullptr)
    {
        children["sham-link-scopes"] = sham_link_scopes;
    }

    if(virtual_link_scopes != nullptr)
    {
        children["virtual-link-scopes"] = virtual_link_scopes;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-cost")
    {
        default_cost = value;
        default_cost.value_namespace = name_space;
        default_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-out")
    {
        external_out = value;
        external_out.value_namespace = name_space;
        external_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-traffic-eng")
    {
        mpls_traffic_eng = value;
        mpls_traffic_eng.value_namespace = name_space;
        mpls_traffic_eng.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
        route_policy_in.value_namespace = name_space;
        route_policy_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
        route_policy_out.value_namespace = name_space;
        route_policy_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub")
    {
        stub = value;
        stub.value_namespace = name_space;
        stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-in")
    {
        summary_in = value;
        summary_in.value_namespace = name_space;
        summary_in.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "default-cost")
    {
        default_cost.yfilter = yfilter;
    }
    if(value_path == "external-out")
    {
        external_out.yfilter = yfilter;
    }
    if(value_path == "mpls-traffic-eng")
    {
        mpls_traffic_eng.yfilter = yfilter;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in.yfilter = yfilter;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "stub")
    {
        stub.yfilter = yfilter;
    }
    if(value_path == "summary-in")
    {
        summary_in.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-ranges" || name == "area-scope" || name == "multi-area-interface-scopes" || name == "name-scopes" || name == "nssa" || name == "sham-link-scopes" || name == "virtual-link-scopes" || name == "area-id" || name == "default-cost" || name == "external-out" || name == "mpls-traffic-eng" || name == "route-policy-in" || name == "route-policy-out" || name == "running" || name == "segment-routing" || name == "stub" || name == "summary-in")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRanges()
{

    yang_name = "area-ranges"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::~AreaRanges()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::has_data() const
{
    for (std::size_t index=0; index<area_range.size(); index++)
    {
        if(area_range[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::has_operation() const
{
    for (std::size_t index=0; index<area_range.size(); index++)
    {
        if(area_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange>();
        c->parent = this;
        area_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-range")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::AreaRange()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"},
    not_advertise{YType::boolean, "not-advertise"}
{

    yang_name = "area-range"; yang_parent_name = "area-ranges"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::~AreaRange()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::has_data() const
{
    return address.is_set
	|| netmask.is_set
	|| not_advertise.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(not_advertise.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-range" <<"[address='" <<address <<"']" <<"[netmask='" <<netmask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
        not_advertise.value_namespace = name_space;
        not_advertise.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "netmask" || name == "not-advertise")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::AreaScope()
    :
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    demand_circuit{YType::boolean, "demand-circuit"},
    flood_reduction{YType::boolean, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    ldp_auto_config{YType::empty, "ldp-auto-config"},
    ldp_sync{YType::boolean, "ldp-sync"},
    ldp_sync_igp_shortcuts{YType::boolean, "ldp-sync-igp-shortcuts"},
    link_down_fast_detect{YType::boolean, "link-down-fast-detect"},
    loopback_stub_network{YType::boolean, "loopback-stub-network"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    network_type{YType::enumeration, "network-type"},
    packet_size{YType::uint32, "packet-size"},
    passive{YType::boolean, "passive"},
    prefix_suppression_primary{YType::boolean, "prefix-suppression-primary"},
    prefix_suppression_secondary{YType::boolean, "prefix-suppression-secondary"},
    priority{YType::uint32, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    segment_routing_forwarding{YType::enumeration, "segment-routing-forwarding"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication>())
	,bfd(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd>())
	,cost_fallback(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal>())
	,distribute_list(nullptr) // presence node
	,fast_reroute(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute>())
	,security(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security>())
{
    authentication->parent = this;
    bfd->parent = this;
    cost_fallback->parent = this;
    dead_interval_minimal->parent = this;
    fast_reroute->parent = this;
    security->parent = this;

    yang_name = "area-scope"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::~AreaScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::has_data() const
{
    return cost.is_set
	|| database_filter.is_set
	|| demand_circuit.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| ldp_auto_config.is_set
	|| ldp_sync.is_set
	|| ldp_sync_igp_shortcuts.is_set
	|| link_down_fast_detect.is_set
	|| loopback_stub_network.is_set
	|| mtu_ignore.is_set
	|| network_type.is_set
	|| packet_size.is_set
	|| passive.is_set
	|| prefix_suppression_primary.is_set
	|| prefix_suppression_secondary.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| segment_routing_forwarding.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost_fallback !=  nullptr && cost_fallback->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (security !=  nullptr && security->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(database_filter.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(ldp_auto_config.yfilter)
	|| ydk::is_set(ldp_sync.yfilter)
	|| ydk::is_set(ldp_sync_igp_shortcuts.yfilter)
	|| ydk::is_set(link_down_fast_detect.yfilter)
	|| ydk::is_set(loopback_stub_network.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(network_type.yfilter)
	|| ydk::is_set(packet_size.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(prefix_suppression_primary.yfilter)
	|| ydk::is_set(prefix_suppression_secondary.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(segment_routing_forwarding.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost_fallback !=  nullptr && cost_fallback->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (security !=  nullptr && security->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.yfilter)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (ldp_auto_config.is_set || is_set(ldp_auto_config.yfilter)) leaf_name_data.push_back(ldp_auto_config.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.yfilter)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (ldp_sync_igp_shortcuts.is_set || is_set(ldp_sync_igp_shortcuts.yfilter)) leaf_name_data.push_back(ldp_sync_igp_shortcuts.get_name_leafdata());
    if (link_down_fast_detect.is_set || is_set(link_down_fast_detect.yfilter)) leaf_name_data.push_back(link_down_fast_detect.get_name_leafdata());
    if (loopback_stub_network.is_set || is_set(loopback_stub_network.yfilter)) leaf_name_data.push_back(loopback_stub_network.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.yfilter)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.yfilter)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression_primary.is_set || is_set(prefix_suppression_primary.yfilter)) leaf_name_data.push_back(prefix_suppression_primary.get_name_leafdata());
    if (prefix_suppression_secondary.is_set || is_set(prefix_suppression_secondary.yfilter)) leaf_name_data.push_back(prefix_suppression_secondary.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (segment_routing_forwarding.is_set || is_set(segment_routing_forwarding.yfilter)) leaf_name_data.push_back(segment_routing_forwarding.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost-fallback")
    {
        if(cost_fallback == nullptr)
        {
            cost_fallback = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback>();
        }
        return cost_fallback;
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal == nullptr)
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal>();
        }
        return dead_interval_minimal;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security>();
        }
        return security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cost_fallback != nullptr)
    {
        children["cost-fallback"] = cost_fallback;
    }

    if(dead_interval_minimal != nullptr)
    {
        children["dead-interval-minimal"] = dead_interval_minimal;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(security != nullptr)
    {
        children["security"] = security;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
        database_filter.value_namespace = name_space;
        database_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-auto-config")
    {
        ldp_auto_config = value;
        ldp_auto_config.value_namespace = name_space;
        ldp_auto_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
        ldp_sync.value_namespace = name_space;
        ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-sync-igp-shortcuts")
    {
        ldp_sync_igp_shortcuts = value;
        ldp_sync_igp_shortcuts.value_namespace = name_space;
        ldp_sync_igp_shortcuts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-down-fast-detect")
    {
        link_down_fast_detect = value;
        link_down_fast_detect.value_namespace = name_space;
        link_down_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback-stub-network")
    {
        loopback_stub_network = value;
        loopback_stub_network.value_namespace = name_space;
        loopback_stub_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-type")
    {
        network_type = value;
        network_type.value_namespace = name_space;
        network_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
        packet_size.value_namespace = name_space;
        packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression-primary")
    {
        prefix_suppression_primary = value;
        prefix_suppression_primary.value_namespace = name_space;
        prefix_suppression_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression-secondary")
    {
        prefix_suppression_secondary = value;
        prefix_suppression_secondary.value_namespace = name_space;
        prefix_suppression_secondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-forwarding")
    {
        segment_routing_forwarding = value;
        segment_routing_forwarding.value_namespace = name_space;
        segment_routing_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "database-filter")
    {
        database_filter.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "ldp-auto-config")
    {
        ldp_auto_config.yfilter = yfilter;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync.yfilter = yfilter;
    }
    if(value_path == "ldp-sync-igp-shortcuts")
    {
        ldp_sync_igp_shortcuts.yfilter = yfilter;
    }
    if(value_path == "link-down-fast-detect")
    {
        link_down_fast_detect.yfilter = yfilter;
    }
    if(value_path == "loopback-stub-network")
    {
        loopback_stub_network.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "network-type")
    {
        network_type.yfilter = yfilter;
    }
    if(value_path == "packet-size")
    {
        packet_size.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression-primary")
    {
        prefix_suppression_primary.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression-secondary")
    {
        prefix_suppression_secondary.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "segment-routing-forwarding")
    {
        segment_routing_forwarding.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bfd" || name == "cost-fallback" || name == "dead-interval-minimal" || name == "distribute-list" || name == "fast-reroute" || name == "security" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "flood-reduction" || name == "hello-interval" || name == "ldp-auto-config" || name == "ldp-sync" || name == "ldp-sync-igp-shortcuts" || name == "link-down-fast-detect" || name == "loopback-stub-network" || name == "mtu-ignore" || name == "network-type" || name == "packet-size" || name == "passive" || name == "prefix-suppression-primary" || name == "prefix-suppression-secondary" || name == "priority" || name == "retransmit-interval" || name == "segment-routing-forwarding" || name == "transmit-delay")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    type->parent = this;

    yang_name = "authentication"; yang_parent_name = "area-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies == nullptr)
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies>();
        }
        return message_digest_keies;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(message_digest_keies != nullptr)
    {
        children["message-digest-keies"] = message_digest_keies;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-keies" || name == "type" || name == "key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{

    yang_name = "message-digest-keies"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{

    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-id" || name == "password")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "type"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authen_type.yfilter)
	|| ydk::is_set(keychain_authen_type.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.yfilter)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.yfilter)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
        authen_type.value_namespace = name_space;
        authen_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type = value;
        keychain_authen_type.value_namespace = name_space;
        keychain_authen_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
        keychain_name.value_namespace = name_space;
        keychain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authen-type")
    {
        authen_type.yfilter = yfilter;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type.yfilter = yfilter;
    }
    if(value_path == "keychain-name")
    {
        keychain_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authen-type" || name == "keychain-authen-type" || name == "keychain-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{

    yang_name = "bfd"; yang_parent_name = "area-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::~Bfd()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| fast_detect_mode.is_set
	|| interval.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(fast_detect_mode.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.yfilter)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
        fast_detect_mode.value_namespace = name_space;
        fast_detect_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "fast-detect-mode" || name == "interval")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::CostFallback()
    :
    cost{YType::uint32, "cost"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost-fallback"; yang_parent_name = "area-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::~CostFallback()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::has_data() const
{
    return cost.is_set
	|| threshold.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "threshold")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{

    yang_name = "dead-interval-minimal"; yang_parent_name = "area-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "multiplier")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::DistributeList()
    :
    access_list_name{YType::str, "access-list-name"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "distribute-list"; yang_parent_name = "area-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::~DistributeList()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::has_data() const
{
    return access_list_name.is_set
	|| route_policy_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-name" || name == "route-policy-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "area-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_enable.yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.yfilter)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_link != nullptr)
    {
        children["per-link"] = per_link;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
        fast_reroute_enable.value_namespace = name_space;
        fast_reroute_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix" || name == "fast-reroute-enable")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"},
    topology_independent_lfa{YType::boolean, "topology-independent-lfa"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>())
	,remote_lfa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa>())
	,tiebreakers(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;
    remote_lfa->parent = this;
    tiebreakers->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| topology_independent_lfa.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data())
	|| (tiebreakers !=  nullptr && tiebreakers->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| ydk::is_set(topology_independent_lfa.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation())
	|| (tiebreakers !=  nullptr && tiebreakers->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());
    if (topology_independent_lfa.is_set || is_set(topology_independent_lfa.yfilter)) leaf_name_data.push_back(topology_independent_lfa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa>();
        }
        return remote_lfa;
    }

    if(child_yang_name == "tiebreakers")
    {
        if(tiebreakers == nullptr)
        {
            tiebreakers = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers>();
        }
        return tiebreakers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    if(remote_lfa != nullptr)
    {
        children["remote-lfa"] = remote_lfa;
    }

    if(tiebreakers != nullptr)
    {
        children["tiebreakers"] = tiebreakers;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-independent-lfa")
    {
        topology_independent_lfa = value;
        topology_independent_lfa.value_namespace = name_space;
        topology_independent_lfa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
    if(value_path == "topology-independent-lfa")
    {
        topology_independent_lfa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "remote-lfa" || name == "tiebreakers" || name == "fast-reroute-use-candidate-only" || name == "topology-independent-lfa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::RemoteLfa()
    :
    maximum_cost{YType::uint32, "maximum-cost"},
    tunnel{YType::enumeration, "tunnel"}
{

    yang_name = "remote-lfa"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::~RemoteLfa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::has_data() const
{
    return maximum_cost.is_set
	|| tunnel.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_cost.yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cost.is_set || is_set(maximum_cost.yfilter)) leaf_name_data.push_back(maximum_cost.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost = value;
        maximum_cost.value_namespace = name_space;
        maximum_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-cost" || name == "tunnel")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreakers()
{

    yang_name = "tiebreakers"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::~Tiebreakers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::has_data() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::has_operation() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tiebreaker")
    {
        for(auto const & c : tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker>();
        c->parent = this;
        tiebreaker.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tiebreaker)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::Tiebreaker()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{

    yang_name = "tiebreaker"; yang_parent_name = "tiebreakers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::~Tiebreaker()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tiebreaker_type.yfilter)
	|| ydk::is_set(tiebreaker_index.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreaker" <<"[tiebreaker-type='" <<tiebreaker_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.yfilter)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.yfilter)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker-type" || name == "tiebreaker-index")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Security()
    :
    ttl(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl>())
{
    ttl->parent = this;

    yang_name = "security"; yang_parent_name = "area-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::~Security()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::has_data() const
{
    return (ttl !=  nullptr && ttl->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::has_operation() const
{
    return is_set(yfilter)
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl>();
        }
        return ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::Ttl()
    :
    enable{YType::boolean, "enable"},
    hop_count{YType::uint32, "hop-count"}
{

    yang_name = "ttl"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::~Ttl()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::has_data() const
{
    return enable.is_set
	|| hop_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hop_count.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.yfilter)) leaf_name_data.push_back(hop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
        hop_count.value_namespace = name_space;
        hop_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hop-count")
    {
        hop_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "hop-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScopes()
{

    yang_name = "multi-area-interface-scopes"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::~MultiAreaInterfaceScopes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::has_data() const
{
    for (std::size_t index=0; index<multi_area_interface_scope.size(); index++)
    {
        if(multi_area_interface_scope[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::has_operation() const
{
    for (std::size_t index=0; index<multi_area_interface_scope.size(); index++)
    {
        if(multi_area_interface_scope[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area-interface-scopes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multi-area-interface-scope")
    {
        for(auto const & c : multi_area_interface_scope)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope>();
        c->parent = this;
        multi_area_interface_scope.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : multi_area_interface_scope)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-area-interface-scope")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::MultiAreaInterfaceScope()
    :
    interface_name{YType::str, "interface-name"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    hello_interval{YType::uint32, "hello-interval"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    packet_size{YType::uint32, "packet-size"},
    passive{YType::boolean, "passive"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    running{YType::empty, "running"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication>())
	,cost_fallback(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal>())
	,distribute_list(nullptr) // presence node
	,fast_reroute(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute>())
	,neighbors(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors>())
{
    authentication->parent = this;
    cost_fallback->parent = this;
    dead_interval_minimal->parent = this;
    fast_reroute->parent = this;
    neighbors->parent = this;

    yang_name = "multi-area-interface-scope"; yang_parent_name = "multi-area-interface-scopes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::~MultiAreaInterfaceScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::has_data() const
{
    return interface_name.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| hello_interval.is_set
	|| mtu_ignore.is_set
	|| packet_size.is_set
	|| passive.is_set
	|| retransmit_interval.is_set
	|| running.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (cost_fallback !=  nullptr && cost_fallback->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(database_filter.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(packet_size.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (cost_fallback !=  nullptr && cost_fallback->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area-interface-scope" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.yfilter)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.yfilter)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "cost-fallback")
    {
        if(cost_fallback == nullptr)
        {
            cost_fallback = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback>();
        }
        return cost_fallback;
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal == nullptr)
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal>();
        }
        return dead_interval_minimal;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(cost_fallback != nullptr)
    {
        children["cost-fallback"] = cost_fallback;
    }

    if(dead_interval_minimal != nullptr)
    {
        children["dead-interval-minimal"] = dead_interval_minimal;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
        database_filter.value_namespace = name_space;
        database_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
        packet_size.value_namespace = name_space;
        packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "database-filter")
    {
        database_filter.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "packet-size")
    {
        packet_size.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "cost-fallback" || name == "dead-interval-minimal" || name == "distribute-list" || name == "fast-reroute" || name == "neighbors" || name == "interface-name" || name == "cost" || name == "database-filter" || name == "hello-interval" || name == "mtu-ignore" || name == "packet-size" || name == "passive" || name == "retransmit-interval" || name == "running" || name == "transmit-delay")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    type->parent = this;

    yang_name = "authentication"; yang_parent_name = "multi-area-interface-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies == nullptr)
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies>();
        }
        return message_digest_keies;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(message_digest_keies != nullptr)
    {
        children["message-digest-keies"] = message_digest_keies;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-keies" || name == "type" || name == "key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{

    yang_name = "message-digest-keies"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{

    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-id" || name == "password")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "type"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authen_type.yfilter)
	|| ydk::is_set(keychain_authen_type.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.yfilter)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.yfilter)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
        authen_type.value_namespace = name_space;
        authen_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type = value;
        keychain_authen_type.value_namespace = name_space;
        keychain_authen_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
        keychain_name.value_namespace = name_space;
        keychain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authen-type")
    {
        authen_type.yfilter = yfilter;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type.yfilter = yfilter;
    }
    if(value_path == "keychain-name")
    {
        keychain_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authen-type" || name == "keychain-authen-type" || name == "keychain-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::CostFallback()
    :
    cost{YType::uint32, "cost"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost-fallback"; yang_parent_name = "multi-area-interface-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::~CostFallback()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::has_data() const
{
    return cost.is_set
	|| threshold.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "threshold")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{

    yang_name = "dead-interval-minimal"; yang_parent_name = "multi-area-interface-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "multiplier")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::DistributeList()
    :
    access_list_name{YType::str, "access-list-name"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "distribute-list"; yang_parent_name = "multi-area-interface-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::~DistributeList()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::has_data() const
{
    return access_list_name.is_set
	|| route_policy_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-name" || name == "route-policy-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "multi-area-interface-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_enable.yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.yfilter)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_link != nullptr)
    {
        children["per-link"] = per_link;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
        fast_reroute_enable.value_namespace = name_space;
        fast_reroute_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix" || name == "fast-reroute-enable")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"},
    topology_independent_lfa{YType::boolean, "topology-independent-lfa"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces>())
	,remote_lfa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa>())
	,tiebreakers(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;
    remote_lfa->parent = this;
    tiebreakers->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| topology_independent_lfa.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data())
	|| (tiebreakers !=  nullptr && tiebreakers->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| ydk::is_set(topology_independent_lfa.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation())
	|| (tiebreakers !=  nullptr && tiebreakers->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());
    if (topology_independent_lfa.is_set || is_set(topology_independent_lfa.yfilter)) leaf_name_data.push_back(topology_independent_lfa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa>();
        }
        return remote_lfa;
    }

    if(child_yang_name == "tiebreakers")
    {
        if(tiebreakers == nullptr)
        {
            tiebreakers = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers>();
        }
        return tiebreakers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    if(remote_lfa != nullptr)
    {
        children["remote-lfa"] = remote_lfa;
    }

    if(tiebreakers != nullptr)
    {
        children["tiebreakers"] = tiebreakers;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-independent-lfa")
    {
        topology_independent_lfa = value;
        topology_independent_lfa.value_namespace = name_space;
        topology_independent_lfa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
    if(value_path == "topology-independent-lfa")
    {
        topology_independent_lfa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "remote-lfa" || name == "tiebreakers" || name == "fast-reroute-use-candidate-only" || name == "topology-independent-lfa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::RemoteLfa()
    :
    maximum_cost{YType::uint32, "maximum-cost"},
    tunnel{YType::enumeration, "tunnel"}
{

    yang_name = "remote-lfa"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::~RemoteLfa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::has_data() const
{
    return maximum_cost.is_set
	|| tunnel.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_cost.yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cost.is_set || is_set(maximum_cost.yfilter)) leaf_name_data.push_back(maximum_cost.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost = value;
        maximum_cost.value_namespace = name_space;
        maximum_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-cost" || name == "tunnel")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreakers()
{

    yang_name = "tiebreakers"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::~Tiebreakers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::has_data() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::has_operation() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tiebreaker")
    {
        for(auto const & c : tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker>();
        c->parent = this;
        tiebreaker.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tiebreaker)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::Tiebreaker()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{

    yang_name = "tiebreaker"; yang_parent_name = "tiebreakers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::~Tiebreaker()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tiebreaker_type.yfilter)
	|| ydk::is_set(tiebreaker_index.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreaker" <<"[tiebreaker-type='" <<tiebreaker_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.yfilter)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.yfilter)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker-type" || name == "tiebreaker-index")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "multi-area-interface-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::~Neighbors()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint32, "priority"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| poll_interval.is_set
	|| priority.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(database_filter.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.yfilter)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
        database_filter.value_namespace = name_space;
        database_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "database-filter")
    {
        database_filter.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "cost" || name == "database-filter" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScopes()
{

    yang_name = "name-scopes"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::~NameScopes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::has_data() const
{
    for (std::size_t index=0; index<name_scope.size(); index++)
    {
        if(name_scope[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::has_operation() const
{
    for (std::size_t index=0; index<name_scope.size(); index++)
    {
        if(name_scope[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-scopes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-scope")
    {
        for(auto const & c : name_scope)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope>();
        c->parent = this;
        name_scope.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : name_scope)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-scope")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::NameScope()
    :
    interface_name{YType::str, "interface-name"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    demand_circuit{YType::boolean, "demand-circuit"},
    flood_reduction{YType::boolean, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    ldp_auto_config{YType::empty, "ldp-auto-config"},
    ldp_sync{YType::boolean, "ldp-sync"},
    ldp_sync_igp_shortcuts{YType::boolean, "ldp-sync-igp-shortcuts"},
    link_down_fast_detect{YType::boolean, "link-down-fast-detect"},
    loopback_stub_network{YType::boolean, "loopback-stub-network"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    network_type{YType::enumeration, "network-type"},
    packet_size{YType::uint32, "packet-size"},
    passive{YType::boolean, "passive"},
    prefix_suppression_primary{YType::boolean, "prefix-suppression-primary"},
    prefix_suppression_secondary{YType::boolean, "prefix-suppression-secondary"},
    priority{YType::uint32, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    running{YType::empty, "running"},
    segment_routing_forwarding{YType::enumeration, "segment-routing-forwarding"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication>())
	,bfd(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd>())
	,cost_fallback(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal>())
	,distribute_list(nullptr) // presence node
	,fast_reroute(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute>())
	,neighbors(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors>())
	,prefix_sid(nullptr) // presence node
	,prefix_sid_strict(nullptr) // presence node
	,security(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security>())
{
    authentication->parent = this;
    bfd->parent = this;
    cost_fallback->parent = this;
    dead_interval_minimal->parent = this;
    fast_reroute->parent = this;
    neighbors->parent = this;
    security->parent = this;

    yang_name = "name-scope"; yang_parent_name = "name-scopes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::~NameScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::has_data() const
{
    return interface_name.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| demand_circuit.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| ldp_auto_config.is_set
	|| ldp_sync.is_set
	|| ldp_sync_igp_shortcuts.is_set
	|| link_down_fast_detect.is_set
	|| loopback_stub_network.is_set
	|| mtu_ignore.is_set
	|| network_type.is_set
	|| packet_size.is_set
	|| passive.is_set
	|| prefix_suppression_primary.is_set
	|| prefix_suppression_secondary.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| running.is_set
	|| segment_routing_forwarding.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost_fallback !=  nullptr && cost_fallback->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (prefix_sid !=  nullptr && prefix_sid->has_data())
	|| (prefix_sid_strict !=  nullptr && prefix_sid_strict->has_data())
	|| (security !=  nullptr && security->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(database_filter.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(ldp_auto_config.yfilter)
	|| ydk::is_set(ldp_sync.yfilter)
	|| ydk::is_set(ldp_sync_igp_shortcuts.yfilter)
	|| ydk::is_set(link_down_fast_detect.yfilter)
	|| ydk::is_set(loopback_stub_network.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(network_type.yfilter)
	|| ydk::is_set(packet_size.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(prefix_suppression_primary.yfilter)
	|| ydk::is_set(prefix_suppression_secondary.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(segment_routing_forwarding.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost_fallback !=  nullptr && cost_fallback->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (prefix_sid !=  nullptr && prefix_sid->has_operation())
	|| (prefix_sid_strict !=  nullptr && prefix_sid_strict->has_operation())
	|| (security !=  nullptr && security->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-scope" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.yfilter)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (ldp_auto_config.is_set || is_set(ldp_auto_config.yfilter)) leaf_name_data.push_back(ldp_auto_config.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.yfilter)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (ldp_sync_igp_shortcuts.is_set || is_set(ldp_sync_igp_shortcuts.yfilter)) leaf_name_data.push_back(ldp_sync_igp_shortcuts.get_name_leafdata());
    if (link_down_fast_detect.is_set || is_set(link_down_fast_detect.yfilter)) leaf_name_data.push_back(link_down_fast_detect.get_name_leafdata());
    if (loopback_stub_network.is_set || is_set(loopback_stub_network.yfilter)) leaf_name_data.push_back(loopback_stub_network.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.yfilter)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.yfilter)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression_primary.is_set || is_set(prefix_suppression_primary.yfilter)) leaf_name_data.push_back(prefix_suppression_primary.get_name_leafdata());
    if (prefix_suppression_secondary.is_set || is_set(prefix_suppression_secondary.yfilter)) leaf_name_data.push_back(prefix_suppression_secondary.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (segment_routing_forwarding.is_set || is_set(segment_routing_forwarding.yfilter)) leaf_name_data.push_back(segment_routing_forwarding.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost-fallback")
    {
        if(cost_fallback == nullptr)
        {
            cost_fallback = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback>();
        }
        return cost_fallback;
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal == nullptr)
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal>();
        }
        return dead_interval_minimal;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "prefix-sid")
    {
        if(prefix_sid == nullptr)
        {
            prefix_sid = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid>();
        }
        return prefix_sid;
    }

    if(child_yang_name == "prefix-sid-strict")
    {
        if(prefix_sid_strict == nullptr)
        {
            prefix_sid_strict = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict>();
        }
        return prefix_sid_strict;
    }

    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security>();
        }
        return security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cost_fallback != nullptr)
    {
        children["cost-fallback"] = cost_fallback;
    }

    if(dead_interval_minimal != nullptr)
    {
        children["dead-interval-minimal"] = dead_interval_minimal;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(prefix_sid != nullptr)
    {
        children["prefix-sid"] = prefix_sid;
    }

    if(prefix_sid_strict != nullptr)
    {
        children["prefix-sid-strict"] = prefix_sid_strict;
    }

    if(security != nullptr)
    {
        children["security"] = security;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
        database_filter.value_namespace = name_space;
        database_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-auto-config")
    {
        ldp_auto_config = value;
        ldp_auto_config.value_namespace = name_space;
        ldp_auto_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
        ldp_sync.value_namespace = name_space;
        ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-sync-igp-shortcuts")
    {
        ldp_sync_igp_shortcuts = value;
        ldp_sync_igp_shortcuts.value_namespace = name_space;
        ldp_sync_igp_shortcuts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-down-fast-detect")
    {
        link_down_fast_detect = value;
        link_down_fast_detect.value_namespace = name_space;
        link_down_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback-stub-network")
    {
        loopback_stub_network = value;
        loopback_stub_network.value_namespace = name_space;
        loopback_stub_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-type")
    {
        network_type = value;
        network_type.value_namespace = name_space;
        network_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
        packet_size.value_namespace = name_space;
        packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression-primary")
    {
        prefix_suppression_primary = value;
        prefix_suppression_primary.value_namespace = name_space;
        prefix_suppression_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression-secondary")
    {
        prefix_suppression_secondary = value;
        prefix_suppression_secondary.value_namespace = name_space;
        prefix_suppression_secondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-forwarding")
    {
        segment_routing_forwarding = value;
        segment_routing_forwarding.value_namespace = name_space;
        segment_routing_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "database-filter")
    {
        database_filter.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "ldp-auto-config")
    {
        ldp_auto_config.yfilter = yfilter;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync.yfilter = yfilter;
    }
    if(value_path == "ldp-sync-igp-shortcuts")
    {
        ldp_sync_igp_shortcuts.yfilter = yfilter;
    }
    if(value_path == "link-down-fast-detect")
    {
        link_down_fast_detect.yfilter = yfilter;
    }
    if(value_path == "loopback-stub-network")
    {
        loopback_stub_network.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "network-type")
    {
        network_type.yfilter = yfilter;
    }
    if(value_path == "packet-size")
    {
        packet_size.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression-primary")
    {
        prefix_suppression_primary.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression-secondary")
    {
        prefix_suppression_secondary.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "segment-routing-forwarding")
    {
        segment_routing_forwarding.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bfd" || name == "cost-fallback" || name == "dead-interval-minimal" || name == "distribute-list" || name == "fast-reroute" || name == "neighbors" || name == "prefix-sid" || name == "prefix-sid-strict" || name == "security" || name == "interface-name" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "flood-reduction" || name == "hello-interval" || name == "ldp-auto-config" || name == "ldp-sync" || name == "ldp-sync-igp-shortcuts" || name == "link-down-fast-detect" || name == "loopback-stub-network" || name == "mtu-ignore" || name == "network-type" || name == "packet-size" || name == "passive" || name == "prefix-suppression-primary" || name == "prefix-suppression-secondary" || name == "priority" || name == "retransmit-interval" || name == "running" || name == "segment-routing-forwarding" || name == "transmit-delay")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    type->parent = this;

    yang_name = "authentication"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies == nullptr)
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies>();
        }
        return message_digest_keies;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(message_digest_keies != nullptr)
    {
        children["message-digest-keies"] = message_digest_keies;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-keies" || name == "type" || name == "key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{

    yang_name = "message-digest-keies"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{

    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-id" || name == "password")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "type"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authen_type.yfilter)
	|| ydk::is_set(keychain_authen_type.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.yfilter)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.yfilter)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
        authen_type.value_namespace = name_space;
        authen_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type = value;
        keychain_authen_type.value_namespace = name_space;
        keychain_authen_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
        keychain_name.value_namespace = name_space;
        keychain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authen-type")
    {
        authen_type.yfilter = yfilter;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type.yfilter = yfilter;
    }
    if(value_path == "keychain-name")
    {
        keychain_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authen-type" || name == "keychain-authen-type" || name == "keychain-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{

    yang_name = "bfd"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::~Bfd()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| fast_detect_mode.is_set
	|| interval.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(fast_detect_mode.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.yfilter)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
        fast_detect_mode.value_namespace = name_space;
        fast_detect_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "fast-detect-mode" || name == "interval")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::CostFallback()
    :
    cost{YType::uint32, "cost"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost-fallback"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::~CostFallback()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::has_data() const
{
    return cost.is_set
	|| threshold.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "threshold")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{

    yang_name = "dead-interval-minimal"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "multiplier")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::DistributeList()
    :
    access_list_name{YType::str, "access-list-name"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "distribute-list"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::~DistributeList()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::has_data() const
{
    return access_list_name.is_set
	|| route_policy_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-name" || name == "route-policy-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_enable.yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.yfilter)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_link != nullptr)
    {
        children["per-link"] = per_link;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
        fast_reroute_enable.value_namespace = name_space;
        fast_reroute_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix" || name == "fast-reroute-enable")
        return true;
    return false;
}


}
}

