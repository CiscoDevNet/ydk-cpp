
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_1.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths::SubtlvsUnreservedBandwidth::State::State()
    :
    priority{YType::uint8, "priority"},
    unreserved_bandwidth{YType::str, "unreserved-bandwidth"}
{

    yang_name = "state"; yang_parent_name = "subtlvs-unreserved-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths::SubtlvsUnreservedBandwidth::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths::SubtlvsUnreservedBandwidth::State::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| unreserved_bandwidth.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths::SubtlvsUnreservedBandwidth::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(unreserved_bandwidth.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths::SubtlvsUnreservedBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths::SubtlvsUnreservedBandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.yfilter)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths::SubtlvsUnreservedBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths::SubtlvsUnreservedBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths::SubtlvsUnreservedBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
        unreserved_bandwidth.value_namespace = name_space;
        unreserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths::SubtlvsUnreservedBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths::SubtlvsUnreservedBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "unreserved-bandwidth")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::SubtlvsIpv4NeighborAddress()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::State>())
{
    state->parent = this;

    yang_name = "subtlvs-ipv4-neighbor-address"; yang_parent_name = "mt-isn-neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::~SubtlvsIpv4NeighborAddress()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs-ipv4-neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::State::State()
    :
    ipv4_neighbor_address{YType::str, "ipv4-neighbor-address"}
{

    yang_name = "state"; yang_parent_name = "subtlvs-ipv4-neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ipv4_neighbor_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::State::has_operation() const
{
    for (auto const & leaf : ipv4_neighbor_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4_neighbor_address.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv4_neighbor_address_name_datas = ipv4_neighbor_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_neighbor_address_name_datas.begin(), ipv4_neighbor_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-neighbor-address")
    {
        ipv4_neighbor_address.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-neighbor-address")
    {
        ipv4_neighbor_address.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-neighbor-address")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::SubtlvsTeDefaultMetric()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::State>())
{
    state->parent = this;

    yang_name = "subtlvs-te-default-metric"; yang_parent_name = "mt-isn-neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::~SubtlvsTeDefaultMetric()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs-te-default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::State::State()
    :
    te_default_metric{YType::uint32, "te-default-metric"}
{

    yang_name = "state"; yang_parent_name = "subtlvs-te-default-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::State::has_data() const
{
    if (is_presence_container) return true;
    return te_default_metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_default_metric.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_default_metric.is_set || is_set(te_default_metric.yfilter)) leaf_name_data.push_back(te_default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-default-metric")
    {
        te_default_metric = value;
        te_default_metric.value_namespace = name_space;
        te_default_metric.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-default-metric")
    {
        te_default_metric.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-default-metric")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::SubtlvsIpv6InterfaceAddress()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::State>())
{
    state->parent = this;

    yang_name = "subtlvs-ipv6-interface-address"; yang_parent_name = "mt-isn-neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::~SubtlvsIpv6InterfaceAddress()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs-ipv6-interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::State::State()
    :
    ipv6_interface_address{YType::str, "ipv6-interface-address"}
{

    yang_name = "state"; yang_parent_name = "subtlvs-ipv6-interface-address"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ipv6_interface_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::State::has_operation() const
{
    for (auto const & leaf : ipv6_interface_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv6_interface_address.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv6_interface_address_name_datas = ipv6_interface_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_interface_address_name_datas.begin(), ipv6_interface_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-interface-address")
    {
        ipv6_interface_address.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-interface-address")
    {
        ipv6_interface_address.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-interface-address")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::SubtlvsAdminGroup()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::State>())
{
    state->parent = this;

    yang_name = "subtlvs-admin-group"; yang_parent_name = "mt-isn-neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::~SubtlvsAdminGroup()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs-admin-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::State::State()
    :
    admin_group{YType::uint32, "admin-group"}
{

    yang_name = "state"; yang_parent_name = "subtlvs-admin-group"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::State::has_operation() const
{
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admin_group.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto admin_group_name_datas = admin_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), admin_group_name_datas.begin(), admin_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-group")
    {
        admin_group.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-group")
    {
        admin_group.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-group")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySids()
    :
    subtlvs_lan_adjacency_sid(this, {"value_"})
{

    yang_name = "subtlvs-lan-adjacency-sids"; yang_parent_name = "mt-isn-neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::~SubtlvsLanAdjacencySids()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subtlvs_lan_adjacency_sid.len(); index++)
    {
        if(subtlvs_lan_adjacency_sid[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::has_operation() const
{
    for (std::size_t index=0; index<subtlvs_lan_adjacency_sid.len(); index++)
    {
        if(subtlvs_lan_adjacency_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs-lan-adjacency-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subtlvs-lan-adjacency-sid")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid>();
        c->parent = this;
        subtlvs_lan_adjacency_sid.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : subtlvs_lan_adjacency_sid.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subtlvs-lan-adjacency-sid")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::SubtlvsLanAdjacencySid()
    :
    value_{YType::uint32, "value"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::State>())
{
    state->parent = this;

    yang_name = "subtlvs-lan-adjacency-sid"; yang_parent_name = "subtlvs-lan-adjacency-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::~SubtlvsLanAdjacencySid()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs-lan-adjacency-sid";
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "value")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::State::State()
    :
    value_{YType::uint32, "value"},
    weight{YType::uint8, "weight"},
    neighbor_id{YType::str, "neighbor-id"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "subtlvs-lan-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return value_.is_set
	|| weight.is_set
	|| neighbor_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "weight" || name == "neighbor-id" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::SubtlvsExtendedAdminGroup()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::State>())
{
    state->parent = this;

    yang_name = "subtlvs-extended-admin-group"; yang_parent_name = "mt-isn-neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::~SubtlvsExtendedAdminGroup()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs-extended-admin-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::State::State()
    :
    extended_admin_group{YType::uint32, "extended-admin-group"}
{

    yang_name = "state"; yang_parent_name = "subtlvs-extended-admin-group"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : extended_admin_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::State::has_operation() const
{
    for (auto const & leaf : extended_admin_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(extended_admin_group.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto extended_admin_group_name_datas = extended_admin_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_admin_group_name_datas.begin(), extended_admin_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-admin-group")
    {
        extended_admin_group.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-admin-group")
    {
        extended_admin_group.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-admin-group")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsState::MtIsnNeighborsState()
    :
    mt_id{YType::uint16, "mt-id"},
    system_id{YType::str, "system-id"},
    metric{YType::uint32, "metric"}
{

    yang_name = "mt-isn-neighbors-state"; yang_parent_name = "mt-isn-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsState::~MtIsnNeighborsState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsState::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| system_id.is_set
	|| metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-isn-neighbors-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "system-id" || name == "metric")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlvs()
    :
    mt_isn_neighbors_undefined_subtlv(this, {"type"})
{

    yang_name = "mt-isn-neighbors-undefined-subtlvs"; yang_parent_name = "mt-isn-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::~MtIsnNeighborsUndefinedSubtlvs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mt_isn_neighbors_undefined_subtlv.len(); index++)
    {
        if(mt_isn_neighbors_undefined_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<mt_isn_neighbors_undefined_subtlv.len(); index++)
    {
        if(mt_isn_neighbors_undefined_subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-isn-neighbors-undefined-subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mt-isn-neighbors-undefined-subtlv")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv>();
        c->parent = this;
        mt_isn_neighbors_undefined_subtlv.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mt_isn_neighbors_undefined_subtlv.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-isn-neighbors-undefined-subtlv")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::MtIsnNeighborsUndefinedSubtlv()
    :
    type{YType::uint32, "type"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::State>())
{
    state->parent = this;

    yang_name = "mt-isn-neighbors-undefined-subtlv"; yang_parent_name = "mt-isn-neighbors-undefined-subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::~MtIsnNeighborsUndefinedSubtlv()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-isn-neighbors-undefined-subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::State::State()
    :
    type{YType::uint8, "type"},
    length{YType::uint8, "length"},
    value_{YType::str, "value"}
{

    yang_name = "state"; yang_parent_name = "mt-isn-neighbors-undefined-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| length.is_set
	|| value_.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlgs()
    :
    ipv6_srlg(this, {"instance_number"})
{

    yang_name = "ipv6-srlgs"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::~Ipv6Srlgs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_srlg.len(); index++)
    {
        if(ipv6_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::has_operation() const
{
    for (std::size_t index=0; index<ipv6_srlg.len(); index++)
    {
        if(ipv6_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-srlg")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg>();
        c->parent = this;
        ipv6_srlg.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipv6_srlg.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srlg")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::Ipv6Srlg()
    :
    instance_number{YType::uint32, "instance-number"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::State>())
{
    state->parent = this;

    yang_name = "ipv6-srlg"; yang_parent_name = "ipv6-srlgs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::~Ipv6Srlg()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::has_data() const
{
    if (is_presence_container) return true;
    return instance_number.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_number.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-srlg";
    ADD_KEY_TOKEN(instance_number, "instance-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_number.is_set || is_set(instance_number.yfilter)) leaf_name_data.push_back(instance_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-number")
    {
        instance_number = value;
        instance_number.value_namespace = name_space;
        instance_number.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-number")
    {
        instance_number.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "instance-number")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::State::State()
    :
    instance_number{YType::uint32, "instance-number"},
    system_id{YType::str, "system-id"},
    psn_number{YType::uint8, "psn-number"},
    ipv6_interface_address{YType::str, "ipv6-interface-address"},
    ipv6_neighbor_address{YType::str, "ipv6-neighbor-address"},
    flags{YType::enumeration, "flags"},
    srlg_value{YType::uint32, "srlg-value"}
{

    yang_name = "state"; yang_parent_name = "ipv6-srlg"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : srlg_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return instance_number.is_set
	|| system_id.is_set
	|| psn_number.is_set
	|| ipv6_interface_address.is_set
	|| ipv6_neighbor_address.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : srlg_value.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_number.yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(psn_number.yfilter)
	|| ydk::is_set(ipv6_interface_address.yfilter)
	|| ydk::is_set(ipv6_neighbor_address.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(srlg_value.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_number.is_set || is_set(instance_number.yfilter)) leaf_name_data.push_back(instance_number.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (psn_number.is_set || is_set(psn_number.yfilter)) leaf_name_data.push_back(psn_number.get_name_leafdata());
    if (ipv6_interface_address.is_set || is_set(ipv6_interface_address.yfilter)) leaf_name_data.push_back(ipv6_interface_address.get_name_leafdata());
    if (ipv6_neighbor_address.is_set || is_set(ipv6_neighbor_address.yfilter)) leaf_name_data.push_back(ipv6_neighbor_address.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    auto srlg_value_name_datas = srlg_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_value_name_datas.begin(), srlg_value_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-number")
    {
        instance_number = value;
        instance_number.value_namespace = name_space;
        instance_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psn-number")
    {
        psn_number = value;
        psn_number.value_namespace = name_space;
        psn_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-interface-address")
    {
        ipv6_interface_address = value;
        ipv6_interface_address.value_namespace = name_space;
        ipv6_interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-neighbor-address")
    {
        ipv6_neighbor_address = value;
        ipv6_neighbor_address.value_namespace = name_space;
        ipv6_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
    if(value_path == "srlg-value")
    {
        srlg_value.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-number")
    {
        instance_number.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "psn-number")
    {
        psn_number.yfilter = yfilter;
    }
    if(value_path == "ipv6-interface-address")
    {
        ipv6_interface_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-neighbor-address")
    {
        ipv6_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-number" || name == "system-id" || name == "psn-number" || name == "ipv6-interface-address" || name == "ipv6-neighbor-address" || name == "flags" || name == "srlg-value")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::TlvsState::TlvsState()
    :
    type{YType::str, "type"}
{

    yang_name = "tlvs-state"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::TlvsState::~TlvsState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::TlvsState::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::TlvsState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::TlvsState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlvs-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::TlvsState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::TlvsState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::TlvsState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::TlvsState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::TlvsState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::TlvsState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::PurgeOi()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::State>())
{
    state->parent = this;

    yang_name = "purge-oi"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::~PurgeOi()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "purge-oi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::State::State()
    :
    system_id_count{YType::uint8, "system-id-count"},
    source_system_id{YType::str, "source-system-id"},
    received_system_id{YType::str, "received-system-id"}
{

    yang_name = "state"; yang_parent_name = "purge-oi"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::State::has_data() const
{
    if (is_presence_container) return true;
    return system_id_count.is_set
	|| source_system_id.is_set
	|| received_system_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id_count.yfilter)
	|| ydk::is_set(source_system_id.yfilter)
	|| ydk::is_set(received_system_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id_count.is_set || is_set(system_id_count.yfilter)) leaf_name_data.push_back(system_id_count.get_name_leafdata());
    if (source_system_id.is_set || is_set(source_system_id.yfilter)) leaf_name_data.push_back(source_system_id.get_name_leafdata());
    if (received_system_id.is_set || is_set(received_system_id.yfilter)) leaf_name_data.push_back(received_system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id-count")
    {
        system_id_count = value;
        system_id_count.value_namespace = name_space;
        system_id_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-system-id")
    {
        source_system_id = value;
        source_system_id.value_namespace = name_space;
        source_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-system-id")
    {
        received_system_id = value;
        received_system_id.value_namespace = name_space;
        received_system_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id-count")
    {
        system_id_count.yfilter = yfilter;
    }
    if(value_path == "source-system-id")
    {
        source_system_id.yfilter = yfilter;
    }
    if(value_path == "received-system-id")
    {
        received_system_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id-count" || name == "source-system-id" || name == "received-system-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::HostName()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::State>())
{
    state->parent = this;

    yang_name = "host-name"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::~HostName()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::State::State()
    :
    host_name{YType::str, "host-name"}
{

    yang_name = "state"; yang_parent_name = "host-name"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : host_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::State::has_operation() const
{
    for (auto const & leaf : host_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto host_name_name_datas = host_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), host_name_name_datas.begin(), host_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6Reachability()
    :
    ipv6_reachability_prefixes(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes>())
{
    ipv6_reachability_prefixes->parent = this;

    yang_name = "ipv6-reachability"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::~Ipv6Reachability()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::has_data() const
{
    if (is_presence_container) return true;
    return (ipv6_reachability_prefixes !=  nullptr && ipv6_reachability_prefixes->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6_reachability_prefixes !=  nullptr && ipv6_reachability_prefixes->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-reachability-prefixes")
    {
        if(ipv6_reachability_prefixes == nullptr)
        {
            ipv6_reachability_prefixes = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes>();
        }
        return ipv6_reachability_prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv6_reachability_prefixes != nullptr)
    {
        children["ipv6-reachability-prefixes"] = ipv6_reachability_prefixes;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-reachability-prefixes")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixes()
    :
    ipv6_reachability_prefixe(this, {"prefix"})
{

    yang_name = "ipv6-reachability-prefixes"; yang_parent_name = "ipv6-reachability"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::~Ipv6ReachabilityPrefixes()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_reachability_prefixe.len(); index++)
    {
        if(ipv6_reachability_prefixe[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::has_operation() const
{
    for (std::size_t index=0; index<ipv6_reachability_prefixe.len(); index++)
    {
        if(ipv6_reachability_prefixe[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-reachability-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-reachability-prefixe")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe>();
        c->parent = this;
        ipv6_reachability_prefixe.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipv6_reachability_prefixe.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-reachability-prefixe")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixe()
    :
    prefix{YType::str, "prefix"}
        ,
    ipv6_reachability_prefixes_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesState>())
    , ipv6_reachability_prefixes_subtlvs(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs>())
    , ipv6_reachability_prefixes_undefined_subtlvs(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs>())
{
    ipv6_reachability_prefixes_state->parent = this;
    ipv6_reachability_prefixes_subtlvs->parent = this;
    ipv6_reachability_prefixes_undefined_subtlvs->parent = this;

    yang_name = "ipv6-reachability-prefixe"; yang_parent_name = "ipv6-reachability-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::~Ipv6ReachabilityPrefixe()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (ipv6_reachability_prefixes_state !=  nullptr && ipv6_reachability_prefixes_state->has_data())
	|| (ipv6_reachability_prefixes_subtlvs !=  nullptr && ipv6_reachability_prefixes_subtlvs->has_data())
	|| (ipv6_reachability_prefixes_undefined_subtlvs !=  nullptr && ipv6_reachability_prefixes_undefined_subtlvs->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (ipv6_reachability_prefixes_state !=  nullptr && ipv6_reachability_prefixes_state->has_operation())
	|| (ipv6_reachability_prefixes_subtlvs !=  nullptr && ipv6_reachability_prefixes_subtlvs->has_operation())
	|| (ipv6_reachability_prefixes_undefined_subtlvs !=  nullptr && ipv6_reachability_prefixes_undefined_subtlvs->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-reachability-prefixe";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-reachability-prefixes-state")
    {
        if(ipv6_reachability_prefixes_state == nullptr)
        {
            ipv6_reachability_prefixes_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesState>();
        }
        return ipv6_reachability_prefixes_state;
    }

    if(child_yang_name == "ipv6-reachability-prefixes-subtlvs")
    {
        if(ipv6_reachability_prefixes_subtlvs == nullptr)
        {
            ipv6_reachability_prefixes_subtlvs = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs>();
        }
        return ipv6_reachability_prefixes_subtlvs;
    }

    if(child_yang_name == "ipv6-reachability-prefixes-undefined-subtlvs")
    {
        if(ipv6_reachability_prefixes_undefined_subtlvs == nullptr)
        {
            ipv6_reachability_prefixes_undefined_subtlvs = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs>();
        }
        return ipv6_reachability_prefixes_undefined_subtlvs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv6_reachability_prefixes_state != nullptr)
    {
        children["ipv6-reachability-prefixes-state"] = ipv6_reachability_prefixes_state;
    }

    if(ipv6_reachability_prefixes_subtlvs != nullptr)
    {
        children["ipv6-reachability-prefixes-subtlvs"] = ipv6_reachability_prefixes_subtlvs;
    }

    if(ipv6_reachability_prefixes_undefined_subtlvs != nullptr)
    {
        children["ipv6-reachability-prefixes-undefined-subtlvs"] = ipv6_reachability_prefixes_undefined_subtlvs;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-reachability-prefixes-state" || name == "ipv6-reachability-prefixes-subtlvs" || name == "ipv6-reachability-prefixes-undefined-subtlvs" || name == "prefix")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesState::Ipv6ReachabilityPrefixesState()
    :
    up_down{YType::boolean, "up-down"},
    sbit{YType::boolean, "sbit"},
    prefix{YType::str, "prefix"},
    metric{YType::uint32, "metric"}
{

    yang_name = "ipv6-reachability-prefixes-state"; yang_parent_name = "ipv6-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesState::~Ipv6ReachabilityPrefixesState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesState::has_data() const
{
    if (is_presence_container) return true;
    return up_down.is_set
	|| sbit.is_set
	|| prefix.is_set
	|| metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up_down.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-reachability-prefixes-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-down" || name == "sbit" || name == "prefix" || name == "metric")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlvs()
    :
    ipv6_reachability_prefixes_subtlv(this, {"type"})
{

    yang_name = "ipv6-reachability-prefixes-subtlvs"; yang_parent_name = "ipv6-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::~Ipv6ReachabilityPrefixesSubtlvs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_reachability_prefixes_subtlv.len(); index++)
    {
        if(ipv6_reachability_prefixes_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<ipv6_reachability_prefixes_subtlv.len(); index++)
    {
        if(ipv6_reachability_prefixes_subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-reachability-prefixes-subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-reachability-prefixes-subtlv")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv>();
        c->parent = this;
        ipv6_reachability_prefixes_subtlv.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipv6_reachability_prefixes_subtlv.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-reachability-prefixes-subtlv")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::Ipv6ReachabilityPrefixesSubtlv()
    :
    type{YType::str, "type"}
        ,
    subtlvs_tag(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag>())
    , subtlvs_tag64(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64>())
    , subtlvs_prefix_sids(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids>())
    , subtlvs_ipv4_source_router_id(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId>())
    , ipv6_reachability_prefixes_subtlvs_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::Ipv6ReachabilityPrefixesSubtlvsState>())
    , subtlvs_ipv6_source_router_id(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId>())
    , subtlvs_flags(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags>())
{
    subtlvs_tag->parent = this;
    subtlvs_tag64->parent = this;
    subtlvs_prefix_sids->parent = this;
    subtlvs_ipv4_source_router_id->parent = this;
    ipv6_reachability_prefixes_subtlvs_state->parent = this;
    subtlvs_ipv6_source_router_id->parent = this;
    subtlvs_flags->parent = this;

    yang_name = "ipv6-reachability-prefixes-subtlv"; yang_parent_name = "ipv6-reachability-prefixes-subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::~Ipv6ReachabilityPrefixesSubtlv()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (subtlvs_tag !=  nullptr && subtlvs_tag->has_data())
	|| (subtlvs_tag64 !=  nullptr && subtlvs_tag64->has_data())
	|| (subtlvs_prefix_sids !=  nullptr && subtlvs_prefix_sids->has_data())
	|| (subtlvs_ipv4_source_router_id !=  nullptr && subtlvs_ipv4_source_router_id->has_data())
	|| (ipv6_reachability_prefixes_subtlvs_state !=  nullptr && ipv6_reachability_prefixes_subtlvs_state->has_data())
	|| (subtlvs_ipv6_source_router_id !=  nullptr && subtlvs_ipv6_source_router_id->has_data())
	|| (subtlvs_flags !=  nullptr && subtlvs_flags->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (subtlvs_tag !=  nullptr && subtlvs_tag->has_operation())
	|| (subtlvs_tag64 !=  nullptr && subtlvs_tag64->has_operation())
	|| (subtlvs_prefix_sids !=  nullptr && subtlvs_prefix_sids->has_operation())
	|| (subtlvs_ipv4_source_router_id !=  nullptr && subtlvs_ipv4_source_router_id->has_operation())
	|| (ipv6_reachability_prefixes_subtlvs_state !=  nullptr && ipv6_reachability_prefixes_subtlvs_state->has_operation())
	|| (subtlvs_ipv6_source_router_id !=  nullptr && subtlvs_ipv6_source_router_id->has_operation())
	|| (subtlvs_flags !=  nullptr && subtlvs_flags->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-reachability-prefixes-subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subtlvs-tag")
    {
        if(subtlvs_tag == nullptr)
        {
            subtlvs_tag = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag>();
        }
        return subtlvs_tag;
    }

    if(child_yang_name == "subtlvs-tag64")
    {
        if(subtlvs_tag64 == nullptr)
        {
            subtlvs_tag64 = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64>();
        }
        return subtlvs_tag64;
    }

    if(child_yang_name == "subtlvs-prefix-sids")
    {
        if(subtlvs_prefix_sids == nullptr)
        {
            subtlvs_prefix_sids = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids>();
        }
        return subtlvs_prefix_sids;
    }

    if(child_yang_name == "subtlvs-ipv4-source-router-id")
    {
        if(subtlvs_ipv4_source_router_id == nullptr)
        {
            subtlvs_ipv4_source_router_id = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId>();
        }
        return subtlvs_ipv4_source_router_id;
    }

    if(child_yang_name == "ipv6-reachability-prefixes-subtlvs-state")
    {
        if(ipv6_reachability_prefixes_subtlvs_state == nullptr)
        {
            ipv6_reachability_prefixes_subtlvs_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::Ipv6ReachabilityPrefixesSubtlvsState>();
        }
        return ipv6_reachability_prefixes_subtlvs_state;
    }

    if(child_yang_name == "subtlvs-ipv6-source-router-id")
    {
        if(subtlvs_ipv6_source_router_id == nullptr)
        {
            subtlvs_ipv6_source_router_id = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId>();
        }
        return subtlvs_ipv6_source_router_id;
    }

    if(child_yang_name == "subtlvs-flags")
    {
        if(subtlvs_flags == nullptr)
        {
            subtlvs_flags = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags>();
        }
        return subtlvs_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(subtlvs_tag != nullptr)
    {
        children["subtlvs-tag"] = subtlvs_tag;
    }

    if(subtlvs_tag64 != nullptr)
    {
        children["subtlvs-tag64"] = subtlvs_tag64;
    }

    if(subtlvs_prefix_sids != nullptr)
    {
        children["subtlvs-prefix-sids"] = subtlvs_prefix_sids;
    }

    if(subtlvs_ipv4_source_router_id != nullptr)
    {
        children["subtlvs-ipv4-source-router-id"] = subtlvs_ipv4_source_router_id;
    }

    if(ipv6_reachability_prefixes_subtlvs_state != nullptr)
    {
        children["ipv6-reachability-prefixes-subtlvs-state"] = ipv6_reachability_prefixes_subtlvs_state;
    }

    if(subtlvs_ipv6_source_router_id != nullptr)
    {
        children["subtlvs-ipv6-source-router-id"] = subtlvs_ipv6_source_router_id;
    }

    if(subtlvs_flags != nullptr)
    {
        children["subtlvs-flags"] = subtlvs_flags;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subtlvs-tag" || name == "subtlvs-tag64" || name == "subtlvs-prefix-sids" || name == "subtlvs-ipv4-source-router-id" || name == "ipv6-reachability-prefixes-subtlvs-state" || name == "subtlvs-ipv6-source-router-id" || name == "subtlvs-flags" || name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::SubtlvsTag()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::State>())
{
    state->parent = this;

    yang_name = "subtlvs-tag"; yang_parent_name = "ipv6-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::~SubtlvsTag()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::State::State()
    :
    tag32{YType::uint32, "tag32"}
{

    yang_name = "state"; yang_parent_name = "subtlvs-tag"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tag32.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::State::has_operation() const
{
    for (auto const & leaf : tag32.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag32.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag32_name_datas = tag32.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag32_name_datas.begin(), tag32_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag32")
    {
        tag32.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag32")
    {
        tag32.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag32")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::SubtlvsTag64()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::State>())
{
    state->parent = this;

    yang_name = "subtlvs-tag64"; yang_parent_name = "ipv6-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::~SubtlvsTag64()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs-tag64";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::State::State()
    :
    tag64{YType::uint64, "tag64"}
{

    yang_name = "state"; yang_parent_name = "subtlvs-tag64"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tag64.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::State::has_operation() const
{
    for (auto const & leaf : tag64.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag64.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag64_name_datas = tag64.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag64_name_datas.begin(), tag64_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag64")
    {
        tag64.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag64")
    {
        tag64.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag64")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSids()
    :
    subtlvs_prefix_sid(this, {"value_"})
{

    yang_name = "subtlvs-prefix-sids"; yang_parent_name = "ipv6-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::~SubtlvsPrefixSids()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subtlvs_prefix_sid.len(); index++)
    {
        if(subtlvs_prefix_sid[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::has_operation() const
{
    for (std::size_t index=0; index<subtlvs_prefix_sid.len(); index++)
    {
        if(subtlvs_prefix_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs-prefix-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subtlvs-prefix-sid")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid>();
        c->parent = this;
        subtlvs_prefix_sid.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : subtlvs_prefix_sid.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subtlvs-prefix-sid")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::SubtlvsPrefixSid()
    :
    value_{YType::uint32, "value"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::State>())
{
    state->parent = this;

    yang_name = "subtlvs-prefix-sid"; yang_parent_name = "subtlvs-prefix-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::~SubtlvsPrefixSid()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs-prefix-sid";
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "value")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::State::State()
    :
    value_{YType::uint32, "value"},
    algorithm{YType::uint8, "algorithm"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "subtlvs-prefix-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return value_.is_set
	|| algorithm.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "algorithm" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::SubtlvsIpv4SourceRouterId()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::State>())
{
    state->parent = this;

    yang_name = "subtlvs-ipv4-source-router-id"; yang_parent_name = "ipv6-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::~SubtlvsIpv4SourceRouterId()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs-ipv4-source-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::State::State()
    :
    type{YType::str, "type"},
    ipv4_source_router_id{YType::str, "ipv4-source-router-id"}
{

    yang_name = "state"; yang_parent_name = "subtlvs-ipv4-source-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4_source_router_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_source_router_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_source_router_id.is_set || is_set(ipv4_source_router_id.yfilter)) leaf_name_data.push_back(ipv4_source_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-source-router-id")
    {
        ipv4_source_router_id = value;
        ipv4_source_router_id.value_namespace = name_space;
        ipv4_source_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4-source-router-id")
    {
        ipv4_source_router_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ipv4-source-router-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::Ipv6ReachabilityPrefixesSubtlvsState::Ipv6ReachabilityPrefixesSubtlvsState()
    :
    type{YType::str, "type"}
{

    yang_name = "ipv6-reachability-prefixes-subtlvs-state"; yang_parent_name = "ipv6-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::Ipv6ReachabilityPrefixesSubtlvsState::~Ipv6ReachabilityPrefixesSubtlvsState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::Ipv6ReachabilityPrefixesSubtlvsState::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::Ipv6ReachabilityPrefixesSubtlvsState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::Ipv6ReachabilityPrefixesSubtlvsState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-reachability-prefixes-subtlvs-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::Ipv6ReachabilityPrefixesSubtlvsState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::Ipv6ReachabilityPrefixesSubtlvsState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::Ipv6ReachabilityPrefixesSubtlvsState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::Ipv6ReachabilityPrefixesSubtlvsState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::Ipv6ReachabilityPrefixesSubtlvsState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::Ipv6ReachabilityPrefixesSubtlvsState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::SubtlvsIpv6SourceRouterId()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::State>())
{
    state->parent = this;

    yang_name = "subtlvs-ipv6-source-router-id"; yang_parent_name = "ipv6-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::~SubtlvsIpv6SourceRouterId()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs-ipv6-source-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::State::State()
    :
    type{YType::str, "type"},
    ipv6_source_router_id{YType::str, "ipv6-source-router-id"}
{

    yang_name = "state"; yang_parent_name = "subtlvs-ipv6-source-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv6_source_router_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv6_source_router_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv6_source_router_id.is_set || is_set(ipv6_source_router_id.yfilter)) leaf_name_data.push_back(ipv6_source_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-source-router-id")
    {
        ipv6_source_router_id = value;
        ipv6_source_router_id.value_namespace = name_space;
        ipv6_source_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv6-source-router-id")
    {
        ipv6_source_router_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ipv6-source-router-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::SubtlvsFlags()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::State>())
{
    state->parent = this;

    yang_name = "subtlvs-flags"; yang_parent_name = "ipv6-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::~SubtlvsFlags()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::State::State()
    :
    type{YType::str, "type"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "subtlvs-flags"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return type.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlvs()
    :
    ipv6_reachability_prefixes_undefined_subtlv(this, {"type"})
{

    yang_name = "ipv6-reachability-prefixes-undefined-subtlvs"; yang_parent_name = "ipv6-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::~Ipv6ReachabilityPrefixesUndefinedSubtlvs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_reachability_prefixes_undefined_subtlv.len(); index++)
    {
        if(ipv6_reachability_prefixes_undefined_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<ipv6_reachability_prefixes_undefined_subtlv.len(); index++)
    {
        if(ipv6_reachability_prefixes_undefined_subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-reachability-prefixes-undefined-subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-reachability-prefixes-undefined-subtlv")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv>();
        c->parent = this;
        ipv6_reachability_prefixes_undefined_subtlv.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipv6_reachability_prefixes_undefined_subtlv.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-reachability-prefixes-undefined-subtlv")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::Ipv6ReachabilityPrefixesUndefinedSubtlv()
    :
    type{YType::uint32, "type"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::State>())
{
    state->parent = this;

    yang_name = "ipv6-reachability-prefixes-undefined-subtlv"; yang_parent_name = "ipv6-reachability-prefixes-undefined-subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::~Ipv6ReachabilityPrefixesUndefinedSubtlv()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-reachability-prefixes-undefined-subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::State::State()
    :
    type{YType::uint8, "type"},
    length{YType::uint8, "length"},
    value_{YType::str, "value"}
{

    yang_name = "state"; yang_parent_name = "ipv6-reachability-prefixes-undefined-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| length.is_set
	|| value_.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::Ipv6TeRouterId()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::State>())
{
    state->parent = this;

    yang_name = "ipv6-te-router-id"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::~Ipv6TeRouterId()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-te-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::State::State()
    :
    router_id{YType::str, "router-id"}
{

    yang_name = "state"; yang_parent_name = "ipv6-te-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : router_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::State::has_operation() const
{
    for (auto const & leaf : router_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto router_id_name_datas = router_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), router_id_name_datas.begin(), router_id_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Ipv4InternalReachability()
    :
    prefixes(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes>())
{
    prefixes->parent = this;

    yang_name = "ipv4-internal-reachability"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::~Ipv4InternalReachability()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::has_data() const
{
    if (is_presence_container) return true;
    return (prefixes !=  nullptr && prefixes->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::has_operation() const
{
    return is_set(yfilter)
	|| (prefixes !=  nullptr && prefixes->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-internal-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes>();
        }
        return prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefixes != nullptr)
    {
        children["prefixes"] = prefixes;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixes()
    :
    prefixe(this, {"prefix"})
{

    yang_name = "prefixes"; yang_parent_name = "ipv4-internal-reachability"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::~Prefixes()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixe.len(); index++)
    {
        if(prefixe[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prefixe.len(); index++)
    {
        if(prefixe[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixe")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe>();
        c->parent = this;
        prefixe.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : prefixe.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixe")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::Prefixe()
    :
    prefix{YType::str, "prefix"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::State>())
    , default_metric(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric>())
    , delay_metric(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric>())
    , expense_metric(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric>())
    , error_metric(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric>())
{
    state->parent = this;
    default_metric->parent = this;
    delay_metric->parent = this;
    expense_metric->parent = this;
    error_metric->parent = this;

    yang_name = "prefixe"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::~Prefixe()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (state !=  nullptr && state->has_data())
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (delay_metric !=  nullptr && delay_metric->has_data())
	|| (expense_metric !=  nullptr && expense_metric->has_data())
	|| (error_metric !=  nullptr && error_metric->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (delay_metric !=  nullptr && delay_metric->has_operation())
	|| (expense_metric !=  nullptr && expense_metric->has_operation())
	|| (error_metric !=  nullptr && error_metric->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixe";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::State>();
        }
        return state;
    }

    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "delay-metric")
    {
        if(delay_metric == nullptr)
        {
            delay_metric = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric>();
        }
        return delay_metric;
    }

    if(child_yang_name == "expense-metric")
    {
        if(expense_metric == nullptr)
        {
            expense_metric = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric>();
        }
        return expense_metric;
    }

    if(child_yang_name == "error-metric")
    {
        if(error_metric == nullptr)
        {
            error_metric = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric>();
        }
        return error_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(default_metric != nullptr)
    {
        children["default-metric"] = default_metric;
    }

    if(delay_metric != nullptr)
    {
        children["delay-metric"] = delay_metric;
    }

    if(expense_metric != nullptr)
    {
        children["expense-metric"] = expense_metric;
    }

    if(error_metric != nullptr)
    {
        children["error-metric"] = error_metric;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "default-metric" || name == "delay-metric" || name == "expense-metric" || name == "error-metric" || name == "prefix")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::State::State()
    :
    up_down{YType::boolean, "up-down"},
    prefix{YType::str, "prefix"}
{

    yang_name = "state"; yang_parent_name = "prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::State::has_data() const
{
    if (is_presence_container) return true;
    return up_down.is_set
	|| prefix.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up_down.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-down" || name == "prefix")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::DefaultMetric()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::State>())
{
    state->parent = this;

    yang_name = "default-metric"; yang_parent_name = "prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::~DefaultMetric()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::State::State()
    :
    flags{YType::enumeration, "flags"},
    default_metric{YType::uint8, "default-metric"}
{

    yang_name = "state"; yang_parent_name = "default-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::State::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| default_metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(default_metric.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "default-metric")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::DelayMetric()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::State>())
{
    state->parent = this;

    yang_name = "delay-metric"; yang_parent_name = "prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::~DelayMetric()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "delay-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::ExpenseMetric()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::State>())
{
    state->parent = this;

    yang_name = "expense-metric"; yang_parent_name = "prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::~ExpenseMetric()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expense-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "expense-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::ErrorMetric()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::State>())
{
    state->parent = this;

    yang_name = "error-metric"; yang_parent_name = "prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::~ErrorMetric()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "error-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::Ipv6InterfaceAddresses()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::State>())
{
    state->parent = this;

    yang_name = "ipv6-interface-addresses"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::~Ipv6InterfaceAddresses()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-interface-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::State::State()
    :
    ipv6_interface_address{YType::str, "ipv6-interface-address"}
{

    yang_name = "state"; yang_parent_name = "ipv6-interface-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ipv6_interface_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::State::has_operation() const
{
    for (auto const & leaf : ipv6_interface_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv6_interface_address.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv6_interface_address_name_datas = ipv6_interface_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_interface_address_name_datas.begin(), ipv6_interface_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-interface-address")
    {
        ipv6_interface_address.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-interface-address")
    {
        ipv6_interface_address.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-interface-address")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachability()
    :
    extended_is_reachability_neighbors(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors>())
{
    extended_is_reachability_neighbors->parent = this;

    yang_name = "extended-is-reachability"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::~ExtendedIsReachability()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::has_data() const
{
    if (is_presence_container) return true;
    return (extended_is_reachability_neighbors !=  nullptr && extended_is_reachability_neighbors->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::has_operation() const
{
    return is_set(yfilter)
	|| (extended_is_reachability_neighbors !=  nullptr && extended_is_reachability_neighbors->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-is-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-is-reachability-neighbors")
    {
        if(extended_is_reachability_neighbors == nullptr)
        {
            extended_is_reachability_neighbors = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors>();
        }
        return extended_is_reachability_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(extended_is_reachability_neighbors != nullptr)
    {
        children["extended-is-reachability-neighbors"] = extended_is_reachability_neighbors;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-is-reachability-neighbors")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbors()
    :
    extended_is_reachability_neighbor(this, {"system_id"})
{

    yang_name = "extended-is-reachability-neighbors"; yang_parent_name = "extended-is-reachability"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::~ExtendedIsReachabilityNeighbors()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_is_reachability_neighbor.len(); index++)
    {
        if(extended_is_reachability_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::has_operation() const
{
    for (std::size_t index=0; index<extended_is_reachability_neighbor.len(); index++)
    {
        if(extended_is_reachability_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-is-reachability-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-is-reachability-neighbor")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor>();
        c->parent = this;
        extended_is_reachability_neighbor.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extended_is_reachability_neighbor.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-is-reachability-neighbor")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::ExtendedIsReachabilityNeighbor()
    :
    system_id{YType::str, "system-id"}
        ,
    neighbors_subtlvs(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs>())
    , neighbors_undefined_subtlvs(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs>())
    , neighbors_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsState>())
{
    neighbors_subtlvs->parent = this;
    neighbors_undefined_subtlvs->parent = this;
    neighbors_state->parent = this;

    yang_name = "extended-is-reachability-neighbor"; yang_parent_name = "extended-is-reachability-neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::~ExtendedIsReachabilityNeighbor()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| (neighbors_subtlvs !=  nullptr && neighbors_subtlvs->has_data())
	|| (neighbors_undefined_subtlvs !=  nullptr && neighbors_undefined_subtlvs->has_data())
	|| (neighbors_state !=  nullptr && neighbors_state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| (neighbors_subtlvs !=  nullptr && neighbors_subtlvs->has_operation())
	|| (neighbors_undefined_subtlvs !=  nullptr && neighbors_undefined_subtlvs->has_operation())
	|| (neighbors_state !=  nullptr && neighbors_state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-is-reachability-neighbor";
    ADD_KEY_TOKEN(system_id, "system-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors-subtlvs")
    {
        if(neighbors_subtlvs == nullptr)
        {
            neighbors_subtlvs = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs>();
        }
        return neighbors_subtlvs;
    }

    if(child_yang_name == "neighbors-undefined-subtlvs")
    {
        if(neighbors_undefined_subtlvs == nullptr)
        {
            neighbors_undefined_subtlvs = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs>();
        }
        return neighbors_undefined_subtlvs;
    }

    if(child_yang_name == "neighbors-state")
    {
        if(neighbors_state == nullptr)
        {
            neighbors_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsState>();
        }
        return neighbors_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbors_subtlvs != nullptr)
    {
        children["neighbors-subtlvs"] = neighbors_subtlvs;
    }

    if(neighbors_undefined_subtlvs != nullptr)
    {
        children["neighbors-undefined-subtlvs"] = neighbors_undefined_subtlvs;
    }

    if(neighbors_state != nullptr)
    {
        children["neighbors-state"] = neighbors_state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors-subtlvs" || name == "neighbors-undefined-subtlvs" || name == "neighbors-state" || name == "system-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlvs()
    :
    neighbors_subtlv(this, {"type"})
{

    yang_name = "neighbors-subtlvs"; yang_parent_name = "extended-is-reachability-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::~NeighborsSubtlvs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbors_subtlv.len(); index++)
    {
        if(neighbors_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<neighbors_subtlv.len(); index++)
    {
        if(neighbors_subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors-subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors-subtlv")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv>();
        c->parent = this;
        neighbors_subtlv.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : neighbors_subtlv.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors-subtlv")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::NeighborsSubtlv()
    :
    type{YType::str, "type"}
        ,
    max_link_bandwidth(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth>())
    , ipv6_neighbor_address(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress>())
    , ipv6_interface_address(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress>())
    , lan_adjacency_sids(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids>())
    , adjacency_sids(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids>())
    , te_default_metric(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric>())
    , admin_group(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup>())
    , max_reservable_link_bandwidth(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth>())
    , extended_admin_group(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup>())
    , unreserved_bandwidths(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths>())
    , ipv4_interface_address(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress>())
    , ipv4_neighbor_address(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress>())
    , bandwidth_constraints(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints>())
{
    max_link_bandwidth->parent = this;
    ipv6_neighbor_address->parent = this;
    ipv6_interface_address->parent = this;
    lan_adjacency_sids->parent = this;
    adjacency_sids->parent = this;
    te_default_metric->parent = this;
    admin_group->parent = this;
    max_reservable_link_bandwidth->parent = this;
    extended_admin_group->parent = this;
    unreserved_bandwidths->parent = this;
    ipv4_interface_address->parent = this;
    ipv4_neighbor_address->parent = this;
    bandwidth_constraints->parent = this;

    yang_name = "neighbors-subtlv"; yang_parent_name = "neighbors-subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::~NeighborsSubtlv()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (max_link_bandwidth !=  nullptr && max_link_bandwidth->has_data())
	|| (ipv6_neighbor_address !=  nullptr && ipv6_neighbor_address->has_data())
	|| (ipv6_interface_address !=  nullptr && ipv6_interface_address->has_data())
	|| (lan_adjacency_sids !=  nullptr && lan_adjacency_sids->has_data())
	|| (adjacency_sids !=  nullptr && adjacency_sids->has_data())
	|| (te_default_metric !=  nullptr && te_default_metric->has_data())
	|| (admin_group !=  nullptr && admin_group->has_data())
	|| (max_reservable_link_bandwidth !=  nullptr && max_reservable_link_bandwidth->has_data())
	|| (extended_admin_group !=  nullptr && extended_admin_group->has_data())
	|| (unreserved_bandwidths !=  nullptr && unreserved_bandwidths->has_data())
	|| (ipv4_interface_address !=  nullptr && ipv4_interface_address->has_data())
	|| (ipv4_neighbor_address !=  nullptr && ipv4_neighbor_address->has_data())
	|| (bandwidth_constraints !=  nullptr && bandwidth_constraints->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (max_link_bandwidth !=  nullptr && max_link_bandwidth->has_operation())
	|| (ipv6_neighbor_address !=  nullptr && ipv6_neighbor_address->has_operation())
	|| (ipv6_interface_address !=  nullptr && ipv6_interface_address->has_operation())
	|| (lan_adjacency_sids !=  nullptr && lan_adjacency_sids->has_operation())
	|| (adjacency_sids !=  nullptr && adjacency_sids->has_operation())
	|| (te_default_metric !=  nullptr && te_default_metric->has_operation())
	|| (admin_group !=  nullptr && admin_group->has_operation())
	|| (max_reservable_link_bandwidth !=  nullptr && max_reservable_link_bandwidth->has_operation())
	|| (extended_admin_group !=  nullptr && extended_admin_group->has_operation())
	|| (unreserved_bandwidths !=  nullptr && unreserved_bandwidths->has_operation())
	|| (ipv4_interface_address !=  nullptr && ipv4_interface_address->has_operation())
	|| (ipv4_neighbor_address !=  nullptr && ipv4_neighbor_address->has_operation())
	|| (bandwidth_constraints !=  nullptr && bandwidth_constraints->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors-subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-link-bandwidth")
    {
        if(max_link_bandwidth == nullptr)
        {
            max_link_bandwidth = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth>();
        }
        return max_link_bandwidth;
    }

    if(child_yang_name == "ipv6-neighbor-address")
    {
        if(ipv6_neighbor_address == nullptr)
        {
            ipv6_neighbor_address = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress>();
        }
        return ipv6_neighbor_address;
    }

    if(child_yang_name == "ipv6-interface-address")
    {
        if(ipv6_interface_address == nullptr)
        {
            ipv6_interface_address = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress>();
        }
        return ipv6_interface_address;
    }

    if(child_yang_name == "lan-adjacency-sids")
    {
        if(lan_adjacency_sids == nullptr)
        {
            lan_adjacency_sids = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids>();
        }
        return lan_adjacency_sids;
    }

    if(child_yang_name == "adjacency-sids")
    {
        if(adjacency_sids == nullptr)
        {
            adjacency_sids = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids>();
        }
        return adjacency_sids;
    }

    if(child_yang_name == "te-default-metric")
    {
        if(te_default_metric == nullptr)
        {
            te_default_metric = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric>();
        }
        return te_default_metric;
    }

    if(child_yang_name == "admin-group")
    {
        if(admin_group == nullptr)
        {
            admin_group = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup>();
        }
        return admin_group;
    }

    if(child_yang_name == "max-reservable-link-bandwidth")
    {
        if(max_reservable_link_bandwidth == nullptr)
        {
            max_reservable_link_bandwidth = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth>();
        }
        return max_reservable_link_bandwidth;
    }

    if(child_yang_name == "extended-admin-group")
    {
        if(extended_admin_group == nullptr)
        {
            extended_admin_group = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup>();
        }
        return extended_admin_group;
    }

    if(child_yang_name == "unreserved-bandwidths")
    {
        if(unreserved_bandwidths == nullptr)
        {
            unreserved_bandwidths = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths>();
        }
        return unreserved_bandwidths;
    }

    if(child_yang_name == "ipv4-interface-address")
    {
        if(ipv4_interface_address == nullptr)
        {
            ipv4_interface_address = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress>();
        }
        return ipv4_interface_address;
    }

    if(child_yang_name == "ipv4-neighbor-address")
    {
        if(ipv4_neighbor_address == nullptr)
        {
            ipv4_neighbor_address = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress>();
        }
        return ipv4_neighbor_address;
    }

    if(child_yang_name == "bandwidth-constraints")
    {
        if(bandwidth_constraints == nullptr)
        {
            bandwidth_constraints = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints>();
        }
        return bandwidth_constraints;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(max_link_bandwidth != nullptr)
    {
        children["max-link-bandwidth"] = max_link_bandwidth;
    }

    if(ipv6_neighbor_address != nullptr)
    {
        children["ipv6-neighbor-address"] = ipv6_neighbor_address;
    }

    if(ipv6_interface_address != nullptr)
    {
        children["ipv6-interface-address"] = ipv6_interface_address;
    }

    if(lan_adjacency_sids != nullptr)
    {
        children["lan-adjacency-sids"] = lan_adjacency_sids;
    }

    if(adjacency_sids != nullptr)
    {
        children["adjacency-sids"] = adjacency_sids;
    }

    if(te_default_metric != nullptr)
    {
        children["te-default-metric"] = te_default_metric;
    }

    if(admin_group != nullptr)
    {
        children["admin-group"] = admin_group;
    }

    if(max_reservable_link_bandwidth != nullptr)
    {
        children["max-reservable-link-bandwidth"] = max_reservable_link_bandwidth;
    }

    if(extended_admin_group != nullptr)
    {
        children["extended-admin-group"] = extended_admin_group;
    }

    if(unreserved_bandwidths != nullptr)
    {
        children["unreserved-bandwidths"] = unreserved_bandwidths;
    }

    if(ipv4_interface_address != nullptr)
    {
        children["ipv4-interface-address"] = ipv4_interface_address;
    }

    if(ipv4_neighbor_address != nullptr)
    {
        children["ipv4-neighbor-address"] = ipv4_neighbor_address;
    }

    if(bandwidth_constraints != nullptr)
    {
        children["bandwidth-constraints"] = bandwidth_constraints;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-link-bandwidth" || name == "ipv6-neighbor-address" || name == "ipv6-interface-address" || name == "lan-adjacency-sids" || name == "adjacency-sids" || name == "te-default-metric" || name == "admin-group" || name == "max-reservable-link-bandwidth" || name == "extended-admin-group" || name == "unreserved-bandwidths" || name == "ipv4-interface-address" || name == "ipv4-neighbor-address" || name == "bandwidth-constraints" || name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::MaxLinkBandwidth()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::State>())
{
    state->parent = this;

    yang_name = "max-link-bandwidth"; yang_parent_name = "neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::~MaxLinkBandwidth()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-link-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::State::State()
    :
    max_link_bandwidth{YType::str, "max-link-bandwidth"}
{

    yang_name = "state"; yang_parent_name = "max-link-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::State::has_data() const
{
    if (is_presence_container) return true;
    return max_link_bandwidth.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_link_bandwidth.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_link_bandwidth.is_set || is_set(max_link_bandwidth.yfilter)) leaf_name_data.push_back(max_link_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-link-bandwidth")
    {
        max_link_bandwidth = value;
        max_link_bandwidth.value_namespace = name_space;
        max_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-link-bandwidth")
    {
        max_link_bandwidth.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-link-bandwidth")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::Ipv6NeighborAddress()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::State>())
{
    state->parent = this;

    yang_name = "ipv6-neighbor-address"; yang_parent_name = "neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::~Ipv6NeighborAddress()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::State::State()
    :
    ipv6_neighbor_address{YType::str, "ipv6-neighbor-address"}
{

    yang_name = "state"; yang_parent_name = "ipv6-neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ipv6_neighbor_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::State::has_operation() const
{
    for (auto const & leaf : ipv6_neighbor_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv6_neighbor_address.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv6_neighbor_address_name_datas = ipv6_neighbor_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_neighbor_address_name_datas.begin(), ipv6_neighbor_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-neighbor-address")
    {
        ipv6_neighbor_address.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-neighbor-address")
    {
        ipv6_neighbor_address.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-neighbor-address")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::Ipv6InterfaceAddress()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::State>())
{
    state->parent = this;

    yang_name = "ipv6-interface-address"; yang_parent_name = "neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::~Ipv6InterfaceAddress()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::State::State()
    :
    ipv6_interface_address{YType::str, "ipv6-interface-address"}
{

    yang_name = "state"; yang_parent_name = "ipv6-interface-address"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ipv6_interface_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::State::has_operation() const
{
    for (auto const & leaf : ipv6_interface_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv6_interface_address.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv6_interface_address_name_datas = ipv6_interface_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_interface_address_name_datas.begin(), ipv6_interface_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-interface-address")
    {
        ipv6_interface_address.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-interface-address")
    {
        ipv6_interface_address.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-interface-address")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySids()
    :
    lan_adjacency_sid(this, {"value_"})
{

    yang_name = "lan-adjacency-sids"; yang_parent_name = "neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::~LanAdjacencySids()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lan_adjacency_sid.len(); index++)
    {
        if(lan_adjacency_sid[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::has_operation() const
{
    for (std::size_t index=0; index<lan_adjacency_sid.len(); index++)
    {
        if(lan_adjacency_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lan-adjacency-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lan-adjacency-sid")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid>();
        c->parent = this;
        lan_adjacency_sid.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lan_adjacency_sid.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lan-adjacency-sid")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::LanAdjacencySid()
    :
    value_{YType::uint32, "value"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::State>())
{
    state->parent = this;

    yang_name = "lan-adjacency-sid"; yang_parent_name = "lan-adjacency-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::~LanAdjacencySid()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lan-adjacency-sid";
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "value")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::State::State()
    :
    value_{YType::uint32, "value"},
    weight{YType::uint8, "weight"},
    neighbor_id{YType::str, "neighbor-id"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "lan-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return value_.is_set
	|| weight.is_set
	|| neighbor_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "weight" || name == "neighbor-id" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySids()
    :
    adjacency_sid(this, {"value_"})
{

    yang_name = "adjacency-sids"; yang_parent_name = "neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::~AdjacencySids()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjacency_sid.len(); index++)
    {
        if(adjacency_sid[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sid.len(); index++)
    {
        if(adjacency_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid>();
        c->parent = this;
        adjacency_sid.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : adjacency_sid.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::AdjacencySid()
    :
    value_{YType::uint32, "value"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::State>())
{
    state->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "adjacency-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::~AdjacencySid()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "value")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::State::State()
    :
    value_{YType::uint32, "value"},
    weight{YType::uint8, "weight"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return value_.is_set
	|| weight.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "weight" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::TeDefaultMetric()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::State>())
{
    state->parent = this;

    yang_name = "te-default-metric"; yang_parent_name = "neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::~TeDefaultMetric()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::State::State()
    :
    te_default_metric{YType::uint32, "te-default-metric"}
{

    yang_name = "state"; yang_parent_name = "te-default-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::State::has_data() const
{
    if (is_presence_container) return true;
    return te_default_metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_default_metric.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_default_metric.is_set || is_set(te_default_metric.yfilter)) leaf_name_data.push_back(te_default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-default-metric")
    {
        te_default_metric = value;
        te_default_metric.value_namespace = name_space;
        te_default_metric.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-default-metric")
    {
        te_default_metric.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-default-metric")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::AdminGroup()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::State>())
{
    state->parent = this;

    yang_name = "admin-group"; yang_parent_name = "neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::~AdminGroup()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::State::State()
    :
    admin_group{YType::uint32, "admin-group"}
{

    yang_name = "state"; yang_parent_name = "admin-group"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::State::has_operation() const
{
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admin_group.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto admin_group_name_datas = admin_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), admin_group_name_datas.begin(), admin_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-group")
    {
        admin_group.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-group")
    {
        admin_group.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-group")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::MaxReservableLinkBandwidth()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::State>())
{
    state->parent = this;

    yang_name = "max-reservable-link-bandwidth"; yang_parent_name = "neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::~MaxReservableLinkBandwidth()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-reservable-link-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::State::State()
    :
    max_reservable_link_bandwidth{YType::str, "max-reservable-link-bandwidth"}
{

    yang_name = "state"; yang_parent_name = "max-reservable-link-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::State::has_data() const
{
    if (is_presence_container) return true;
    return max_reservable_link_bandwidth.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_reservable_link_bandwidth.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_reservable_link_bandwidth.is_set || is_set(max_reservable_link_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_link_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-reservable-link-bandwidth")
    {
        max_reservable_link_bandwidth = value;
        max_reservable_link_bandwidth.value_namespace = name_space;
        max_reservable_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-reservable-link-bandwidth")
    {
        max_reservable_link_bandwidth.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-reservable-link-bandwidth")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::ExtendedAdminGroup()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::State>())
{
    state->parent = this;

    yang_name = "extended-admin-group"; yang_parent_name = "neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::~ExtendedAdminGroup()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-admin-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::State::State()
    :
    extended_admin_group{YType::uint32, "extended-admin-group"}
{

    yang_name = "state"; yang_parent_name = "extended-admin-group"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : extended_admin_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::State::has_operation() const
{
    for (auto const & leaf : extended_admin_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(extended_admin_group.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto extended_admin_group_name_datas = extended_admin_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_admin_group_name_datas.begin(), extended_admin_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-admin-group")
    {
        extended_admin_group.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-admin-group")
    {
        extended_admin_group.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-admin-group")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidths()
    :
    unreserved_bandwidth(this, {"priority"})
{

    yang_name = "unreserved-bandwidths"; yang_parent_name = "neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::~UnreservedBandwidths()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<unreserved_bandwidth.len(); index++)
    {
        if(unreserved_bandwidth[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::has_operation() const
{
    for (std::size_t index=0; index<unreserved_bandwidth.len(); index++)
    {
        if(unreserved_bandwidth[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreserved-bandwidths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unreserved-bandwidth")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth>();
        c->parent = this;
        unreserved_bandwidth.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : unreserved_bandwidth.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unreserved-bandwidth")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::UnreservedBandwidth()
    :
    priority{YType::uint32, "priority"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::State>())
{
    state->parent = this;

    yang_name = "unreserved-bandwidth"; yang_parent_name = "unreserved-bandwidths"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::~UnreservedBandwidth()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreserved-bandwidth";
    ADD_KEY_TOKEN(priority, "priority");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "priority")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::State::State()
    :
    priority{YType::uint8, "priority"},
    unreserved_bandwidth{YType::str, "unreserved-bandwidth"}
{

    yang_name = "state"; yang_parent_name = "unreserved-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::State::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| unreserved_bandwidth.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(unreserved_bandwidth.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.yfilter)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
        unreserved_bandwidth.value_namespace = name_space;
        unreserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "unreserved-bandwidth")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::Ipv4InterfaceAddress()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::State>())
{
    state->parent = this;

    yang_name = "ipv4-interface-address"; yang_parent_name = "neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::~Ipv4InterfaceAddress()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::State::State()
    :
    ipv4_interface_address{YType::str, "ipv4-interface-address"}
{

    yang_name = "state"; yang_parent_name = "ipv4-interface-address"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ipv4_interface_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::State::has_operation() const
{
    for (auto const & leaf : ipv4_interface_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4_interface_address.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv4_interface_address_name_datas = ipv4_interface_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_interface_address_name_datas.begin(), ipv4_interface_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-interface-address")
    {
        ipv4_interface_address.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-interface-address")
    {
        ipv4_interface_address.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-interface-address")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::Ipv4NeighborAddress()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::State>())
{
    state->parent = this;

    yang_name = "ipv4-neighbor-address"; yang_parent_name = "neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::~Ipv4NeighborAddress()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::State::State()
    :
    ipv4_neighbor_address{YType::str, "ipv4-neighbor-address"}
{

    yang_name = "state"; yang_parent_name = "ipv4-neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ipv4_neighbor_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::State::has_operation() const
{
    for (auto const & leaf : ipv4_neighbor_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4_neighbor_address.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv4_neighbor_address_name_datas = ipv4_neighbor_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_neighbor_address_name_datas.begin(), ipv4_neighbor_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-neighbor-address")
    {
        ipv4_neighbor_address.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-neighbor-address")
    {
        ipv4_neighbor_address.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-neighbor-address")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraints()
    :
    bandwidth_constraint(this, {"model_id"})
{

    yang_name = "bandwidth-constraints"; yang_parent_name = "neighbors-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::~BandwidthConstraints()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bandwidth_constraint.len(); index++)
    {
        if(bandwidth_constraint[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_constraint.len(); index++)
    {
        if(bandwidth_constraint[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-constraints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-constraint")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint>();
        c->parent = this;
        bandwidth_constraint.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bandwidth_constraint.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-constraint")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraint()
    :
    model_id{YType::uint32, "model-id"}
        ,
    constraints(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints>())
    , bandwidth_constraints_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraintsState>())
{
    constraints->parent = this;
    bandwidth_constraints_state->parent = this;

    yang_name = "bandwidth-constraint"; yang_parent_name = "bandwidth-constraints"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::~BandwidthConstraint()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::has_data() const
{
    if (is_presence_container) return true;
    return model_id.is_set
	|| (constraints !=  nullptr && constraints->has_data())
	|| (bandwidth_constraints_state !=  nullptr && bandwidth_constraints_state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(model_id.yfilter)
	|| (constraints !=  nullptr && constraints->has_operation())
	|| (bandwidth_constraints_state !=  nullptr && bandwidth_constraints_state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-constraint";
    ADD_KEY_TOKEN(model_id, "model-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.yfilter)) leaf_name_data.push_back(model_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraints")
    {
        if(constraints == nullptr)
        {
            constraints = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints>();
        }
        return constraints;
    }

    if(child_yang_name == "bandwidth-constraints-state")
    {
        if(bandwidth_constraints_state == nullptr)
        {
            bandwidth_constraints_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraintsState>();
        }
        return bandwidth_constraints_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(constraints != nullptr)
    {
        children["constraints"] = constraints;
    }

    if(bandwidth_constraints_state != nullptr)
    {
        children["bandwidth-constraints-state"] = bandwidth_constraints_state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "model-id")
    {
        model_id = value;
        model_id.value_namespace = name_space;
        model_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "model-id")
    {
        model_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraints" || name == "bandwidth-constraints-state" || name == "model-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraints()
    :
    constraint(this, {"constraint_id"})
{

    yang_name = "constraints"; yang_parent_name = "bandwidth-constraint"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::~Constraints()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint.len(); index++)
    {
        if(constraint[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::has_operation() const
{
    for (std::size_t index=0; index<constraint.len(); index++)
    {
        if(constraint[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint>();
        c->parent = this;
        constraint.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : constraint.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::Constraint()
    :
    constraint_id{YType::uint32, "constraint-id"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State>())
{
    state->parent = this;

    yang_name = "constraint"; yang_parent_name = "constraints"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::~Constraint()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::has_data() const
{
    if (is_presence_container) return true;
    return constraint_id.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(constraint_id.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint";
    ADD_KEY_TOKEN(constraint_id, "constraint-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_id.is_set || is_set(constraint_id.yfilter)) leaf_name_data.push_back(constraint_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-id")
    {
        constraint_id = value;
        constraint_id.value_namespace = name_space;
        constraint_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-id")
    {
        constraint_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "constraint-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::State()
    :
    constraint_id{YType::uint32, "constraint-id"},
    bandwidth{YType::str, "bandwidth"}
{

    yang_name = "state"; yang_parent_name = "constraint"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::has_data() const
{
    if (is_presence_container) return true;
    return constraint_id.is_set
	|| bandwidth.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(constraint_id.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_id.is_set || is_set(constraint_id.yfilter)) leaf_name_data.push_back(constraint_id.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-id")
    {
        constraint_id = value;
        constraint_id.value_namespace = name_space;
        constraint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-id")
    {
        constraint_id.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-id" || name == "bandwidth")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraintsState::BandwidthConstraintsState()
    :
    model_id{YType::uint8, "model-id"}
{

    yang_name = "bandwidth-constraints-state"; yang_parent_name = "bandwidth-constraint"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraintsState::~BandwidthConstraintsState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraintsState::has_data() const
{
    if (is_presence_container) return true;
    return model_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraintsState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(model_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraintsState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-constraints-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraintsState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.yfilter)) leaf_name_data.push_back(model_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraintsState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraintsState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraintsState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "model-id")
    {
        model_id = value;
        model_id.value_namespace = name_space;
        model_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraintsState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "model-id")
    {
        model_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraintsState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "model-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlvs()
    :
    neighbors_undefined_subtlv(this, {"type"})
{

    yang_name = "neighbors-undefined-subtlvs"; yang_parent_name = "extended-is-reachability-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::~NeighborsUndefinedSubtlvs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbors_undefined_subtlv.len(); index++)
    {
        if(neighbors_undefined_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<neighbors_undefined_subtlv.len(); index++)
    {
        if(neighbors_undefined_subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors-undefined-subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors-undefined-subtlv")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv>();
        c->parent = this;
        neighbors_undefined_subtlv.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : neighbors_undefined_subtlv.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors-undefined-subtlv")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::NeighborsUndefinedSubtlv()
    :
    type{YType::uint32, "type"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::State>())
{
    state->parent = this;

    yang_name = "neighbors-undefined-subtlv"; yang_parent_name = "neighbors-undefined-subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::~NeighborsUndefinedSubtlv()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors-undefined-subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::State::State()
    :
    type{YType::uint8, "type"},
    length{YType::uint8, "length"},
    value_{YType::str, "value"}
{

    yang_name = "state"; yang_parent_name = "neighbors-undefined-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| length.is_set
	|| value_.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsState::NeighborsState()
    :
    system_id{YType::str, "system-id"},
    metric{YType::uint32, "metric"}
{

    yang_name = "neighbors-state"; yang_parent_name = "extended-is-reachability-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsState::~NeighborsState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsState::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "metric")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceIds()
    :
    instance_id(this, {"instance_id"})
{

    yang_name = "instance-ids"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::~InstanceIds()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance_id.len(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::has_operation() const
{
    for (std::size_t index=0; index<instance_id.len(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-id")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId>();
        c->parent = this;
        instance_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : instance_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::InstanceId()
    :
    instance_id{YType::uint32, "instance-id"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::State>())
{
    state->parent = this;

    yang_name = "instance-id"; yang_parent_name = "instance-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::~InstanceId()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::has_data() const
{
    if (is_presence_container) return true;
    return instance_id.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "instance-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::State::State()
    :
    instance_id{YType::uint16, "instance-id"},
    topology_id{YType::uint16, "topology-id"}
{

    yang_name = "state"; yang_parent_name = "instance-id"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : topology_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return instance_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::State::has_operation() const
{
    for (auto const & leaf : topology_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(topology_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());

    auto topology_id_name_datas = topology_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topology_id_name_datas.begin(), topology_id_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-id")
    {
        topology_id.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-id" || name == "topology-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlgs()
    :
    ipv4_srlg(this, {"instance_number"})
{

    yang_name = "ipv4-srlgs"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::~Ipv4Srlgs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_srlg.len(); index++)
    {
        if(ipv4_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::has_operation() const
{
    for (std::size_t index=0; index<ipv4_srlg.len(); index++)
    {
        if(ipv4_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-srlg")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg>();
        c->parent = this;
        ipv4_srlg.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipv4_srlg.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srlg")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::Ipv4Srlg()
    :
    instance_number{YType::uint32, "instance-number"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::State>())
{
    state->parent = this;

    yang_name = "ipv4-srlg"; yang_parent_name = "ipv4-srlgs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::~Ipv4Srlg()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::has_data() const
{
    if (is_presence_container) return true;
    return instance_number.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_number.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-srlg";
    ADD_KEY_TOKEN(instance_number, "instance-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_number.is_set || is_set(instance_number.yfilter)) leaf_name_data.push_back(instance_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-number")
    {
        instance_number = value;
        instance_number.value_namespace = name_space;
        instance_number.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-number")
    {
        instance_number.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "instance-number")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::State::State()
    :
    instance_number{YType::uint32, "instance-number"},
    system_id{YType::str, "system-id"},
    psn_number{YType::uint8, "psn-number"},
    ipv4_interface_address{YType::str, "ipv4-interface-address"},
    ipv4_neighbor_address{YType::str, "ipv4-neighbor-address"},
    flags{YType::enumeration, "flags"},
    srlg_value{YType::uint32, "srlg-value"}
{

    yang_name = "state"; yang_parent_name = "ipv4-srlg"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : srlg_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return instance_number.is_set
	|| system_id.is_set
	|| psn_number.is_set
	|| ipv4_interface_address.is_set
	|| ipv4_neighbor_address.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : srlg_value.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_number.yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(psn_number.yfilter)
	|| ydk::is_set(ipv4_interface_address.yfilter)
	|| ydk::is_set(ipv4_neighbor_address.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(srlg_value.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_number.is_set || is_set(instance_number.yfilter)) leaf_name_data.push_back(instance_number.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (psn_number.is_set || is_set(psn_number.yfilter)) leaf_name_data.push_back(psn_number.get_name_leafdata());
    if (ipv4_interface_address.is_set || is_set(ipv4_interface_address.yfilter)) leaf_name_data.push_back(ipv4_interface_address.get_name_leafdata());
    if (ipv4_neighbor_address.is_set || is_set(ipv4_neighbor_address.yfilter)) leaf_name_data.push_back(ipv4_neighbor_address.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    auto srlg_value_name_datas = srlg_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_value_name_datas.begin(), srlg_value_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-number")
    {
        instance_number = value;
        instance_number.value_namespace = name_space;
        instance_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psn-number")
    {
        psn_number = value;
        psn_number.value_namespace = name_space;
        psn_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-interface-address")
    {
        ipv4_interface_address = value;
        ipv4_interface_address.value_namespace = name_space;
        ipv4_interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-neighbor-address")
    {
        ipv4_neighbor_address = value;
        ipv4_neighbor_address.value_namespace = name_space;
        ipv4_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
    if(value_path == "srlg-value")
    {
        srlg_value.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-number")
    {
        instance_number.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "psn-number")
    {
        psn_number.yfilter = yfilter;
    }
    if(value_path == "ipv4-interface-address")
    {
        ipv4_interface_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-neighbor-address")
    {
        ipv4_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-number" || name == "system-id" || name == "psn-number" || name == "ipv4-interface-address" || name == "ipv4-neighbor-address" || name == "flags" || name == "srlg-value")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::IsReachability()
    :
    neighbors(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors>())
{
    neighbors->parent = this;

    yang_name = "is-reachability"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::~IsReachability()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::has_data() const
{
    if (is_presence_container) return true;
    return (neighbors !=  nullptr && neighbors->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::has_operation() const
{
    return is_set(yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "is-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbors()
    :
    neighbor(this, {"system_id"})
{

    yang_name = "neighbors"; yang_parent_name = "is-reachability"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::~Neighbors()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : neighbor.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::Neighbor()
    :
    system_id{YType::str, "system-id"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::State>())
    , default_metric(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric>())
    , delay_metric(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric>())
    , expense_metric(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric>())
    , error_metric(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric>())
{
    state->parent = this;
    default_metric->parent = this;
    delay_metric->parent = this;
    expense_metric->parent = this;
    error_metric->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::~Neighbor()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| (state !=  nullptr && state->has_data())
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (delay_metric !=  nullptr && delay_metric->has_data())
	|| (expense_metric !=  nullptr && expense_metric->has_data())
	|| (error_metric !=  nullptr && error_metric->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (delay_metric !=  nullptr && delay_metric->has_operation())
	|| (expense_metric !=  nullptr && expense_metric->has_operation())
	|| (error_metric !=  nullptr && error_metric->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(system_id, "system-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::State>();
        }
        return state;
    }

    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "delay-metric")
    {
        if(delay_metric == nullptr)
        {
            delay_metric = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric>();
        }
        return delay_metric;
    }

    if(child_yang_name == "expense-metric")
    {
        if(expense_metric == nullptr)
        {
            expense_metric = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric>();
        }
        return expense_metric;
    }

    if(child_yang_name == "error-metric")
    {
        if(error_metric == nullptr)
        {
            error_metric = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric>();
        }
        return error_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(default_metric != nullptr)
    {
        children["default-metric"] = default_metric;
    }

    if(delay_metric != nullptr)
    {
        children["delay-metric"] = delay_metric;
    }

    if(expense_metric != nullptr)
    {
        children["expense-metric"] = expense_metric;
    }

    if(error_metric != nullptr)
    {
        children["error-metric"] = error_metric;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "default-metric" || name == "delay-metric" || name == "expense-metric" || name == "error-metric" || name == "system-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::State::State()
    :
    system_id{YType::str, "system-id"}
{

    yang_name = "state"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::State::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::DefaultMetric()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::State>())
{
    state->parent = this;

    yang_name = "default-metric"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::~DefaultMetric()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::State::State()
    :
    flags{YType::enumeration, "flags"},
    default_metric{YType::uint8, "default-metric"}
{

    yang_name = "state"; yang_parent_name = "default-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::State::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| default_metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(default_metric.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "default-metric")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::DelayMetric()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::State>())
{
    state->parent = this;

    yang_name = "delay-metric"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::~DelayMetric()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "delay-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::ExpenseMetric()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::State>())
{
    state->parent = this;

    yang_name = "expense-metric"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::~ExpenseMetric()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expense-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "expense-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::ErrorMetric()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::State>())
{
    state->parent = this;

    yang_name = "error-metric"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::~ErrorMetric()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "error-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::Ipv4TeRouterId()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State>())
{
    state->parent = this;

    yang_name = "ipv4-te-router-id"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::~Ipv4TeRouterId()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-te-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::State()
    :
    router_id{YType::str, "router-id"}
{

    yang_name = "state"; yang_parent_name = "ipv4-te-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : router_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::has_operation() const
{
    for (auto const & leaf : router_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto router_id_name_datas = router_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), router_id_name_datas.begin(), router_id_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::Nlpid()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State>())
{
    state->parent = this;

    yang_name = "nlpid"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::~Nlpid()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlpid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::State()
    :
    nlpid{YType::enumeration, "nlpid"}
{

    yang_name = "state"; yang_parent_name = "nlpid"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : nlpid.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::has_operation() const
{
    for (auto const & leaf : nlpid.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nlpid.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto nlpid_name_datas = nlpid.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nlpid_name_datas.begin(), nlpid_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nlpid")
    {
        nlpid.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlpid")
    {
        nlpid.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlpid")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4Reachability()
    :
    extended_ipv4_reachability_prefixes(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes>())
{
    extended_ipv4_reachability_prefixes->parent = this;

    yang_name = "extended-ipv4-reachability"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::~ExtendedIpv4Reachability()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::has_data() const
{
    if (is_presence_container) return true;
    return (extended_ipv4_reachability_prefixes !=  nullptr && extended_ipv4_reachability_prefixes->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::has_operation() const
{
    return is_set(yfilter)
	|| (extended_ipv4_reachability_prefixes !=  nullptr && extended_ipv4_reachability_prefixes->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-ipv4-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-ipv4-reachability-prefixes")
    {
        if(extended_ipv4_reachability_prefixes == nullptr)
        {
            extended_ipv4_reachability_prefixes = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes>();
        }
        return extended_ipv4_reachability_prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(extended_ipv4_reachability_prefixes != nullptr)
    {
        children["extended-ipv4-reachability-prefixes"] = extended_ipv4_reachability_prefixes;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-ipv4-reachability-prefixes")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixes()
    :
    extended_ipv4_reachability_prefixe(this, {"prefix"})
{

    yang_name = "extended-ipv4-reachability-prefixes"; yang_parent_name = "extended-ipv4-reachability"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::~ExtendedIpv4ReachabilityPrefixes()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_ipv4_reachability_prefixe.len(); index++)
    {
        if(extended_ipv4_reachability_prefixe[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::has_operation() const
{
    for (std::size_t index=0; index<extended_ipv4_reachability_prefixe.len(); index++)
    {
        if(extended_ipv4_reachability_prefixe[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-ipv4-reachability-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-ipv4-reachability-prefixe")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe>();
        c->parent = this;
        extended_ipv4_reachability_prefixe.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extended_ipv4_reachability_prefixe.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-ipv4-reachability-prefixe")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::ExtendedIpv4ReachabilityPrefixe()
    :
    prefix{YType::str, "prefix"}
        ,
    prefixes_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState>())
    , prefixes_subtlvs(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs>())
    , prefixes_undefined_subtlvs(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs>())
{
    prefixes_state->parent = this;
    prefixes_subtlvs->parent = this;
    prefixes_undefined_subtlvs->parent = this;

    yang_name = "extended-ipv4-reachability-prefixe"; yang_parent_name = "extended-ipv4-reachability-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::~ExtendedIpv4ReachabilityPrefixe()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (prefixes_state !=  nullptr && prefixes_state->has_data())
	|| (prefixes_subtlvs !=  nullptr && prefixes_subtlvs->has_data())
	|| (prefixes_undefined_subtlvs !=  nullptr && prefixes_undefined_subtlvs->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (prefixes_state !=  nullptr && prefixes_state->has_operation())
	|| (prefixes_subtlvs !=  nullptr && prefixes_subtlvs->has_operation())
	|| (prefixes_undefined_subtlvs !=  nullptr && prefixes_undefined_subtlvs->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-ipv4-reachability-prefixe";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes-state")
    {
        if(prefixes_state == nullptr)
        {
            prefixes_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState>();
        }
        return prefixes_state;
    }

    if(child_yang_name == "prefixes-subtlvs")
    {
        if(prefixes_subtlvs == nullptr)
        {
            prefixes_subtlvs = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs>();
        }
        return prefixes_subtlvs;
    }

    if(child_yang_name == "prefixes-undefined-subtlvs")
    {
        if(prefixes_undefined_subtlvs == nullptr)
        {
            prefixes_undefined_subtlvs = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs>();
        }
        return prefixes_undefined_subtlvs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefixes_state != nullptr)
    {
        children["prefixes-state"] = prefixes_state;
    }

    if(prefixes_subtlvs != nullptr)
    {
        children["prefixes-subtlvs"] = prefixes_subtlvs;
    }

    if(prefixes_undefined_subtlvs != nullptr)
    {
        children["prefixes-undefined-subtlvs"] = prefixes_undefined_subtlvs;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes-state" || name == "prefixes-subtlvs" || name == "prefixes-undefined-subtlvs" || name == "prefix")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::PrefixesState()
    :
    up_down{YType::boolean, "up-down"},
    sbit{YType::boolean, "sbit"},
    prefix{YType::str, "prefix"},
    metric{YType::uint32, "metric"}
{

    yang_name = "prefixes-state"; yang_parent_name = "extended-ipv4-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::~PrefixesState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::has_data() const
{
    if (is_presence_container) return true;
    return up_down.is_set
	|| sbit.is_set
	|| prefix.is_set
	|| metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up_down.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-down" || name == "sbit" || name == "prefix" || name == "metric")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlvs()
    :
    prefixes_subtlv(this, {"type"})
{

    yang_name = "prefixes-subtlvs"; yang_parent_name = "extended-ipv4-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::~PrefixesSubtlvs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes_subtlv.len(); index++)
    {
        if(prefixes_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<prefixes_subtlv.len(); index++)
    {
        if(prefixes_subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes-subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes-subtlv")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv>();
        c->parent = this;
        prefixes_subtlv.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : prefixes_subtlv.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes-subtlv")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlv()
    :
    type{YType::str, "type"}
        ,
    tag(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag>())
    , ipv4_source_router_id(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId>())
    , ipv6_source_router_id(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId>())
    , prefixes_subtlvs_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState>())
    , flags(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags>())
    , tag64(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64>())
    , prefix_sids(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids>())
{
    tag->parent = this;
    ipv4_source_router_id->parent = this;
    ipv6_source_router_id->parent = this;
    prefixes_subtlvs_state->parent = this;
    flags->parent = this;
    tag64->parent = this;
    prefix_sids->parent = this;

    yang_name = "prefixes-subtlv"; yang_parent_name = "prefixes-subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::~PrefixesSubtlv()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (tag !=  nullptr && tag->has_data())
	|| (ipv4_source_router_id !=  nullptr && ipv4_source_router_id->has_data())
	|| (ipv6_source_router_id !=  nullptr && ipv6_source_router_id->has_data())
	|| (prefixes_subtlvs_state !=  nullptr && prefixes_subtlvs_state->has_data())
	|| (flags !=  nullptr && flags->has_data())
	|| (tag64 !=  nullptr && tag64->has_data())
	|| (prefix_sids !=  nullptr && prefix_sids->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (tag !=  nullptr && tag->has_operation())
	|| (ipv4_source_router_id !=  nullptr && ipv4_source_router_id->has_operation())
	|| (ipv6_source_router_id !=  nullptr && ipv6_source_router_id->has_operation())
	|| (prefixes_subtlvs_state !=  nullptr && prefixes_subtlvs_state->has_operation())
	|| (flags !=  nullptr && flags->has_operation())
	|| (tag64 !=  nullptr && tag64->has_operation())
	|| (prefix_sids !=  nullptr && prefix_sids->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes-subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag>();
        }
        return tag;
    }

    if(child_yang_name == "ipv4-source-router-id")
    {
        if(ipv4_source_router_id == nullptr)
        {
            ipv4_source_router_id = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId>();
        }
        return ipv4_source_router_id;
    }

    if(child_yang_name == "ipv6-source-router-id")
    {
        if(ipv6_source_router_id == nullptr)
        {
            ipv6_source_router_id = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId>();
        }
        return ipv6_source_router_id;
    }

    if(child_yang_name == "prefixes-subtlvs-state")
    {
        if(prefixes_subtlvs_state == nullptr)
        {
            prefixes_subtlvs_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState>();
        }
        return prefixes_subtlvs_state;
    }

    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "tag64")
    {
        if(tag64 == nullptr)
        {
            tag64 = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64>();
        }
        return tag64;
    }

    if(child_yang_name == "prefix-sids")
    {
        if(prefix_sids == nullptr)
        {
            prefix_sids = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids>();
        }
        return prefix_sids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    if(ipv4_source_router_id != nullptr)
    {
        children["ipv4-source-router-id"] = ipv4_source_router_id;
    }

    if(ipv6_source_router_id != nullptr)
    {
        children["ipv6-source-router-id"] = ipv6_source_router_id;
    }

    if(prefixes_subtlvs_state != nullptr)
    {
        children["prefixes-subtlvs-state"] = prefixes_subtlvs_state;
    }

    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    if(tag64 != nullptr)
    {
        children["tag64"] = tag64;
    }

    if(prefix_sids != nullptr)
    {
        children["prefix-sids"] = prefix_sids;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag" || name == "ipv4-source-router-id" || name == "ipv6-source-router-id" || name == "prefixes-subtlvs-state" || name == "flags" || name == "tag64" || name == "prefix-sids" || name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::Tag()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State>())
{
    state->parent = this;

    yang_name = "tag"; yang_parent_name = "prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::~Tag()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::State()
    :
    tag32{YType::uint32, "tag32"}
{

    yang_name = "state"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tag32.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::has_operation() const
{
    for (auto const & leaf : tag32.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag32.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag32_name_datas = tag32.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag32_name_datas.begin(), tag32_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag32")
    {
        tag32.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag32")
    {
        tag32.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag32")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::Ipv4SourceRouterId()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State>())
{
    state->parent = this;

    yang_name = "ipv4-source-router-id"; yang_parent_name = "prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::~Ipv4SourceRouterId()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-source-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::State()
    :
    type{YType::str, "type"},
    ipv4_source_router_id{YType::str, "ipv4-source-router-id"}
{

    yang_name = "state"; yang_parent_name = "ipv4-source-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4_source_router_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_source_router_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_source_router_id.is_set || is_set(ipv4_source_router_id.yfilter)) leaf_name_data.push_back(ipv4_source_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-source-router-id")
    {
        ipv4_source_router_id = value;
        ipv4_source_router_id.value_namespace = name_space;
        ipv4_source_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4-source-router-id")
    {
        ipv4_source_router_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ipv4-source-router-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::Ipv6SourceRouterId()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State>())
{
    state->parent = this;

    yang_name = "ipv6-source-router-id"; yang_parent_name = "prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::~Ipv6SourceRouterId()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-source-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::State()
    :
    type{YType::str, "type"},
    ipv6_source_router_id{YType::str, "ipv6-source-router-id"}
{

    yang_name = "state"; yang_parent_name = "ipv6-source-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv6_source_router_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv6_source_router_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv6_source_router_id.is_set || is_set(ipv6_source_router_id.yfilter)) leaf_name_data.push_back(ipv6_source_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-source-router-id")
    {
        ipv6_source_router_id = value;
        ipv6_source_router_id.value_namespace = name_space;
        ipv6_source_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv6-source-router-id")
    {
        ipv6_source_router_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ipv6-source-router-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::PrefixesSubtlvsState()
    :
    type{YType::str, "type"}
{

    yang_name = "prefixes-subtlvs-state"; yang_parent_name = "prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::~PrefixesSubtlvsState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes-subtlvs-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::Flags()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State>())
{
    state->parent = this;

    yang_name = "flags"; yang_parent_name = "prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::~Flags()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::State()
    :
    type{YType::str, "type"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "flags"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return type.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::Tag64()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State>())
{
    state->parent = this;

    yang_name = "tag64"; yang_parent_name = "prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::~Tag64()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag64";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::State()
    :
    tag64{YType::uint64, "tag64"}
{

    yang_name = "state"; yang_parent_name = "tag64"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tag64.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::has_operation() const
{
    for (auto const & leaf : tag64.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag64.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag64_name_datas = tag64.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag64_name_datas.begin(), tag64_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag64")
    {
        tag64.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag64")
    {
        tag64.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag64")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSids()
    :
    prefix_sid(this, {"value_"})
{

    yang_name = "prefix-sids"; yang_parent_name = "prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::~PrefixSids()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_sid.len(); index++)
    {
        if(prefix_sid[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::has_operation() const
{
    for (std::size_t index=0; index<prefix_sid.len(); index++)
    {
        if(prefix_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid>();
        c->parent = this;
        prefix_sid.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : prefix_sid.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::PrefixSid()
    :
    value_{YType::uint32, "value"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State>())
{
    state->parent = this;

    yang_name = "prefix-sid"; yang_parent_name = "prefix-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::~PrefixSid()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "value")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::State()
    :
    value_{YType::uint32, "value"},
    algorithm{YType::uint8, "algorithm"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "prefix-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return value_.is_set
	|| algorithm.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "algorithm" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlvs()
    :
    prefixes_undefined_subtlv(this, {"type"})
{

    yang_name = "prefixes-undefined-subtlvs"; yang_parent_name = "extended-ipv4-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::~PrefixesUndefinedSubtlvs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes_undefined_subtlv.len(); index++)
    {
        if(prefixes_undefined_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<prefixes_undefined_subtlv.len(); index++)
    {
        if(prefixes_undefined_subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes-undefined-subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes-undefined-subtlv")
    {
        auto c = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv>();
        c->parent = this;
        prefixes_undefined_subtlv.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : prefixes_undefined_subtlv.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes-undefined-subtlv")
        return true;
    return false;
}


}
}

