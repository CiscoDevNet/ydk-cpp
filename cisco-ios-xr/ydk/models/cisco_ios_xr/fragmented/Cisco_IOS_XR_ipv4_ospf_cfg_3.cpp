
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_cfg_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_cfg {

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"},
    topology_independent_lfa{YType::boolean, "topology-independent-lfa"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces>())
	,remote_lfa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa>())
	,tiebreakers(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;
    remote_lfa->parent = this;
    tiebreakers->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| topology_independent_lfa.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data())
	|| (tiebreakers !=  nullptr && tiebreakers->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| ydk::is_set(topology_independent_lfa.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation())
	|| (tiebreakers !=  nullptr && tiebreakers->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());
    if (topology_independent_lfa.is_set || is_set(topology_independent_lfa.yfilter)) leaf_name_data.push_back(topology_independent_lfa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa>();
        }
        return remote_lfa;
    }

    if(child_yang_name == "tiebreakers")
    {
        if(tiebreakers == nullptr)
        {
            tiebreakers = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers>();
        }
        return tiebreakers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "remote-lfa" || name == "tiebreakers" || name == "fast-reroute-use-candidate-only" || name == "topology-independent-lfa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::RemoteLfa()
    :
    maximum_cost{YType::uint32, "maximum-cost"},
    tunnel{YType::enumeration, "tunnel"}
{

    yang_name = "remote-lfa"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::~RemoteLfa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::has_data() const
{
    return maximum_cost.is_set
	|| tunnel.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_cost.yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cost.is_set || is_set(maximum_cost.yfilter)) leaf_name_data.push_back(maximum_cost.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-cost" || name == "tunnel")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreakers()
{

    yang_name = "tiebreakers"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::~Tiebreakers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::has_data() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::has_operation() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker>();
        c->parent = this;
        tiebreaker.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tiebreaker)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::Tiebreaker()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{

    yang_name = "tiebreaker"; yang_parent_name = "tiebreakers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::~Tiebreaker()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tiebreaker_type.yfilter)
	|| ydk::is_set(tiebreaker_index.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreaker" <<"[tiebreaker-type='" <<tiebreaker_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.yfilter)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.yfilter)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker-type" || name == "tiebreaker-index")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::~Neighbors()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint32, "priority"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| poll_interval.is_set
	|| priority.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(database_filter.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.yfilter)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "cost" || name == "database-filter" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::PrefixSid()
    :
    explicit_null{YType::boolean, "explicit-null"},
    n_flag_clear{YType::boolean, "n-flag-clear"},
    sid_value{YType::uint32, "sid-value"},
    type{YType::enumeration, "type"}
{

    yang_name = "prefix-sid"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::~PrefixSid()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::has_data() const
{
    return explicit_null.is_set
	|| n_flag_clear.is_set
	|| sid_value.is_set
	|| type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(n_flag_clear.yfilter)
	|| ydk::is_set(sid_value.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (n_flag_clear.is_set || is_set(n_flag_clear.yfilter)) leaf_name_data.push_back(n_flag_clear.get_name_leafdata());
    if (sid_value.is_set || is_set(sid_value.yfilter)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null" || name == "n-flag-clear" || name == "sid-value" || name == "type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::PrefixSidStrict()
    :
    explicit_null{YType::boolean, "explicit-null"},
    n_flag_clear{YType::boolean, "n-flag-clear"},
    sid_value{YType::uint32, "sid-value"},
    type{YType::enumeration, "type"}
{

    yang_name = "prefix-sid-strict"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::~PrefixSidStrict()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::has_data() const
{
    return explicit_null.is_set
	|| n_flag_clear.is_set
	|| sid_value.is_set
	|| type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(n_flag_clear.yfilter)
	|| ydk::is_set(sid_value.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-strict";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (n_flag_clear.is_set || is_set(n_flag_clear.yfilter)) leaf_name_data.push_back(n_flag_clear.get_name_leafdata());
    if (sid_value.is_set || is_set(sid_value.yfilter)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null" || name == "n-flag-clear" || name == "sid-value" || name == "type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Security()
    :
    ttl(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl>())
{
    ttl->parent = this;

    yang_name = "security"; yang_parent_name = "name-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::~Security()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::has_data() const
{
    return (ttl !=  nullptr && ttl->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::has_operation() const
{
    return is_set(yfilter)
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl>();
        }
        return ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::Ttl()
    :
    enable{YType::boolean, "enable"},
    hop_count{YType::uint32, "hop-count"}
{

    yang_name = "ttl"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::~Ttl()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::has_data() const
{
    return enable.is_set
	|| hop_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hop_count.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.yfilter)) leaf_name_data.push_back(hop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "hop-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::Nssa()
    :
    default_info_originate{YType::boolean, "default-info-originate"},
    metric_type{YType::enumeration, "metric-type"},
    no_redistribution{YType::boolean, "no-redistribution"},
    no_summary{YType::boolean, "no-summary"},
    nssa_def_metric{YType::uint32, "nssa-def-metric"}
{

    yang_name = "nssa"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::~Nssa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::has_data() const
{
    return default_info_originate.is_set
	|| metric_type.is_set
	|| no_redistribution.is_set
	|| no_summary.is_set
	|| nssa_def_metric.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_info_originate.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(no_redistribution.yfilter)
	|| ydk::is_set(no_summary.yfilter)
	|| ydk::is_set(nssa_def_metric.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_info_originate.is_set || is_set(default_info_originate.yfilter)) leaf_name_data.push_back(default_info_originate.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (no_redistribution.is_set || is_set(no_redistribution.yfilter)) leaf_name_data.push_back(no_redistribution.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.yfilter)) leaf_name_data.push_back(no_summary.get_name_leafdata());
    if (nssa_def_metric.is_set || is_set(nssa_def_metric.yfilter)) leaf_name_data.push_back(nssa_def_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-info-originate" || name == "metric-type" || name == "no-redistribution" || name == "no-summary" || name == "nssa-def-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScopes()
{

    yang_name = "sham-link-scopes"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::~ShamLinkScopes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::has_data() const
{
    for (std::size_t index=0; index<sham_link_scope.size(); index++)
    {
        if(sham_link_scope[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::has_operation() const
{
    for (std::size_t index=0; index<sham_link_scope.size(); index++)
    {
        if(sham_link_scope[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link-scopes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope>();
        c->parent = this;
        sham_link_scope.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sham_link_scope)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sham-link-scope")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::ShamLinkScope()
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
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal>())
{
    authentication->parent = this;
    dead_interval_minimal->parent = this;

    yang_name = "sham-link-scope"; yang_parent_name = "sham-link-scopes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::~ShamLinkScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link-scope" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal == nullptr)
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal>();
        }
        return dead_interval_minimal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "dead-interval-minimal" || name == "source-address" || name == "destination-address" || name == "cost" || name == "hello-interval" || name == "retransmit-interval" || name == "running" || name == "source" || name == "transmit-delay")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    type->parent = this;

    yang_name = "authentication"; yang_parent_name = "sham-link-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies == nullptr)
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies>();
        }
        return message_digest_keies;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-keies" || name == "type" || name == "key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{

    yang_name = "message-digest-keies"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{

    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-id" || name == "password")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "type"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authen_type.yfilter)
	|| ydk::is_set(keychain_authen_type.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.yfilter)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.yfilter)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authen-type" || name == "keychain-authen-type" || name == "keychain-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{

    yang_name = "dead-interval-minimal"; yang_parent_name = "sham-link-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "multiplier")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScopes()
{

    yang_name = "virtual-link-scopes"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::~VirtualLinkScopes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::has_data() const
{
    for (std::size_t index=0; index<virtual_link_scope.size(); index++)
    {
        if(virtual_link_scope[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::has_operation() const
{
    for (std::size_t index=0; index<virtual_link_scope.size(); index++)
    {
        if(virtual_link_scope[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link-scopes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope>();
        c->parent = this;
        virtual_link_scope.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtual_link_scope)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-link-scope")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::VirtualLinkScope()
    :
    address{YType::str, "address"},
    hello_interval{YType::uint32, "hello-interval"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    running{YType::empty, "running"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal>())
{
    authentication->parent = this;
    dead_interval_minimal->parent = this;

    yang_name = "virtual-link-scope"; yang_parent_name = "virtual-link-scopes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::~VirtualLinkScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::has_data() const
{
    return address.is_set
	|| hello_interval.is_set
	|| retransmit_interval.is_set
	|| running.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link-scope" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal == nullptr)
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal>();
        }
        return dead_interval_minimal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "dead-interval-minimal" || name == "address" || name == "hello-interval" || name == "retransmit-interval" || name == "running" || name == "transmit-delay")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    type->parent = this;

    yang_name = "authentication"; yang_parent_name = "virtual-link-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies == nullptr)
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies>();
        }
        return message_digest_keies;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-keies" || name == "type" || name == "key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{

    yang_name = "message-digest-keies"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{

    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-id" || name == "password")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "type"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authen_type.yfilter)
	|| ydk::is_set(keychain_authen_type.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.yfilter)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.yfilter)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authen-type" || name == "keychain-authen-type" || name == "keychain-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{

    yang_name = "dead-interval-minimal"; yang_parent_name = "virtual-link-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "multiplier")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AutoCost::AutoCost()
    :
    bandwidth{YType::uint32, "bandwidth"},
    disable{YType::boolean, "disable"}
{

    yang_name = "auto-cost"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AutoCost::~AutoCost()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AutoCost::has_data() const
{
    return bandwidth.is_set
	|| disable.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AutoCost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AutoCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AutoCost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AutoCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AutoCost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AutoCost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AutoCost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AutoCost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "disable")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::DefaultInformation()
    :
    always_advertise{YType::boolean, "always-advertise"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "default-information"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::~DefaultInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::has_data() const
{
    return always_advertise.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_policy_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always_advertise.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always_advertise.is_set || is_set(always_advertise.yfilter)) leaf_name_data.push_back(always_advertise.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always-advertise")
    {
        always_advertise = value;
        always_advertise.value_namespace = name_space;
        always_advertise.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always-advertise")
    {
        always_advertise.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always-advertise" || name == "metric" || name == "metric-type" || name == "route-policy-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Distance::Distance()
    :
    admin_distance{YType::uint32, "admin-distance"}
    	,
    ip_distances(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances>())
	,ospf_distance(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance>())
{
    ip_distances->parent = this;
    ospf_distance->parent = this;

    yang_name = "distance"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Distance::~Distance()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::has_data() const
{
    return admin_distance.is_set
	|| (ip_distances !=  nullptr && ip_distances->has_data())
	|| (ospf_distance !=  nullptr && ospf_distance->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_distance.yfilter)
	|| (ip_distances !=  nullptr && ip_distances->has_operation())
	|| (ospf_distance !=  nullptr && ospf_distance->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_distance.is_set || is_set(admin_distance.yfilter)) leaf_name_data.push_back(admin_distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-distances")
    {
        if(ip_distances == nullptr)
        {
            ip_distances = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances>();
        }
        return ip_distances;
    }

    if(child_yang_name == "ospf-distance")
    {
        if(ospf_distance == nullptr)
        {
            ospf_distance = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance>();
        }
        return ospf_distance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_distances != nullptr)
    {
        children["ip-distances"] = ip_distances;
    }

    if(ospf_distance != nullptr)
    {
        children["ospf-distance"] = ospf_distance;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-distance")
    {
        admin_distance = value;
        admin_distance.value_namespace = name_space;
        admin_distance.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-distance")
    {
        admin_distance.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-distances" || name == "ospf-distance" || name == "admin-distance")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistances()
{

    yang_name = "ip-distances"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::~IpDistances()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::has_data() const
{
    for (std::size_t index=0; index<ip_distance.size(); index++)
    {
        if(ip_distance[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::has_operation() const
{
    for (std::size_t index=0; index<ip_distance.size(); index++)
    {
        if(ip_distance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-distances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-distance")
    {
        for(auto const & c : ip_distance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance>();
        c->parent = this;
        ip_distance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_distance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-distance")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::IpDistance()
    :
    address{YType::str, "address"},
    wildcard{YType::str, "wildcard"},
    access_list_name{YType::str, "access-list-name"},
    distance{YType::uint32, "distance"}
{

    yang_name = "ip-distance"; yang_parent_name = "ip-distances"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::~IpDistance()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::has_data() const
{
    return address.is_set
	|| wildcard.is_set
	|| access_list_name.is_set
	|| distance.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(wildcard.yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(distance.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-distance" <<"[address='" <<address <<"']" <<"[wildcard='" <<wildcard <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (wildcard.is_set || is_set(wildcard.yfilter)) leaf_name_data.push_back(wildcard.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wildcard")
    {
        wildcard = value;
        wildcard.value_namespace = name_space;
        wildcard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "wildcard")
    {
        wildcard.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "wildcard" || name == "access-list-name" || name == "distance")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::OspfDistance()
    :
    external_routes{YType::uint32, "external-routes"},
    inter_area{YType::uint32, "inter-area"},
    intra_area{YType::uint32, "intra-area"}
{

    yang_name = "ospf-distance"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::~OspfDistance()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::has_data() const
{
    return external_routes.is_set
	|| inter_area.is_set
	|| intra_area.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(inter_area.yfilter)
	|| ydk::is_set(intra_area.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (inter_area.is_set || is_set(inter_area.yfilter)) leaf_name_data.push_back(inter_area.get_name_leafdata());
    if (intra_area.is_set || is_set(intra_area.yfilter)) leaf_name_data.push_back(intra_area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area")
    {
        inter_area = value;
        inter_area.value_namespace = name_space;
        inter_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intra-area")
    {
        intra_area = value;
        intra_area.value_namespace = name_space;
        intra_area.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "inter-area")
    {
        inter_area.yfilter = yfilter;
    }
    if(value_path == "intra-area")
    {
        intra_area.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "inter-area" || name == "intra-area")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::DomainId::DomainId()
    :
    primary_domain_id(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId>())
	,secondary_domain_ids(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds>())
{
    primary_domain_id->parent = this;
    secondary_domain_ids->parent = this;

    yang_name = "domain-id"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::DomainId::~DomainId()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::has_data() const
{
    return (primary_domain_id !=  nullptr && primary_domain_id->has_data())
	|| (secondary_domain_ids !=  nullptr && secondary_domain_ids->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::has_operation() const
{
    return is_set(yfilter)
	|| (primary_domain_id !=  nullptr && primary_domain_id->has_operation())
	|| (secondary_domain_ids !=  nullptr && secondary_domain_ids->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::DomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::DomainId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::DomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-domain-id")
    {
        if(primary_domain_id == nullptr)
        {
            primary_domain_id = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId>();
        }
        return primary_domain_id;
    }

    if(child_yang_name == "secondary-domain-ids")
    {
        if(secondary_domain_ids == nullptr)
        {
            secondary_domain_ids = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds>();
        }
        return secondary_domain_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::DomainId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(primary_domain_id != nullptr)
    {
        children["primary-domain-id"] = primary_domain_id;
    }

    if(secondary_domain_ids != nullptr)
    {
        children["secondary-domain-ids"] = secondary_domain_ids;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::DomainId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::DomainId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-domain-id" || name == "secondary-domain-ids")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::PrimaryDomainId()
    :
    domain_id_name{YType::str, "domain-id-name"},
    domain_id_type{YType::enumeration, "domain-id-type"}
{

    yang_name = "primary-domain-id"; yang_parent_name = "domain-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::~PrimaryDomainId()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::has_data() const
{
    return domain_id_name.is_set
	|| domain_id_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_id_name.yfilter)
	|| ydk::is_set(domain_id_type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-domain-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_id_name.is_set || is_set(domain_id_name.yfilter)) leaf_name_data.push_back(domain_id_name.get_name_leafdata());
    if (domain_id_type.is_set || is_set(domain_id_type.yfilter)) leaf_name_data.push_back(domain_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-id-name")
    {
        domain_id_name = value;
        domain_id_name.value_namespace = name_space;
        domain_id_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-id-type")
    {
        domain_id_type = value;
        domain_id_type.value_namespace = name_space;
        domain_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-id-name")
    {
        domain_id_name.yfilter = yfilter;
    }
    if(value_path == "domain-id-type")
    {
        domain_id_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-id-name" || name == "domain-id-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainIds()
{

    yang_name = "secondary-domain-ids"; yang_parent_name = "domain-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::~SecondaryDomainIds()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::has_data() const
{
    for (std::size_t index=0; index<secondary_domain_id.size(); index++)
    {
        if(secondary_domain_id[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::has_operation() const
{
    for (std::size_t index=0; index<secondary_domain_id.size(); index++)
    {
        if(secondary_domain_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-domain-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId>();
        c->parent = this;
        secondary_domain_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : secondary_domain_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-domain-id")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::SecondaryDomainId()
    :
    domain_id_type{YType::enumeration, "domain-id-type"},
    domain_id_name{YType::str, "domain-id-name"}
{

    yang_name = "secondary-domain-id"; yang_parent_name = "secondary-domain-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::~SecondaryDomainId()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::has_data() const
{
    return domain_id_type.is_set
	|| domain_id_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_id_type.yfilter)
	|| ydk::is_set(domain_id_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-domain-id" <<"[domain-id-type='" <<domain_id_type <<"']" <<"[domain-id-name='" <<domain_id_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_id_type.is_set || is_set(domain_id_type.yfilter)) leaf_name_data.push_back(domain_id_type.get_name_leafdata());
    if (domain_id_name.is_set || is_set(domain_id_name.yfilter)) leaf_name_data.push_back(domain_id_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-id-type")
    {
        domain_id_type = value;
        domain_id_type.value_namespace = name_space;
        domain_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-id-name")
    {
        domain_id_name = value;
        domain_id_name.value_namespace = name_space;
        domain_id_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-id-type")
    {
        domain_id_type.yfilter = yfilter;
    }
    if(value_path == "domain-id-name")
    {
        domain_id_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-id-type" || name == "domain-id-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::FastReroute()
    :
    per_link(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::has_data() const
{
    return (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::PerLink()
    :
    priority{YType::enumeration, "priority"}
{

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::~PerLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::has_data() const
{
    return priority.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::PerPrefix()
    :
    load_sharing_disable{YType::empty, "load-sharing-disable"},
    priority{YType::enumeration, "priority"}
    	,
    tiebreakers(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers>())
{
    tiebreakers->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::has_data() const
{
    return load_sharing_disable.is_set
	|| priority.is_set
	|| (tiebreakers !=  nullptr && tiebreakers->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_sharing_disable.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (tiebreakers !=  nullptr && tiebreakers->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_sharing_disable.is_set || is_set(load_sharing_disable.yfilter)) leaf_name_data.push_back(load_sharing_disable.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tiebreakers")
    {
        if(tiebreakers == nullptr)
        {
            tiebreakers = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers>();
        }
        return tiebreakers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tiebreakers != nullptr)
    {
        children["tiebreakers"] = tiebreakers;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-sharing-disable")
    {
        load_sharing_disable = value;
        load_sharing_disable.value_namespace = name_space;
        load_sharing_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-sharing-disable")
    {
        load_sharing_disable.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreakers" || name == "load-sharing-disable" || name == "priority")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreakers()
{

    yang_name = "tiebreakers"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::~Tiebreakers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::has_data() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::has_operation() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker>();
        c->parent = this;
        tiebreaker.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tiebreaker)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::Tiebreaker()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{

    yang_name = "tiebreaker"; yang_parent_name = "tiebreakers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::~Tiebreaker()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tiebreaker_type.yfilter)
	|| ydk::is_set(tiebreaker_index.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreaker" <<"[tiebreaker-type='" <<tiebreaker_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.yfilter)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.yfilter)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker-type" || name == "tiebreaker-index")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::MaxLsa()
    :
    max_lsa_ignore_count{YType::uint32, "max-lsa-ignore-count"},
    max_lsa_ignore_time{YType::uint32, "max-lsa-ignore-time"},
    max_lsa_limit{YType::uint32, "max-lsa-limit"},
    max_lsa_reset_time{YType::uint32, "max-lsa-reset-time"},
    max_lsa_threshold{YType::uint32, "max-lsa-threshold"},
    max_lsa_warning_only{YType::boolean, "max-lsa-warning-only"}
{

    yang_name = "max-lsa"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::~MaxLsa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::has_data() const
{
    return max_lsa_ignore_count.is_set
	|| max_lsa_ignore_time.is_set
	|| max_lsa_limit.is_set
	|| max_lsa_reset_time.is_set
	|| max_lsa_threshold.is_set
	|| max_lsa_warning_only.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_lsa_ignore_count.yfilter)
	|| ydk::is_set(max_lsa_ignore_time.yfilter)
	|| ydk::is_set(max_lsa_limit.yfilter)
	|| ydk::is_set(max_lsa_reset_time.yfilter)
	|| ydk::is_set(max_lsa_threshold.yfilter)
	|| ydk::is_set(max_lsa_warning_only.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_lsa_ignore_count.is_set || is_set(max_lsa_ignore_count.yfilter)) leaf_name_data.push_back(max_lsa_ignore_count.get_name_leafdata());
    if (max_lsa_ignore_time.is_set || is_set(max_lsa_ignore_time.yfilter)) leaf_name_data.push_back(max_lsa_ignore_time.get_name_leafdata());
    if (max_lsa_limit.is_set || is_set(max_lsa_limit.yfilter)) leaf_name_data.push_back(max_lsa_limit.get_name_leafdata());
    if (max_lsa_reset_time.is_set || is_set(max_lsa_reset_time.yfilter)) leaf_name_data.push_back(max_lsa_reset_time.get_name_leafdata());
    if (max_lsa_threshold.is_set || is_set(max_lsa_threshold.yfilter)) leaf_name_data.push_back(max_lsa_threshold.get_name_leafdata());
    if (max_lsa_warning_only.is_set || is_set(max_lsa_warning_only.yfilter)) leaf_name_data.push_back(max_lsa_warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-lsa-ignore-count")
    {
        max_lsa_ignore_count = value;
        max_lsa_ignore_count.value_namespace = name_space;
        max_lsa_ignore_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-ignore-time")
    {
        max_lsa_ignore_time = value;
        max_lsa_ignore_time.value_namespace = name_space;
        max_lsa_ignore_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "max-lsa-threshold")
    {
        max_lsa_threshold = value;
        max_lsa_threshold.value_namespace = name_space;
        max_lsa_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsa-warning-only")
    {
        max_lsa_warning_only = value;
        max_lsa_warning_only.value_namespace = name_space;
        max_lsa_warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-lsa-ignore-count")
    {
        max_lsa_ignore_count.yfilter = yfilter;
    }
    if(value_path == "max-lsa-ignore-time")
    {
        max_lsa_ignore_time.yfilter = yfilter;
    }
    if(value_path == "max-lsa-limit")
    {
        max_lsa_limit.yfilter = yfilter;
    }
    if(value_path == "max-lsa-reset-time")
    {
        max_lsa_reset_time.yfilter = yfilter;
    }
    if(value_path == "max-lsa-threshold")
    {
        max_lsa_threshold.yfilter = yfilter;
    }
    if(value_path == "max-lsa-warning-only")
    {
        max_lsa_warning_only.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-lsa-ignore-count" || name == "max-lsa-ignore-time" || name == "max-lsa-limit" || name == "max-lsa-reset-time" || name == "max-lsa-threshold" || name == "max-lsa-warning-only")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetric()
    :
    max_metric_no_abr_off{YType::empty, "max-metric-no-abr-off"}
    	,
    max_metric_always(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways>())
	,max_metric_on_proc_migration(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration>())
	,max_metric_on_proc_restart(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart>())
	,max_metric_on_startup(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup>())
	,max_metric_on_switchover(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover>())
{
    max_metric_always->parent = this;
    max_metric_on_proc_migration->parent = this;
    max_metric_on_proc_restart->parent = this;
    max_metric_on_startup->parent = this;
    max_metric_on_switchover->parent = this;

    yang_name = "max-metric"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::~MaxMetric()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::has_data() const
{
    return max_metric_no_abr_off.is_set
	|| (max_metric_always !=  nullptr && max_metric_always->has_data())
	|| (max_metric_on_proc_migration !=  nullptr && max_metric_on_proc_migration->has_data())
	|| (max_metric_on_proc_restart !=  nullptr && max_metric_on_proc_restart->has_data())
	|| (max_metric_on_startup !=  nullptr && max_metric_on_startup->has_data())
	|| (max_metric_on_switchover !=  nullptr && max_metric_on_switchover->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_metric_no_abr_off.yfilter)
	|| (max_metric_always !=  nullptr && max_metric_always->has_operation())
	|| (max_metric_on_proc_migration !=  nullptr && max_metric_on_proc_migration->has_operation())
	|| (max_metric_on_proc_restart !=  nullptr && max_metric_on_proc_restart->has_operation())
	|| (max_metric_on_startup !=  nullptr && max_metric_on_startup->has_operation())
	|| (max_metric_on_switchover !=  nullptr && max_metric_on_switchover->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_metric_no_abr_off.is_set || is_set(max_metric_no_abr_off.yfilter)) leaf_name_data.push_back(max_metric_no_abr_off.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-metric-always")
    {
        if(max_metric_always == nullptr)
        {
            max_metric_always = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways>();
        }
        return max_metric_always;
    }

    if(child_yang_name == "max-metric-on-proc-migration")
    {
        if(max_metric_on_proc_migration == nullptr)
        {
            max_metric_on_proc_migration = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration>();
        }
        return max_metric_on_proc_migration;
    }

    if(child_yang_name == "max-metric-on-proc-restart")
    {
        if(max_metric_on_proc_restart == nullptr)
        {
            max_metric_on_proc_restart = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart>();
        }
        return max_metric_on_proc_restart;
    }

    if(child_yang_name == "max-metric-on-startup")
    {
        if(max_metric_on_startup == nullptr)
        {
            max_metric_on_startup = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup>();
        }
        return max_metric_on_startup;
    }

    if(child_yang_name == "max-metric-on-switchover")
    {
        if(max_metric_on_switchover == nullptr)
        {
            max_metric_on_switchover = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover>();
        }
        return max_metric_on_switchover;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(max_metric_always != nullptr)
    {
        children["max-metric-always"] = max_metric_always;
    }

    if(max_metric_on_proc_migration != nullptr)
    {
        children["max-metric-on-proc-migration"] = max_metric_on_proc_migration;
    }

    if(max_metric_on_proc_restart != nullptr)
    {
        children["max-metric-on-proc-restart"] = max_metric_on_proc_restart;
    }

    if(max_metric_on_startup != nullptr)
    {
        children["max-metric-on-startup"] = max_metric_on_startup;
    }

    if(max_metric_on_switchover != nullptr)
    {
        children["max-metric-on-switchover"] = max_metric_on_switchover;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-metric-no-abr-off")
    {
        max_metric_no_abr_off = value;
        max_metric_no_abr_off.value_namespace = name_space;
        max_metric_no_abr_off.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-metric-no-abr-off")
    {
        max_metric_no_abr_off.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-metric-always" || name == "max-metric-on-proc-migration" || name == "max-metric-on-proc-restart" || name == "max-metric-on-startup" || name == "max-metric-on-switchover" || name == "max-metric-no-abr-off")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::MaxMetricAlways()
    :
    external_lsa{YType::boolean, "external-lsa"},
    external_lsa_maximum_metric{YType::uint32, "external-lsa-maximum-metric"},
    include_stub{YType::boolean, "include-stub"},
    summary_lsa{YType::boolean, "summary-lsa"},
    summary_lsa_maximum_metric{YType::uint32, "summary-lsa-maximum-metric"}
{

    yang_name = "max-metric-always"; yang_parent_name = "max-metric"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::~MaxMetricAlways()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::has_data() const
{
    return external_lsa.is_set
	|| external_lsa_maximum_metric.is_set
	|| include_stub.is_set
	|| summary_lsa.is_set
	|| summary_lsa_maximum_metric.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_lsa.yfilter)
	|| ydk::is_set(external_lsa_maximum_metric.yfilter)
	|| ydk::is_set(include_stub.yfilter)
	|| ydk::is_set(summary_lsa.yfilter)
	|| ydk::is_set(summary_lsa_maximum_metric.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric-always";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa.is_set || is_set(external_lsa.yfilter)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (external_lsa_maximum_metric.is_set || is_set(external_lsa_maximum_metric.yfilter)) leaf_name_data.push_back(external_lsa_maximum_metric.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.yfilter)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.yfilter)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());
    if (summary_lsa_maximum_metric.is_set || is_set(summary_lsa_maximum_metric.yfilter)) leaf_name_data.push_back(summary_lsa_maximum_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-lsa")
    {
        external_lsa = value;
        external_lsa.value_namespace = name_space;
        external_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric = value;
        external_lsa_maximum_metric.value_namespace = name_space;
        external_lsa_maximum_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
        include_stub.value_namespace = name_space;
        include_stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
        summary_lsa.value_namespace = name_space;
        summary_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric = value;
        summary_lsa_maximum_metric.value_namespace = name_space;
        summary_lsa_maximum_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-lsa")
    {
        external_lsa.yfilter = yfilter;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric.yfilter = yfilter;
    }
    if(value_path == "include-stub")
    {
        include_stub.yfilter = yfilter;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa.yfilter = yfilter;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-lsa" || name == "external-lsa-maximum-metric" || name == "include-stub" || name == "summary-lsa" || name == "summary-lsa-maximum-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::MaxMetricOnProcMigration()
    :
    external_lsa{YType::boolean, "external-lsa"},
    external_lsa_maximum_metric{YType::uint32, "external-lsa-maximum-metric"},
    include_stub{YType::boolean, "include-stub"},
    startup_max{YType::uint32, "startup-max"},
    summary_lsa{YType::boolean, "summary-lsa"},
    summary_lsa_maximum_metric{YType::uint32, "summary-lsa-maximum-metric"},
    wait_for_bgp{YType::boolean, "wait-for-bgp"}
{

    yang_name = "max-metric-on-proc-migration"; yang_parent_name = "max-metric"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::~MaxMetricOnProcMigration()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::has_data() const
{
    return external_lsa.is_set
	|| external_lsa_maximum_metric.is_set
	|| include_stub.is_set
	|| startup_max.is_set
	|| summary_lsa.is_set
	|| summary_lsa_maximum_metric.is_set
	|| wait_for_bgp.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_lsa.yfilter)
	|| ydk::is_set(external_lsa_maximum_metric.yfilter)
	|| ydk::is_set(include_stub.yfilter)
	|| ydk::is_set(startup_max.yfilter)
	|| ydk::is_set(summary_lsa.yfilter)
	|| ydk::is_set(summary_lsa_maximum_metric.yfilter)
	|| ydk::is_set(wait_for_bgp.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric-on-proc-migration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa.is_set || is_set(external_lsa.yfilter)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (external_lsa_maximum_metric.is_set || is_set(external_lsa_maximum_metric.yfilter)) leaf_name_data.push_back(external_lsa_maximum_metric.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.yfilter)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (startup_max.is_set || is_set(startup_max.yfilter)) leaf_name_data.push_back(startup_max.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.yfilter)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());
    if (summary_lsa_maximum_metric.is_set || is_set(summary_lsa_maximum_metric.yfilter)) leaf_name_data.push_back(summary_lsa_maximum_metric.get_name_leafdata());
    if (wait_for_bgp.is_set || is_set(wait_for_bgp.yfilter)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-lsa")
    {
        external_lsa = value;
        external_lsa.value_namespace = name_space;
        external_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric = value;
        external_lsa_maximum_metric.value_namespace = name_space;
        external_lsa_maximum_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
        include_stub.value_namespace = name_space;
        include_stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup-max")
    {
        startup_max = value;
        startup_max.value_namespace = name_space;
        startup_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
        summary_lsa.value_namespace = name_space;
        summary_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric = value;
        summary_lsa_maximum_metric.value_namespace = name_space;
        summary_lsa_maximum_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
        wait_for_bgp.value_namespace = name_space;
        wait_for_bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-lsa")
    {
        external_lsa.yfilter = yfilter;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric.yfilter = yfilter;
    }
    if(value_path == "include-stub")
    {
        include_stub.yfilter = yfilter;
    }
    if(value_path == "startup-max")
    {
        startup_max.yfilter = yfilter;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa.yfilter = yfilter;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric.yfilter = yfilter;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-lsa" || name == "external-lsa-maximum-metric" || name == "include-stub" || name == "startup-max" || name == "summary-lsa" || name == "summary-lsa-maximum-metric" || name == "wait-for-bgp")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::MaxMetricOnProcRestart()
    :
    external_lsa{YType::boolean, "external-lsa"},
    external_lsa_maximum_metric{YType::uint32, "external-lsa-maximum-metric"},
    include_stub{YType::boolean, "include-stub"},
    startup_max{YType::uint32, "startup-max"},
    summary_lsa{YType::boolean, "summary-lsa"},
    summary_lsa_maximum_metric{YType::uint32, "summary-lsa-maximum-metric"},
    wait_for_bgp{YType::boolean, "wait-for-bgp"}
{

    yang_name = "max-metric-on-proc-restart"; yang_parent_name = "max-metric"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::~MaxMetricOnProcRestart()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::has_data() const
{
    return external_lsa.is_set
	|| external_lsa_maximum_metric.is_set
	|| include_stub.is_set
	|| startup_max.is_set
	|| summary_lsa.is_set
	|| summary_lsa_maximum_metric.is_set
	|| wait_for_bgp.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_lsa.yfilter)
	|| ydk::is_set(external_lsa_maximum_metric.yfilter)
	|| ydk::is_set(include_stub.yfilter)
	|| ydk::is_set(startup_max.yfilter)
	|| ydk::is_set(summary_lsa.yfilter)
	|| ydk::is_set(summary_lsa_maximum_metric.yfilter)
	|| ydk::is_set(wait_for_bgp.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric-on-proc-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa.is_set || is_set(external_lsa.yfilter)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (external_lsa_maximum_metric.is_set || is_set(external_lsa_maximum_metric.yfilter)) leaf_name_data.push_back(external_lsa_maximum_metric.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.yfilter)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (startup_max.is_set || is_set(startup_max.yfilter)) leaf_name_data.push_back(startup_max.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.yfilter)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());
    if (summary_lsa_maximum_metric.is_set || is_set(summary_lsa_maximum_metric.yfilter)) leaf_name_data.push_back(summary_lsa_maximum_metric.get_name_leafdata());
    if (wait_for_bgp.is_set || is_set(wait_for_bgp.yfilter)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-lsa")
    {
        external_lsa = value;
        external_lsa.value_namespace = name_space;
        external_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric = value;
        external_lsa_maximum_metric.value_namespace = name_space;
        external_lsa_maximum_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
        include_stub.value_namespace = name_space;
        include_stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup-max")
    {
        startup_max = value;
        startup_max.value_namespace = name_space;
        startup_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
        summary_lsa.value_namespace = name_space;
        summary_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric = value;
        summary_lsa_maximum_metric.value_namespace = name_space;
        summary_lsa_maximum_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
        wait_for_bgp.value_namespace = name_space;
        wait_for_bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-lsa")
    {
        external_lsa.yfilter = yfilter;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric.yfilter = yfilter;
    }
    if(value_path == "include-stub")
    {
        include_stub.yfilter = yfilter;
    }
    if(value_path == "startup-max")
    {
        startup_max.yfilter = yfilter;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa.yfilter = yfilter;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric.yfilter = yfilter;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-lsa" || name == "external-lsa-maximum-metric" || name == "include-stub" || name == "startup-max" || name == "summary-lsa" || name == "summary-lsa-maximum-metric" || name == "wait-for-bgp")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::MaxMetricOnStartup()
    :
    external_lsa{YType::boolean, "external-lsa"},
    external_lsa_maximum_metric{YType::uint32, "external-lsa-maximum-metric"},
    include_stub{YType::boolean, "include-stub"},
    startup_max{YType::uint32, "startup-max"},
    summary_lsa{YType::boolean, "summary-lsa"},
    summary_lsa_maximum_metric{YType::uint32, "summary-lsa-maximum-metric"},
    wait_for_bgp{YType::boolean, "wait-for-bgp"}
{

    yang_name = "max-metric-on-startup"; yang_parent_name = "max-metric"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::~MaxMetricOnStartup()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::has_data() const
{
    return external_lsa.is_set
	|| external_lsa_maximum_metric.is_set
	|| include_stub.is_set
	|| startup_max.is_set
	|| summary_lsa.is_set
	|| summary_lsa_maximum_metric.is_set
	|| wait_for_bgp.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_lsa.yfilter)
	|| ydk::is_set(external_lsa_maximum_metric.yfilter)
	|| ydk::is_set(include_stub.yfilter)
	|| ydk::is_set(startup_max.yfilter)
	|| ydk::is_set(summary_lsa.yfilter)
	|| ydk::is_set(summary_lsa_maximum_metric.yfilter)
	|| ydk::is_set(wait_for_bgp.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric-on-startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa.is_set || is_set(external_lsa.yfilter)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (external_lsa_maximum_metric.is_set || is_set(external_lsa_maximum_metric.yfilter)) leaf_name_data.push_back(external_lsa_maximum_metric.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.yfilter)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (startup_max.is_set || is_set(startup_max.yfilter)) leaf_name_data.push_back(startup_max.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.yfilter)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());
    if (summary_lsa_maximum_metric.is_set || is_set(summary_lsa_maximum_metric.yfilter)) leaf_name_data.push_back(summary_lsa_maximum_metric.get_name_leafdata());
    if (wait_for_bgp.is_set || is_set(wait_for_bgp.yfilter)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-lsa")
    {
        external_lsa = value;
        external_lsa.value_namespace = name_space;
        external_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric = value;
        external_lsa_maximum_metric.value_namespace = name_space;
        external_lsa_maximum_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
        include_stub.value_namespace = name_space;
        include_stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup-max")
    {
        startup_max = value;
        startup_max.value_namespace = name_space;
        startup_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
        summary_lsa.value_namespace = name_space;
        summary_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric = value;
        summary_lsa_maximum_metric.value_namespace = name_space;
        summary_lsa_maximum_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
        wait_for_bgp.value_namespace = name_space;
        wait_for_bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-lsa")
    {
        external_lsa.yfilter = yfilter;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric.yfilter = yfilter;
    }
    if(value_path == "include-stub")
    {
        include_stub.yfilter = yfilter;
    }
    if(value_path == "startup-max")
    {
        startup_max.yfilter = yfilter;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa.yfilter = yfilter;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric.yfilter = yfilter;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-lsa" || name == "external-lsa-maximum-metric" || name == "include-stub" || name == "startup-max" || name == "summary-lsa" || name == "summary-lsa-maximum-metric" || name == "wait-for-bgp")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::MaxMetricOnSwitchover()
    :
    external_lsa{YType::boolean, "external-lsa"},
    external_lsa_maximum_metric{YType::uint32, "external-lsa-maximum-metric"},
    include_stub{YType::boolean, "include-stub"},
    startup_max{YType::uint32, "startup-max"},
    summary_lsa{YType::boolean, "summary-lsa"},
    summary_lsa_maximum_metric{YType::uint32, "summary-lsa-maximum-metric"},
    wait_for_bgp{YType::boolean, "wait-for-bgp"}
{

    yang_name = "max-metric-on-switchover"; yang_parent_name = "max-metric"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::~MaxMetricOnSwitchover()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::has_data() const
{
    return external_lsa.is_set
	|| external_lsa_maximum_metric.is_set
	|| include_stub.is_set
	|| startup_max.is_set
	|| summary_lsa.is_set
	|| summary_lsa_maximum_metric.is_set
	|| wait_for_bgp.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_lsa.yfilter)
	|| ydk::is_set(external_lsa_maximum_metric.yfilter)
	|| ydk::is_set(include_stub.yfilter)
	|| ydk::is_set(startup_max.yfilter)
	|| ydk::is_set(summary_lsa.yfilter)
	|| ydk::is_set(summary_lsa_maximum_metric.yfilter)
	|| ydk::is_set(wait_for_bgp.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric-on-switchover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa.is_set || is_set(external_lsa.yfilter)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (external_lsa_maximum_metric.is_set || is_set(external_lsa_maximum_metric.yfilter)) leaf_name_data.push_back(external_lsa_maximum_metric.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.yfilter)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (startup_max.is_set || is_set(startup_max.yfilter)) leaf_name_data.push_back(startup_max.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.yfilter)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());
    if (summary_lsa_maximum_metric.is_set || is_set(summary_lsa_maximum_metric.yfilter)) leaf_name_data.push_back(summary_lsa_maximum_metric.get_name_leafdata());
    if (wait_for_bgp.is_set || is_set(wait_for_bgp.yfilter)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-lsa")
    {
        external_lsa = value;
        external_lsa.value_namespace = name_space;
        external_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric = value;
        external_lsa_maximum_metric.value_namespace = name_space;
        external_lsa_maximum_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
        include_stub.value_namespace = name_space;
        include_stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup-max")
    {
        startup_max = value;
        startup_max.value_namespace = name_space;
        startup_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
        summary_lsa.value_namespace = name_space;
        summary_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric = value;
        summary_lsa_maximum_metric.value_namespace = name_space;
        summary_lsa_maximum_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
        wait_for_bgp.value_namespace = name_space;
        wait_for_bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-lsa")
    {
        external_lsa.yfilter = yfilter;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric.yfilter = yfilter;
    }
    if(value_path == "include-stub")
    {
        include_stub.yfilter = yfilter;
    }
    if(value_path == "startup-max")
    {
        startup_max.yfilter = yfilter;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa.yfilter = yfilter;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric.yfilter = yfilter;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-lsa" || name == "external-lsa-maximum-metric" || name == "include-stub" || name == "startup-max" || name == "summary-lsa" || name == "summary-lsa-maximum-metric" || name == "wait-for-bgp")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::MaximumRedistributePrefix()
    :
    number_of_prefixes{YType::uint32, "number-of-prefixes"},
    threshold{YType::uint32, "threshold"},
    warning_only{YType::boolean, "warning-only"}
{

    yang_name = "maximum-redistribute-prefix"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::~MaximumRedistributePrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::has_data() const
{
    return number_of_prefixes.is_set
	|| threshold.is_set
	|| warning_only.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_of_prefixes.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-redistribute-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_prefixes.is_set || is_set(number_of_prefixes.yfilter)) leaf_name_data.push_back(number_of_prefixes.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-of-prefixes")
    {
        number_of_prefixes = value;
        number_of_prefixes.value_namespace = name_space;
        number_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-of-prefixes")
    {
        number_of_prefixes.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-of-prefixes" || name == "threshold" || name == "warning-only")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Microloop::Microloop()
    :
    avoidance(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance>())
{
    avoidance->parent = this;

    yang_name = "microloop"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Microloop::~Microloop()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Microloop::has_data() const
{
    return (avoidance !=  nullptr && avoidance->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Microloop::has_operation() const
{
    return is_set(yfilter)
	|| (avoidance !=  nullptr && avoidance->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Microloop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Microloop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Microloop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "avoidance")
    {
        if(avoidance == nullptr)
        {
            avoidance = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance>();
        }
        return avoidance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Microloop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(avoidance != nullptr)
    {
        children["avoidance"] = avoidance;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Microloop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Microloop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Microloop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avoidance")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::Avoidance()
    :
    enable{YType::enumeration, "enable"},
    rib_update_delay{YType::uint32, "rib-update-delay"}
{

    yang_name = "avoidance"; yang_parent_name = "microloop"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::~Avoidance()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::has_data() const
{
    return enable.is_set
	|| rib_update_delay.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(rib_update_delay.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avoidance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (rib_update_delay.is_set || is_set(rib_update_delay.yfilter)) leaf_name_data.push_back(rib_update_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "rib-update-delay")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Nsf::Nsf()
    :
    cisco{YType::enumeration, "cisco"},
    flush_delay_time{YType::uint32, "flush-delay-time"},
    ietf{YType::enumeration, "ietf"},
    ietf_strict_lsa_checking{YType::empty, "ietf-strict-lsa-checking"},
    ietf_support_role{YType::enumeration, "ietf-support-role"},
    interval{YType::uint32, "interval"},
    lifetime{YType::uint32, "lifetime"}
{

    yang_name = "nsf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Nsf::~Nsf()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Nsf::has_data() const
{
    return cisco.is_set
	|| flush_delay_time.is_set
	|| ietf.is_set
	|| ietf_strict_lsa_checking.is_set
	|| ietf_support_role.is_set
	|| interval.is_set
	|| lifetime.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco.yfilter)
	|| ydk::is_set(flush_delay_time.yfilter)
	|| ydk::is_set(ietf.yfilter)
	|| ydk::is_set(ietf_strict_lsa_checking.yfilter)
	|| ydk::is_set(ietf_support_role.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(lifetime.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Nsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.yfilter)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (flush_delay_time.is_set || is_set(flush_delay_time.yfilter)) leaf_name_data.push_back(flush_delay_time.get_name_leafdata());
    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());
    if (ietf_strict_lsa_checking.is_set || is_set(ietf_strict_lsa_checking.yfilter)) leaf_name_data.push_back(ietf_strict_lsa_checking.get_name_leafdata());
    if (ietf_support_role.is_set || is_set(ietf_support_role.yfilter)) leaf_name_data.push_back(ietf_support_role.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco")
    {
        cisco = value;
        cisco.value_namespace = name_space;
        cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush-delay-time")
    {
        flush_delay_time = value;
        flush_delay_time.value_namespace = name_space;
        flush_delay_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-strict-lsa-checking")
    {
        ietf_strict_lsa_checking = value;
        ietf_strict_lsa_checking.value_namespace = name_space;
        ietf_strict_lsa_checking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-support-role")
    {
        ietf_support_role = value;
        ietf_support_role.value_namespace = name_space;
        ietf_support_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco")
    {
        cisco.yfilter = yfilter;
    }
    if(value_path == "flush-delay-time")
    {
        flush_delay_time.yfilter = yfilter;
    }
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
    if(value_path == "ietf-strict-lsa-checking")
    {
        ietf_strict_lsa_checking.yfilter = yfilter;
    }
    if(value_path == "ietf-support-role")
    {
        ietf_support_role.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "flush-delay-time" || name == "ietf" || name == "ietf-strict-lsa-checking" || name == "ietf-support-role" || name == "interval" || name == "lifetime")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdates()
{

    yang_name = "outgoing-route-updates"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::~OutgoingRouteUpdates()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::has_data() const
{
    for (std::size_t index=0; index<outgoing_route_update.size(); index++)
    {
        if(outgoing_route_update[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::has_operation() const
{
    for (std::size_t index=0; index<outgoing_route_update.size(); index++)
    {
        if(outgoing_route_update[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-route-updates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "outgoing-route-update")
    {
        for(auto const & c : outgoing_route_update)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate>();
        c->parent = this;
        outgoing_route_update.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : outgoing_route_update)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-route-update")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::OutgoingRouteUpdate()
    :
    protocol_name{YType::enumeration, "protocol-name"},
    access_list_name{YType::str, "access-list-name"},
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    ospf_process_name{YType::str, "ospf-process-name"}
{

    yang_name = "outgoing-route-update"; yang_parent_name = "outgoing-route-updates"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::~OutgoingRouteUpdate()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::has_data() const
{
    return protocol_name.is_set
	|| access_list_name.is_set
	|| as_xx.is_set
	|| as_yy.is_set
	|| ospf_process_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(ospf_process_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-route-update" <<"[protocol-name='" <<protocol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (ospf_process_name.is_set || is_set(ospf_process_name.yfilter)) leaf_name_data.push_back(ospf_process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "ospf-process-name")
    {
        ospf_process_name = value;
        ospf_process_name.value_namespace = name_space;
        ospf_process_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "ospf-process-name")
    {
        ospf_process_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-name" || name == "access-list-name" || name == "as-xx" || name == "as-yy" || name == "ospf-process-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::ProcessScope()
    :
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    demand_circuit{YType::boolean, "demand-circuit"},
    external_out{YType::boolean, "external-out"},
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
    segment_routing{YType::enumeration, "segment-routing"},
    segment_routing_forwarding{YType::enumeration, "segment-routing-forwarding"},
    summary_in{YType::boolean, "summary-in"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication>())
	,bfd(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd>())
	,cost_fallback(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal>())
	,distribute_list(nullptr) // presence node
	,fast_reroute(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute>())
	,security(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security>())
	,srgb(nullptr) // presence node
{
    authentication->parent = this;
    bfd->parent = this;
    cost_fallback->parent = this;
    dead_interval_minimal->parent = this;
    fast_reroute->parent = this;
    security->parent = this;

    yang_name = "process-scope"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::~ProcessScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::has_data() const
{
    return cost.is_set
	|| database_filter.is_set
	|| demand_circuit.is_set
	|| external_out.is_set
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
	|| segment_routing.is_set
	|| segment_routing_forwarding.is_set
	|| summary_in.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost_fallback !=  nullptr && cost_fallback->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (security !=  nullptr && security->has_data())
	|| (srgb !=  nullptr && srgb->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(database_filter.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(external_out.yfilter)
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
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(segment_routing_forwarding.yfilter)
	|| ydk::is_set(summary_in.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost_fallback !=  nullptr && cost_fallback->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (security !=  nullptr && security->has_operation())
	|| (srgb !=  nullptr && srgb->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.yfilter)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (external_out.is_set || is_set(external_out.yfilter)) leaf_name_data.push_back(external_out.get_name_leafdata());
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
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (segment_routing_forwarding.is_set || is_set(segment_routing_forwarding.yfilter)) leaf_name_data.push_back(segment_routing_forwarding.get_name_leafdata());
    if (summary_in.is_set || is_set(summary_in.yfilter)) leaf_name_data.push_back(summary_in.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost-fallback")
    {
        if(cost_fallback == nullptr)
        {
            cost_fallback = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback>();
        }
        return cost_fallback;
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal == nullptr)
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal>();
        }
        return dead_interval_minimal;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security>();
        }
        return security;
    }

    if(child_yang_name == "srgb")
    {
        if(srgb == nullptr)
        {
            srgb = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb>();
        }
        return srgb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::get_children() const
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

    if(srgb != nullptr)
    {
        children["srgb"] = srgb;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "external-out")
    {
        external_out = value;
        external_out.value_namespace = name_space;
        external_out.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-forwarding")
    {
        segment_routing_forwarding = value;
        segment_routing_forwarding.value_namespace = name_space;
        segment_routing_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-in")
    {
        summary_in = value;
        summary_in.value_namespace = name_space;
        summary_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "external-out")
    {
        external_out.yfilter = yfilter;
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
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "segment-routing-forwarding")
    {
        segment_routing_forwarding.yfilter = yfilter;
    }
    if(value_path == "summary-in")
    {
        summary_in.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bfd" || name == "cost-fallback" || name == "dead-interval-minimal" || name == "distribute-list" || name == "fast-reroute" || name == "security" || name == "srgb" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "external-out" || name == "flood-reduction" || name == "hello-interval" || name == "ldp-auto-config" || name == "ldp-sync" || name == "ldp-sync-igp-shortcuts" || name == "link-down-fast-detect" || name == "loopback-stub-network" || name == "mtu-ignore" || name == "network-type" || name == "packet-size" || name == "passive" || name == "prefix-suppression-primary" || name == "prefix-suppression-secondary" || name == "priority" || name == "retransmit-interval" || name == "segment-routing" || name == "segment-routing-forwarding" || name == "summary-in" || name == "transmit-delay")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    type->parent = this;

    yang_name = "authentication"; yang_parent_name = "process-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies == nullptr)
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies>();
        }
        return message_digest_keies;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-keies" || name == "type" || name == "key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{

    yang_name = "message-digest-keies"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest-key")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{

    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-id" || name == "password")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "type"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authen_type.yfilter)
	|| ydk::is_set(keychain_authen_type.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.yfilter)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.yfilter)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authen-type" || name == "keychain-authen-type" || name == "keychain-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{

    yang_name = "bfd"; yang_parent_name = "process-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::~Bfd()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| fast_detect_mode.is_set
	|| interval.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(fast_detect_mode.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.yfilter)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "fast-detect-mode" || name == "interval")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::CostFallback()
    :
    cost{YType::uint32, "cost"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost-fallback"; yang_parent_name = "process-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::~CostFallback()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::has_data() const
{
    return cost.is_set
	|| threshold.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "threshold")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{

    yang_name = "dead-interval-minimal"; yang_parent_name = "process-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "multiplier")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::DistributeList()
    :
    access_list_name{YType::str, "access-list-name"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "distribute-list"; yang_parent_name = "process-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::~DistributeList()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::has_data() const
{
    return access_list_name.is_set
	|| route_policy_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-name" || name == "route-policy-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "process-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_enable.yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.yfilter)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
        fast_reroute_enable.value_namespace = name_space;
        fast_reroute_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix" || name == "fast-reroute-enable")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"},
    topology_independent_lfa{YType::boolean, "topology-independent-lfa"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces>())
	,remote_lfa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;
    remote_lfa->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| topology_independent_lfa.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| ydk::is_set(topology_independent_lfa.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());
    if (topology_independent_lfa.is_set || is_set(topology_independent_lfa.yfilter)) leaf_name_data.push_back(topology_independent_lfa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa>();
        }
        return remote_lfa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::get_children() const
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

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "remote-lfa" || name == "fast-reroute-use-candidate-only" || name == "topology-independent-lfa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::RemoteLfa()
    :
    maximum_cost{YType::uint32, "maximum-cost"},
    tunnel{YType::enumeration, "tunnel"}
{

    yang_name = "remote-lfa"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::~RemoteLfa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::has_data() const
{
    return maximum_cost.is_set
	|| tunnel.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_cost.yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cost.is_set || is_set(maximum_cost.yfilter)) leaf_name_data.push_back(maximum_cost.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-cost" || name == "tunnel")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Security()
    :
    ttl(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl>())
{
    ttl->parent = this;

    yang_name = "security"; yang_parent_name = "process-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::~Security()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::has_data() const
{
    return (ttl !=  nullptr && ttl->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::has_operation() const
{
    return is_set(yfilter)
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl>();
        }
        return ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::Ttl()
    :
    enable{YType::boolean, "enable"},
    hop_count{YType::uint32, "hop-count"}
{

    yang_name = "ttl"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::~Ttl()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::has_data() const
{
    return enable.is_set
	|| hop_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hop_count.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.yfilter)) leaf_name_data.push_back(hop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "hop-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::Srgb()
    :
    lower_bound{YType::uint32, "lower-bound"},
    upper_bound{YType::uint32, "upper-bound"}
{

    yang_name = "srgb"; yang_parent_name = "process-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::~Srgb()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::has_data() const
{
    return lower_bound.is_set
	|| upper_bound.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_bound.yfilter)
	|| ydk::is_set(upper_bound.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_bound.is_set || is_set(lower_bound.yfilter)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.yfilter)) leaf_name_data.push_back(upper_bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-bound" || name == "upper-bound")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Queue::Queue()
    :
    dispatch_incoming{YType::uint32, "dispatch-incoming"},
    dispatch_rate_limited{YType::uint32, "dispatch-rate-limited"},
    dispatch_rate_limited_flush{YType::uint32, "dispatch-rate-limited-flush"},
    dispatch_spf_lsa_limit{YType::uint32, "dispatch-spf-lsa-limit"},
    limit_high{YType::uint32, "limit-high"},
    limit_low{YType::uint32, "limit-low"},
    limit_medium{YType::uint32, "limit-medium"}
{

    yang_name = "queue"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Queue::~Queue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Queue::has_data() const
{
    return dispatch_incoming.is_set
	|| dispatch_rate_limited.is_set
	|| dispatch_rate_limited_flush.is_set
	|| dispatch_spf_lsa_limit.is_set
	|| limit_high.is_set
	|| limit_low.is_set
	|| limit_medium.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dispatch_incoming.yfilter)
	|| ydk::is_set(dispatch_rate_limited.yfilter)
	|| ydk::is_set(dispatch_rate_limited_flush.yfilter)
	|| ydk::is_set(dispatch_spf_lsa_limit.yfilter)
	|| ydk::is_set(limit_high.yfilter)
	|| ydk::is_set(limit_low.yfilter)
	|| ydk::is_set(limit_medium.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dispatch_incoming.is_set || is_set(dispatch_incoming.yfilter)) leaf_name_data.push_back(dispatch_incoming.get_name_leafdata());
    if (dispatch_rate_limited.is_set || is_set(dispatch_rate_limited.yfilter)) leaf_name_data.push_back(dispatch_rate_limited.get_name_leafdata());
    if (dispatch_rate_limited_flush.is_set || is_set(dispatch_rate_limited_flush.yfilter)) leaf_name_data.push_back(dispatch_rate_limited_flush.get_name_leafdata());
    if (dispatch_spf_lsa_limit.is_set || is_set(dispatch_spf_lsa_limit.yfilter)) leaf_name_data.push_back(dispatch_spf_lsa_limit.get_name_leafdata());
    if (limit_high.is_set || is_set(limit_high.yfilter)) leaf_name_data.push_back(limit_high.get_name_leafdata());
    if (limit_low.is_set || is_set(limit_low.yfilter)) leaf_name_data.push_back(limit_low.get_name_leafdata());
    if (limit_medium.is_set || is_set(limit_medium.yfilter)) leaf_name_data.push_back(limit_medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dispatch-incoming")
    {
        dispatch_incoming = value;
        dispatch_incoming.value_namespace = name_space;
        dispatch_incoming.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dispatch-rate-limited")
    {
        dispatch_rate_limited = value;
        dispatch_rate_limited.value_namespace = name_space;
        dispatch_rate_limited.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dispatch-rate-limited-flush")
    {
        dispatch_rate_limited_flush = value;
        dispatch_rate_limited_flush.value_namespace = name_space;
        dispatch_rate_limited_flush.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dispatch-spf-lsa-limit")
    {
        dispatch_spf_lsa_limit = value;
        dispatch_spf_lsa_limit.value_namespace = name_space;
        dispatch_spf_lsa_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit-high")
    {
        limit_high = value;
        limit_high.value_namespace = name_space;
        limit_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit-low")
    {
        limit_low = value;
        limit_low.value_namespace = name_space;
        limit_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit-medium")
    {
        limit_medium = value;
        limit_medium.value_namespace = name_space;
        limit_medium.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dispatch-incoming")
    {
        dispatch_incoming.yfilter = yfilter;
    }
    if(value_path == "dispatch-rate-limited")
    {
        dispatch_rate_limited.yfilter = yfilter;
    }
    if(value_path == "dispatch-rate-limited-flush")
    {
        dispatch_rate_limited_flush.yfilter = yfilter;
    }
    if(value_path == "dispatch-spf-lsa-limit")
    {
        dispatch_spf_lsa_limit.yfilter = yfilter;
    }
    if(value_path == "limit-high")
    {
        limit_high.yfilter = yfilter;
    }
    if(value_path == "limit-low")
    {
        limit_low.yfilter = yfilter;
    }
    if(value_path == "limit-medium")
    {
        limit_medium.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dispatch-incoming" || name == "dispatch-rate-limited" || name == "dispatch-rate-limited-flush" || name == "dispatch-spf-lsa-limit" || name == "limit-high" || name == "limit-low" || name == "limit-medium")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistribution()
    :
    redistributes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes>())
{
    redistributes->parent = this;

    yang_name = "redistribution"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::~Redistribution()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::has_data() const
{
    return (redistributes !=  nullptr && redistributes->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::has_operation() const
{
    return is_set(yfilter)
	|| (redistributes !=  nullptr && redistributes->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Redistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Redistribution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistributes")
    {
        if(redistributes == nullptr)
        {
            redistributes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes>();
        }
        return redistributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redistributes != nullptr)
    {
        children["redistributes"] = redistributes;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistributes")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistributes()
{

    yang_name = "redistributes"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::~Redistributes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::has_data() const
{
    for (std::size_t index=0; index<redistribute.size(); index++)
    {
        if(redistribute[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::has_operation() const
{
    for (std::size_t index=0; index<redistribute.size(); index++)
    {
        if(redistribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribute")
    {
        for(auto const & c : redistribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute>();
        c->parent = this;
        redistribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : redistribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistribute")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Redistribute()
    :
    protocol_name{YType::enumeration, "protocol-name"}
    	,
    connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip(nullptr) // presence node
{

    yang_name = "redistribute"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::~Redistribute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::has_data() const
{
    for (std::size_t index=0; index<application_or_isis_or_ospf.size(); index++)
    {
        if(application_or_isis_or_ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return protocol_name.is_set
	|| (connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip !=  nullptr && connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<application_or_isis_or_ospf.size(); index++)
    {
        if(application_or_isis_or_ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| (connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip !=  nullptr && connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute" <<"[protocol-name='" <<protocol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-or-isis-or-ospf")
    {
        for(auto const & c : application_or_isis_or_ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf>();
        c->parent = this;
        application_or_isis_or_ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected-or-static-or-dagr-or-subscriber-or-mobile-or-rip")
    {
        if(connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip == nullptr)
        {
            connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip>();
        }
        return connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application_or_isis_or_ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip != nullptr)
    {
        children["connected-or-static-or-dagr-or-subscriber-or-mobile-or-rip"] = connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-or-isis-or-ospf" || name == "bgp" || name == "connected-or-static-or-dagr-or-subscriber-or-mobile-or-rip" || name == "eigrp" || name == "protocol-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::ApplicationOrIsisOrOspf()
    :
    instance_name{YType::str, "instance-name"},
    bgp_preserve_default_info{YType::boolean, "bgp-preserve-default-info"},
    bgp_preserve_med{YType::boolean, "bgp-preserve-med"},
    classful{YType::boolean, "classful"},
    default_redistributed_route_metric{YType::uint32, "default-redistributed-route-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    isis_levels{YType::enumeration, "isis-levels"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_external{YType::enumeration, "ospf-external"},
    ospf_internal{YType::boolean, "ospf-internal"},
    ospf_nssa_level{YType::enumeration, "ospf-nssa-level"},
    ospf_redist_lsa_type{YType::enumeration, "ospf-redist-lsa-type"},
    ospfnssa_only{YType::boolean, "ospfnssa-only"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::uint32, "tag"}
{

    yang_name = "application-or-isis-or-ospf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::~ApplicationOrIsisOrOspf()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::has_data() const
{
    return instance_name.is_set
	|| bgp_preserve_default_info.is_set
	|| bgp_preserve_med.is_set
	|| classful.is_set
	|| default_redistributed_route_metric.is_set
	|| eigrp_route_type.is_set
	|| isis_levels.is_set
	|| metric_type.is_set
	|| ospf_external.is_set
	|| ospf_internal.is_set
	|| ospf_nssa_level.is_set
	|| ospf_redist_lsa_type.is_set
	|| ospfnssa_only.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(bgp_preserve_default_info.yfilter)
	|| ydk::is_set(bgp_preserve_med.yfilter)
	|| ydk::is_set(classful.yfilter)
	|| ydk::is_set(default_redistributed_route_metric.yfilter)
	|| ydk::is_set(eigrp_route_type.yfilter)
	|| ydk::is_set(isis_levels.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(ospf_external.yfilter)
	|| ydk::is_set(ospf_internal.yfilter)
	|| ydk::is_set(ospf_nssa_level.yfilter)
	|| ydk::is_set(ospf_redist_lsa_type.yfilter)
	|| ydk::is_set(ospfnssa_only.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-or-isis-or-ospf" <<"[instance-name='" <<instance_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (bgp_preserve_default_info.is_set || is_set(bgp_preserve_default_info.yfilter)) leaf_name_data.push_back(bgp_preserve_default_info.get_name_leafdata());
    if (bgp_preserve_med.is_set || is_set(bgp_preserve_med.yfilter)) leaf_name_data.push_back(bgp_preserve_med.get_name_leafdata());
    if (classful.is_set || is_set(classful.yfilter)) leaf_name_data.push_back(classful.get_name_leafdata());
    if (default_redistributed_route_metric.is_set || is_set(default_redistributed_route_metric.yfilter)) leaf_name_data.push_back(default_redistributed_route_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.yfilter)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (isis_levels.is_set || is_set(isis_levels.yfilter)) leaf_name_data.push_back(isis_levels.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_external.is_set || is_set(ospf_external.yfilter)) leaf_name_data.push_back(ospf_external.get_name_leafdata());
    if (ospf_internal.is_set || is_set(ospf_internal.yfilter)) leaf_name_data.push_back(ospf_internal.get_name_leafdata());
    if (ospf_nssa_level.is_set || is_set(ospf_nssa_level.yfilter)) leaf_name_data.push_back(ospf_nssa_level.get_name_leafdata());
    if (ospf_redist_lsa_type.is_set || is_set(ospf_redist_lsa_type.yfilter)) leaf_name_data.push_back(ospf_redist_lsa_type.get_name_leafdata());
    if (ospfnssa_only.is_set || is_set(ospfnssa_only.yfilter)) leaf_name_data.push_back(ospfnssa_only.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-preserve-default-info")
    {
        bgp_preserve_default_info = value;
        bgp_preserve_default_info.value_namespace = name_space;
        bgp_preserve_default_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-preserve-med")
    {
        bgp_preserve_med = value;
        bgp_preserve_med.value_namespace = name_space;
        bgp_preserve_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classful")
    {
        classful = value;
        classful.value_namespace = name_space;
        classful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-redistributed-route-metric")
    {
        default_redistributed_route_metric = value;
        default_redistributed_route_metric.value_namespace = name_space;
        default_redistributed_route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
        eigrp_route_type.value_namespace = name_space;
        eigrp_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-levels")
    {
        isis_levels = value;
        isis_levels.value_namespace = name_space;
        isis_levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-external")
    {
        ospf_external = value;
        ospf_external.value_namespace = name_space;
        ospf_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-internal")
    {
        ospf_internal = value;
        ospf_internal.value_namespace = name_space;
        ospf_internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-nssa-level")
    {
        ospf_nssa_level = value;
        ospf_nssa_level.value_namespace = name_space;
        ospf_nssa_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-redist-lsa-type")
    {
        ospf_redist_lsa_type = value;
        ospf_redist_lsa_type.value_namespace = name_space;
        ospf_redist_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfnssa-only")
    {
        ospfnssa_only = value;
        ospfnssa_only.value_namespace = name_space;
        ospfnssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "bgp-preserve-default-info")
    {
        bgp_preserve_default_info.yfilter = yfilter;
    }
    if(value_path == "bgp-preserve-med")
    {
        bgp_preserve_med.yfilter = yfilter;
    }
    if(value_path == "classful")
    {
        classful.yfilter = yfilter;
    }
    if(value_path == "default-redistributed-route-metric")
    {
        default_redistributed_route_metric.yfilter = yfilter;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type.yfilter = yfilter;
    }
    if(value_path == "isis-levels")
    {
        isis_levels.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "ospf-external")
    {
        ospf_external.yfilter = yfilter;
    }
    if(value_path == "ospf-internal")
    {
        ospf_internal.yfilter = yfilter;
    }
    if(value_path == "ospf-nssa-level")
    {
        ospf_nssa_level.yfilter = yfilter;
    }
    if(value_path == "ospf-redist-lsa-type")
    {
        ospf_redist_lsa_type.yfilter = yfilter;
    }
    if(value_path == "ospfnssa-only")
    {
        ospfnssa_only.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "bgp-preserve-default-info" || name == "bgp-preserve-med" || name == "classful" || name == "default-redistributed-route-metric" || name == "eigrp-route-type" || name == "isis-levels" || name == "metric-type" || name == "ospf-external" || name == "ospf-internal" || name == "ospf-nssa-level" || name == "ospf-redist-lsa-type" || name == "ospfnssa-only" || name == "route-policy-name" || name == "tag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::Bgp()
    :
    instance_name{YType::str, "instance-name"},
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    bgp_preserve_default_info{YType::boolean, "bgp-preserve-default-info"},
    bgp_preserve_med{YType::boolean, "bgp-preserve-med"},
    classful{YType::boolean, "classful"},
    default_redistributed_route_metric{YType::uint32, "default-redistributed-route-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    isis_levels{YType::enumeration, "isis-levels"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_external{YType::enumeration, "ospf-external"},
    ospf_internal{YType::boolean, "ospf-internal"},
    ospf_nssa_level{YType::enumeration, "ospf-nssa-level"},
    ospf_redist_lsa_type{YType::enumeration, "ospf-redist-lsa-type"},
    ospfnssa_only{YType::boolean, "ospfnssa-only"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::uint32, "tag"}
{

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::~Bgp()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::has_data() const
{
    return instance_name.is_set
	|| as_xx.is_set
	|| as_yy.is_set
	|| bgp_preserve_default_info.is_set
	|| bgp_preserve_med.is_set
	|| classful.is_set
	|| default_redistributed_route_metric.is_set
	|| eigrp_route_type.is_set
	|| isis_levels.is_set
	|| metric_type.is_set
	|| ospf_external.is_set
	|| ospf_internal.is_set
	|| ospf_nssa_level.is_set
	|| ospf_redist_lsa_type.is_set
	|| ospfnssa_only.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(bgp_preserve_default_info.yfilter)
	|| ydk::is_set(bgp_preserve_med.yfilter)
	|| ydk::is_set(classful.yfilter)
	|| ydk::is_set(default_redistributed_route_metric.yfilter)
	|| ydk::is_set(eigrp_route_type.yfilter)
	|| ydk::is_set(isis_levels.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(ospf_external.yfilter)
	|| ydk::is_set(ospf_internal.yfilter)
	|| ydk::is_set(ospf_nssa_level.yfilter)
	|| ydk::is_set(ospf_redist_lsa_type.yfilter)
	|| ydk::is_set(ospfnssa_only.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[instance-name='" <<instance_name <<"']" <<"[as-xx='" <<as_xx <<"']" <<"[as-yy='" <<as_yy <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (bgp_preserve_default_info.is_set || is_set(bgp_preserve_default_info.yfilter)) leaf_name_data.push_back(bgp_preserve_default_info.get_name_leafdata());
    if (bgp_preserve_med.is_set || is_set(bgp_preserve_med.yfilter)) leaf_name_data.push_back(bgp_preserve_med.get_name_leafdata());
    if (classful.is_set || is_set(classful.yfilter)) leaf_name_data.push_back(classful.get_name_leafdata());
    if (default_redistributed_route_metric.is_set || is_set(default_redistributed_route_metric.yfilter)) leaf_name_data.push_back(default_redistributed_route_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.yfilter)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (isis_levels.is_set || is_set(isis_levels.yfilter)) leaf_name_data.push_back(isis_levels.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_external.is_set || is_set(ospf_external.yfilter)) leaf_name_data.push_back(ospf_external.get_name_leafdata());
    if (ospf_internal.is_set || is_set(ospf_internal.yfilter)) leaf_name_data.push_back(ospf_internal.get_name_leafdata());
    if (ospf_nssa_level.is_set || is_set(ospf_nssa_level.yfilter)) leaf_name_data.push_back(ospf_nssa_level.get_name_leafdata());
    if (ospf_redist_lsa_type.is_set || is_set(ospf_redist_lsa_type.yfilter)) leaf_name_data.push_back(ospf_redist_lsa_type.get_name_leafdata());
    if (ospfnssa_only.is_set || is_set(ospfnssa_only.yfilter)) leaf_name_data.push_back(ospfnssa_only.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "bgp-preserve-default-info")
    {
        bgp_preserve_default_info = value;
        bgp_preserve_default_info.value_namespace = name_space;
        bgp_preserve_default_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-preserve-med")
    {
        bgp_preserve_med = value;
        bgp_preserve_med.value_namespace = name_space;
        bgp_preserve_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classful")
    {
        classful = value;
        classful.value_namespace = name_space;
        classful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-redistributed-route-metric")
    {
        default_redistributed_route_metric = value;
        default_redistributed_route_metric.value_namespace = name_space;
        default_redistributed_route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
        eigrp_route_type.value_namespace = name_space;
        eigrp_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-levels")
    {
        isis_levels = value;
        isis_levels.value_namespace = name_space;
        isis_levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-external")
    {
        ospf_external = value;
        ospf_external.value_namespace = name_space;
        ospf_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-internal")
    {
        ospf_internal = value;
        ospf_internal.value_namespace = name_space;
        ospf_internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-nssa-level")
    {
        ospf_nssa_level = value;
        ospf_nssa_level.value_namespace = name_space;
        ospf_nssa_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-redist-lsa-type")
    {
        ospf_redist_lsa_type = value;
        ospf_redist_lsa_type.value_namespace = name_space;
        ospf_redist_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfnssa-only")
    {
        ospfnssa_only = value;
        ospfnssa_only.value_namespace = name_space;
        ospfnssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "bgp-preserve-default-info")
    {
        bgp_preserve_default_info.yfilter = yfilter;
    }
    if(value_path == "bgp-preserve-med")
    {
        bgp_preserve_med.yfilter = yfilter;
    }
    if(value_path == "classful")
    {
        classful.yfilter = yfilter;
    }
    if(value_path == "default-redistributed-route-metric")
    {
        default_redistributed_route_metric.yfilter = yfilter;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type.yfilter = yfilter;
    }
    if(value_path == "isis-levels")
    {
        isis_levels.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "ospf-external")
    {
        ospf_external.yfilter = yfilter;
    }
    if(value_path == "ospf-internal")
    {
        ospf_internal.yfilter = yfilter;
    }
    if(value_path == "ospf-nssa-level")
    {
        ospf_nssa_level.yfilter = yfilter;
    }
    if(value_path == "ospf-redist-lsa-type")
    {
        ospf_redist_lsa_type.yfilter = yfilter;
    }
    if(value_path == "ospfnssa-only")
    {
        ospfnssa_only.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "as-xx" || name == "as-yy" || name == "bgp-preserve-default-info" || name == "bgp-preserve-med" || name == "classful" || name == "default-redistributed-route-metric" || name == "eigrp-route-type" || name == "isis-levels" || name == "metric-type" || name == "ospf-external" || name == "ospf-internal" || name == "ospf-nssa-level" || name == "ospf-redist-lsa-type" || name == "ospfnssa-only" || name == "route-policy-name" || name == "tag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip()
    :
    bgp_preserve_default_info{YType::boolean, "bgp-preserve-default-info"},
    bgp_preserve_med{YType::boolean, "bgp-preserve-med"},
    classful{YType::boolean, "classful"},
    default_redistributed_route_metric{YType::uint32, "default-redistributed-route-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    isis_levels{YType::enumeration, "isis-levels"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_external{YType::enumeration, "ospf-external"},
    ospf_internal{YType::boolean, "ospf-internal"},
    ospf_nssa_level{YType::enumeration, "ospf-nssa-level"},
    ospf_redist_lsa_type{YType::enumeration, "ospf-redist-lsa-type"},
    ospfnssa_only{YType::boolean, "ospfnssa-only"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::uint32, "tag"}
{

    yang_name = "connected-or-static-or-dagr-or-subscriber-or-mobile-or-rip"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::~ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::has_data() const
{
    return bgp_preserve_default_info.is_set
	|| bgp_preserve_med.is_set
	|| classful.is_set
	|| default_redistributed_route_metric.is_set
	|| eigrp_route_type.is_set
	|| isis_levels.is_set
	|| metric_type.is_set
	|| ospf_external.is_set
	|| ospf_internal.is_set
	|| ospf_nssa_level.is_set
	|| ospf_redist_lsa_type.is_set
	|| ospfnssa_only.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_preserve_default_info.yfilter)
	|| ydk::is_set(bgp_preserve_med.yfilter)
	|| ydk::is_set(classful.yfilter)
	|| ydk::is_set(default_redistributed_route_metric.yfilter)
	|| ydk::is_set(eigrp_route_type.yfilter)
	|| ydk::is_set(isis_levels.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(ospf_external.yfilter)
	|| ydk::is_set(ospf_internal.yfilter)
	|| ydk::is_set(ospf_nssa_level.yfilter)
	|| ydk::is_set(ospf_redist_lsa_type.yfilter)
	|| ydk::is_set(ospfnssa_only.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-or-static-or-dagr-or-subscriber-or-mobile-or-rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_preserve_default_info.is_set || is_set(bgp_preserve_default_info.yfilter)) leaf_name_data.push_back(bgp_preserve_default_info.get_name_leafdata());
    if (bgp_preserve_med.is_set || is_set(bgp_preserve_med.yfilter)) leaf_name_data.push_back(bgp_preserve_med.get_name_leafdata());
    if (classful.is_set || is_set(classful.yfilter)) leaf_name_data.push_back(classful.get_name_leafdata());
    if (default_redistributed_route_metric.is_set || is_set(default_redistributed_route_metric.yfilter)) leaf_name_data.push_back(default_redistributed_route_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.yfilter)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (isis_levels.is_set || is_set(isis_levels.yfilter)) leaf_name_data.push_back(isis_levels.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_external.is_set || is_set(ospf_external.yfilter)) leaf_name_data.push_back(ospf_external.get_name_leafdata());
    if (ospf_internal.is_set || is_set(ospf_internal.yfilter)) leaf_name_data.push_back(ospf_internal.get_name_leafdata());
    if (ospf_nssa_level.is_set || is_set(ospf_nssa_level.yfilter)) leaf_name_data.push_back(ospf_nssa_level.get_name_leafdata());
    if (ospf_redist_lsa_type.is_set || is_set(ospf_redist_lsa_type.yfilter)) leaf_name_data.push_back(ospf_redist_lsa_type.get_name_leafdata());
    if (ospfnssa_only.is_set || is_set(ospfnssa_only.yfilter)) leaf_name_data.push_back(ospfnssa_only.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-preserve-default-info")
    {
        bgp_preserve_default_info = value;
        bgp_preserve_default_info.value_namespace = name_space;
        bgp_preserve_default_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-preserve-med")
    {
        bgp_preserve_med = value;
        bgp_preserve_med.value_namespace = name_space;
        bgp_preserve_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classful")
    {
        classful = value;
        classful.value_namespace = name_space;
        classful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-redistributed-route-metric")
    {
        default_redistributed_route_metric = value;
        default_redistributed_route_metric.value_namespace = name_space;
        default_redistributed_route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
        eigrp_route_type.value_namespace = name_space;
        eigrp_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-levels")
    {
        isis_levels = value;
        isis_levels.value_namespace = name_space;
        isis_levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-external")
    {
        ospf_external = value;
        ospf_external.value_namespace = name_space;
        ospf_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-internal")
    {
        ospf_internal = value;
        ospf_internal.value_namespace = name_space;
        ospf_internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-nssa-level")
    {
        ospf_nssa_level = value;
        ospf_nssa_level.value_namespace = name_space;
        ospf_nssa_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-redist-lsa-type")
    {
        ospf_redist_lsa_type = value;
        ospf_redist_lsa_type.value_namespace = name_space;
        ospf_redist_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfnssa-only")
    {
        ospfnssa_only = value;
        ospfnssa_only.value_namespace = name_space;
        ospfnssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-preserve-default-info")
    {
        bgp_preserve_default_info.yfilter = yfilter;
    }
    if(value_path == "bgp-preserve-med")
    {
        bgp_preserve_med.yfilter = yfilter;
    }
    if(value_path == "classful")
    {
        classful.yfilter = yfilter;
    }
    if(value_path == "default-redistributed-route-metric")
    {
        default_redistributed_route_metric.yfilter = yfilter;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type.yfilter = yfilter;
    }
    if(value_path == "isis-levels")
    {
        isis_levels.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "ospf-external")
    {
        ospf_external.yfilter = yfilter;
    }
    if(value_path == "ospf-internal")
    {
        ospf_internal.yfilter = yfilter;
    }
    if(value_path == "ospf-nssa-level")
    {
        ospf_nssa_level.yfilter = yfilter;
    }
    if(value_path == "ospf-redist-lsa-type")
    {
        ospf_redist_lsa_type.yfilter = yfilter;
    }
    if(value_path == "ospfnssa-only")
    {
        ospfnssa_only.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-preserve-default-info" || name == "bgp-preserve-med" || name == "classful" || name == "default-redistributed-route-metric" || name == "eigrp-route-type" || name == "isis-levels" || name == "metric-type" || name == "ospf-external" || name == "ospf-internal" || name == "ospf-nssa-level" || name == "ospf-redist-lsa-type" || name == "ospfnssa-only" || name == "route-policy-name" || name == "tag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::Eigrp()
    :
    instance_name{YType::str, "instance-name"},
    as_xx{YType::uint32, "as-xx"},
    bgp_preserve_default_info{YType::boolean, "bgp-preserve-default-info"},
    bgp_preserve_med{YType::boolean, "bgp-preserve-med"},
    classful{YType::boolean, "classful"},
    default_redistributed_route_metric{YType::uint32, "default-redistributed-route-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    isis_levels{YType::enumeration, "isis-levels"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_external{YType::enumeration, "ospf-external"},
    ospf_internal{YType::boolean, "ospf-internal"},
    ospf_nssa_level{YType::enumeration, "ospf-nssa-level"},
    ospf_redist_lsa_type{YType::enumeration, "ospf-redist-lsa-type"},
    ospfnssa_only{YType::boolean, "ospfnssa-only"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::uint32, "tag"}
{

    yang_name = "eigrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::~Eigrp()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::has_data() const
{
    return instance_name.is_set
	|| as_xx.is_set
	|| bgp_preserve_default_info.is_set
	|| bgp_preserve_med.is_set
	|| classful.is_set
	|| default_redistributed_route_metric.is_set
	|| eigrp_route_type.is_set
	|| isis_levels.is_set
	|| metric_type.is_set
	|| ospf_external.is_set
	|| ospf_internal.is_set
	|| ospf_nssa_level.is_set
	|| ospf_redist_lsa_type.is_set
	|| ospfnssa_only.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(bgp_preserve_default_info.yfilter)
	|| ydk::is_set(bgp_preserve_med.yfilter)
	|| ydk::is_set(classful.yfilter)
	|| ydk::is_set(default_redistributed_route_metric.yfilter)
	|| ydk::is_set(eigrp_route_type.yfilter)
	|| ydk::is_set(isis_levels.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(ospf_external.yfilter)
	|| ydk::is_set(ospf_internal.yfilter)
	|| ydk::is_set(ospf_nssa_level.yfilter)
	|| ydk::is_set(ospf_redist_lsa_type.yfilter)
	|| ydk::is_set(ospfnssa_only.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[instance-name='" <<instance_name <<"']" <<"[as-xx='" <<as_xx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (bgp_preserve_default_info.is_set || is_set(bgp_preserve_default_info.yfilter)) leaf_name_data.push_back(bgp_preserve_default_info.get_name_leafdata());
    if (bgp_preserve_med.is_set || is_set(bgp_preserve_med.yfilter)) leaf_name_data.push_back(bgp_preserve_med.get_name_leafdata());
    if (classful.is_set || is_set(classful.yfilter)) leaf_name_data.push_back(classful.get_name_leafdata());
    if (default_redistributed_route_metric.is_set || is_set(default_redistributed_route_metric.yfilter)) leaf_name_data.push_back(default_redistributed_route_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.yfilter)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (isis_levels.is_set || is_set(isis_levels.yfilter)) leaf_name_data.push_back(isis_levels.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_external.is_set || is_set(ospf_external.yfilter)) leaf_name_data.push_back(ospf_external.get_name_leafdata());
    if (ospf_internal.is_set || is_set(ospf_internal.yfilter)) leaf_name_data.push_back(ospf_internal.get_name_leafdata());
    if (ospf_nssa_level.is_set || is_set(ospf_nssa_level.yfilter)) leaf_name_data.push_back(ospf_nssa_level.get_name_leafdata());
    if (ospf_redist_lsa_type.is_set || is_set(ospf_redist_lsa_type.yfilter)) leaf_name_data.push_back(ospf_redist_lsa_type.get_name_leafdata());
    if (ospfnssa_only.is_set || is_set(ospfnssa_only.yfilter)) leaf_name_data.push_back(ospfnssa_only.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-preserve-default-info")
    {
        bgp_preserve_default_info = value;
        bgp_preserve_default_info.value_namespace = name_space;
        bgp_preserve_default_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-preserve-med")
    {
        bgp_preserve_med = value;
        bgp_preserve_med.value_namespace = name_space;
        bgp_preserve_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classful")
    {
        classful = value;
        classful.value_namespace = name_space;
        classful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-redistributed-route-metric")
    {
        default_redistributed_route_metric = value;
        default_redistributed_route_metric.value_namespace = name_space;
        default_redistributed_route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
        eigrp_route_type.value_namespace = name_space;
        eigrp_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-levels")
    {
        isis_levels = value;
        isis_levels.value_namespace = name_space;
        isis_levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-external")
    {
        ospf_external = value;
        ospf_external.value_namespace = name_space;
        ospf_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-internal")
    {
        ospf_internal = value;
        ospf_internal.value_namespace = name_space;
        ospf_internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-nssa-level")
    {
        ospf_nssa_level = value;
        ospf_nssa_level.value_namespace = name_space;
        ospf_nssa_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-redist-lsa-type")
    {
        ospf_redist_lsa_type = value;
        ospf_redist_lsa_type.value_namespace = name_space;
        ospf_redist_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfnssa-only")
    {
        ospfnssa_only = value;
        ospfnssa_only.value_namespace = name_space;
        ospfnssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "bgp-preserve-default-info")
    {
        bgp_preserve_default_info.yfilter = yfilter;
    }
    if(value_path == "bgp-preserve-med")
    {
        bgp_preserve_med.yfilter = yfilter;
    }
    if(value_path == "classful")
    {
        classful.yfilter = yfilter;
    }
    if(value_path == "default-redistributed-route-metric")
    {
        default_redistributed_route_metric.yfilter = yfilter;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type.yfilter = yfilter;
    }
    if(value_path == "isis-levels")
    {
        isis_levels.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "ospf-external")
    {
        ospf_external.yfilter = yfilter;
    }
    if(value_path == "ospf-internal")
    {
        ospf_internal.yfilter = yfilter;
    }
    if(value_path == "ospf-nssa-level")
    {
        ospf_nssa_level.yfilter = yfilter;
    }
    if(value_path == "ospf-redist-lsa-type")
    {
        ospf_redist_lsa_type.yfilter = yfilter;
    }
    if(value_path == "ospfnssa-only")
    {
        ospfnssa_only.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "as-xx" || name == "bgp-preserve-default-info" || name == "bgp-preserve-med" || name == "classful" || name == "default-redistributed-route-metric" || name == "eigrp-route-type" || name == "isis-levels" || name == "metric-type" || name == "ospf-external" || name == "ospf-internal" || name == "ospf-nssa-level" || name == "ospf-redist-lsa-type" || name == "ospfnssa-only" || name == "route-policy-name" || name == "tag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixes()
    :
    summary_prefix_data(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData>())
{
    summary_prefix_data->parent = this;

    yang_name = "summary-prefixes"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::~SummaryPrefixes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_data() const
{
    for (std::size_t index=0; index<netmask.size(); index++)
    {
        if(netmask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_and_netmask.size(); index++)
    {
        if(prefix_and_netmask[index]->has_data())
            return true;
    }
    return (summary_prefix_data !=  nullptr && summary_prefix_data->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_operation() const
{
    for (std::size_t index=0; index<netmask.size(); index++)
    {
        if(netmask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_and_netmask.size(); index++)
    {
        if(prefix_and_netmask[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (summary_prefix_data !=  nullptr && summary_prefix_data->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netmask")
    {
        for(auto const & c : netmask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask>();
        c->parent = this;
        netmask.push_back(c);
        return c;
    }

    if(child_yang_name == "prefix")
    {
        for(auto const & c : prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix>();
        c->parent = this;
        prefix.push_back(c);
        return c;
    }

    if(child_yang_name == "prefix-and-netmask")
    {
        for(auto const & c : prefix_and_netmask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask>();
        c->parent = this;
        prefix_and_netmask.push_back(c);
        return c;
    }

    if(child_yang_name == "summary-prefix-data")
    {
        if(summary_prefix_data == nullptr)
        {
            summary_prefix_data = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData>();
        }
        return summary_prefix_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : netmask)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : prefix)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : prefix_and_netmask)
    {
        children[c->get_segment_path()] = c;
    }

    if(summary_prefix_data != nullptr)
    {
        children["summary-prefix-data"] = summary_prefix_data;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netmask" || name == "prefix" || name == "prefix-and-netmask" || name == "summary-prefix-data")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::Netmask()
    :
    netmask{YType::str, "netmask"},
    not_advertise{YType::boolean, "not-advertise"},
    tag{YType::uint32, "tag"}
{

    yang_name = "netmask"; yang_parent_name = "summary-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::~Netmask()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::has_data() const
{
    return netmask.is_set
	|| not_advertise.is_set
	|| tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(not_advertise.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netmask" <<"[netmask='" <<netmask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netmask" || name == "not-advertise" || name == "tag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::Prefix()
    :
    prefix{YType::str, "prefix"},
    not_advertise{YType::boolean, "not-advertise"},
    tag{YType::uint32, "tag"}
{

    yang_name = "prefix"; yang_parent_name = "summary-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::~Prefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::has_data() const
{
    return prefix.is_set
	|| not_advertise.is_set
	|| tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(not_advertise.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
        not_advertise.value_namespace = name_space;
        not_advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "not-advertise" || name == "tag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::PrefixAndNetmask()
    :
    prefix{YType::str, "prefix"},
    netmask{YType::str, "netmask"},
    not_advertise{YType::boolean, "not-advertise"},
    tag{YType::uint32, "tag"}
{

    yang_name = "prefix-and-netmask"; yang_parent_name = "summary-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::~PrefixAndNetmask()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::has_data() const
{
    return prefix.is_set
	|| netmask.is_set
	|| not_advertise.is_set
	|| tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(not_advertise.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-and-netmask" <<"[prefix='" <<prefix <<"']" <<"[netmask='" <<netmask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "netmask" || name == "not-advertise" || name == "tag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::SummaryPrefixData()
    :
    not_advertise{YType::boolean, "not-advertise"},
    tag{YType::uint32, "tag"}
{

    yang_name = "summary-prefix-data"; yang_parent_name = "summary-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::~SummaryPrefixData()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::has_data() const
{
    return not_advertise.is_set
	|| tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(not_advertise.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "not-advertise")
    {
        not_advertise = value;
        not_advertise.value_namespace = name_space;
        not_advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "not-advertise" || name == "tag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Timers::Timers()
    :
    fast_reroute_timer{YType::uint32, "fast-reroute-timer"},
    lsa_group_pacing{YType::uint32, "lsa-group-pacing"},
    lsa_min_arrival{YType::uint32, "lsa-min-arrival"},
    lsa_pacing_flood{YType::uint32, "lsa-pacing-flood"},
    lsa_refresh{YType::uint32, "lsa-refresh"}
    	,
    lsa_generation_timer(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer>())
	,spf_timer(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer>())
{
    lsa_generation_timer->parent = this;
    spf_timer->parent = this;

    yang_name = "timers"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Timers::~Timers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Timers::has_data() const
{
    return fast_reroute_timer.is_set
	|| lsa_group_pacing.is_set
	|| lsa_min_arrival.is_set
	|| lsa_pacing_flood.is_set
	|| lsa_refresh.is_set
	|| (lsa_generation_timer !=  nullptr && lsa_generation_timer->has_data())
	|| (spf_timer !=  nullptr && spf_timer->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_timer.yfilter)
	|| ydk::is_set(lsa_group_pacing.yfilter)
	|| ydk::is_set(lsa_min_arrival.yfilter)
	|| ydk::is_set(lsa_pacing_flood.yfilter)
	|| ydk::is_set(lsa_refresh.yfilter)
	|| (lsa_generation_timer !=  nullptr && lsa_generation_timer->has_operation())
	|| (spf_timer !=  nullptr && spf_timer->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_timer.is_set || is_set(fast_reroute_timer.yfilter)) leaf_name_data.push_back(fast_reroute_timer.get_name_leafdata());
    if (lsa_group_pacing.is_set || is_set(lsa_group_pacing.yfilter)) leaf_name_data.push_back(lsa_group_pacing.get_name_leafdata());
    if (lsa_min_arrival.is_set || is_set(lsa_min_arrival.yfilter)) leaf_name_data.push_back(lsa_min_arrival.get_name_leafdata());
    if (lsa_pacing_flood.is_set || is_set(lsa_pacing_flood.yfilter)) leaf_name_data.push_back(lsa_pacing_flood.get_name_leafdata());
    if (lsa_refresh.is_set || is_set(lsa_refresh.yfilter)) leaf_name_data.push_back(lsa_refresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-generation-timer")
    {
        if(lsa_generation_timer == nullptr)
        {
            lsa_generation_timer = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer>();
        }
        return lsa_generation_timer;
    }

    if(child_yang_name == "spf-timer")
    {
        if(spf_timer == nullptr)
        {
            spf_timer = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer>();
        }
        return spf_timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa_generation_timer != nullptr)
    {
        children["lsa-generation-timer"] = lsa_generation_timer;
    }

    if(spf_timer != nullptr)
    {
        children["spf-timer"] = spf_timer;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-timer")
    {
        fast_reroute_timer = value;
        fast_reroute_timer.value_namespace = name_space;
        fast_reroute_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-group-pacing")
    {
        lsa_group_pacing = value;
        lsa_group_pacing.value_namespace = name_space;
        lsa_group_pacing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-min-arrival")
    {
        lsa_min_arrival = value;
        lsa_min_arrival.value_namespace = name_space;
        lsa_min_arrival.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-pacing-flood")
    {
        lsa_pacing_flood = value;
        lsa_pacing_flood.value_namespace = name_space;
        lsa_pacing_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-refresh")
    {
        lsa_refresh = value;
        lsa_refresh.value_namespace = name_space;
        lsa_refresh.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-timer")
    {
        fast_reroute_timer.yfilter = yfilter;
    }
    if(value_path == "lsa-group-pacing")
    {
        lsa_group_pacing.yfilter = yfilter;
    }
    if(value_path == "lsa-min-arrival")
    {
        lsa_min_arrival.yfilter = yfilter;
    }
    if(value_path == "lsa-pacing-flood")
    {
        lsa_pacing_flood.yfilter = yfilter;
    }
    if(value_path == "lsa-refresh")
    {
        lsa_refresh.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-generation-timer" || name == "spf-timer" || name == "fast-reroute-timer" || name == "lsa-group-pacing" || name == "lsa-min-arrival" || name == "lsa-pacing-flood" || name == "lsa-refresh")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::LsaGenerationTimer()
    :
    backoff_increment{YType::uint32, "backoff-increment"},
    initial_delay{YType::uint32, "initial-delay"},
    max_delay{YType::uint32, "max-delay"}
{

    yang_name = "lsa-generation-timer"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::~LsaGenerationTimer()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::has_data() const
{
    return backoff_increment.is_set
	|| initial_delay.is_set
	|| max_delay.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backoff_increment.yfilter)
	|| ydk::is_set(initial_delay.yfilter)
	|| ydk::is_set(max_delay.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-generation-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backoff_increment.is_set || is_set(backoff_increment.yfilter)) leaf_name_data.push_back(backoff_increment.get_name_leafdata());
    if (initial_delay.is_set || is_set(initial_delay.yfilter)) leaf_name_data.push_back(initial_delay.get_name_leafdata());
    if (max_delay.is_set || is_set(max_delay.yfilter)) leaf_name_data.push_back(max_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backoff-increment")
    {
        backoff_increment = value;
        backoff_increment.value_namespace = name_space;
        backoff_increment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-delay")
    {
        initial_delay = value;
        initial_delay.value_namespace = name_space;
        initial_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-delay")
    {
        max_delay = value;
        max_delay.value_namespace = name_space;
        max_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backoff-increment")
    {
        backoff_increment.yfilter = yfilter;
    }
    if(value_path == "initial-delay")
    {
        initial_delay.yfilter = yfilter;
    }
    if(value_path == "max-delay")
    {
        max_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backoff-increment" || name == "initial-delay" || name == "max-delay")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::SpfTimer()
    :
    backoff_increment{YType::uint32, "backoff-increment"},
    initial_delay{YType::uint32, "initial-delay"},
    max_delay{YType::uint32, "max-delay"}
{

    yang_name = "spf-timer"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::~SpfTimer()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::has_data() const
{
    return backoff_increment.is_set
	|| initial_delay.is_set
	|| max_delay.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backoff_increment.yfilter)
	|| ydk::is_set(initial_delay.yfilter)
	|| ydk::is_set(max_delay.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backoff_increment.is_set || is_set(backoff_increment.yfilter)) leaf_name_data.push_back(backoff_increment.get_name_leafdata());
    if (initial_delay.is_set || is_set(initial_delay.yfilter)) leaf_name_data.push_back(initial_delay.get_name_leafdata());
    if (max_delay.is_set || is_set(max_delay.yfilter)) leaf_name_data.push_back(max_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backoff-increment")
    {
        backoff_increment = value;
        backoff_increment.value_namespace = name_space;
        backoff_increment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-delay")
    {
        initial_delay = value;
        initial_delay.value_namespace = name_space;
        initial_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-delay")
    {
        max_delay = value;
        max_delay.value_namespace = name_space;
        max_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backoff-increment")
    {
        backoff_increment.yfilter = yfilter;
    }
    if(value_path == "initial-delay")
    {
        initial_delay.yfilter = yfilter;
    }
    if(value_path == "max-delay")
    {
        max_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backoff-increment" || name == "initial-delay" || name == "max-delay")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Ucmp()
    :
    delay_interval{YType::uint32, "delay-interval"}
    	,
    enable(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces>())
{
    enable->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "ucmp"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Ucmp::~Ucmp()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::has_data() const
{
    return delay_interval.is_set
	|| (enable !=  nullptr && enable->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay_interval.yfilter)
	|| (enable !=  nullptr && enable->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Ucmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Ucmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay_interval.is_set || is_set(delay_interval.yfilter)) leaf_name_data.push_back(delay_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Ucmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Ucmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Ospf::Processes::Process::Vrfs::Vrf::Ucmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay-interval")
    {
        delay_interval = value;
        delay_interval.value_namespace = name_space;
        delay_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Ucmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay-interval")
    {
        delay_interval.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "exclude-interfaces" || name == "delay-interval")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::Enable()
    :
    prefix_list_name{YType::str, "prefix-list-name"},
    variance{YType::uint32, "variance"}
{

    yang_name = "enable"; yang_parent_name = "ucmp"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::~Enable()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::has_data() const
{
    return prefix_list_name.is_set
	|| variance.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list_name.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list-name" || name == "variance")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "ucmp"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}


}
}

