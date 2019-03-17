
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fib_common_oper_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fib_common_oper {

OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::Prefix()
    :
    prefix{YType::str, "prefix"}
        ,
    next_hops(std::make_shared<OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops>())
    , state(std::make_shared<OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::State>())
{
    next_hops->parent = this;
    state->parent = this;

    yang_name = "prefix"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::~Prefix()
{
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (next_hops !=  nullptr && next_hops->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (next_hops !=  nullptr && next_hops->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hops")
    {
        if(next_hops == nullptr)
        {
            next_hops = std::make_shared<OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops>();
        }
        return next_hops;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hops != nullptr)
    {
        _children["next-hops"] = next_hops;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hops" || name == "state" || name == "prefix")
        return true;
    return false;
}

OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHops()
    :
    next_hop(this, {"index_"})
{

    yang_name = "next-hops"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::~NextHops()
{
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::has_operation() const
{
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        auto ent_ = std::make_shared<OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop>();
        ent_->parent = this;
        next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::NextHop()
    :
    index_{YType::uint32, "index"}
        ,
    state(std::make_shared<OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::State>())
    , interface_ref(std::make_shared<OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef>())
{
    state->parent = this;
    interface_ref->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hops"; is_top_level_class = false; has_list_ancestor = true; 
}

OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::~NextHop()
{
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data());
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    return _children;
}

void OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "interface-ref" || name == "index")
        return true;
    return false;
}

OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::State::State()
    :
    index_{YType::uint64, "index"},
    weight{YType::uint32, "weight"},
    ip_address{YType::str, "ip-address"},
    network_instance{YType::str, "network-instance"},
    popped_mpls_label_stack{YType::str, "popped-mpls-label-stack"},
    pushed_mpls_label_stack{YType::str, "pushed-mpls-label-stack"}
{

    yang_name = "state"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::State::~State()
{
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : popped_mpls_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : pushed_mpls_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return index_.is_set
	|| weight.is_set
	|| ip_address.is_set
	|| network_instance.is_set;
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::State::has_operation() const
{
    for (auto const & leaf : popped_mpls_label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : pushed_mpls_label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(network_instance.yfilter)
	|| ydk::is_set(popped_mpls_label_stack.yfilter)
	|| ydk::is_set(pushed_mpls_label_stack.yfilter);
}

std::string OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (network_instance.is_set || is_set(network_instance.yfilter)) leaf_name_data.push_back(network_instance.get_name_leafdata());

    auto popped_mpls_label_stack_name_datas = popped_mpls_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), popped_mpls_label_stack_name_datas.begin(), popped_mpls_label_stack_name_datas.end());
    auto pushed_mpls_label_stack_name_datas = pushed_mpls_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pushed_mpls_label_stack_name_datas.begin(), pushed_mpls_label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-instance")
    {
        network_instance = value;
        network_instance.value_namespace = name_space;
        network_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "popped-mpls-label-stack")
    {
        popped_mpls_label_stack.append(value);
    }
    if(value_path == "pushed-mpls-label-stack")
    {
        pushed_mpls_label_stack.append(value);
    }
}

void OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "network-instance")
    {
        network_instance.yfilter = yfilter;
    }
    if(value_path == "popped-mpls-label-stack")
    {
        popped_mpls_label_stack.yfilter = yfilter;
    }
    if(value_path == "pushed-mpls-label-stack")
    {
        pushed_mpls_label_stack.yfilter = yfilter;
    }
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "weight" || name == "ip-address" || name == "network-instance" || name == "popped-mpls-label-stack" || name == "pushed-mpls-label-stack")
        return true;
    return false;
}

OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::InterfaceRef()
    :
    state(std::make_shared<OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::State>())
{
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::~InterfaceRef()
{
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::uint32, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::State::~State()
{
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::NextHops::NextHop::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::State::State()
    :
    prefix_index{YType::str, "prefix-index"}
{

    yang_name = "state"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::State::~State()
{
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::State::has_data() const
{
    if (is_presence_container) return true;
    return prefix_index.is_set;
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_index.yfilter);
}

std::string OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_index.is_set || is_set(prefix_index.yfilter)) leaf_name_data.push_back(prefix_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-index")
    {
        prefix_index = value;
        prefix_index.value_namespace = name_space;
        prefix_index.value_namespace_prefix = name_space_prefix;
    }
}

void OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-index")
    {
        prefix_index.yfilter = yfilter;
    }
}

bool OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::Prefixes::Prefix::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-index")
        return true;
    return false;
}

MplsForwarding::MplsForwarding()
    :
    nodes(std::make_shared<MplsForwarding::Nodes>())
{
    nodes->parent = this;

    yang_name = "mpls-forwarding"; yang_parent_name = "Cisco-IOS-XR-fib-common-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

MplsForwarding::~MplsForwarding()
{
}

bool MplsForwarding::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool MplsForwarding::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string MplsForwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fib-common-oper:mpls-forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<MplsForwarding::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void MplsForwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> MplsForwarding::clone_ptr() const
{
    return std::make_shared<MplsForwarding>();
}

std::string MplsForwarding::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsForwarding::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsForwarding::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsForwarding::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsForwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

MplsForwarding::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "mpls-forwarding"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsForwarding::Nodes::~Nodes()
{
}

bool MplsForwarding::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fib-common-oper:mpls-forwarding/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsForwarding::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<MplsForwarding::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsForwarding::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    forwarding_summary(std::make_shared<MplsForwarding::Nodes::Node::ForwardingSummary>())
    , frr_logs(std::make_shared<MplsForwarding::Nodes::Node::FrrLogs>())
    , label_fib(std::make_shared<MplsForwarding::Nodes::Node::LabelFib>())
    , tunnel(std::make_shared<MplsForwarding::Nodes::Node::Tunnel>())
    , frr_database(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase>())
{
    forwarding_summary->parent = this;
    frr_logs->parent = this;
    label_fib->parent = this;
    tunnel->parent = this;
    frr_database->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsForwarding::Nodes::Node::~Node()
{
}

bool MplsForwarding::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_data())
	|| (frr_logs !=  nullptr && frr_logs->has_data())
	|| (label_fib !=  nullptr && label_fib->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (frr_database !=  nullptr && frr_database->has_data());
}

bool MplsForwarding::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_operation())
	|| (frr_logs !=  nullptr && frr_logs->has_operation())
	|| (label_fib !=  nullptr && label_fib->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (frr_database !=  nullptr && frr_database->has_operation());
}

std::string MplsForwarding::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fib-common-oper:mpls-forwarding/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsForwarding::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-summary")
    {
        if(forwarding_summary == nullptr)
        {
            forwarding_summary = std::make_shared<MplsForwarding::Nodes::Node::ForwardingSummary>();
        }
        return forwarding_summary;
    }

    if(child_yang_name == "frr-logs")
    {
        if(frr_logs == nullptr)
        {
            frr_logs = std::make_shared<MplsForwarding::Nodes::Node::FrrLogs>();
        }
        return frr_logs;
    }

    if(child_yang_name == "label-fib")
    {
        if(label_fib == nullptr)
        {
            label_fib = std::make_shared<MplsForwarding::Nodes::Node::LabelFib>();
        }
        return label_fib;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<MplsForwarding::Nodes::Node::Tunnel>();
        }
        return tunnel;
    }

    if(child_yang_name == "frr-database")
    {
        if(frr_database == nullptr)
        {
            frr_database = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase>();
        }
        return frr_database;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(forwarding_summary != nullptr)
    {
        _children["forwarding-summary"] = forwarding_summary;
    }

    if(frr_logs != nullptr)
    {
        _children["frr-logs"] = frr_logs;
    }

    if(label_fib != nullptr)
    {
        _children["label-fib"] = label_fib;
    }

    if(tunnel != nullptr)
    {
        _children["tunnel"] = tunnel;
    }

    if(frr_database != nullptr)
    {
        _children["frr-database"] = frr_database;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-summary" || name == "frr-logs" || name == "label-fib" || name == "tunnel" || name == "frr-database" || name == "node-name")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::ForwardingSummary::ForwardingSummary()
    :
    ipv4_imposition_entries{YType::uint32, "ipv4-imposition-entries"},
    reserved_label_entries{YType::uint32, "reserved-label-entries"},
    label_switched_entries{YType::uint32, "label-switched-entries"},
    deleted_stale_entries{YType::uint32, "deleted-stale-entries"},
    te_head_entries{YType::uint32, "te-head-entries"},
    te_frr_head_entries{YType::uint32, "te-frr-head-entries"},
    te_frr_interface_entries{YType::uint32, "te-frr-interface-entries"},
    te_frr_next_hop_entries{YType::uint32, "te-frr-next-hop-entries"},
    te_mid_points_entries{YType::uint32, "te-mid-points-entries"},
    te_frr_mid_points_entries{YType::uint32, "te-frr-mid-points-entries"},
    te_internal_entries{YType::uint32, "te-internal-entries"},
    te_frr_internal_entries{YType::uint32, "te-frr-internal-entries"},
    total_forwarding_updates{YType::uint32, "total-forwarding-updates"},
    total_forwarding_update_messages{YType::uint32, "total-forwarding-update-messages"},
    total_p2mp_forwarding_updates{YType::uint32, "total-p2mp-forwarding-updates"},
    total_p2mp_forwarding_added_or_modify_messages{YType::uint32, "total-p2mp-forwarding-added-or-modify-messages"},
    total_p2mp_forwarding_delete_messages{YType::uint32, "total-p2mp-forwarding-delete-messages"},
    total_p2mp_forwarding_drop_messages{YType::uint32, "total-p2mp-forwarding-drop-messages"},
    total_p2mp_iir_forwarding_drop_messages{YType::uint32, "total-p2mp-iir-forwarding-drop-messages"},
    lowest_label{YType::uint32, "lowest-label"},
    highest_label{YType::uint32, "highest-label"},
    ignore_protect{YType::uint32, "ignore-protect"},
    mte_head_entries{YType::uint32, "mte-head-entries"},
    mte_ll_entries{YType::uint32, "mte-ll-entries"},
    mte_midpoint_entries{YType::uint32, "mte-midpoint-entries"},
    global_dropped_packets{YType::uint64, "global-dropped-packets"},
    global_fragmented_packets{YType::uint64, "global-fragmented-packets"},
    global_failed_lookups{YType::uint64, "global-failed-lookups"},
    lrpf_entries{YType::uint32, "lrpf-entries"}
{

    yang_name = "forwarding-summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::ForwardingSummary::~ForwardingSummary()
{
}

bool MplsForwarding::Nodes::Node::ForwardingSummary::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_imposition_entries.is_set
	|| reserved_label_entries.is_set
	|| label_switched_entries.is_set
	|| deleted_stale_entries.is_set
	|| te_head_entries.is_set
	|| te_frr_head_entries.is_set
	|| te_frr_interface_entries.is_set
	|| te_frr_next_hop_entries.is_set
	|| te_mid_points_entries.is_set
	|| te_frr_mid_points_entries.is_set
	|| te_internal_entries.is_set
	|| te_frr_internal_entries.is_set
	|| total_forwarding_updates.is_set
	|| total_forwarding_update_messages.is_set
	|| total_p2mp_forwarding_updates.is_set
	|| total_p2mp_forwarding_added_or_modify_messages.is_set
	|| total_p2mp_forwarding_delete_messages.is_set
	|| total_p2mp_forwarding_drop_messages.is_set
	|| total_p2mp_iir_forwarding_drop_messages.is_set
	|| lowest_label.is_set
	|| highest_label.is_set
	|| ignore_protect.is_set
	|| mte_head_entries.is_set
	|| mte_ll_entries.is_set
	|| mte_midpoint_entries.is_set
	|| global_dropped_packets.is_set
	|| global_fragmented_packets.is_set
	|| global_failed_lookups.is_set
	|| lrpf_entries.is_set;
}

bool MplsForwarding::Nodes::Node::ForwardingSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_imposition_entries.yfilter)
	|| ydk::is_set(reserved_label_entries.yfilter)
	|| ydk::is_set(label_switched_entries.yfilter)
	|| ydk::is_set(deleted_stale_entries.yfilter)
	|| ydk::is_set(te_head_entries.yfilter)
	|| ydk::is_set(te_frr_head_entries.yfilter)
	|| ydk::is_set(te_frr_interface_entries.yfilter)
	|| ydk::is_set(te_frr_next_hop_entries.yfilter)
	|| ydk::is_set(te_mid_points_entries.yfilter)
	|| ydk::is_set(te_frr_mid_points_entries.yfilter)
	|| ydk::is_set(te_internal_entries.yfilter)
	|| ydk::is_set(te_frr_internal_entries.yfilter)
	|| ydk::is_set(total_forwarding_updates.yfilter)
	|| ydk::is_set(total_forwarding_update_messages.yfilter)
	|| ydk::is_set(total_p2mp_forwarding_updates.yfilter)
	|| ydk::is_set(total_p2mp_forwarding_added_or_modify_messages.yfilter)
	|| ydk::is_set(total_p2mp_forwarding_delete_messages.yfilter)
	|| ydk::is_set(total_p2mp_forwarding_drop_messages.yfilter)
	|| ydk::is_set(total_p2mp_iir_forwarding_drop_messages.yfilter)
	|| ydk::is_set(lowest_label.yfilter)
	|| ydk::is_set(highest_label.yfilter)
	|| ydk::is_set(ignore_protect.yfilter)
	|| ydk::is_set(mte_head_entries.yfilter)
	|| ydk::is_set(mte_ll_entries.yfilter)
	|| ydk::is_set(mte_midpoint_entries.yfilter)
	|| ydk::is_set(global_dropped_packets.yfilter)
	|| ydk::is_set(global_fragmented_packets.yfilter)
	|| ydk::is_set(global_failed_lookups.yfilter)
	|| ydk::is_set(lrpf_entries.yfilter);
}

std::string MplsForwarding::Nodes::Node::ForwardingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::ForwardingSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_imposition_entries.is_set || is_set(ipv4_imposition_entries.yfilter)) leaf_name_data.push_back(ipv4_imposition_entries.get_name_leafdata());
    if (reserved_label_entries.is_set || is_set(reserved_label_entries.yfilter)) leaf_name_data.push_back(reserved_label_entries.get_name_leafdata());
    if (label_switched_entries.is_set || is_set(label_switched_entries.yfilter)) leaf_name_data.push_back(label_switched_entries.get_name_leafdata());
    if (deleted_stale_entries.is_set || is_set(deleted_stale_entries.yfilter)) leaf_name_data.push_back(deleted_stale_entries.get_name_leafdata());
    if (te_head_entries.is_set || is_set(te_head_entries.yfilter)) leaf_name_data.push_back(te_head_entries.get_name_leafdata());
    if (te_frr_head_entries.is_set || is_set(te_frr_head_entries.yfilter)) leaf_name_data.push_back(te_frr_head_entries.get_name_leafdata());
    if (te_frr_interface_entries.is_set || is_set(te_frr_interface_entries.yfilter)) leaf_name_data.push_back(te_frr_interface_entries.get_name_leafdata());
    if (te_frr_next_hop_entries.is_set || is_set(te_frr_next_hop_entries.yfilter)) leaf_name_data.push_back(te_frr_next_hop_entries.get_name_leafdata());
    if (te_mid_points_entries.is_set || is_set(te_mid_points_entries.yfilter)) leaf_name_data.push_back(te_mid_points_entries.get_name_leafdata());
    if (te_frr_mid_points_entries.is_set || is_set(te_frr_mid_points_entries.yfilter)) leaf_name_data.push_back(te_frr_mid_points_entries.get_name_leafdata());
    if (te_internal_entries.is_set || is_set(te_internal_entries.yfilter)) leaf_name_data.push_back(te_internal_entries.get_name_leafdata());
    if (te_frr_internal_entries.is_set || is_set(te_frr_internal_entries.yfilter)) leaf_name_data.push_back(te_frr_internal_entries.get_name_leafdata());
    if (total_forwarding_updates.is_set || is_set(total_forwarding_updates.yfilter)) leaf_name_data.push_back(total_forwarding_updates.get_name_leafdata());
    if (total_forwarding_update_messages.is_set || is_set(total_forwarding_update_messages.yfilter)) leaf_name_data.push_back(total_forwarding_update_messages.get_name_leafdata());
    if (total_p2mp_forwarding_updates.is_set || is_set(total_p2mp_forwarding_updates.yfilter)) leaf_name_data.push_back(total_p2mp_forwarding_updates.get_name_leafdata());
    if (total_p2mp_forwarding_added_or_modify_messages.is_set || is_set(total_p2mp_forwarding_added_or_modify_messages.yfilter)) leaf_name_data.push_back(total_p2mp_forwarding_added_or_modify_messages.get_name_leafdata());
    if (total_p2mp_forwarding_delete_messages.is_set || is_set(total_p2mp_forwarding_delete_messages.yfilter)) leaf_name_data.push_back(total_p2mp_forwarding_delete_messages.get_name_leafdata());
    if (total_p2mp_forwarding_drop_messages.is_set || is_set(total_p2mp_forwarding_drop_messages.yfilter)) leaf_name_data.push_back(total_p2mp_forwarding_drop_messages.get_name_leafdata());
    if (total_p2mp_iir_forwarding_drop_messages.is_set || is_set(total_p2mp_iir_forwarding_drop_messages.yfilter)) leaf_name_data.push_back(total_p2mp_iir_forwarding_drop_messages.get_name_leafdata());
    if (lowest_label.is_set || is_set(lowest_label.yfilter)) leaf_name_data.push_back(lowest_label.get_name_leafdata());
    if (highest_label.is_set || is_set(highest_label.yfilter)) leaf_name_data.push_back(highest_label.get_name_leafdata());
    if (ignore_protect.is_set || is_set(ignore_protect.yfilter)) leaf_name_data.push_back(ignore_protect.get_name_leafdata());
    if (mte_head_entries.is_set || is_set(mte_head_entries.yfilter)) leaf_name_data.push_back(mte_head_entries.get_name_leafdata());
    if (mte_ll_entries.is_set || is_set(mte_ll_entries.yfilter)) leaf_name_data.push_back(mte_ll_entries.get_name_leafdata());
    if (mte_midpoint_entries.is_set || is_set(mte_midpoint_entries.yfilter)) leaf_name_data.push_back(mte_midpoint_entries.get_name_leafdata());
    if (global_dropped_packets.is_set || is_set(global_dropped_packets.yfilter)) leaf_name_data.push_back(global_dropped_packets.get_name_leafdata());
    if (global_fragmented_packets.is_set || is_set(global_fragmented_packets.yfilter)) leaf_name_data.push_back(global_fragmented_packets.get_name_leafdata());
    if (global_failed_lookups.is_set || is_set(global_failed_lookups.yfilter)) leaf_name_data.push_back(global_failed_lookups.get_name_leafdata());
    if (lrpf_entries.is_set || is_set(lrpf_entries.yfilter)) leaf_name_data.push_back(lrpf_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::ForwardingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::ForwardingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::ForwardingSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-imposition-entries")
    {
        ipv4_imposition_entries = value;
        ipv4_imposition_entries.value_namespace = name_space;
        ipv4_imposition_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-label-entries")
    {
        reserved_label_entries = value;
        reserved_label_entries.value_namespace = name_space;
        reserved_label_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-switched-entries")
    {
        label_switched_entries = value;
        label_switched_entries.value_namespace = name_space;
        label_switched_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted-stale-entries")
    {
        deleted_stale_entries = value;
        deleted_stale_entries.value_namespace = name_space;
        deleted_stale_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-head-entries")
    {
        te_head_entries = value;
        te_head_entries.value_namespace = name_space;
        te_head_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-frr-head-entries")
    {
        te_frr_head_entries = value;
        te_frr_head_entries.value_namespace = name_space;
        te_frr_head_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-frr-interface-entries")
    {
        te_frr_interface_entries = value;
        te_frr_interface_entries.value_namespace = name_space;
        te_frr_interface_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-frr-next-hop-entries")
    {
        te_frr_next_hop_entries = value;
        te_frr_next_hop_entries.value_namespace = name_space;
        te_frr_next_hop_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-mid-points-entries")
    {
        te_mid_points_entries = value;
        te_mid_points_entries.value_namespace = name_space;
        te_mid_points_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-frr-mid-points-entries")
    {
        te_frr_mid_points_entries = value;
        te_frr_mid_points_entries.value_namespace = name_space;
        te_frr_mid_points_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-internal-entries")
    {
        te_internal_entries = value;
        te_internal_entries.value_namespace = name_space;
        te_internal_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-frr-internal-entries")
    {
        te_frr_internal_entries = value;
        te_frr_internal_entries.value_namespace = name_space;
        te_frr_internal_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-forwarding-updates")
    {
        total_forwarding_updates = value;
        total_forwarding_updates.value_namespace = name_space;
        total_forwarding_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-forwarding-update-messages")
    {
        total_forwarding_update_messages = value;
        total_forwarding_update_messages.value_namespace = name_space;
        total_forwarding_update_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-p2mp-forwarding-updates")
    {
        total_p2mp_forwarding_updates = value;
        total_p2mp_forwarding_updates.value_namespace = name_space;
        total_p2mp_forwarding_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-p2mp-forwarding-added-or-modify-messages")
    {
        total_p2mp_forwarding_added_or_modify_messages = value;
        total_p2mp_forwarding_added_or_modify_messages.value_namespace = name_space;
        total_p2mp_forwarding_added_or_modify_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-p2mp-forwarding-delete-messages")
    {
        total_p2mp_forwarding_delete_messages = value;
        total_p2mp_forwarding_delete_messages.value_namespace = name_space;
        total_p2mp_forwarding_delete_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-p2mp-forwarding-drop-messages")
    {
        total_p2mp_forwarding_drop_messages = value;
        total_p2mp_forwarding_drop_messages.value_namespace = name_space;
        total_p2mp_forwarding_drop_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-p2mp-iir-forwarding-drop-messages")
    {
        total_p2mp_iir_forwarding_drop_messages = value;
        total_p2mp_iir_forwarding_drop_messages.value_namespace = name_space;
        total_p2mp_iir_forwarding_drop_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowest-label")
    {
        lowest_label = value;
        lowest_label.value_namespace = name_space;
        lowest_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest-label")
    {
        highest_label = value;
        highest_label.value_namespace = name_space;
        highest_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-protect")
    {
        ignore_protect = value;
        ignore_protect.value_namespace = name_space;
        ignore_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mte-head-entries")
    {
        mte_head_entries = value;
        mte_head_entries.value_namespace = name_space;
        mte_head_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mte-ll-entries")
    {
        mte_ll_entries = value;
        mte_ll_entries.value_namespace = name_space;
        mte_ll_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mte-midpoint-entries")
    {
        mte_midpoint_entries = value;
        mte_midpoint_entries.value_namespace = name_space;
        mte_midpoint_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-dropped-packets")
    {
        global_dropped_packets = value;
        global_dropped_packets.value_namespace = name_space;
        global_dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-fragmented-packets")
    {
        global_fragmented_packets = value;
        global_fragmented_packets.value_namespace = name_space;
        global_fragmented_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-failed-lookups")
    {
        global_failed_lookups = value;
        global_failed_lookups.value_namespace = name_space;
        global_failed_lookups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lrpf-entries")
    {
        lrpf_entries = value;
        lrpf_entries.value_namespace = name_space;
        lrpf_entries.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::ForwardingSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-imposition-entries")
    {
        ipv4_imposition_entries.yfilter = yfilter;
    }
    if(value_path == "reserved-label-entries")
    {
        reserved_label_entries.yfilter = yfilter;
    }
    if(value_path == "label-switched-entries")
    {
        label_switched_entries.yfilter = yfilter;
    }
    if(value_path == "deleted-stale-entries")
    {
        deleted_stale_entries.yfilter = yfilter;
    }
    if(value_path == "te-head-entries")
    {
        te_head_entries.yfilter = yfilter;
    }
    if(value_path == "te-frr-head-entries")
    {
        te_frr_head_entries.yfilter = yfilter;
    }
    if(value_path == "te-frr-interface-entries")
    {
        te_frr_interface_entries.yfilter = yfilter;
    }
    if(value_path == "te-frr-next-hop-entries")
    {
        te_frr_next_hop_entries.yfilter = yfilter;
    }
    if(value_path == "te-mid-points-entries")
    {
        te_mid_points_entries.yfilter = yfilter;
    }
    if(value_path == "te-frr-mid-points-entries")
    {
        te_frr_mid_points_entries.yfilter = yfilter;
    }
    if(value_path == "te-internal-entries")
    {
        te_internal_entries.yfilter = yfilter;
    }
    if(value_path == "te-frr-internal-entries")
    {
        te_frr_internal_entries.yfilter = yfilter;
    }
    if(value_path == "total-forwarding-updates")
    {
        total_forwarding_updates.yfilter = yfilter;
    }
    if(value_path == "total-forwarding-update-messages")
    {
        total_forwarding_update_messages.yfilter = yfilter;
    }
    if(value_path == "total-p2mp-forwarding-updates")
    {
        total_p2mp_forwarding_updates.yfilter = yfilter;
    }
    if(value_path == "total-p2mp-forwarding-added-or-modify-messages")
    {
        total_p2mp_forwarding_added_or_modify_messages.yfilter = yfilter;
    }
    if(value_path == "total-p2mp-forwarding-delete-messages")
    {
        total_p2mp_forwarding_delete_messages.yfilter = yfilter;
    }
    if(value_path == "total-p2mp-forwarding-drop-messages")
    {
        total_p2mp_forwarding_drop_messages.yfilter = yfilter;
    }
    if(value_path == "total-p2mp-iir-forwarding-drop-messages")
    {
        total_p2mp_iir_forwarding_drop_messages.yfilter = yfilter;
    }
    if(value_path == "lowest-label")
    {
        lowest_label.yfilter = yfilter;
    }
    if(value_path == "highest-label")
    {
        highest_label.yfilter = yfilter;
    }
    if(value_path == "ignore-protect")
    {
        ignore_protect.yfilter = yfilter;
    }
    if(value_path == "mte-head-entries")
    {
        mte_head_entries.yfilter = yfilter;
    }
    if(value_path == "mte-ll-entries")
    {
        mte_ll_entries.yfilter = yfilter;
    }
    if(value_path == "mte-midpoint-entries")
    {
        mte_midpoint_entries.yfilter = yfilter;
    }
    if(value_path == "global-dropped-packets")
    {
        global_dropped_packets.yfilter = yfilter;
    }
    if(value_path == "global-fragmented-packets")
    {
        global_fragmented_packets.yfilter = yfilter;
    }
    if(value_path == "global-failed-lookups")
    {
        global_failed_lookups.yfilter = yfilter;
    }
    if(value_path == "lrpf-entries")
    {
        lrpf_entries.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::ForwardingSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-imposition-entries" || name == "reserved-label-entries" || name == "label-switched-entries" || name == "deleted-stale-entries" || name == "te-head-entries" || name == "te-frr-head-entries" || name == "te-frr-interface-entries" || name == "te-frr-next-hop-entries" || name == "te-mid-points-entries" || name == "te-frr-mid-points-entries" || name == "te-internal-entries" || name == "te-frr-internal-entries" || name == "total-forwarding-updates" || name == "total-forwarding-update-messages" || name == "total-p2mp-forwarding-updates" || name == "total-p2mp-forwarding-added-or-modify-messages" || name == "total-p2mp-forwarding-delete-messages" || name == "total-p2mp-forwarding-drop-messages" || name == "total-p2mp-iir-forwarding-drop-messages" || name == "lowest-label" || name == "highest-label" || name == "ignore-protect" || name == "mte-head-entries" || name == "mte-ll-entries" || name == "mte-midpoint-entries" || name == "global-dropped-packets" || name == "global-fragmented-packets" || name == "global-failed-lookups" || name == "lrpf-entries")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrLogs::FrrLogs()
    :
    frr_log(this, {"event_id"})
{

    yang_name = "frr-logs"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrLogs::~FrrLogs()
{
}

bool MplsForwarding::Nodes::Node::FrrLogs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_log.len(); index++)
    {
        if(frr_log[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrLogs::has_operation() const
{
    for (std::size_t index=0; index<frr_log.len(); index++)
    {
        if(frr_log[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrLogs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-logs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrLogs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrLogs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-log")
    {
        auto ent_ = std::make_shared<MplsForwarding::Nodes::Node::FrrLogs::FrrLog>();
        ent_->parent = this;
        frr_log.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrLogs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frr_log.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::FrrLogs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::FrrLogs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::FrrLogs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-log")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrLogs::FrrLog::FrrLog()
    :
    event_id{YType::uint32, "event-id"},
    protected_frr_interface_name{YType::str, "protected-frr-interface-name"},
    next_hop{YType::uint32, "next-hop"},
    number_of_rewrites_affected{YType::uint32, "number-of-rewrites-affected"},
    switching_time_nsecs{YType::uint32, "switching-time-nsecs"},
    main_processing{YType::uint32, "main-processing"},
    fast_bundle_member_down_interface{YType::uint32, "fast-bundle-member-down-interface"},
    frr_event_node_id{YType::str, "frr-event-node-id"}
        ,
    start_time(std::make_shared<MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime>())
{
    start_time->parent = this;

    yang_name = "frr-log"; yang_parent_name = "frr-logs"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrLogs::FrrLog::~FrrLog()
{
}

bool MplsForwarding::Nodes::Node::FrrLogs::FrrLog::has_data() const
{
    if (is_presence_container) return true;
    return event_id.is_set
	|| protected_frr_interface_name.is_set
	|| next_hop.is_set
	|| number_of_rewrites_affected.is_set
	|| switching_time_nsecs.is_set
	|| main_processing.is_set
	|| fast_bundle_member_down_interface.is_set
	|| frr_event_node_id.is_set
	|| (start_time !=  nullptr && start_time->has_data());
}

bool MplsForwarding::Nodes::Node::FrrLogs::FrrLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(protected_frr_interface_name.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(number_of_rewrites_affected.yfilter)
	|| ydk::is_set(switching_time_nsecs.yfilter)
	|| ydk::is_set(main_processing.yfilter)
	|| ydk::is_set(fast_bundle_member_down_interface.yfilter)
	|| ydk::is_set(frr_event_node_id.yfilter)
	|| (start_time !=  nullptr && start_time->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrLogs::FrrLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-log";
    ADD_KEY_TOKEN(event_id, "event-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrLogs::FrrLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (protected_frr_interface_name.is_set || is_set(protected_frr_interface_name.yfilter)) leaf_name_data.push_back(protected_frr_interface_name.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (number_of_rewrites_affected.is_set || is_set(number_of_rewrites_affected.yfilter)) leaf_name_data.push_back(number_of_rewrites_affected.get_name_leafdata());
    if (switching_time_nsecs.is_set || is_set(switching_time_nsecs.yfilter)) leaf_name_data.push_back(switching_time_nsecs.get_name_leafdata());
    if (main_processing.is_set || is_set(main_processing.yfilter)) leaf_name_data.push_back(main_processing.get_name_leafdata());
    if (fast_bundle_member_down_interface.is_set || is_set(fast_bundle_member_down_interface.yfilter)) leaf_name_data.push_back(fast_bundle_member_down_interface.get_name_leafdata());
    if (frr_event_node_id.is_set || is_set(frr_event_node_id.yfilter)) leaf_name_data.push_back(frr_event_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrLogs::FrrLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-time")
    {
        if(start_time == nullptr)
        {
            start_time = std::make_shared<MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime>();
        }
        return start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrLogs::FrrLog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start_time != nullptr)
    {
        _children["start-time"] = start_time;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::FrrLogs::FrrLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-frr-interface-name")
    {
        protected_frr_interface_name = value;
        protected_frr_interface_name.value_namespace = name_space;
        protected_frr_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-rewrites-affected")
    {
        number_of_rewrites_affected = value;
        number_of_rewrites_affected.value_namespace = name_space;
        number_of_rewrites_affected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-time-nsecs")
    {
        switching_time_nsecs = value;
        switching_time_nsecs.value_namespace = name_space;
        switching_time_nsecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-processing")
    {
        main_processing = value;
        main_processing.value_namespace = name_space;
        main_processing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-bundle-member-down-interface")
    {
        fast_bundle_member_down_interface = value;
        fast_bundle_member_down_interface.value_namespace = name_space;
        fast_bundle_member_down_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-event-node-id")
    {
        frr_event_node_id = value;
        frr_event_node_id.value_namespace = name_space;
        frr_event_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrLogs::FrrLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "protected-frr-interface-name")
    {
        protected_frr_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "number-of-rewrites-affected")
    {
        number_of_rewrites_affected.yfilter = yfilter;
    }
    if(value_path == "switching-time-nsecs")
    {
        switching_time_nsecs.yfilter = yfilter;
    }
    if(value_path == "main-processing")
    {
        main_processing.yfilter = yfilter;
    }
    if(value_path == "fast-bundle-member-down-interface")
    {
        fast_bundle_member_down_interface.yfilter = yfilter;
    }
    if(value_path == "frr-event-node-id")
    {
        frr_event_node_id.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrLogs::FrrLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "event-id" || name == "protected-frr-interface-name" || name == "next-hop" || name == "number-of-rewrites-affected" || name == "switching-time-nsecs" || name == "main-processing" || name == "fast-bundle-member-down-interface" || name == "frr-event-node-id")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::StartTime()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "start-time"; yang_parent_name = "frr-log"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::~StartTime()
{
}

bool MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::LabelFib()
    :
    forwarding_details(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails>())
    , informations(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations>())
    , label_security(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity>())
{
    forwarding_details->parent = this;
    informations->parent = this;
    label_security->parent = this;

    yang_name = "label-fib"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::~LabelFib()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::has_data() const
{
    if (is_presence_container) return true;
    return (forwarding_details !=  nullptr && forwarding_details->has_data())
	|| (informations !=  nullptr && informations->has_data())
	|| (label_security !=  nullptr && label_security->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::has_operation() const
{
    return is_set(yfilter)
	|| (forwarding_details !=  nullptr && forwarding_details->has_operation())
	|| (informations !=  nullptr && informations->has_operation())
	|| (label_security !=  nullptr && label_security->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-fib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-details")
    {
        if(forwarding_details == nullptr)
        {
            forwarding_details = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails>();
        }
        return forwarding_details;
    }

    if(child_yang_name == "informations")
    {
        if(informations == nullptr)
        {
            informations = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations>();
        }
        return informations;
    }

    if(child_yang_name == "label-security")
    {
        if(label_security == nullptr)
        {
            label_security = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity>();
        }
        return label_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(forwarding_details != nullptr)
    {
        _children["forwarding-details"] = forwarding_details;
    }

    if(informations != nullptr)
    {
        _children["informations"] = informations;
    }

    if(label_security != nullptr)
    {
        _children["label-security"] = label_security;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::LabelFib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::LabelFib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-details" || name == "informations" || name == "label-security")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetails()
    :
    forwarding_detail(this, {})
{

    yang_name = "forwarding-details"; yang_parent_name = "label-fib"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::~ForwardingDetails()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<forwarding_detail.len(); index++)
    {
        if(forwarding_detail[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::has_operation() const
{
    for (std::size_t index=0; index<forwarding_detail.len(); index++)
    {
        if(forwarding_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-detail")
    {
        auto ent_ = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail>();
        ent_->parent = this;
        forwarding_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : forwarding_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-detail")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::ForwardingDetail()
    :
    label_value{YType::uint32, "label-value"},
    eos{YType::enumeration, "eos"},
    leaf_local_label{YType::uint32, "leaf-local-label"},
    eos_bit{YType::uint32, "eos-bit"},
    hardware_information{YType::str, "hardware-information"},
    leaf_referance_count{YType::uint32, "leaf-referance-count"},
    leaf_flags{YType::uint32, "leaf-flags"},
    path_list_referance_count{YType::uint32, "path-list-referance-count"},
    path_list_flags{YType::uint32, "path-list-flags"},
    ldi_referance_count{YType::uint32, "ldi-referance-count"},
    ldi_flags{YType::uint32, "ldi-flags"},
    ldi_type{YType::uint32, "ldi-type"},
    ldi_pointer{YType::uint32, "ldi-pointer"},
    lw_ldi_type{YType::uint32, "lw-ldi-type"},
    lw_ldi_pointer{YType::uint32, "lw-ldi-pointer"},
    lw_ldi_refernace_count{YType::uint32, "lw-ldi-refernace-count"},
    lw_shared_ldi_pointer{YType::uint32, "lw-shared-ldi-pointer"},
    lspa_flags{YType::uint32, "lspa-flags"},
    afi_table_id{YType::uint32, "afi-table-id"},
    multicast_label{YType::boolean, "multicast-label"},
    leaf_time_in_milli_seconds{YType::uint64, "leaf-time-in-milli-seconds"},
    total_number_of_packets_switched{YType::uint64, "total-number-of-packets-switched"},
    total_number_of_bytes_switched{YType::uint64, "total-number-of-bytes-switched"}
        ,
    ldi_information(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation>())
    , multicast_information(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation>())
    , label_information(this, {})
{
    ldi_information->parent = this;
    multicast_information->parent = this;

    yang_name = "forwarding-detail"; yang_parent_name = "forwarding-details"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::~ForwardingDetail()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_information.len(); index++)
    {
        if(label_information[index]->has_data())
            return true;
    }
    return label_value.is_set
	|| eos.is_set
	|| leaf_local_label.is_set
	|| eos_bit.is_set
	|| hardware_information.is_set
	|| leaf_referance_count.is_set
	|| leaf_flags.is_set
	|| path_list_referance_count.is_set
	|| path_list_flags.is_set
	|| ldi_referance_count.is_set
	|| ldi_flags.is_set
	|| ldi_type.is_set
	|| ldi_pointer.is_set
	|| lw_ldi_type.is_set
	|| lw_ldi_pointer.is_set
	|| lw_ldi_refernace_count.is_set
	|| lw_shared_ldi_pointer.is_set
	|| lspa_flags.is_set
	|| afi_table_id.is_set
	|| multicast_label.is_set
	|| leaf_time_in_milli_seconds.is_set
	|| total_number_of_packets_switched.is_set
	|| total_number_of_bytes_switched.is_set
	|| (ldi_information !=  nullptr && ldi_information->has_data())
	|| (multicast_information !=  nullptr && multicast_information->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::has_operation() const
{
    for (std::size_t index=0; index<label_information.len(); index++)
    {
        if(label_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_value.yfilter)
	|| ydk::is_set(eos.yfilter)
	|| ydk::is_set(leaf_local_label.yfilter)
	|| ydk::is_set(eos_bit.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(leaf_referance_count.yfilter)
	|| ydk::is_set(leaf_flags.yfilter)
	|| ydk::is_set(path_list_referance_count.yfilter)
	|| ydk::is_set(path_list_flags.yfilter)
	|| ydk::is_set(ldi_referance_count.yfilter)
	|| ydk::is_set(ldi_flags.yfilter)
	|| ydk::is_set(ldi_type.yfilter)
	|| ydk::is_set(ldi_pointer.yfilter)
	|| ydk::is_set(lw_ldi_type.yfilter)
	|| ydk::is_set(lw_ldi_pointer.yfilter)
	|| ydk::is_set(lw_ldi_refernace_count.yfilter)
	|| ydk::is_set(lw_shared_ldi_pointer.yfilter)
	|| ydk::is_set(lspa_flags.yfilter)
	|| ydk::is_set(afi_table_id.yfilter)
	|| ydk::is_set(multicast_label.yfilter)
	|| ydk::is_set(leaf_time_in_milli_seconds.yfilter)
	|| ydk::is_set(total_number_of_packets_switched.yfilter)
	|| ydk::is_set(total_number_of_bytes_switched.yfilter)
	|| (ldi_information !=  nullptr && ldi_information->has_operation())
	|| (multicast_information !=  nullptr && multicast_information->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-detail";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_value.is_set || is_set(label_value.yfilter)) leaf_name_data.push_back(label_value.get_name_leafdata());
    if (eos.is_set || is_set(eos.yfilter)) leaf_name_data.push_back(eos.get_name_leafdata());
    if (leaf_local_label.is_set || is_set(leaf_local_label.yfilter)) leaf_name_data.push_back(leaf_local_label.get_name_leafdata());
    if (eos_bit.is_set || is_set(eos_bit.yfilter)) leaf_name_data.push_back(eos_bit.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (leaf_referance_count.is_set || is_set(leaf_referance_count.yfilter)) leaf_name_data.push_back(leaf_referance_count.get_name_leafdata());
    if (leaf_flags.is_set || is_set(leaf_flags.yfilter)) leaf_name_data.push_back(leaf_flags.get_name_leafdata());
    if (path_list_referance_count.is_set || is_set(path_list_referance_count.yfilter)) leaf_name_data.push_back(path_list_referance_count.get_name_leafdata());
    if (path_list_flags.is_set || is_set(path_list_flags.yfilter)) leaf_name_data.push_back(path_list_flags.get_name_leafdata());
    if (ldi_referance_count.is_set || is_set(ldi_referance_count.yfilter)) leaf_name_data.push_back(ldi_referance_count.get_name_leafdata());
    if (ldi_flags.is_set || is_set(ldi_flags.yfilter)) leaf_name_data.push_back(ldi_flags.get_name_leafdata());
    if (ldi_type.is_set || is_set(ldi_type.yfilter)) leaf_name_data.push_back(ldi_type.get_name_leafdata());
    if (ldi_pointer.is_set || is_set(ldi_pointer.yfilter)) leaf_name_data.push_back(ldi_pointer.get_name_leafdata());
    if (lw_ldi_type.is_set || is_set(lw_ldi_type.yfilter)) leaf_name_data.push_back(lw_ldi_type.get_name_leafdata());
    if (lw_ldi_pointer.is_set || is_set(lw_ldi_pointer.yfilter)) leaf_name_data.push_back(lw_ldi_pointer.get_name_leafdata());
    if (lw_ldi_refernace_count.is_set || is_set(lw_ldi_refernace_count.yfilter)) leaf_name_data.push_back(lw_ldi_refernace_count.get_name_leafdata());
    if (lw_shared_ldi_pointer.is_set || is_set(lw_shared_ldi_pointer.yfilter)) leaf_name_data.push_back(lw_shared_ldi_pointer.get_name_leafdata());
    if (lspa_flags.is_set || is_set(lspa_flags.yfilter)) leaf_name_data.push_back(lspa_flags.get_name_leafdata());
    if (afi_table_id.is_set || is_set(afi_table_id.yfilter)) leaf_name_data.push_back(afi_table_id.get_name_leafdata());
    if (multicast_label.is_set || is_set(multicast_label.yfilter)) leaf_name_data.push_back(multicast_label.get_name_leafdata());
    if (leaf_time_in_milli_seconds.is_set || is_set(leaf_time_in_milli_seconds.yfilter)) leaf_name_data.push_back(leaf_time_in_milli_seconds.get_name_leafdata());
    if (total_number_of_packets_switched.is_set || is_set(total_number_of_packets_switched.yfilter)) leaf_name_data.push_back(total_number_of_packets_switched.get_name_leafdata());
    if (total_number_of_bytes_switched.is_set || is_set(total_number_of_bytes_switched.yfilter)) leaf_name_data.push_back(total_number_of_bytes_switched.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldi-information")
    {
        if(ldi_information == nullptr)
        {
            ldi_information = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation>();
        }
        return ldi_information;
    }

    if(child_yang_name == "multicast-information")
    {
        if(multicast_information == nullptr)
        {
            multicast_information = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation>();
        }
        return multicast_information;
    }

    if(child_yang_name == "label-information")
    {
        auto ent_ = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation>();
        ent_->parent = this;
        label_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ldi_information != nullptr)
    {
        _children["ldi-information"] = ldi_information;
    }

    if(multicast_information != nullptr)
    {
        _children["multicast-information"] = multicast_information;
    }

    count_ = 0;
    for (auto ent_ : label_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-value")
    {
        label_value = value;
        label_value.value_namespace = name_space;
        label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eos")
    {
        eos = value;
        eos.value_namespace = name_space;
        eos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-local-label")
    {
        leaf_local_label = value;
        leaf_local_label.value_namespace = name_space;
        leaf_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eos-bit")
    {
        eos_bit = value;
        eos_bit.value_namespace = name_space;
        eos_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count = value;
        leaf_referance_count.value_namespace = name_space;
        leaf_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags = value;
        leaf_flags.value_namespace = name_space;
        leaf_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count = value;
        path_list_referance_count.value_namespace = name_space;
        path_list_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags = value;
        path_list_flags.value_namespace = name_space;
        path_list_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count = value;
        ldi_referance_count.value_namespace = name_space;
        ldi_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags = value;
        ldi_flags.value_namespace = name_space;
        ldi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-type")
    {
        ldi_type = value;
        ldi_type.value_namespace = name_space;
        ldi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer = value;
        ldi_pointer.value_namespace = name_space;
        ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type = value;
        lw_ldi_type.value_namespace = name_space;
        lw_ldi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer = value;
        lw_ldi_pointer.value_namespace = name_space;
        lw_ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count = value;
        lw_ldi_refernace_count.value_namespace = name_space;
        lw_ldi_refernace_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer = value;
        lw_shared_ldi_pointer.value_namespace = name_space;
        lw_shared_ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags = value;
        lspa_flags.value_namespace = name_space;
        lspa_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-table-id")
    {
        afi_table_id = value;
        afi_table_id.value_namespace = name_space;
        afi_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-label")
    {
        multicast_label = value;
        multicast_label.value_namespace = name_space;
        multicast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds = value;
        leaf_time_in_milli_seconds.value_namespace = name_space;
        leaf_time_in_milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-number-of-packets-switched")
    {
        total_number_of_packets_switched = value;
        total_number_of_packets_switched.value_namespace = name_space;
        total_number_of_packets_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-number-of-bytes-switched")
    {
        total_number_of_bytes_switched = value;
        total_number_of_bytes_switched.value_namespace = name_space;
        total_number_of_bytes_switched.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-value")
    {
        label_value.yfilter = yfilter;
    }
    if(value_path == "eos")
    {
        eos.yfilter = yfilter;
    }
    if(value_path == "leaf-local-label")
    {
        leaf_local_label.yfilter = yfilter;
    }
    if(value_path == "eos-bit")
    {
        eos_bit.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count.yfilter = yfilter;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags.yfilter = yfilter;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count.yfilter = yfilter;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags.yfilter = yfilter;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count.yfilter = yfilter;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags.yfilter = yfilter;
    }
    if(value_path == "ldi-type")
    {
        ldi_type.yfilter = yfilter;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count.yfilter = yfilter;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags.yfilter = yfilter;
    }
    if(value_path == "afi-table-id")
    {
        afi_table_id.yfilter = yfilter;
    }
    if(value_path == "multicast-label")
    {
        multicast_label.yfilter = yfilter;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds.yfilter = yfilter;
    }
    if(value_path == "total-number-of-packets-switched")
    {
        total_number_of_packets_switched.yfilter = yfilter;
    }
    if(value_path == "total-number-of-bytes-switched")
    {
        total_number_of_bytes_switched.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldi-information" || name == "multicast-information" || name == "label-information" || name == "label-value" || name == "eos" || name == "leaf-local-label" || name == "eos-bit" || name == "hardware-information" || name == "leaf-referance-count" || name == "leaf-flags" || name == "path-list-referance-count" || name == "path-list-flags" || name == "ldi-referance-count" || name == "ldi-flags" || name == "ldi-type" || name == "ldi-pointer" || name == "lw-ldi-type" || name == "lw-ldi-pointer" || name == "lw-ldi-refernace-count" || name == "lw-shared-ldi-pointer" || name == "lspa-flags" || name == "afi-table-id" || name == "multicast-label" || name == "leaf-time-in-milli-seconds" || name == "total-number-of-packets-switched" || name == "total-number-of-bytes-switched")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::LdiInformation()
    :
    ldi_hardware_information{YType::str, "ldi-hardware-information"}
{

    yang_name = "ldi-information"; yang_parent_name = "forwarding-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::~LdiInformation()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::has_data() const
{
    if (is_presence_container) return true;
    return ldi_hardware_information.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldi_hardware_information.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldi-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldi_hardware_information.is_set || is_set(ldi_hardware_information.yfilter)) leaf_name_data.push_back(ldi_hardware_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information = value;
        ldi_hardware_information.value_namespace = name_space;
        ldi_hardware_information.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldi-hardware-information")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::MulticastInformation()
    :
    multicast_mol_base_flags{YType::uint32, "multicast-mol-base-flags"},
    multicast_mol_flags{YType::uint16, "multicast-mol-flags"},
    multicast_mol_referance_count{YType::uint16, "multicast-mol-referance-count"},
    multicast_tunnel_interface_handler{YType::str, "multicast-tunnel-interface-handler"},
    multicast_tunnel_id{YType::uint32, "multicast-tunnel-id"},
    multicast_tunnel_next_hop_information{YType::uint32, "multicast-tunnel-next-hop-information"},
    multicast_tunnel_lspvif{YType::uint32, "multicast-tunnel-lspvif"},
    multicast_mpls_output_paths{YType::uint16, "multicast-mpls-output-paths"},
    multicast_mpls_protocol_output_paths{YType::uint16, "multicast-mpls-protocol-output-paths"},
    multicast_mpls_local_output_paths{YType::uint16, "multicast-mpls-local-output-paths"},
    multicast_rpf_id{YType::uint32, "multicast-rpf-id"},
    multicast_encap_id{YType::uint32, "multicast-encap-id"},
    multicast_platform_data_length{YType::uint8, "multicast-platform-data-length"},
    multicast_platform_data{YType::str, "multicast-platform-data"}
{

    yang_name = "multicast-information"; yang_parent_name = "forwarding-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::~MulticastInformation()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::has_data() const
{
    if (is_presence_container) return true;
    return multicast_mol_base_flags.is_set
	|| multicast_mol_flags.is_set
	|| multicast_mol_referance_count.is_set
	|| multicast_tunnel_interface_handler.is_set
	|| multicast_tunnel_id.is_set
	|| multicast_tunnel_next_hop_information.is_set
	|| multicast_tunnel_lspvif.is_set
	|| multicast_mpls_output_paths.is_set
	|| multicast_mpls_protocol_output_paths.is_set
	|| multicast_mpls_local_output_paths.is_set
	|| multicast_rpf_id.is_set
	|| multicast_encap_id.is_set
	|| multicast_platform_data_length.is_set
	|| multicast_platform_data.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast_mol_base_flags.yfilter)
	|| ydk::is_set(multicast_mol_flags.yfilter)
	|| ydk::is_set(multicast_mol_referance_count.yfilter)
	|| ydk::is_set(multicast_tunnel_interface_handler.yfilter)
	|| ydk::is_set(multicast_tunnel_id.yfilter)
	|| ydk::is_set(multicast_tunnel_next_hop_information.yfilter)
	|| ydk::is_set(multicast_tunnel_lspvif.yfilter)
	|| ydk::is_set(multicast_mpls_output_paths.yfilter)
	|| ydk::is_set(multicast_mpls_protocol_output_paths.yfilter)
	|| ydk::is_set(multicast_mpls_local_output_paths.yfilter)
	|| ydk::is_set(multicast_rpf_id.yfilter)
	|| ydk::is_set(multicast_encap_id.yfilter)
	|| ydk::is_set(multicast_platform_data_length.yfilter)
	|| ydk::is_set(multicast_platform_data.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_mol_base_flags.is_set || is_set(multicast_mol_base_flags.yfilter)) leaf_name_data.push_back(multicast_mol_base_flags.get_name_leafdata());
    if (multicast_mol_flags.is_set || is_set(multicast_mol_flags.yfilter)) leaf_name_data.push_back(multicast_mol_flags.get_name_leafdata());
    if (multicast_mol_referance_count.is_set || is_set(multicast_mol_referance_count.yfilter)) leaf_name_data.push_back(multicast_mol_referance_count.get_name_leafdata());
    if (multicast_tunnel_interface_handler.is_set || is_set(multicast_tunnel_interface_handler.yfilter)) leaf_name_data.push_back(multicast_tunnel_interface_handler.get_name_leafdata());
    if (multicast_tunnel_id.is_set || is_set(multicast_tunnel_id.yfilter)) leaf_name_data.push_back(multicast_tunnel_id.get_name_leafdata());
    if (multicast_tunnel_next_hop_information.is_set || is_set(multicast_tunnel_next_hop_information.yfilter)) leaf_name_data.push_back(multicast_tunnel_next_hop_information.get_name_leafdata());
    if (multicast_tunnel_lspvif.is_set || is_set(multicast_tunnel_lspvif.yfilter)) leaf_name_data.push_back(multicast_tunnel_lspvif.get_name_leafdata());
    if (multicast_mpls_output_paths.is_set || is_set(multicast_mpls_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_output_paths.get_name_leafdata());
    if (multicast_mpls_protocol_output_paths.is_set || is_set(multicast_mpls_protocol_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_protocol_output_paths.get_name_leafdata());
    if (multicast_mpls_local_output_paths.is_set || is_set(multicast_mpls_local_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_local_output_paths.get_name_leafdata());
    if (multicast_rpf_id.is_set || is_set(multicast_rpf_id.yfilter)) leaf_name_data.push_back(multicast_rpf_id.get_name_leafdata());
    if (multicast_encap_id.is_set || is_set(multicast_encap_id.yfilter)) leaf_name_data.push_back(multicast_encap_id.get_name_leafdata());
    if (multicast_platform_data_length.is_set || is_set(multicast_platform_data_length.yfilter)) leaf_name_data.push_back(multicast_platform_data_length.get_name_leafdata());
    if (multicast_platform_data.is_set || is_set(multicast_platform_data.yfilter)) leaf_name_data.push_back(multicast_platform_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags = value;
        multicast_mol_base_flags.value_namespace = name_space;
        multicast_mol_base_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags = value;
        multicast_mol_flags.value_namespace = name_space;
        multicast_mol_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count = value;
        multicast_mol_referance_count.value_namespace = name_space;
        multicast_mol_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler = value;
        multicast_tunnel_interface_handler.value_namespace = name_space;
        multicast_tunnel_interface_handler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id = value;
        multicast_tunnel_id.value_namespace = name_space;
        multicast_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information = value;
        multicast_tunnel_next_hop_information.value_namespace = name_space;
        multicast_tunnel_next_hop_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif = value;
        multicast_tunnel_lspvif.value_namespace = name_space;
        multicast_tunnel_lspvif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths = value;
        multicast_mpls_output_paths.value_namespace = name_space;
        multicast_mpls_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths = value;
        multicast_mpls_protocol_output_paths.value_namespace = name_space;
        multicast_mpls_protocol_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths = value;
        multicast_mpls_local_output_paths.value_namespace = name_space;
        multicast_mpls_local_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id = value;
        multicast_rpf_id.value_namespace = name_space;
        multicast_rpf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id = value;
        multicast_encap_id.value_namespace = name_space;
        multicast_encap_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length = value;
        multicast_platform_data_length.value_namespace = name_space;
        multicast_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data = value;
        multicast_platform_data.value_namespace = name_space;
        multicast_platform_data.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id.yfilter = yfilter;
    }
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id.yfilter = yfilter;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-mol-base-flags" || name == "multicast-mol-flags" || name == "multicast-mol-referance-count" || name == "multicast-tunnel-interface-handler" || name == "multicast-tunnel-id" || name == "multicast-tunnel-next-hop-information" || name == "multicast-tunnel-lspvif" || name == "multicast-mpls-output-paths" || name == "multicast-mpls-protocol-output-paths" || name == "multicast-mpls-local-output-paths" || name == "multicast-rpf-id" || name == "multicast-encap-id" || name == "multicast-platform-data-length" || name == "multicast-platform-data")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformation()
    :
    label_information_type{YType::uint32, "label-information-type"},
    local_label{YType::uint32, "local-label"},
    outgoing_label{YType::uint32, "outgoing-label"},
    mpls_adjacency_flags{YType::uint32, "mpls-adjacency-flags"},
    tunnel_id_present{YType::boolean, "tunnel-id-present"},
    label_information_path_index{YType::uint32, "label-information-path-index"},
    label_information_next_hop_type{YType::enumeration, "label-information-next-hop-type"},
    label_information_next_hop_protocol{YType::enumeration, "label-information-next-hop-protocol"},
    tx_bytes{YType::uint64, "tx-bytes"},
    tx_packets{YType::uint64, "tx-packets"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_physical_interface{YType::str, "outgoing-physical-interface"},
    outgoing_parent_interface{YType::str, "outgoing-parent-interface"},
    tunnel_interface{YType::str, "tunnel-interface"},
    outgoing_label_string{YType::str, "outgoing-label-string"},
    prefix_or_id{YType::str, "prefix-or-id"},
    label_information_next_hop_string{YType::str, "label-information-next-hop-string"},
    label_information_route_version{YType::uint64, "label-information-route-version"},
    label_information_time_in_milli_seconds{YType::uint64, "label-information-time-in-milli-seconds"}
        ,
    label_information_detail(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail>())
    , exact_route_hash_info(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo>())
{
    label_information_detail->parent = this;
    exact_route_hash_info->parent = this;

    yang_name = "label-information"; yang_parent_name = "forwarding-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::~LabelInformation()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::has_data() const
{
    if (is_presence_container) return true;
    return label_information_type.is_set
	|| local_label.is_set
	|| outgoing_label.is_set
	|| mpls_adjacency_flags.is_set
	|| tunnel_id_present.is_set
	|| label_information_path_index.is_set
	|| label_information_next_hop_type.is_set
	|| label_information_next_hop_protocol.is_set
	|| tx_bytes.is_set
	|| tx_packets.is_set
	|| outgoing_interface.is_set
	|| outgoing_physical_interface.is_set
	|| outgoing_parent_interface.is_set
	|| tunnel_interface.is_set
	|| outgoing_label_string.is_set
	|| prefix_or_id.is_set
	|| label_information_next_hop_string.is_set
	|| label_information_route_version.is_set
	|| label_information_time_in_milli_seconds.is_set
	|| (label_information_detail !=  nullptr && label_information_detail->has_data())
	|| (exact_route_hash_info !=  nullptr && exact_route_hash_info->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_information_type.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(mpls_adjacency_flags.yfilter)
	|| ydk::is_set(tunnel_id_present.yfilter)
	|| ydk::is_set(label_information_path_index.yfilter)
	|| ydk::is_set(label_information_next_hop_type.yfilter)
	|| ydk::is_set(label_information_next_hop_protocol.yfilter)
	|| ydk::is_set(tx_bytes.yfilter)
	|| ydk::is_set(tx_packets.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_physical_interface.yfilter)
	|| ydk::is_set(outgoing_parent_interface.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(outgoing_label_string.yfilter)
	|| ydk::is_set(prefix_or_id.yfilter)
	|| ydk::is_set(label_information_next_hop_string.yfilter)
	|| ydk::is_set(label_information_route_version.yfilter)
	|| ydk::is_set(label_information_time_in_milli_seconds.yfilter)
	|| (label_information_detail !=  nullptr && label_information_detail->has_operation())
	|| (exact_route_hash_info !=  nullptr && exact_route_hash_info->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_information_type.is_set || is_set(label_information_type.yfilter)) leaf_name_data.push_back(label_information_type.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (mpls_adjacency_flags.is_set || is_set(mpls_adjacency_flags.yfilter)) leaf_name_data.push_back(mpls_adjacency_flags.get_name_leafdata());
    if (tunnel_id_present.is_set || is_set(tunnel_id_present.yfilter)) leaf_name_data.push_back(tunnel_id_present.get_name_leafdata());
    if (label_information_path_index.is_set || is_set(label_information_path_index.yfilter)) leaf_name_data.push_back(label_information_path_index.get_name_leafdata());
    if (label_information_next_hop_type.is_set || is_set(label_information_next_hop_type.yfilter)) leaf_name_data.push_back(label_information_next_hop_type.get_name_leafdata());
    if (label_information_next_hop_protocol.is_set || is_set(label_information_next_hop_protocol.yfilter)) leaf_name_data.push_back(label_information_next_hop_protocol.get_name_leafdata());
    if (tx_bytes.is_set || is_set(tx_bytes.yfilter)) leaf_name_data.push_back(tx_bytes.get_name_leafdata());
    if (tx_packets.is_set || is_set(tx_packets.yfilter)) leaf_name_data.push_back(tx_packets.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_physical_interface.is_set || is_set(outgoing_physical_interface.yfilter)) leaf_name_data.push_back(outgoing_physical_interface.get_name_leafdata());
    if (outgoing_parent_interface.is_set || is_set(outgoing_parent_interface.yfilter)) leaf_name_data.push_back(outgoing_parent_interface.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (outgoing_label_string.is_set || is_set(outgoing_label_string.yfilter)) leaf_name_data.push_back(outgoing_label_string.get_name_leafdata());
    if (prefix_or_id.is_set || is_set(prefix_or_id.yfilter)) leaf_name_data.push_back(prefix_or_id.get_name_leafdata());
    if (label_information_next_hop_string.is_set || is_set(label_information_next_hop_string.yfilter)) leaf_name_data.push_back(label_information_next_hop_string.get_name_leafdata());
    if (label_information_route_version.is_set || is_set(label_information_route_version.yfilter)) leaf_name_data.push_back(label_information_route_version.get_name_leafdata());
    if (label_information_time_in_milli_seconds.is_set || is_set(label_information_time_in_milli_seconds.yfilter)) leaf_name_data.push_back(label_information_time_in_milli_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-information-detail")
    {
        if(label_information_detail == nullptr)
        {
            label_information_detail = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail>();
        }
        return label_information_detail;
    }

    if(child_yang_name == "exact-route-hash-info")
    {
        if(exact_route_hash_info == nullptr)
        {
            exact_route_hash_info = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo>();
        }
        return exact_route_hash_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label_information_detail != nullptr)
    {
        _children["label-information-detail"] = label_information_detail;
    }

    if(exact_route_hash_info != nullptr)
    {
        _children["exact-route-hash-info"] = exact_route_hash_info;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-information-type")
    {
        label_information_type = value;
        label_information_type.value_namespace = name_space;
        label_information_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags = value;
        mpls_adjacency_flags.value_namespace = name_space;
        mpls_adjacency_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present = value;
        tunnel_id_present.value_namespace = name_space;
        tunnel_id_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index = value;
        label_information_path_index.value_namespace = name_space;
        label_information_path_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type = value;
        label_information_next_hop_type.value_namespace = name_space;
        label_information_next_hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol = value;
        label_information_next_hop_protocol.value_namespace = name_space;
        label_information_next_hop_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes = value;
        tx_bytes.value_namespace = name_space;
        tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-packets")
    {
        tx_packets = value;
        tx_packets.value_namespace = name_space;
        tx_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface = value;
        outgoing_physical_interface.value_namespace = name_space;
        outgoing_physical_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-parent-interface")
    {
        outgoing_parent_interface = value;
        outgoing_parent_interface.value_namespace = name_space;
        outgoing_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string = value;
        outgoing_label_string.value_namespace = name_space;
        outgoing_label_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id = value;
        prefix_or_id.value_namespace = name_space;
        prefix_or_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string = value;
        label_information_next_hop_string.value_namespace = name_space;
        label_information_next_hop_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version = value;
        label_information_route_version.value_namespace = name_space;
        label_information_route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds = value;
        label_information_time_in_milli_seconds.value_namespace = name_space;
        label_information_time_in_milli_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-information-type")
    {
        label_information_type.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present.yfilter = yfilter;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol.yfilter = yfilter;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes.yfilter = yfilter;
    }
    if(value_path == "tx-packets")
    {
        tx_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-parent-interface")
    {
        outgoing_parent_interface.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string.yfilter = yfilter;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string.yfilter = yfilter;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version.yfilter = yfilter;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-information-detail" || name == "exact-route-hash-info" || name == "label-information-type" || name == "local-label" || name == "outgoing-label" || name == "mpls-adjacency-flags" || name == "tunnel-id-present" || name == "label-information-path-index" || name == "label-information-next-hop-type" || name == "label-information-next-hop-protocol" || name == "tx-bytes" || name == "tx-packets" || name == "outgoing-interface" || name == "outgoing-physical-interface" || name == "outgoing-parent-interface" || name == "tunnel-interface" || name == "outgoing-label-string" || name == "prefix-or-id" || name == "label-information-next-hop-string" || name == "label-information-route-version" || name == "label-information-time-in-milli-seconds")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelInformationDetail()
    :
    l3_mtu{YType::uint32, "l3-mtu"},
    total_encapsulation_size{YType::uint32, "total-encapsulation-size"},
    mac_size{YType::uint32, "mac-size"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    status{YType::int32, "status"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_protocol{YType::enumeration, "next-hop-protocol"},
    next_hop_string{YType::str, "next-hop-string"}
        ,
    label_stack(this, {})
{

    yang_name = "label-information-detail"; yang_parent_name = "label-information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::~LabelInformationDetail()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_stack.len(); index++)
    {
        if(label_stack[index]->has_data())
            return true;
    }
    return l3_mtu.is_set
	|| total_encapsulation_size.is_set
	|| mac_size.is_set
	|| transmit_number_of_packets_switched.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| status.is_set
	|| next_hop_interface.is_set
	|| next_hop_protocol.is_set
	|| next_hop_string.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::has_operation() const
{
    for (std::size_t index=0; index<label_stack.len(); index++)
    {
        if(label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(l3_mtu.yfilter)
	|| ydk::is_set(total_encapsulation_size.yfilter)
	|| ydk::is_set(mac_size.yfilter)
	|| ydk::is_set(transmit_number_of_packets_switched.yfilter)
	|| ydk::is_set(transmit_number_of_bytes_switched.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter)
	|| ydk::is_set(next_hop_protocol.yfilter)
	|| ydk::is_set(next_hop_string.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3_mtu.is_set || is_set(l3_mtu.yfilter)) leaf_name_data.push_back(l3_mtu.get_name_leafdata());
    if (total_encapsulation_size.is_set || is_set(total_encapsulation_size.yfilter)) leaf_name_data.push_back(total_encapsulation_size.get_name_leafdata());
    if (mac_size.is_set || is_set(mac_size.yfilter)) leaf_name_data.push_back(mac_size.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_protocol.is_set || is_set(next_hop_protocol.yfilter)) leaf_name_data.push_back(next_hop_protocol.get_name_leafdata());
    if (next_hop_string.is_set || is_set(next_hop_string.yfilter)) leaf_name_data.push_back(next_hop_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-stack")
    {
        auto ent_ = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack>();
        ent_->parent = this;
        label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu = value;
        l3_mtu.value_namespace = name_space;
        l3_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size = value;
        total_encapsulation_size.value_namespace = name_space;
        total_encapsulation_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-size")
    {
        mac_size = value;
        mac_size.value_namespace = name_space;
        mac_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
        transmit_number_of_packets_switched.value_namespace = name_space;
        transmit_number_of_packets_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
        transmit_number_of_bytes_switched.value_namespace = name_space;
        transmit_number_of_bytes_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol = value;
        next_hop_protocol.value_namespace = name_space;
        next_hop_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string = value;
        next_hop_string.value_namespace = name_space;
        next_hop_string.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu.yfilter = yfilter;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size.yfilter = yfilter;
    }
    if(value_path == "mac-size")
    {
        mac_size.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol.yfilter = yfilter;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack" || name == "l3-mtu" || name == "total-encapsulation-size" || name == "mac-size" || name == "transmit-number-of-packets-switched" || name == "transmit-number-of-bytes-switched" || name == "status" || name == "next-hop-interface" || name == "next-hop-protocol" || name == "next-hop-string")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::LabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "label-stack"; yang_parent_name = "label-information-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::~LabelStack()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::ExactRouteHashInfo()
    :
    hash_index_is_valid{YType::boolean, "hash-index-is-valid"},
    hash_index{YType::uint8, "hash-index"}
{

    yang_name = "exact-route-hash-info"; yang_parent_name = "label-information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::~ExactRouteHashInfo()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::has_data() const
{
    if (is_presence_container) return true;
    return hash_index_is_valid.is_set
	|| hash_index.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hash_index_is_valid.yfilter)
	|| ydk::is_set(hash_index.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exact-route-hash-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_index_is_valid.is_set || is_set(hash_index_is_valid.yfilter)) leaf_name_data.push_back(hash_index_is_valid.get_name_leafdata());
    if (hash_index.is_set || is_set(hash_index.yfilter)) leaf_name_data.push_back(hash_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hash-index-is-valid")
    {
        hash_index_is_valid = value;
        hash_index_is_valid.value_namespace = name_space;
        hash_index_is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-index")
    {
        hash_index = value;
        hash_index.value_namespace = name_space;
        hash_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hash-index-is-valid")
    {
        hash_index_is_valid.yfilter = yfilter;
    }
    if(value_path == "hash-index")
    {
        hash_index.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hash-index-is-valid" || name == "hash-index")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Informations()
    :
    information(this, {})
{

    yang_name = "informations"; yang_parent_name = "label-fib"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::Informations::~Informations()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<information.len(); index++)
    {
        if(information[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::has_operation() const
{
    for (std::size_t index=0; index<information.len(); index++)
    {
        if(information[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "informations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::Informations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        auto ent_ = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information>();
        ent_->parent = this;
        information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::Information()
    :
    label_value{YType::uint32, "label-value"},
    eos{YType::enumeration, "eos"},
    leaf_local_label{YType::uint32, "leaf-local-label"},
    eos_bit{YType::uint32, "eos-bit"},
    hardware_information{YType::str, "hardware-information"},
    leaf_referance_count{YType::uint32, "leaf-referance-count"},
    leaf_flags{YType::uint32, "leaf-flags"},
    path_list_referance_count{YType::uint32, "path-list-referance-count"},
    path_list_flags{YType::uint32, "path-list-flags"},
    ldi_referance_count{YType::uint32, "ldi-referance-count"},
    ldi_flags{YType::uint32, "ldi-flags"},
    ldi_type{YType::uint32, "ldi-type"},
    ldi_pointer{YType::uint32, "ldi-pointer"},
    lw_ldi_type{YType::uint32, "lw-ldi-type"},
    lw_ldi_pointer{YType::uint32, "lw-ldi-pointer"},
    lw_ldi_refernace_count{YType::uint32, "lw-ldi-refernace-count"},
    lw_shared_ldi_pointer{YType::uint32, "lw-shared-ldi-pointer"},
    lspa_flags{YType::uint32, "lspa-flags"},
    afi_table_id{YType::uint32, "afi-table-id"},
    multicast_label{YType::boolean, "multicast-label"},
    leaf_time_in_milli_seconds{YType::uint64, "leaf-time-in-milli-seconds"},
    total_number_of_packets_switched{YType::uint64, "total-number-of-packets-switched"},
    total_number_of_bytes_switched{YType::uint64, "total-number-of-bytes-switched"}
        ,
    ldi_information(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation>())
    , multicast_information(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation>())
    , label_information(this, {})
{
    ldi_information->parent = this;
    multicast_information->parent = this;

    yang_name = "information"; yang_parent_name = "informations"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::~Information()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_information.len(); index++)
    {
        if(label_information[index]->has_data())
            return true;
    }
    return label_value.is_set
	|| eos.is_set
	|| leaf_local_label.is_set
	|| eos_bit.is_set
	|| hardware_information.is_set
	|| leaf_referance_count.is_set
	|| leaf_flags.is_set
	|| path_list_referance_count.is_set
	|| path_list_flags.is_set
	|| ldi_referance_count.is_set
	|| ldi_flags.is_set
	|| ldi_type.is_set
	|| ldi_pointer.is_set
	|| lw_ldi_type.is_set
	|| lw_ldi_pointer.is_set
	|| lw_ldi_refernace_count.is_set
	|| lw_shared_ldi_pointer.is_set
	|| lspa_flags.is_set
	|| afi_table_id.is_set
	|| multicast_label.is_set
	|| leaf_time_in_milli_seconds.is_set
	|| total_number_of_packets_switched.is_set
	|| total_number_of_bytes_switched.is_set
	|| (ldi_information !=  nullptr && ldi_information->has_data())
	|| (multicast_information !=  nullptr && multicast_information->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::has_operation() const
{
    for (std::size_t index=0; index<label_information.len(); index++)
    {
        if(label_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_value.yfilter)
	|| ydk::is_set(eos.yfilter)
	|| ydk::is_set(leaf_local_label.yfilter)
	|| ydk::is_set(eos_bit.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(leaf_referance_count.yfilter)
	|| ydk::is_set(leaf_flags.yfilter)
	|| ydk::is_set(path_list_referance_count.yfilter)
	|| ydk::is_set(path_list_flags.yfilter)
	|| ydk::is_set(ldi_referance_count.yfilter)
	|| ydk::is_set(ldi_flags.yfilter)
	|| ydk::is_set(ldi_type.yfilter)
	|| ydk::is_set(ldi_pointer.yfilter)
	|| ydk::is_set(lw_ldi_type.yfilter)
	|| ydk::is_set(lw_ldi_pointer.yfilter)
	|| ydk::is_set(lw_ldi_refernace_count.yfilter)
	|| ydk::is_set(lw_shared_ldi_pointer.yfilter)
	|| ydk::is_set(lspa_flags.yfilter)
	|| ydk::is_set(afi_table_id.yfilter)
	|| ydk::is_set(multicast_label.yfilter)
	|| ydk::is_set(leaf_time_in_milli_seconds.yfilter)
	|| ydk::is_set(total_number_of_packets_switched.yfilter)
	|| ydk::is_set(total_number_of_bytes_switched.yfilter)
	|| (ldi_information !=  nullptr && ldi_information->has_operation())
	|| (multicast_information !=  nullptr && multicast_information->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::Informations::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_value.is_set || is_set(label_value.yfilter)) leaf_name_data.push_back(label_value.get_name_leafdata());
    if (eos.is_set || is_set(eos.yfilter)) leaf_name_data.push_back(eos.get_name_leafdata());
    if (leaf_local_label.is_set || is_set(leaf_local_label.yfilter)) leaf_name_data.push_back(leaf_local_label.get_name_leafdata());
    if (eos_bit.is_set || is_set(eos_bit.yfilter)) leaf_name_data.push_back(eos_bit.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (leaf_referance_count.is_set || is_set(leaf_referance_count.yfilter)) leaf_name_data.push_back(leaf_referance_count.get_name_leafdata());
    if (leaf_flags.is_set || is_set(leaf_flags.yfilter)) leaf_name_data.push_back(leaf_flags.get_name_leafdata());
    if (path_list_referance_count.is_set || is_set(path_list_referance_count.yfilter)) leaf_name_data.push_back(path_list_referance_count.get_name_leafdata());
    if (path_list_flags.is_set || is_set(path_list_flags.yfilter)) leaf_name_data.push_back(path_list_flags.get_name_leafdata());
    if (ldi_referance_count.is_set || is_set(ldi_referance_count.yfilter)) leaf_name_data.push_back(ldi_referance_count.get_name_leafdata());
    if (ldi_flags.is_set || is_set(ldi_flags.yfilter)) leaf_name_data.push_back(ldi_flags.get_name_leafdata());
    if (ldi_type.is_set || is_set(ldi_type.yfilter)) leaf_name_data.push_back(ldi_type.get_name_leafdata());
    if (ldi_pointer.is_set || is_set(ldi_pointer.yfilter)) leaf_name_data.push_back(ldi_pointer.get_name_leafdata());
    if (lw_ldi_type.is_set || is_set(lw_ldi_type.yfilter)) leaf_name_data.push_back(lw_ldi_type.get_name_leafdata());
    if (lw_ldi_pointer.is_set || is_set(lw_ldi_pointer.yfilter)) leaf_name_data.push_back(lw_ldi_pointer.get_name_leafdata());
    if (lw_ldi_refernace_count.is_set || is_set(lw_ldi_refernace_count.yfilter)) leaf_name_data.push_back(lw_ldi_refernace_count.get_name_leafdata());
    if (lw_shared_ldi_pointer.is_set || is_set(lw_shared_ldi_pointer.yfilter)) leaf_name_data.push_back(lw_shared_ldi_pointer.get_name_leafdata());
    if (lspa_flags.is_set || is_set(lspa_flags.yfilter)) leaf_name_data.push_back(lspa_flags.get_name_leafdata());
    if (afi_table_id.is_set || is_set(afi_table_id.yfilter)) leaf_name_data.push_back(afi_table_id.get_name_leafdata());
    if (multicast_label.is_set || is_set(multicast_label.yfilter)) leaf_name_data.push_back(multicast_label.get_name_leafdata());
    if (leaf_time_in_milli_seconds.is_set || is_set(leaf_time_in_milli_seconds.yfilter)) leaf_name_data.push_back(leaf_time_in_milli_seconds.get_name_leafdata());
    if (total_number_of_packets_switched.is_set || is_set(total_number_of_packets_switched.yfilter)) leaf_name_data.push_back(total_number_of_packets_switched.get_name_leafdata());
    if (total_number_of_bytes_switched.is_set || is_set(total_number_of_bytes_switched.yfilter)) leaf_name_data.push_back(total_number_of_bytes_switched.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldi-information")
    {
        if(ldi_information == nullptr)
        {
            ldi_information = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation>();
        }
        return ldi_information;
    }

    if(child_yang_name == "multicast-information")
    {
        if(multicast_information == nullptr)
        {
            multicast_information = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation>();
        }
        return multicast_information;
    }

    if(child_yang_name == "label-information")
    {
        auto ent_ = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation>();
        ent_->parent = this;
        label_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ldi_information != nullptr)
    {
        _children["ldi-information"] = ldi_information;
    }

    if(multicast_information != nullptr)
    {
        _children["multicast-information"] = multicast_information;
    }

    count_ = 0;
    for (auto ent_ : label_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-value")
    {
        label_value = value;
        label_value.value_namespace = name_space;
        label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eos")
    {
        eos = value;
        eos.value_namespace = name_space;
        eos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-local-label")
    {
        leaf_local_label = value;
        leaf_local_label.value_namespace = name_space;
        leaf_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eos-bit")
    {
        eos_bit = value;
        eos_bit.value_namespace = name_space;
        eos_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count = value;
        leaf_referance_count.value_namespace = name_space;
        leaf_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags = value;
        leaf_flags.value_namespace = name_space;
        leaf_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count = value;
        path_list_referance_count.value_namespace = name_space;
        path_list_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags = value;
        path_list_flags.value_namespace = name_space;
        path_list_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count = value;
        ldi_referance_count.value_namespace = name_space;
        ldi_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags = value;
        ldi_flags.value_namespace = name_space;
        ldi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-type")
    {
        ldi_type = value;
        ldi_type.value_namespace = name_space;
        ldi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer = value;
        ldi_pointer.value_namespace = name_space;
        ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type = value;
        lw_ldi_type.value_namespace = name_space;
        lw_ldi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer = value;
        lw_ldi_pointer.value_namespace = name_space;
        lw_ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count = value;
        lw_ldi_refernace_count.value_namespace = name_space;
        lw_ldi_refernace_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer = value;
        lw_shared_ldi_pointer.value_namespace = name_space;
        lw_shared_ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags = value;
        lspa_flags.value_namespace = name_space;
        lspa_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-table-id")
    {
        afi_table_id = value;
        afi_table_id.value_namespace = name_space;
        afi_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-label")
    {
        multicast_label = value;
        multicast_label.value_namespace = name_space;
        multicast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds = value;
        leaf_time_in_milli_seconds.value_namespace = name_space;
        leaf_time_in_milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-number-of-packets-switched")
    {
        total_number_of_packets_switched = value;
        total_number_of_packets_switched.value_namespace = name_space;
        total_number_of_packets_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-number-of-bytes-switched")
    {
        total_number_of_bytes_switched = value;
        total_number_of_bytes_switched.value_namespace = name_space;
        total_number_of_bytes_switched.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-value")
    {
        label_value.yfilter = yfilter;
    }
    if(value_path == "eos")
    {
        eos.yfilter = yfilter;
    }
    if(value_path == "leaf-local-label")
    {
        leaf_local_label.yfilter = yfilter;
    }
    if(value_path == "eos-bit")
    {
        eos_bit.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count.yfilter = yfilter;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags.yfilter = yfilter;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count.yfilter = yfilter;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags.yfilter = yfilter;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count.yfilter = yfilter;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags.yfilter = yfilter;
    }
    if(value_path == "ldi-type")
    {
        ldi_type.yfilter = yfilter;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count.yfilter = yfilter;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags.yfilter = yfilter;
    }
    if(value_path == "afi-table-id")
    {
        afi_table_id.yfilter = yfilter;
    }
    if(value_path == "multicast-label")
    {
        multicast_label.yfilter = yfilter;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds.yfilter = yfilter;
    }
    if(value_path == "total-number-of-packets-switched")
    {
        total_number_of_packets_switched.yfilter = yfilter;
    }
    if(value_path == "total-number-of-bytes-switched")
    {
        total_number_of_bytes_switched.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldi-information" || name == "multicast-information" || name == "label-information" || name == "label-value" || name == "eos" || name == "leaf-local-label" || name == "eos-bit" || name == "hardware-information" || name == "leaf-referance-count" || name == "leaf-flags" || name == "path-list-referance-count" || name == "path-list-flags" || name == "ldi-referance-count" || name == "ldi-flags" || name == "ldi-type" || name == "ldi-pointer" || name == "lw-ldi-type" || name == "lw-ldi-pointer" || name == "lw-ldi-refernace-count" || name == "lw-shared-ldi-pointer" || name == "lspa-flags" || name == "afi-table-id" || name == "multicast-label" || name == "leaf-time-in-milli-seconds" || name == "total-number-of-packets-switched" || name == "total-number-of-bytes-switched")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::LdiInformation()
    :
    ldi_hardware_information{YType::str, "ldi-hardware-information"}
{

    yang_name = "ldi-information"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::~LdiInformation()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::has_data() const
{
    if (is_presence_container) return true;
    return ldi_hardware_information.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldi_hardware_information.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldi-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldi_hardware_information.is_set || is_set(ldi_hardware_information.yfilter)) leaf_name_data.push_back(ldi_hardware_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information = value;
        ldi_hardware_information.value_namespace = name_space;
        ldi_hardware_information.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldi-hardware-information")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::MulticastInformation()
    :
    multicast_mol_base_flags{YType::uint32, "multicast-mol-base-flags"},
    multicast_mol_flags{YType::uint16, "multicast-mol-flags"},
    multicast_mol_referance_count{YType::uint16, "multicast-mol-referance-count"},
    multicast_tunnel_interface_handler{YType::str, "multicast-tunnel-interface-handler"},
    multicast_tunnel_id{YType::uint32, "multicast-tunnel-id"},
    multicast_tunnel_next_hop_information{YType::uint32, "multicast-tunnel-next-hop-information"},
    multicast_tunnel_lspvif{YType::uint32, "multicast-tunnel-lspvif"},
    multicast_mpls_output_paths{YType::uint16, "multicast-mpls-output-paths"},
    multicast_mpls_protocol_output_paths{YType::uint16, "multicast-mpls-protocol-output-paths"},
    multicast_mpls_local_output_paths{YType::uint16, "multicast-mpls-local-output-paths"},
    multicast_rpf_id{YType::uint32, "multicast-rpf-id"},
    multicast_encap_id{YType::uint32, "multicast-encap-id"},
    multicast_platform_data_length{YType::uint8, "multicast-platform-data-length"},
    multicast_platform_data{YType::str, "multicast-platform-data"}
{

    yang_name = "multicast-information"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::~MulticastInformation()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::has_data() const
{
    if (is_presence_container) return true;
    return multicast_mol_base_flags.is_set
	|| multicast_mol_flags.is_set
	|| multicast_mol_referance_count.is_set
	|| multicast_tunnel_interface_handler.is_set
	|| multicast_tunnel_id.is_set
	|| multicast_tunnel_next_hop_information.is_set
	|| multicast_tunnel_lspvif.is_set
	|| multicast_mpls_output_paths.is_set
	|| multicast_mpls_protocol_output_paths.is_set
	|| multicast_mpls_local_output_paths.is_set
	|| multicast_rpf_id.is_set
	|| multicast_encap_id.is_set
	|| multicast_platform_data_length.is_set
	|| multicast_platform_data.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast_mol_base_flags.yfilter)
	|| ydk::is_set(multicast_mol_flags.yfilter)
	|| ydk::is_set(multicast_mol_referance_count.yfilter)
	|| ydk::is_set(multicast_tunnel_interface_handler.yfilter)
	|| ydk::is_set(multicast_tunnel_id.yfilter)
	|| ydk::is_set(multicast_tunnel_next_hop_information.yfilter)
	|| ydk::is_set(multicast_tunnel_lspvif.yfilter)
	|| ydk::is_set(multicast_mpls_output_paths.yfilter)
	|| ydk::is_set(multicast_mpls_protocol_output_paths.yfilter)
	|| ydk::is_set(multicast_mpls_local_output_paths.yfilter)
	|| ydk::is_set(multicast_rpf_id.yfilter)
	|| ydk::is_set(multicast_encap_id.yfilter)
	|| ydk::is_set(multicast_platform_data_length.yfilter)
	|| ydk::is_set(multicast_platform_data.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_mol_base_flags.is_set || is_set(multicast_mol_base_flags.yfilter)) leaf_name_data.push_back(multicast_mol_base_flags.get_name_leafdata());
    if (multicast_mol_flags.is_set || is_set(multicast_mol_flags.yfilter)) leaf_name_data.push_back(multicast_mol_flags.get_name_leafdata());
    if (multicast_mol_referance_count.is_set || is_set(multicast_mol_referance_count.yfilter)) leaf_name_data.push_back(multicast_mol_referance_count.get_name_leafdata());
    if (multicast_tunnel_interface_handler.is_set || is_set(multicast_tunnel_interface_handler.yfilter)) leaf_name_data.push_back(multicast_tunnel_interface_handler.get_name_leafdata());
    if (multicast_tunnel_id.is_set || is_set(multicast_tunnel_id.yfilter)) leaf_name_data.push_back(multicast_tunnel_id.get_name_leafdata());
    if (multicast_tunnel_next_hop_information.is_set || is_set(multicast_tunnel_next_hop_information.yfilter)) leaf_name_data.push_back(multicast_tunnel_next_hop_information.get_name_leafdata());
    if (multicast_tunnel_lspvif.is_set || is_set(multicast_tunnel_lspvif.yfilter)) leaf_name_data.push_back(multicast_tunnel_lspvif.get_name_leafdata());
    if (multicast_mpls_output_paths.is_set || is_set(multicast_mpls_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_output_paths.get_name_leafdata());
    if (multicast_mpls_protocol_output_paths.is_set || is_set(multicast_mpls_protocol_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_protocol_output_paths.get_name_leafdata());
    if (multicast_mpls_local_output_paths.is_set || is_set(multicast_mpls_local_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_local_output_paths.get_name_leafdata());
    if (multicast_rpf_id.is_set || is_set(multicast_rpf_id.yfilter)) leaf_name_data.push_back(multicast_rpf_id.get_name_leafdata());
    if (multicast_encap_id.is_set || is_set(multicast_encap_id.yfilter)) leaf_name_data.push_back(multicast_encap_id.get_name_leafdata());
    if (multicast_platform_data_length.is_set || is_set(multicast_platform_data_length.yfilter)) leaf_name_data.push_back(multicast_platform_data_length.get_name_leafdata());
    if (multicast_platform_data.is_set || is_set(multicast_platform_data.yfilter)) leaf_name_data.push_back(multicast_platform_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags = value;
        multicast_mol_base_flags.value_namespace = name_space;
        multicast_mol_base_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags = value;
        multicast_mol_flags.value_namespace = name_space;
        multicast_mol_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count = value;
        multicast_mol_referance_count.value_namespace = name_space;
        multicast_mol_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler = value;
        multicast_tunnel_interface_handler.value_namespace = name_space;
        multicast_tunnel_interface_handler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id = value;
        multicast_tunnel_id.value_namespace = name_space;
        multicast_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information = value;
        multicast_tunnel_next_hop_information.value_namespace = name_space;
        multicast_tunnel_next_hop_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif = value;
        multicast_tunnel_lspvif.value_namespace = name_space;
        multicast_tunnel_lspvif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths = value;
        multicast_mpls_output_paths.value_namespace = name_space;
        multicast_mpls_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths = value;
        multicast_mpls_protocol_output_paths.value_namespace = name_space;
        multicast_mpls_protocol_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths = value;
        multicast_mpls_local_output_paths.value_namespace = name_space;
        multicast_mpls_local_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id = value;
        multicast_rpf_id.value_namespace = name_space;
        multicast_rpf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id = value;
        multicast_encap_id.value_namespace = name_space;
        multicast_encap_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length = value;
        multicast_platform_data_length.value_namespace = name_space;
        multicast_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data = value;
        multicast_platform_data.value_namespace = name_space;
        multicast_platform_data.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id.yfilter = yfilter;
    }
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id.yfilter = yfilter;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-mol-base-flags" || name == "multicast-mol-flags" || name == "multicast-mol-referance-count" || name == "multicast-tunnel-interface-handler" || name == "multicast-tunnel-id" || name == "multicast-tunnel-next-hop-information" || name == "multicast-tunnel-lspvif" || name == "multicast-mpls-output-paths" || name == "multicast-mpls-protocol-output-paths" || name == "multicast-mpls-local-output-paths" || name == "multicast-rpf-id" || name == "multicast-encap-id" || name == "multicast-platform-data-length" || name == "multicast-platform-data")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformation()
    :
    label_information_type{YType::uint32, "label-information-type"},
    local_label{YType::uint32, "local-label"},
    outgoing_label{YType::uint32, "outgoing-label"},
    mpls_adjacency_flags{YType::uint32, "mpls-adjacency-flags"},
    tunnel_id_present{YType::boolean, "tunnel-id-present"},
    label_information_path_index{YType::uint32, "label-information-path-index"},
    label_information_next_hop_type{YType::enumeration, "label-information-next-hop-type"},
    label_information_next_hop_protocol{YType::enumeration, "label-information-next-hop-protocol"},
    tx_bytes{YType::uint64, "tx-bytes"},
    tx_packets{YType::uint64, "tx-packets"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_physical_interface{YType::str, "outgoing-physical-interface"},
    outgoing_parent_interface{YType::str, "outgoing-parent-interface"},
    tunnel_interface{YType::str, "tunnel-interface"},
    outgoing_label_string{YType::str, "outgoing-label-string"},
    prefix_or_id{YType::str, "prefix-or-id"},
    label_information_next_hop_string{YType::str, "label-information-next-hop-string"},
    label_information_route_version{YType::uint64, "label-information-route-version"},
    label_information_time_in_milli_seconds{YType::uint64, "label-information-time-in-milli-seconds"}
        ,
    label_information_detail(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail>())
    , exact_route_hash_info(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo>())
{
    label_information_detail->parent = this;
    exact_route_hash_info->parent = this;

    yang_name = "label-information"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::~LabelInformation()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::has_data() const
{
    if (is_presence_container) return true;
    return label_information_type.is_set
	|| local_label.is_set
	|| outgoing_label.is_set
	|| mpls_adjacency_flags.is_set
	|| tunnel_id_present.is_set
	|| label_information_path_index.is_set
	|| label_information_next_hop_type.is_set
	|| label_information_next_hop_protocol.is_set
	|| tx_bytes.is_set
	|| tx_packets.is_set
	|| outgoing_interface.is_set
	|| outgoing_physical_interface.is_set
	|| outgoing_parent_interface.is_set
	|| tunnel_interface.is_set
	|| outgoing_label_string.is_set
	|| prefix_or_id.is_set
	|| label_information_next_hop_string.is_set
	|| label_information_route_version.is_set
	|| label_information_time_in_milli_seconds.is_set
	|| (label_information_detail !=  nullptr && label_information_detail->has_data())
	|| (exact_route_hash_info !=  nullptr && exact_route_hash_info->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_information_type.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(mpls_adjacency_flags.yfilter)
	|| ydk::is_set(tunnel_id_present.yfilter)
	|| ydk::is_set(label_information_path_index.yfilter)
	|| ydk::is_set(label_information_next_hop_type.yfilter)
	|| ydk::is_set(label_information_next_hop_protocol.yfilter)
	|| ydk::is_set(tx_bytes.yfilter)
	|| ydk::is_set(tx_packets.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_physical_interface.yfilter)
	|| ydk::is_set(outgoing_parent_interface.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(outgoing_label_string.yfilter)
	|| ydk::is_set(prefix_or_id.yfilter)
	|| ydk::is_set(label_information_next_hop_string.yfilter)
	|| ydk::is_set(label_information_route_version.yfilter)
	|| ydk::is_set(label_information_time_in_milli_seconds.yfilter)
	|| (label_information_detail !=  nullptr && label_information_detail->has_operation())
	|| (exact_route_hash_info !=  nullptr && exact_route_hash_info->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_information_type.is_set || is_set(label_information_type.yfilter)) leaf_name_data.push_back(label_information_type.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (mpls_adjacency_flags.is_set || is_set(mpls_adjacency_flags.yfilter)) leaf_name_data.push_back(mpls_adjacency_flags.get_name_leafdata());
    if (tunnel_id_present.is_set || is_set(tunnel_id_present.yfilter)) leaf_name_data.push_back(tunnel_id_present.get_name_leafdata());
    if (label_information_path_index.is_set || is_set(label_information_path_index.yfilter)) leaf_name_data.push_back(label_information_path_index.get_name_leafdata());
    if (label_information_next_hop_type.is_set || is_set(label_information_next_hop_type.yfilter)) leaf_name_data.push_back(label_information_next_hop_type.get_name_leafdata());
    if (label_information_next_hop_protocol.is_set || is_set(label_information_next_hop_protocol.yfilter)) leaf_name_data.push_back(label_information_next_hop_protocol.get_name_leafdata());
    if (tx_bytes.is_set || is_set(tx_bytes.yfilter)) leaf_name_data.push_back(tx_bytes.get_name_leafdata());
    if (tx_packets.is_set || is_set(tx_packets.yfilter)) leaf_name_data.push_back(tx_packets.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_physical_interface.is_set || is_set(outgoing_physical_interface.yfilter)) leaf_name_data.push_back(outgoing_physical_interface.get_name_leafdata());
    if (outgoing_parent_interface.is_set || is_set(outgoing_parent_interface.yfilter)) leaf_name_data.push_back(outgoing_parent_interface.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (outgoing_label_string.is_set || is_set(outgoing_label_string.yfilter)) leaf_name_data.push_back(outgoing_label_string.get_name_leafdata());
    if (prefix_or_id.is_set || is_set(prefix_or_id.yfilter)) leaf_name_data.push_back(prefix_or_id.get_name_leafdata());
    if (label_information_next_hop_string.is_set || is_set(label_information_next_hop_string.yfilter)) leaf_name_data.push_back(label_information_next_hop_string.get_name_leafdata());
    if (label_information_route_version.is_set || is_set(label_information_route_version.yfilter)) leaf_name_data.push_back(label_information_route_version.get_name_leafdata());
    if (label_information_time_in_milli_seconds.is_set || is_set(label_information_time_in_milli_seconds.yfilter)) leaf_name_data.push_back(label_information_time_in_milli_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-information-detail")
    {
        if(label_information_detail == nullptr)
        {
            label_information_detail = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail>();
        }
        return label_information_detail;
    }

    if(child_yang_name == "exact-route-hash-info")
    {
        if(exact_route_hash_info == nullptr)
        {
            exact_route_hash_info = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo>();
        }
        return exact_route_hash_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label_information_detail != nullptr)
    {
        _children["label-information-detail"] = label_information_detail;
    }

    if(exact_route_hash_info != nullptr)
    {
        _children["exact-route-hash-info"] = exact_route_hash_info;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-information-type")
    {
        label_information_type = value;
        label_information_type.value_namespace = name_space;
        label_information_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags = value;
        mpls_adjacency_flags.value_namespace = name_space;
        mpls_adjacency_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present = value;
        tunnel_id_present.value_namespace = name_space;
        tunnel_id_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index = value;
        label_information_path_index.value_namespace = name_space;
        label_information_path_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type = value;
        label_information_next_hop_type.value_namespace = name_space;
        label_information_next_hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol = value;
        label_information_next_hop_protocol.value_namespace = name_space;
        label_information_next_hop_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes = value;
        tx_bytes.value_namespace = name_space;
        tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-packets")
    {
        tx_packets = value;
        tx_packets.value_namespace = name_space;
        tx_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface = value;
        outgoing_physical_interface.value_namespace = name_space;
        outgoing_physical_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-parent-interface")
    {
        outgoing_parent_interface = value;
        outgoing_parent_interface.value_namespace = name_space;
        outgoing_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string = value;
        outgoing_label_string.value_namespace = name_space;
        outgoing_label_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id = value;
        prefix_or_id.value_namespace = name_space;
        prefix_or_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string = value;
        label_information_next_hop_string.value_namespace = name_space;
        label_information_next_hop_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version = value;
        label_information_route_version.value_namespace = name_space;
        label_information_route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds = value;
        label_information_time_in_milli_seconds.value_namespace = name_space;
        label_information_time_in_milli_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-information-type")
    {
        label_information_type.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present.yfilter = yfilter;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol.yfilter = yfilter;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes.yfilter = yfilter;
    }
    if(value_path == "tx-packets")
    {
        tx_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-parent-interface")
    {
        outgoing_parent_interface.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string.yfilter = yfilter;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string.yfilter = yfilter;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version.yfilter = yfilter;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-information-detail" || name == "exact-route-hash-info" || name == "label-information-type" || name == "local-label" || name == "outgoing-label" || name == "mpls-adjacency-flags" || name == "tunnel-id-present" || name == "label-information-path-index" || name == "label-information-next-hop-type" || name == "label-information-next-hop-protocol" || name == "tx-bytes" || name == "tx-packets" || name == "outgoing-interface" || name == "outgoing-physical-interface" || name == "outgoing-parent-interface" || name == "tunnel-interface" || name == "outgoing-label-string" || name == "prefix-or-id" || name == "label-information-next-hop-string" || name == "label-information-route-version" || name == "label-information-time-in-milli-seconds")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelInformationDetail()
    :
    l3_mtu{YType::uint32, "l3-mtu"},
    total_encapsulation_size{YType::uint32, "total-encapsulation-size"},
    mac_size{YType::uint32, "mac-size"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    status{YType::int32, "status"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_protocol{YType::enumeration, "next-hop-protocol"},
    next_hop_string{YType::str, "next-hop-string"}
        ,
    label_stack(this, {})
{

    yang_name = "label-information-detail"; yang_parent_name = "label-information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::~LabelInformationDetail()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_stack.len(); index++)
    {
        if(label_stack[index]->has_data())
            return true;
    }
    return l3_mtu.is_set
	|| total_encapsulation_size.is_set
	|| mac_size.is_set
	|| transmit_number_of_packets_switched.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| status.is_set
	|| next_hop_interface.is_set
	|| next_hop_protocol.is_set
	|| next_hop_string.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::has_operation() const
{
    for (std::size_t index=0; index<label_stack.len(); index++)
    {
        if(label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(l3_mtu.yfilter)
	|| ydk::is_set(total_encapsulation_size.yfilter)
	|| ydk::is_set(mac_size.yfilter)
	|| ydk::is_set(transmit_number_of_packets_switched.yfilter)
	|| ydk::is_set(transmit_number_of_bytes_switched.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter)
	|| ydk::is_set(next_hop_protocol.yfilter)
	|| ydk::is_set(next_hop_string.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3_mtu.is_set || is_set(l3_mtu.yfilter)) leaf_name_data.push_back(l3_mtu.get_name_leafdata());
    if (total_encapsulation_size.is_set || is_set(total_encapsulation_size.yfilter)) leaf_name_data.push_back(total_encapsulation_size.get_name_leafdata());
    if (mac_size.is_set || is_set(mac_size.yfilter)) leaf_name_data.push_back(mac_size.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_protocol.is_set || is_set(next_hop_protocol.yfilter)) leaf_name_data.push_back(next_hop_protocol.get_name_leafdata());
    if (next_hop_string.is_set || is_set(next_hop_string.yfilter)) leaf_name_data.push_back(next_hop_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-stack")
    {
        auto ent_ = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack>();
        ent_->parent = this;
        label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu = value;
        l3_mtu.value_namespace = name_space;
        l3_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size = value;
        total_encapsulation_size.value_namespace = name_space;
        total_encapsulation_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-size")
    {
        mac_size = value;
        mac_size.value_namespace = name_space;
        mac_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
        transmit_number_of_packets_switched.value_namespace = name_space;
        transmit_number_of_packets_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
        transmit_number_of_bytes_switched.value_namespace = name_space;
        transmit_number_of_bytes_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol = value;
        next_hop_protocol.value_namespace = name_space;
        next_hop_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string = value;
        next_hop_string.value_namespace = name_space;
        next_hop_string.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu.yfilter = yfilter;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size.yfilter = yfilter;
    }
    if(value_path == "mac-size")
    {
        mac_size.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol.yfilter = yfilter;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack" || name == "l3-mtu" || name == "total-encapsulation-size" || name == "mac-size" || name == "transmit-number-of-packets-switched" || name == "transmit-number-of-bytes-switched" || name == "status" || name == "next-hop-interface" || name == "next-hop-protocol" || name == "next-hop-string")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::LabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "label-stack"; yang_parent_name = "label-information-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::~LabelStack()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::ExactRouteHashInfo()
    :
    hash_index_is_valid{YType::boolean, "hash-index-is-valid"},
    hash_index{YType::uint8, "hash-index"}
{

    yang_name = "exact-route-hash-info"; yang_parent_name = "label-information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::~ExactRouteHashInfo()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::has_data() const
{
    if (is_presence_container) return true;
    return hash_index_is_valid.is_set
	|| hash_index.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hash_index_is_valid.yfilter)
	|| ydk::is_set(hash_index.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exact-route-hash-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_index_is_valid.is_set || is_set(hash_index_is_valid.yfilter)) leaf_name_data.push_back(hash_index_is_valid.get_name_leafdata());
    if (hash_index.is_set || is_set(hash_index.yfilter)) leaf_name_data.push_back(hash_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hash-index-is-valid")
    {
        hash_index_is_valid = value;
        hash_index_is_valid.value_namespace = name_space;
        hash_index_is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-index")
    {
        hash_index = value;
        hash_index.value_namespace = name_space;
        hash_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hash-index-is-valid")
    {
        hash_index_is_valid.yfilter = yfilter;
    }
    if(value_path == "hash-index")
    {
        hash_index.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hash-index-is-valid" || name == "hash-index")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::LabelSecurity()
    :
    interfaces(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces>())
    , summary(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary>())
{
    interfaces->parent = this;
    summary->parent = this;

    yang_name = "label-security"; yang_parent_name = "label-fib"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::~LabelSecurity()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::has_data() const
{
    if (is_presence_container) return true;
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "summary")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "label-security"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::~Interfaces()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    rpf_enabled{YType::boolean, "rpf-enabled"},
    rpf_supported{YType::boolean, "rpf-supported"},
    mld_enabled{YType::boolean, "mld-enabled"},
    mld_supported{YType::boolean, "mld-supported"},
    rpf_drops{YType::uint64, "rpf-drops"},
    multi_label_drops{YType::uint64, "multi-label-drops"},
    rpfifh{YType::str, "rpfifh"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::~Interface()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| rpf_enabled.is_set
	|| rpf_supported.is_set
	|| mld_enabled.is_set
	|| mld_supported.is_set
	|| rpf_drops.is_set
	|| multi_label_drops.is_set
	|| rpfifh.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(rpf_enabled.yfilter)
	|| ydk::is_set(rpf_supported.yfilter)
	|| ydk::is_set(mld_enabled.yfilter)
	|| ydk::is_set(mld_supported.yfilter)
	|| ydk::is_set(rpf_drops.yfilter)
	|| ydk::is_set(multi_label_drops.yfilter)
	|| ydk::is_set(rpfifh.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (rpf_enabled.is_set || is_set(rpf_enabled.yfilter)) leaf_name_data.push_back(rpf_enabled.get_name_leafdata());
    if (rpf_supported.is_set || is_set(rpf_supported.yfilter)) leaf_name_data.push_back(rpf_supported.get_name_leafdata());
    if (mld_enabled.is_set || is_set(mld_enabled.yfilter)) leaf_name_data.push_back(mld_enabled.get_name_leafdata());
    if (mld_supported.is_set || is_set(mld_supported.yfilter)) leaf_name_data.push_back(mld_supported.get_name_leafdata());
    if (rpf_drops.is_set || is_set(rpf_drops.yfilter)) leaf_name_data.push_back(rpf_drops.get_name_leafdata());
    if (multi_label_drops.is_set || is_set(multi_label_drops.yfilter)) leaf_name_data.push_back(multi_label_drops.get_name_leafdata());
    if (rpfifh.is_set || is_set(rpfifh.yfilter)) leaf_name_data.push_back(rpfifh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-enabled")
    {
        rpf_enabled = value;
        rpf_enabled.value_namespace = name_space;
        rpf_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-supported")
    {
        rpf_supported = value;
        rpf_supported.value_namespace = name_space;
        rpf_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-enabled")
    {
        mld_enabled = value;
        mld_enabled.value_namespace = name_space;
        mld_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-supported")
    {
        mld_supported = value;
        mld_supported.value_namespace = name_space;
        mld_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-drops")
    {
        rpf_drops = value;
        rpf_drops.value_namespace = name_space;
        rpf_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-label-drops")
    {
        multi_label_drops = value;
        multi_label_drops.value_namespace = name_space;
        multi_label_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfifh")
    {
        rpfifh = value;
        rpfifh.value_namespace = name_space;
        rpfifh.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "rpf-enabled")
    {
        rpf_enabled.yfilter = yfilter;
    }
    if(value_path == "rpf-supported")
    {
        rpf_supported.yfilter = yfilter;
    }
    if(value_path == "mld-enabled")
    {
        mld_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-supported")
    {
        mld_supported.yfilter = yfilter;
    }
    if(value_path == "rpf-drops")
    {
        rpf_drops.yfilter = yfilter;
    }
    if(value_path == "multi-label-drops")
    {
        multi_label_drops.yfilter = yfilter;
    }
    if(value_path == "rpfifh")
    {
        rpfifh.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "rpf-enabled" || name == "rpf-supported" || name == "mld-enabled" || name == "mld-supported" || name == "rpf-drops" || name == "multi-label-drops" || name == "rpfifh")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::Summary()
    :
    rpf_drops{YType::uint64, "rpf-drops"},
    multi_label_drops{YType::uint64, "multi-label-drops"}
{

    yang_name = "summary"; yang_parent_name = "label-security"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::~Summary()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::has_data() const
{
    if (is_presence_container) return true;
    return rpf_drops.is_set
	|| multi_label_drops.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rpf_drops.yfilter)
	|| ydk::is_set(multi_label_drops.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpf_drops.is_set || is_set(rpf_drops.yfilter)) leaf_name_data.push_back(rpf_drops.get_name_leafdata());
    if (multi_label_drops.is_set || is_set(multi_label_drops.yfilter)) leaf_name_data.push_back(multi_label_drops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rpf-drops")
    {
        rpf_drops = value;
        rpf_drops.value_namespace = name_space;
        rpf_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-label-drops")
    {
        multi_label_drops = value;
        multi_label_drops.value_namespace = name_space;
        multi_label_drops.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rpf-drops")
    {
        rpf_drops.yfilter = yfilter;
    }
    if(value_path == "multi-label-drops")
    {
        multi_label_drops.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-drops" || name == "multi-label-drops")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::Tunnel()
    :
    forwarding_tunnels(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels>())
{
    forwarding_tunnels->parent = this;

    yang_name = "tunnel"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::Tunnel::~Tunnel()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return (forwarding_tunnels !=  nullptr && forwarding_tunnels->has_data());
}

bool MplsForwarding::Nodes::Node::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| (forwarding_tunnels !=  nullptr && forwarding_tunnels->has_operation());
}

std::string MplsForwarding::Nodes::Node::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-tunnels")
    {
        if(forwarding_tunnels == nullptr)
        {
            forwarding_tunnels = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels>();
        }
        return forwarding_tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(forwarding_tunnels != nullptr)
    {
        _children["forwarding-tunnels"] = forwarding_tunnels;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-tunnels")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnels()
    :
    forwarding_tunnel(this, {"interface_name"})
{

    yang_name = "forwarding-tunnels"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::~ForwardingTunnels()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<forwarding_tunnel.len(); index++)
    {
        if(forwarding_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::has_operation() const
{
    for (std::size_t index=0; index<forwarding_tunnel.len(); index++)
    {
        if(forwarding_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-tunnel")
    {
        auto ent_ = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel>();
        ent_->parent = this;
        forwarding_tunnel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : forwarding_tunnel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-tunnel")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::ForwardingTunnel()
    :
    interface_name{YType::str, "interface-name"}
        ,
    tunnel_info(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo>())
    , fwdg(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg>())
{
    tunnel_info->parent = this;
    fwdg->parent = this;

    yang_name = "forwarding-tunnel"; yang_parent_name = "forwarding-tunnels"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::~ForwardingTunnel()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (tunnel_info !=  nullptr && tunnel_info->has_data())
	|| (fwdg !=  nullptr && fwdg->has_data());
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (tunnel_info !=  nullptr && tunnel_info->has_operation())
	|| (fwdg !=  nullptr && fwdg->has_operation());
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-tunnel";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-info")
    {
        if(tunnel_info == nullptr)
        {
            tunnel_info = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo>();
        }
        return tunnel_info;
    }

    if(child_yang_name == "fwdg")
    {
        if(fwdg == nullptr)
        {
            fwdg = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg>();
        }
        return fwdg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tunnel_info != nullptr)
    {
        _children["tunnel-info"] = tunnel_info;
    }

    if(fwdg != nullptr)
    {
        _children["fwdg"] = fwdg;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-info" || name == "fwdg" || name == "interface-name")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::TunnelInfo()
    :
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    tunnel_local_label{YType::uint32, "tunnel-local-label"},
    tunnel_fwd_class{YType::uint8, "tunnel-fwd-class"},
    tunnel_load_metric{YType::uint8, "tunnel-load-metric"},
    tunnel_is_srte{YType::boolean, "tunnel-is-srte"},
    tunnel_resolution_incomplete{YType::boolean, "tunnel-resolution-incomplete"},
    tunnel_resolution_inconsistent{YType::boolean, "tunnel-resolution-inconsistent"},
    tunnel_is_programmed_to_drop{YType::boolean, "tunnel-is-programmed-to-drop"}
{

    yang_name = "tunnel-info"; yang_parent_name = "forwarding-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::~TunnelInfo()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_interface_name.is_set
	|| tunnel_local_label.is_set
	|| tunnel_fwd_class.is_set
	|| tunnel_load_metric.is_set
	|| tunnel_is_srte.is_set
	|| tunnel_resolution_incomplete.is_set
	|| tunnel_resolution_inconsistent.is_set
	|| tunnel_is_programmed_to_drop.is_set;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(tunnel_local_label.yfilter)
	|| ydk::is_set(tunnel_fwd_class.yfilter)
	|| ydk::is_set(tunnel_load_metric.yfilter)
	|| ydk::is_set(tunnel_is_srte.yfilter)
	|| ydk::is_set(tunnel_resolution_incomplete.yfilter)
	|| ydk::is_set(tunnel_resolution_inconsistent.yfilter)
	|| ydk::is_set(tunnel_is_programmed_to_drop.yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (tunnel_local_label.is_set || is_set(tunnel_local_label.yfilter)) leaf_name_data.push_back(tunnel_local_label.get_name_leafdata());
    if (tunnel_fwd_class.is_set || is_set(tunnel_fwd_class.yfilter)) leaf_name_data.push_back(tunnel_fwd_class.get_name_leafdata());
    if (tunnel_load_metric.is_set || is_set(tunnel_load_metric.yfilter)) leaf_name_data.push_back(tunnel_load_metric.get_name_leafdata());
    if (tunnel_is_srte.is_set || is_set(tunnel_is_srte.yfilter)) leaf_name_data.push_back(tunnel_is_srte.get_name_leafdata());
    if (tunnel_resolution_incomplete.is_set || is_set(tunnel_resolution_incomplete.yfilter)) leaf_name_data.push_back(tunnel_resolution_incomplete.get_name_leafdata());
    if (tunnel_resolution_inconsistent.is_set || is_set(tunnel_resolution_inconsistent.yfilter)) leaf_name_data.push_back(tunnel_resolution_inconsistent.get_name_leafdata());
    if (tunnel_is_programmed_to_drop.is_set || is_set(tunnel_is_programmed_to_drop.yfilter)) leaf_name_data.push_back(tunnel_is_programmed_to_drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-local-label")
    {
        tunnel_local_label = value;
        tunnel_local_label.value_namespace = name_space;
        tunnel_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-fwd-class")
    {
        tunnel_fwd_class = value;
        tunnel_fwd_class.value_namespace = name_space;
        tunnel_fwd_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-load-metric")
    {
        tunnel_load_metric = value;
        tunnel_load_metric.value_namespace = name_space;
        tunnel_load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-is-srte")
    {
        tunnel_is_srte = value;
        tunnel_is_srte.value_namespace = name_space;
        tunnel_is_srte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-resolution-incomplete")
    {
        tunnel_resolution_incomplete = value;
        tunnel_resolution_incomplete.value_namespace = name_space;
        tunnel_resolution_incomplete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-resolution-inconsistent")
    {
        tunnel_resolution_inconsistent = value;
        tunnel_resolution_inconsistent.value_namespace = name_space;
        tunnel_resolution_inconsistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-is-programmed-to-drop")
    {
        tunnel_is_programmed_to_drop = value;
        tunnel_is_programmed_to_drop.value_namespace = name_space;
        tunnel_is_programmed_to_drop.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-local-label")
    {
        tunnel_local_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-fwd-class")
    {
        tunnel_fwd_class.yfilter = yfilter;
    }
    if(value_path == "tunnel-load-metric")
    {
        tunnel_load_metric.yfilter = yfilter;
    }
    if(value_path == "tunnel-is-srte")
    {
        tunnel_is_srte.yfilter = yfilter;
    }
    if(value_path == "tunnel-resolution-incomplete")
    {
        tunnel_resolution_incomplete.yfilter = yfilter;
    }
    if(value_path == "tunnel-resolution-inconsistent")
    {
        tunnel_resolution_inconsistent.yfilter = yfilter;
    }
    if(value_path == "tunnel-is-programmed-to-drop")
    {
        tunnel_is_programmed_to_drop.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-interface-name" || name == "tunnel-local-label" || name == "tunnel-fwd-class" || name == "tunnel-load-metric" || name == "tunnel-is-srte" || name == "tunnel-resolution-incomplete" || name == "tunnel-resolution-inconsistent" || name == "tunnel-is-programmed-to-drop")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::Fwdg()
    :
    leaf_local_label{YType::uint32, "leaf-local-label"},
    eos_bit{YType::uint32, "eos-bit"},
    hardware_information{YType::str, "hardware-information"},
    leaf_referance_count{YType::uint32, "leaf-referance-count"},
    leaf_flags{YType::uint32, "leaf-flags"},
    path_list_referance_count{YType::uint32, "path-list-referance-count"},
    path_list_flags{YType::uint32, "path-list-flags"},
    ldi_referance_count{YType::uint32, "ldi-referance-count"},
    ldi_flags{YType::uint32, "ldi-flags"},
    ldi_type{YType::uint32, "ldi-type"},
    ldi_pointer{YType::uint32, "ldi-pointer"},
    lw_ldi_type{YType::uint32, "lw-ldi-type"},
    lw_ldi_pointer{YType::uint32, "lw-ldi-pointer"},
    lw_ldi_refernace_count{YType::uint32, "lw-ldi-refernace-count"},
    lw_shared_ldi_pointer{YType::uint32, "lw-shared-ldi-pointer"},
    lspa_flags{YType::uint32, "lspa-flags"},
    afi_table_id{YType::uint32, "afi-table-id"},
    multicast_label{YType::boolean, "multicast-label"},
    leaf_time_in_milli_seconds{YType::uint64, "leaf-time-in-milli-seconds"},
    total_number_of_packets_switched{YType::uint64, "total-number-of-packets-switched"},
    total_number_of_bytes_switched{YType::uint64, "total-number-of-bytes-switched"}
        ,
    ldi_information(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation>())
    , multicast_information(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation>())
    , label_information(this, {})
{
    ldi_information->parent = this;
    multicast_information->parent = this;

    yang_name = "fwdg"; yang_parent_name = "forwarding-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::~Fwdg()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_information.len(); index++)
    {
        if(label_information[index]->has_data())
            return true;
    }
    return leaf_local_label.is_set
	|| eos_bit.is_set
	|| hardware_information.is_set
	|| leaf_referance_count.is_set
	|| leaf_flags.is_set
	|| path_list_referance_count.is_set
	|| path_list_flags.is_set
	|| ldi_referance_count.is_set
	|| ldi_flags.is_set
	|| ldi_type.is_set
	|| ldi_pointer.is_set
	|| lw_ldi_type.is_set
	|| lw_ldi_pointer.is_set
	|| lw_ldi_refernace_count.is_set
	|| lw_shared_ldi_pointer.is_set
	|| lspa_flags.is_set
	|| afi_table_id.is_set
	|| multicast_label.is_set
	|| leaf_time_in_milli_seconds.is_set
	|| total_number_of_packets_switched.is_set
	|| total_number_of_bytes_switched.is_set
	|| (ldi_information !=  nullptr && ldi_information->has_data())
	|| (multicast_information !=  nullptr && multicast_information->has_data());
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::has_operation() const
{
    for (std::size_t index=0; index<label_information.len(); index++)
    {
        if(label_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(leaf_local_label.yfilter)
	|| ydk::is_set(eos_bit.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(leaf_referance_count.yfilter)
	|| ydk::is_set(leaf_flags.yfilter)
	|| ydk::is_set(path_list_referance_count.yfilter)
	|| ydk::is_set(path_list_flags.yfilter)
	|| ydk::is_set(ldi_referance_count.yfilter)
	|| ydk::is_set(ldi_flags.yfilter)
	|| ydk::is_set(ldi_type.yfilter)
	|| ydk::is_set(ldi_pointer.yfilter)
	|| ydk::is_set(lw_ldi_type.yfilter)
	|| ydk::is_set(lw_ldi_pointer.yfilter)
	|| ydk::is_set(lw_ldi_refernace_count.yfilter)
	|| ydk::is_set(lw_shared_ldi_pointer.yfilter)
	|| ydk::is_set(lspa_flags.yfilter)
	|| ydk::is_set(afi_table_id.yfilter)
	|| ydk::is_set(multicast_label.yfilter)
	|| ydk::is_set(leaf_time_in_milli_seconds.yfilter)
	|| ydk::is_set(total_number_of_packets_switched.yfilter)
	|| ydk::is_set(total_number_of_bytes_switched.yfilter)
	|| (ldi_information !=  nullptr && ldi_information->has_operation())
	|| (multicast_information !=  nullptr && multicast_information->has_operation());
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwdg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (leaf_local_label.is_set || is_set(leaf_local_label.yfilter)) leaf_name_data.push_back(leaf_local_label.get_name_leafdata());
    if (eos_bit.is_set || is_set(eos_bit.yfilter)) leaf_name_data.push_back(eos_bit.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (leaf_referance_count.is_set || is_set(leaf_referance_count.yfilter)) leaf_name_data.push_back(leaf_referance_count.get_name_leafdata());
    if (leaf_flags.is_set || is_set(leaf_flags.yfilter)) leaf_name_data.push_back(leaf_flags.get_name_leafdata());
    if (path_list_referance_count.is_set || is_set(path_list_referance_count.yfilter)) leaf_name_data.push_back(path_list_referance_count.get_name_leafdata());
    if (path_list_flags.is_set || is_set(path_list_flags.yfilter)) leaf_name_data.push_back(path_list_flags.get_name_leafdata());
    if (ldi_referance_count.is_set || is_set(ldi_referance_count.yfilter)) leaf_name_data.push_back(ldi_referance_count.get_name_leafdata());
    if (ldi_flags.is_set || is_set(ldi_flags.yfilter)) leaf_name_data.push_back(ldi_flags.get_name_leafdata());
    if (ldi_type.is_set || is_set(ldi_type.yfilter)) leaf_name_data.push_back(ldi_type.get_name_leafdata());
    if (ldi_pointer.is_set || is_set(ldi_pointer.yfilter)) leaf_name_data.push_back(ldi_pointer.get_name_leafdata());
    if (lw_ldi_type.is_set || is_set(lw_ldi_type.yfilter)) leaf_name_data.push_back(lw_ldi_type.get_name_leafdata());
    if (lw_ldi_pointer.is_set || is_set(lw_ldi_pointer.yfilter)) leaf_name_data.push_back(lw_ldi_pointer.get_name_leafdata());
    if (lw_ldi_refernace_count.is_set || is_set(lw_ldi_refernace_count.yfilter)) leaf_name_data.push_back(lw_ldi_refernace_count.get_name_leafdata());
    if (lw_shared_ldi_pointer.is_set || is_set(lw_shared_ldi_pointer.yfilter)) leaf_name_data.push_back(lw_shared_ldi_pointer.get_name_leafdata());
    if (lspa_flags.is_set || is_set(lspa_flags.yfilter)) leaf_name_data.push_back(lspa_flags.get_name_leafdata());
    if (afi_table_id.is_set || is_set(afi_table_id.yfilter)) leaf_name_data.push_back(afi_table_id.get_name_leafdata());
    if (multicast_label.is_set || is_set(multicast_label.yfilter)) leaf_name_data.push_back(multicast_label.get_name_leafdata());
    if (leaf_time_in_milli_seconds.is_set || is_set(leaf_time_in_milli_seconds.yfilter)) leaf_name_data.push_back(leaf_time_in_milli_seconds.get_name_leafdata());
    if (total_number_of_packets_switched.is_set || is_set(total_number_of_packets_switched.yfilter)) leaf_name_data.push_back(total_number_of_packets_switched.get_name_leafdata());
    if (total_number_of_bytes_switched.is_set || is_set(total_number_of_bytes_switched.yfilter)) leaf_name_data.push_back(total_number_of_bytes_switched.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldi-information")
    {
        if(ldi_information == nullptr)
        {
            ldi_information = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation>();
        }
        return ldi_information;
    }

    if(child_yang_name == "multicast-information")
    {
        if(multicast_information == nullptr)
        {
            multicast_information = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation>();
        }
        return multicast_information;
    }

    if(child_yang_name == "label-information")
    {
        auto ent_ = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation>();
        ent_->parent = this;
        label_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ldi_information != nullptr)
    {
        _children["ldi-information"] = ldi_information;
    }

    if(multicast_information != nullptr)
    {
        _children["multicast-information"] = multicast_information;
    }

    count_ = 0;
    for (auto ent_ : label_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "leaf-local-label")
    {
        leaf_local_label = value;
        leaf_local_label.value_namespace = name_space;
        leaf_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eos-bit")
    {
        eos_bit = value;
        eos_bit.value_namespace = name_space;
        eos_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count = value;
        leaf_referance_count.value_namespace = name_space;
        leaf_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags = value;
        leaf_flags.value_namespace = name_space;
        leaf_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count = value;
        path_list_referance_count.value_namespace = name_space;
        path_list_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags = value;
        path_list_flags.value_namespace = name_space;
        path_list_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count = value;
        ldi_referance_count.value_namespace = name_space;
        ldi_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags = value;
        ldi_flags.value_namespace = name_space;
        ldi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-type")
    {
        ldi_type = value;
        ldi_type.value_namespace = name_space;
        ldi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer = value;
        ldi_pointer.value_namespace = name_space;
        ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type = value;
        lw_ldi_type.value_namespace = name_space;
        lw_ldi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer = value;
        lw_ldi_pointer.value_namespace = name_space;
        lw_ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count = value;
        lw_ldi_refernace_count.value_namespace = name_space;
        lw_ldi_refernace_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer = value;
        lw_shared_ldi_pointer.value_namespace = name_space;
        lw_shared_ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags = value;
        lspa_flags.value_namespace = name_space;
        lspa_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-table-id")
    {
        afi_table_id = value;
        afi_table_id.value_namespace = name_space;
        afi_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-label")
    {
        multicast_label = value;
        multicast_label.value_namespace = name_space;
        multicast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds = value;
        leaf_time_in_milli_seconds.value_namespace = name_space;
        leaf_time_in_milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-number-of-packets-switched")
    {
        total_number_of_packets_switched = value;
        total_number_of_packets_switched.value_namespace = name_space;
        total_number_of_packets_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-number-of-bytes-switched")
    {
        total_number_of_bytes_switched = value;
        total_number_of_bytes_switched.value_namespace = name_space;
        total_number_of_bytes_switched.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "leaf-local-label")
    {
        leaf_local_label.yfilter = yfilter;
    }
    if(value_path == "eos-bit")
    {
        eos_bit.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count.yfilter = yfilter;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags.yfilter = yfilter;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count.yfilter = yfilter;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags.yfilter = yfilter;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count.yfilter = yfilter;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags.yfilter = yfilter;
    }
    if(value_path == "ldi-type")
    {
        ldi_type.yfilter = yfilter;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count.yfilter = yfilter;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags.yfilter = yfilter;
    }
    if(value_path == "afi-table-id")
    {
        afi_table_id.yfilter = yfilter;
    }
    if(value_path == "multicast-label")
    {
        multicast_label.yfilter = yfilter;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds.yfilter = yfilter;
    }
    if(value_path == "total-number-of-packets-switched")
    {
        total_number_of_packets_switched.yfilter = yfilter;
    }
    if(value_path == "total-number-of-bytes-switched")
    {
        total_number_of_bytes_switched.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldi-information" || name == "multicast-information" || name == "label-information" || name == "leaf-local-label" || name == "eos-bit" || name == "hardware-information" || name == "leaf-referance-count" || name == "leaf-flags" || name == "path-list-referance-count" || name == "path-list-flags" || name == "ldi-referance-count" || name == "ldi-flags" || name == "ldi-type" || name == "ldi-pointer" || name == "lw-ldi-type" || name == "lw-ldi-pointer" || name == "lw-ldi-refernace-count" || name == "lw-shared-ldi-pointer" || name == "lspa-flags" || name == "afi-table-id" || name == "multicast-label" || name == "leaf-time-in-milli-seconds" || name == "total-number-of-packets-switched" || name == "total-number-of-bytes-switched")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::LdiInformation()
    :
    ldi_hardware_information{YType::str, "ldi-hardware-information"}
{

    yang_name = "ldi-information"; yang_parent_name = "fwdg"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::~LdiInformation()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::has_data() const
{
    if (is_presence_container) return true;
    return ldi_hardware_information.is_set;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldi_hardware_information.yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldi-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldi_hardware_information.is_set || is_set(ldi_hardware_information.yfilter)) leaf_name_data.push_back(ldi_hardware_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information = value;
        ldi_hardware_information.value_namespace = name_space;
        ldi_hardware_information.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldi-hardware-information")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::MulticastInformation()
    :
    multicast_mol_base_flags{YType::uint32, "multicast-mol-base-flags"},
    multicast_mol_flags{YType::uint16, "multicast-mol-flags"},
    multicast_mol_referance_count{YType::uint16, "multicast-mol-referance-count"},
    multicast_tunnel_interface_handler{YType::str, "multicast-tunnel-interface-handler"},
    multicast_tunnel_id{YType::uint32, "multicast-tunnel-id"},
    multicast_tunnel_next_hop_information{YType::uint32, "multicast-tunnel-next-hop-information"},
    multicast_tunnel_lspvif{YType::uint32, "multicast-tunnel-lspvif"},
    multicast_mpls_output_paths{YType::uint16, "multicast-mpls-output-paths"},
    multicast_mpls_protocol_output_paths{YType::uint16, "multicast-mpls-protocol-output-paths"},
    multicast_mpls_local_output_paths{YType::uint16, "multicast-mpls-local-output-paths"},
    multicast_rpf_id{YType::uint32, "multicast-rpf-id"},
    multicast_encap_id{YType::uint32, "multicast-encap-id"},
    multicast_platform_data_length{YType::uint8, "multicast-platform-data-length"},
    multicast_platform_data{YType::str, "multicast-platform-data"}
{

    yang_name = "multicast-information"; yang_parent_name = "fwdg"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::~MulticastInformation()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::has_data() const
{
    if (is_presence_container) return true;
    return multicast_mol_base_flags.is_set
	|| multicast_mol_flags.is_set
	|| multicast_mol_referance_count.is_set
	|| multicast_tunnel_interface_handler.is_set
	|| multicast_tunnel_id.is_set
	|| multicast_tunnel_next_hop_information.is_set
	|| multicast_tunnel_lspvif.is_set
	|| multicast_mpls_output_paths.is_set
	|| multicast_mpls_protocol_output_paths.is_set
	|| multicast_mpls_local_output_paths.is_set
	|| multicast_rpf_id.is_set
	|| multicast_encap_id.is_set
	|| multicast_platform_data_length.is_set
	|| multicast_platform_data.is_set;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast_mol_base_flags.yfilter)
	|| ydk::is_set(multicast_mol_flags.yfilter)
	|| ydk::is_set(multicast_mol_referance_count.yfilter)
	|| ydk::is_set(multicast_tunnel_interface_handler.yfilter)
	|| ydk::is_set(multicast_tunnel_id.yfilter)
	|| ydk::is_set(multicast_tunnel_next_hop_information.yfilter)
	|| ydk::is_set(multicast_tunnel_lspvif.yfilter)
	|| ydk::is_set(multicast_mpls_output_paths.yfilter)
	|| ydk::is_set(multicast_mpls_protocol_output_paths.yfilter)
	|| ydk::is_set(multicast_mpls_local_output_paths.yfilter)
	|| ydk::is_set(multicast_rpf_id.yfilter)
	|| ydk::is_set(multicast_encap_id.yfilter)
	|| ydk::is_set(multicast_platform_data_length.yfilter)
	|| ydk::is_set(multicast_platform_data.yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_mol_base_flags.is_set || is_set(multicast_mol_base_flags.yfilter)) leaf_name_data.push_back(multicast_mol_base_flags.get_name_leafdata());
    if (multicast_mol_flags.is_set || is_set(multicast_mol_flags.yfilter)) leaf_name_data.push_back(multicast_mol_flags.get_name_leafdata());
    if (multicast_mol_referance_count.is_set || is_set(multicast_mol_referance_count.yfilter)) leaf_name_data.push_back(multicast_mol_referance_count.get_name_leafdata());
    if (multicast_tunnel_interface_handler.is_set || is_set(multicast_tunnel_interface_handler.yfilter)) leaf_name_data.push_back(multicast_tunnel_interface_handler.get_name_leafdata());
    if (multicast_tunnel_id.is_set || is_set(multicast_tunnel_id.yfilter)) leaf_name_data.push_back(multicast_tunnel_id.get_name_leafdata());
    if (multicast_tunnel_next_hop_information.is_set || is_set(multicast_tunnel_next_hop_information.yfilter)) leaf_name_data.push_back(multicast_tunnel_next_hop_information.get_name_leafdata());
    if (multicast_tunnel_lspvif.is_set || is_set(multicast_tunnel_lspvif.yfilter)) leaf_name_data.push_back(multicast_tunnel_lspvif.get_name_leafdata());
    if (multicast_mpls_output_paths.is_set || is_set(multicast_mpls_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_output_paths.get_name_leafdata());
    if (multicast_mpls_protocol_output_paths.is_set || is_set(multicast_mpls_protocol_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_protocol_output_paths.get_name_leafdata());
    if (multicast_mpls_local_output_paths.is_set || is_set(multicast_mpls_local_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_local_output_paths.get_name_leafdata());
    if (multicast_rpf_id.is_set || is_set(multicast_rpf_id.yfilter)) leaf_name_data.push_back(multicast_rpf_id.get_name_leafdata());
    if (multicast_encap_id.is_set || is_set(multicast_encap_id.yfilter)) leaf_name_data.push_back(multicast_encap_id.get_name_leafdata());
    if (multicast_platform_data_length.is_set || is_set(multicast_platform_data_length.yfilter)) leaf_name_data.push_back(multicast_platform_data_length.get_name_leafdata());
    if (multicast_platform_data.is_set || is_set(multicast_platform_data.yfilter)) leaf_name_data.push_back(multicast_platform_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags = value;
        multicast_mol_base_flags.value_namespace = name_space;
        multicast_mol_base_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags = value;
        multicast_mol_flags.value_namespace = name_space;
        multicast_mol_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count = value;
        multicast_mol_referance_count.value_namespace = name_space;
        multicast_mol_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler = value;
        multicast_tunnel_interface_handler.value_namespace = name_space;
        multicast_tunnel_interface_handler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id = value;
        multicast_tunnel_id.value_namespace = name_space;
        multicast_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information = value;
        multicast_tunnel_next_hop_information.value_namespace = name_space;
        multicast_tunnel_next_hop_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif = value;
        multicast_tunnel_lspvif.value_namespace = name_space;
        multicast_tunnel_lspvif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths = value;
        multicast_mpls_output_paths.value_namespace = name_space;
        multicast_mpls_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths = value;
        multicast_mpls_protocol_output_paths.value_namespace = name_space;
        multicast_mpls_protocol_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths = value;
        multicast_mpls_local_output_paths.value_namespace = name_space;
        multicast_mpls_local_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id = value;
        multicast_rpf_id.value_namespace = name_space;
        multicast_rpf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id = value;
        multicast_encap_id.value_namespace = name_space;
        multicast_encap_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length = value;
        multicast_platform_data_length.value_namespace = name_space;
        multicast_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data = value;
        multicast_platform_data.value_namespace = name_space;
        multicast_platform_data.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id.yfilter = yfilter;
    }
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id.yfilter = yfilter;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-mol-base-flags" || name == "multicast-mol-flags" || name == "multicast-mol-referance-count" || name == "multicast-tunnel-interface-handler" || name == "multicast-tunnel-id" || name == "multicast-tunnel-next-hop-information" || name == "multicast-tunnel-lspvif" || name == "multicast-mpls-output-paths" || name == "multicast-mpls-protocol-output-paths" || name == "multicast-mpls-local-output-paths" || name == "multicast-rpf-id" || name == "multicast-encap-id" || name == "multicast-platform-data-length" || name == "multicast-platform-data")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformation()
    :
    label_information_type{YType::uint32, "label-information-type"},
    local_label{YType::uint32, "local-label"},
    outgoing_label{YType::uint32, "outgoing-label"},
    mpls_adjacency_flags{YType::uint32, "mpls-adjacency-flags"},
    tunnel_id_present{YType::boolean, "tunnel-id-present"},
    label_information_path_index{YType::uint32, "label-information-path-index"},
    label_information_next_hop_type{YType::enumeration, "label-information-next-hop-type"},
    label_information_next_hop_protocol{YType::enumeration, "label-information-next-hop-protocol"},
    tx_bytes{YType::uint64, "tx-bytes"},
    tx_packets{YType::uint64, "tx-packets"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_physical_interface{YType::str, "outgoing-physical-interface"},
    outgoing_parent_interface{YType::str, "outgoing-parent-interface"},
    tunnel_interface{YType::str, "tunnel-interface"},
    outgoing_label_string{YType::str, "outgoing-label-string"},
    prefix_or_id{YType::str, "prefix-or-id"},
    label_information_next_hop_string{YType::str, "label-information-next-hop-string"},
    label_information_route_version{YType::uint64, "label-information-route-version"},
    label_information_time_in_milli_seconds{YType::uint64, "label-information-time-in-milli-seconds"}
        ,
    label_information_detail(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail>())
    , exact_route_hash_info(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo>())
{
    label_information_detail->parent = this;
    exact_route_hash_info->parent = this;

    yang_name = "label-information"; yang_parent_name = "fwdg"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::~LabelInformation()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::has_data() const
{
    if (is_presence_container) return true;
    return label_information_type.is_set
	|| local_label.is_set
	|| outgoing_label.is_set
	|| mpls_adjacency_flags.is_set
	|| tunnel_id_present.is_set
	|| label_information_path_index.is_set
	|| label_information_next_hop_type.is_set
	|| label_information_next_hop_protocol.is_set
	|| tx_bytes.is_set
	|| tx_packets.is_set
	|| outgoing_interface.is_set
	|| outgoing_physical_interface.is_set
	|| outgoing_parent_interface.is_set
	|| tunnel_interface.is_set
	|| outgoing_label_string.is_set
	|| prefix_or_id.is_set
	|| label_information_next_hop_string.is_set
	|| label_information_route_version.is_set
	|| label_information_time_in_milli_seconds.is_set
	|| (label_information_detail !=  nullptr && label_information_detail->has_data())
	|| (exact_route_hash_info !=  nullptr && exact_route_hash_info->has_data());
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_information_type.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(mpls_adjacency_flags.yfilter)
	|| ydk::is_set(tunnel_id_present.yfilter)
	|| ydk::is_set(label_information_path_index.yfilter)
	|| ydk::is_set(label_information_next_hop_type.yfilter)
	|| ydk::is_set(label_information_next_hop_protocol.yfilter)
	|| ydk::is_set(tx_bytes.yfilter)
	|| ydk::is_set(tx_packets.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_physical_interface.yfilter)
	|| ydk::is_set(outgoing_parent_interface.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(outgoing_label_string.yfilter)
	|| ydk::is_set(prefix_or_id.yfilter)
	|| ydk::is_set(label_information_next_hop_string.yfilter)
	|| ydk::is_set(label_information_route_version.yfilter)
	|| ydk::is_set(label_information_time_in_milli_seconds.yfilter)
	|| (label_information_detail !=  nullptr && label_information_detail->has_operation())
	|| (exact_route_hash_info !=  nullptr && exact_route_hash_info->has_operation());
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_information_type.is_set || is_set(label_information_type.yfilter)) leaf_name_data.push_back(label_information_type.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (mpls_adjacency_flags.is_set || is_set(mpls_adjacency_flags.yfilter)) leaf_name_data.push_back(mpls_adjacency_flags.get_name_leafdata());
    if (tunnel_id_present.is_set || is_set(tunnel_id_present.yfilter)) leaf_name_data.push_back(tunnel_id_present.get_name_leafdata());
    if (label_information_path_index.is_set || is_set(label_information_path_index.yfilter)) leaf_name_data.push_back(label_information_path_index.get_name_leafdata());
    if (label_information_next_hop_type.is_set || is_set(label_information_next_hop_type.yfilter)) leaf_name_data.push_back(label_information_next_hop_type.get_name_leafdata());
    if (label_information_next_hop_protocol.is_set || is_set(label_information_next_hop_protocol.yfilter)) leaf_name_data.push_back(label_information_next_hop_protocol.get_name_leafdata());
    if (tx_bytes.is_set || is_set(tx_bytes.yfilter)) leaf_name_data.push_back(tx_bytes.get_name_leafdata());
    if (tx_packets.is_set || is_set(tx_packets.yfilter)) leaf_name_data.push_back(tx_packets.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_physical_interface.is_set || is_set(outgoing_physical_interface.yfilter)) leaf_name_data.push_back(outgoing_physical_interface.get_name_leafdata());
    if (outgoing_parent_interface.is_set || is_set(outgoing_parent_interface.yfilter)) leaf_name_data.push_back(outgoing_parent_interface.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (outgoing_label_string.is_set || is_set(outgoing_label_string.yfilter)) leaf_name_data.push_back(outgoing_label_string.get_name_leafdata());
    if (prefix_or_id.is_set || is_set(prefix_or_id.yfilter)) leaf_name_data.push_back(prefix_or_id.get_name_leafdata());
    if (label_information_next_hop_string.is_set || is_set(label_information_next_hop_string.yfilter)) leaf_name_data.push_back(label_information_next_hop_string.get_name_leafdata());
    if (label_information_route_version.is_set || is_set(label_information_route_version.yfilter)) leaf_name_data.push_back(label_information_route_version.get_name_leafdata());
    if (label_information_time_in_milli_seconds.is_set || is_set(label_information_time_in_milli_seconds.yfilter)) leaf_name_data.push_back(label_information_time_in_milli_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-information-detail")
    {
        if(label_information_detail == nullptr)
        {
            label_information_detail = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail>();
        }
        return label_information_detail;
    }

    if(child_yang_name == "exact-route-hash-info")
    {
        if(exact_route_hash_info == nullptr)
        {
            exact_route_hash_info = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo>();
        }
        return exact_route_hash_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label_information_detail != nullptr)
    {
        _children["label-information-detail"] = label_information_detail;
    }

    if(exact_route_hash_info != nullptr)
    {
        _children["exact-route-hash-info"] = exact_route_hash_info;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-information-type")
    {
        label_information_type = value;
        label_information_type.value_namespace = name_space;
        label_information_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags = value;
        mpls_adjacency_flags.value_namespace = name_space;
        mpls_adjacency_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present = value;
        tunnel_id_present.value_namespace = name_space;
        tunnel_id_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index = value;
        label_information_path_index.value_namespace = name_space;
        label_information_path_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type = value;
        label_information_next_hop_type.value_namespace = name_space;
        label_information_next_hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol = value;
        label_information_next_hop_protocol.value_namespace = name_space;
        label_information_next_hop_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes = value;
        tx_bytes.value_namespace = name_space;
        tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-packets")
    {
        tx_packets = value;
        tx_packets.value_namespace = name_space;
        tx_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface = value;
        outgoing_physical_interface.value_namespace = name_space;
        outgoing_physical_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-parent-interface")
    {
        outgoing_parent_interface = value;
        outgoing_parent_interface.value_namespace = name_space;
        outgoing_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string = value;
        outgoing_label_string.value_namespace = name_space;
        outgoing_label_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id = value;
        prefix_or_id.value_namespace = name_space;
        prefix_or_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string = value;
        label_information_next_hop_string.value_namespace = name_space;
        label_information_next_hop_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version = value;
        label_information_route_version.value_namespace = name_space;
        label_information_route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds = value;
        label_information_time_in_milli_seconds.value_namespace = name_space;
        label_information_time_in_milli_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-information-type")
    {
        label_information_type.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present.yfilter = yfilter;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol.yfilter = yfilter;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes.yfilter = yfilter;
    }
    if(value_path == "tx-packets")
    {
        tx_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-parent-interface")
    {
        outgoing_parent_interface.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string.yfilter = yfilter;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string.yfilter = yfilter;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version.yfilter = yfilter;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-information-detail" || name == "exact-route-hash-info" || name == "label-information-type" || name == "local-label" || name == "outgoing-label" || name == "mpls-adjacency-flags" || name == "tunnel-id-present" || name == "label-information-path-index" || name == "label-information-next-hop-type" || name == "label-information-next-hop-protocol" || name == "tx-bytes" || name == "tx-packets" || name == "outgoing-interface" || name == "outgoing-physical-interface" || name == "outgoing-parent-interface" || name == "tunnel-interface" || name == "outgoing-label-string" || name == "prefix-or-id" || name == "label-information-next-hop-string" || name == "label-information-route-version" || name == "label-information-time-in-milli-seconds")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelInformationDetail()
    :
    l3_mtu{YType::uint32, "l3-mtu"},
    total_encapsulation_size{YType::uint32, "total-encapsulation-size"},
    mac_size{YType::uint32, "mac-size"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    status{YType::int32, "status"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_protocol{YType::enumeration, "next-hop-protocol"},
    next_hop_string{YType::str, "next-hop-string"}
        ,
    label_stack(this, {})
{

    yang_name = "label-information-detail"; yang_parent_name = "label-information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::~LabelInformationDetail()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_stack.len(); index++)
    {
        if(label_stack[index]->has_data())
            return true;
    }
    return l3_mtu.is_set
	|| total_encapsulation_size.is_set
	|| mac_size.is_set
	|| transmit_number_of_packets_switched.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| status.is_set
	|| next_hop_interface.is_set
	|| next_hop_protocol.is_set
	|| next_hop_string.is_set;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::has_operation() const
{
    for (std::size_t index=0; index<label_stack.len(); index++)
    {
        if(label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(l3_mtu.yfilter)
	|| ydk::is_set(total_encapsulation_size.yfilter)
	|| ydk::is_set(mac_size.yfilter)
	|| ydk::is_set(transmit_number_of_packets_switched.yfilter)
	|| ydk::is_set(transmit_number_of_bytes_switched.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter)
	|| ydk::is_set(next_hop_protocol.yfilter)
	|| ydk::is_set(next_hop_string.yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3_mtu.is_set || is_set(l3_mtu.yfilter)) leaf_name_data.push_back(l3_mtu.get_name_leafdata());
    if (total_encapsulation_size.is_set || is_set(total_encapsulation_size.yfilter)) leaf_name_data.push_back(total_encapsulation_size.get_name_leafdata());
    if (mac_size.is_set || is_set(mac_size.yfilter)) leaf_name_data.push_back(mac_size.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_protocol.is_set || is_set(next_hop_protocol.yfilter)) leaf_name_data.push_back(next_hop_protocol.get_name_leafdata());
    if (next_hop_string.is_set || is_set(next_hop_string.yfilter)) leaf_name_data.push_back(next_hop_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-stack")
    {
        auto ent_ = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack>();
        ent_->parent = this;
        label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu = value;
        l3_mtu.value_namespace = name_space;
        l3_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size = value;
        total_encapsulation_size.value_namespace = name_space;
        total_encapsulation_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-size")
    {
        mac_size = value;
        mac_size.value_namespace = name_space;
        mac_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
        transmit_number_of_packets_switched.value_namespace = name_space;
        transmit_number_of_packets_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
        transmit_number_of_bytes_switched.value_namespace = name_space;
        transmit_number_of_bytes_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol = value;
        next_hop_protocol.value_namespace = name_space;
        next_hop_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string = value;
        next_hop_string.value_namespace = name_space;
        next_hop_string.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu.yfilter = yfilter;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size.yfilter = yfilter;
    }
    if(value_path == "mac-size")
    {
        mac_size.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol.yfilter = yfilter;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack" || name == "l3-mtu" || name == "total-encapsulation-size" || name == "mac-size" || name == "transmit-number-of-packets-switched" || name == "transmit-number-of-bytes-switched" || name == "status" || name == "next-hop-interface" || name == "next-hop-protocol" || name == "next-hop-string")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::LabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "label-stack"; yang_parent_name = "label-information-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::~LabelStack()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::ExactRouteHashInfo()
    :
    hash_index_is_valid{YType::boolean, "hash-index-is-valid"},
    hash_index{YType::uint8, "hash-index"}
{

    yang_name = "exact-route-hash-info"; yang_parent_name = "label-information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::~ExactRouteHashInfo()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::has_data() const
{
    if (is_presence_container) return true;
    return hash_index_is_valid.is_set
	|| hash_index.is_set;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hash_index_is_valid.yfilter)
	|| ydk::is_set(hash_index.yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exact-route-hash-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_index_is_valid.is_set || is_set(hash_index_is_valid.yfilter)) leaf_name_data.push_back(hash_index_is_valid.get_name_leafdata());
    if (hash_index.is_set || is_set(hash_index.yfilter)) leaf_name_data.push_back(hash_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hash-index-is-valid")
    {
        hash_index_is_valid = value;
        hash_index_is_valid.value_namespace = name_space;
        hash_index_is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-index")
    {
        hash_index = value;
        hash_index.value_namespace = name_space;
        hash_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hash-index-is-valid")
    {
        hash_index_is_valid.yfilter = yfilter;
    }
    if(value_path == "hash-index")
    {
        hash_index.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hash-index-is-valid" || name == "hash-index")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrDatabase()
    :
    frrdb_summary(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary>())
    , frrdb_protected_interface_table_summaries(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries>())
    , frrdb_tunnel_midpoint_summary(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary>())
    , frrdb_tunnel_midpoints(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints>())
    , frrdb_tunnel_heads(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads>())
    , frrdb_tunnel_head_summary(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary>())
    , frrdb_backup_interface_summaries(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries>())
{
    frrdb_summary->parent = this;
    frrdb_protected_interface_table_summaries->parent = this;
    frrdb_tunnel_midpoint_summary->parent = this;
    frrdb_tunnel_midpoints->parent = this;
    frrdb_tunnel_heads->parent = this;
    frrdb_tunnel_head_summary->parent = this;
    frrdb_backup_interface_summaries->parent = this;

    yang_name = "frr-database"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::~FrrDatabase()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::has_data() const
{
    if (is_presence_container) return true;
    return (frrdb_summary !=  nullptr && frrdb_summary->has_data())
	|| (frrdb_protected_interface_table_summaries !=  nullptr && frrdb_protected_interface_table_summaries->has_data())
	|| (frrdb_tunnel_midpoint_summary !=  nullptr && frrdb_tunnel_midpoint_summary->has_data())
	|| (frrdb_tunnel_midpoints !=  nullptr && frrdb_tunnel_midpoints->has_data())
	|| (frrdb_tunnel_heads !=  nullptr && frrdb_tunnel_heads->has_data())
	|| (frrdb_tunnel_head_summary !=  nullptr && frrdb_tunnel_head_summary->has_data())
	|| (frrdb_backup_interface_summaries !=  nullptr && frrdb_backup_interface_summaries->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::has_operation() const
{
    return is_set(yfilter)
	|| (frrdb_summary !=  nullptr && frrdb_summary->has_operation())
	|| (frrdb_protected_interface_table_summaries !=  nullptr && frrdb_protected_interface_table_summaries->has_operation())
	|| (frrdb_tunnel_midpoint_summary !=  nullptr && frrdb_tunnel_midpoint_summary->has_operation())
	|| (frrdb_tunnel_midpoints !=  nullptr && frrdb_tunnel_midpoints->has_operation())
	|| (frrdb_tunnel_heads !=  nullptr && frrdb_tunnel_heads->has_operation())
	|| (frrdb_tunnel_head_summary !=  nullptr && frrdb_tunnel_head_summary->has_operation())
	|| (frrdb_backup_interface_summaries !=  nullptr && frrdb_backup_interface_summaries->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-summary")
    {
        if(frrdb_summary == nullptr)
        {
            frrdb_summary = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary>();
        }
        return frrdb_summary;
    }

    if(child_yang_name == "frrdb-protected-interface-table-summaries")
    {
        if(frrdb_protected_interface_table_summaries == nullptr)
        {
            frrdb_protected_interface_table_summaries = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries>();
        }
        return frrdb_protected_interface_table_summaries;
    }

    if(child_yang_name == "frrdb-tunnel-midpoint-summary")
    {
        if(frrdb_tunnel_midpoint_summary == nullptr)
        {
            frrdb_tunnel_midpoint_summary = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary>();
        }
        return frrdb_tunnel_midpoint_summary;
    }

    if(child_yang_name == "frrdb-tunnel-midpoints")
    {
        if(frrdb_tunnel_midpoints == nullptr)
        {
            frrdb_tunnel_midpoints = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints>();
        }
        return frrdb_tunnel_midpoints;
    }

    if(child_yang_name == "frrdb-tunnel-heads")
    {
        if(frrdb_tunnel_heads == nullptr)
        {
            frrdb_tunnel_heads = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads>();
        }
        return frrdb_tunnel_heads;
    }

    if(child_yang_name == "frrdb-tunnel-head-summary")
    {
        if(frrdb_tunnel_head_summary == nullptr)
        {
            frrdb_tunnel_head_summary = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary>();
        }
        return frrdb_tunnel_head_summary;
    }

    if(child_yang_name == "frrdb-backup-interface-summaries")
    {
        if(frrdb_backup_interface_summaries == nullptr)
        {
            frrdb_backup_interface_summaries = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries>();
        }
        return frrdb_backup_interface_summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frrdb_summary != nullptr)
    {
        _children["frrdb-summary"] = frrdb_summary;
    }

    if(frrdb_protected_interface_table_summaries != nullptr)
    {
        _children["frrdb-protected-interface-table-summaries"] = frrdb_protected_interface_table_summaries;
    }

    if(frrdb_tunnel_midpoint_summary != nullptr)
    {
        _children["frrdb-tunnel-midpoint-summary"] = frrdb_tunnel_midpoint_summary;
    }

    if(frrdb_tunnel_midpoints != nullptr)
    {
        _children["frrdb-tunnel-midpoints"] = frrdb_tunnel_midpoints;
    }

    if(frrdb_tunnel_heads != nullptr)
    {
        _children["frrdb-tunnel-heads"] = frrdb_tunnel_heads;
    }

    if(frrdb_tunnel_head_summary != nullptr)
    {
        _children["frrdb-tunnel-head-summary"] = frrdb_tunnel_head_summary;
    }

    if(frrdb_backup_interface_summaries != nullptr)
    {
        _children["frrdb-backup-interface-summaries"] = frrdb_backup_interface_summaries;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::FrrDatabase::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrdb-summary" || name == "frrdb-protected-interface-table-summaries" || name == "frrdb-tunnel-midpoint-summary" || name == "frrdb-tunnel-midpoints" || name == "frrdb-tunnel-heads" || name == "frrdb-tunnel-head-summary" || name == "frrdb-backup-interface-summaries")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::FrrdbSummary()
    :
    active{YType::uint32, "active"},
    ready{YType::uint32, "ready"},
    partial{YType::uint32, "partial"},
    other{YType::uint32, "other"}
{

    yang_name = "frrdb-summary"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::~FrrdbSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::has_data() const
{
    if (is_presence_container) return true;
    return active.is_set
	|| ready.is_set
	|| partial.is_set
	|| other.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(other.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (other.is_set || is_set(other.yfilter)) leaf_name_data.push_back(other.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other")
    {
        other = value;
        other.value_namespace = name_space;
        other.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "other")
    {
        other.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "ready" || name == "partial" || name == "other")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummaries()
    :
    frrdb_protected_interface_table_summary(this, {"interface_name"})
{

    yang_name = "frrdb-protected-interface-table-summaries"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::~FrrdbProtectedInterfaceTableSummaries()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frrdb_protected_interface_table_summary.len(); index++)
    {
        if(frrdb_protected_interface_table_summary[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::has_operation() const
{
    for (std::size_t index=0; index<frrdb_protected_interface_table_summary.len(); index++)
    {
        if(frrdb_protected_interface_table_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-protected-interface-table-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-protected-interface-table-summary")
    {
        auto ent_ = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary>();
        ent_->parent = this;
        frrdb_protected_interface_table_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frrdb_protected_interface_table_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrdb-protected-interface-table-summary")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::FrrdbProtectedInterfaceTableSummary()
    :
    interface_name{YType::str, "interface-name"},
    active{YType::uint32, "active"},
    ready{YType::uint32, "ready"},
    partial{YType::uint32, "partial"},
    other{YType::uint32, "other"}
{

    yang_name = "frrdb-protected-interface-table-summary"; yang_parent_name = "frrdb-protected-interface-table-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::~FrrdbProtectedInterfaceTableSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| active.is_set
	|| ready.is_set
	|| partial.is_set
	|| other.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(other.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-protected-interface-table-summary";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (other.is_set || is_set(other.yfilter)) leaf_name_data.push_back(other.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other")
    {
        other = value;
        other.value_namespace = name_space;
        other.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "other")
    {
        other.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "active" || name == "ready" || name == "partial" || name == "other")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::FrrdbTunnelMidpointSummary()
    :
    active{YType::uint32, "active"},
    ready{YType::uint32, "ready"},
    partial{YType::uint32, "partial"},
    other{YType::uint32, "other"}
{

    yang_name = "frrdb-tunnel-midpoint-summary"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::~FrrdbTunnelMidpointSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::has_data() const
{
    if (is_presence_container) return true;
    return active.is_set
	|| ready.is_set
	|| partial.is_set
	|| other.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(other.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-midpoint-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (other.is_set || is_set(other.yfilter)) leaf_name_data.push_back(other.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other")
    {
        other = value;
        other.value_namespace = name_space;
        other.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "other")
    {
        other.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "ready" || name == "partial" || name == "other")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoints()
    :
    frrdb_tunnel_midpoint(this, {"local_label"})
{

    yang_name = "frrdb-tunnel-midpoints"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::~FrrdbTunnelMidpoints()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frrdb_tunnel_midpoint.len(); index++)
    {
        if(frrdb_tunnel_midpoint[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::has_operation() const
{
    for (std::size_t index=0; index<frrdb_tunnel_midpoint.len(); index++)
    {
        if(frrdb_tunnel_midpoint[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-midpoints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-tunnel-midpoint")
    {
        auto ent_ = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint>();
        ent_->parent = this;
        frrdb_tunnel_midpoint.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frrdb_tunnel_midpoint.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrdb-tunnel-midpoint")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrdbTunnelMidpoint()
    :
    local_label{YType::uint32, "local-label"},
    outgoing_lable_string{YType::str, "outgoing-lable-string"},
    frr_lable_string{YType::str, "frr-lable-string"}
        ,
    frr_db(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb>())
{
    frr_db->parent = this;

    yang_name = "frrdb-tunnel-midpoint"; yang_parent_name = "frrdb-tunnel-midpoints"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::~FrrdbTunnelMidpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::has_data() const
{
    if (is_presence_container) return true;
    return local_label.is_set
	|| outgoing_lable_string.is_set
	|| frr_lable_string.is_set
	|| (frr_db !=  nullptr && frr_db->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(outgoing_lable_string.yfilter)
	|| ydk::is_set(frr_lable_string.yfilter)
	|| (frr_db !=  nullptr && frr_db->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-midpoint";
    ADD_KEY_TOKEN(local_label, "local-label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (outgoing_lable_string.is_set || is_set(outgoing_lable_string.yfilter)) leaf_name_data.push_back(outgoing_lable_string.get_name_leafdata());
    if (frr_lable_string.is_set || is_set(frr_lable_string.yfilter)) leaf_name_data.push_back(frr_lable_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-db")
    {
        if(frr_db == nullptr)
        {
            frr_db = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb>();
        }
        return frr_db;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frr_db != nullptr)
    {
        _children["frr-db"] = frr_db;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-lable-string")
    {
        outgoing_lable_string = value;
        outgoing_lable_string.value_namespace = name_space;
        outgoing_lable_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-lable-string")
    {
        frr_lable_string = value;
        frr_lable_string.value_namespace = name_space;
        frr_lable_string.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-lable-string")
    {
        outgoing_lable_string.yfilter = yfilter;
    }
    if(value_path == "frr-lable-string")
    {
        frr_lable_string.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-db" || name == "local-label" || name == "outgoing-lable-string" || name == "frr-lable-string")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrDb()
    :
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    input_label{YType::uint32, "input-label"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_label{YType::uint32, "outgoing-label"},
    frr_interface_name{YType::str, "frr-interface-name"},
    frr_label{YType::uint32, "frr-label"},
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    frr_next_hop_ipv4_address{YType::str, "frr-next-hop-ipv4-address"},
    is_mldp_lsp{YType::boolean, "is-mldp-lsp"},
    is_multicast_tunnel{YType::boolean, "is-multicast-tunnel"},
    multicast_tunnel_legs{YType::uint32, "multicast-tunnel-legs"}
        ,
    frr_entry_id(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId>())
    , multicast_leg(this, {})
{
    frr_entry_id->parent = this;

    yang_name = "frr-db"; yang_parent_name = "frrdb-tunnel-midpoint"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::~FrrDb()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<multicast_leg.len(); index++)
    {
        if(multicast_leg[index]->has_data())
            return true;
    }
    return tunnel_interface_name.is_set
	|| input_label.is_set
	|| outgoing_interface.is_set
	|| outgoing_label.is_set
	|| frr_interface_name.is_set
	|| frr_label.is_set
	|| entry_frr_state.is_set
	|| frr_next_hop_ipv4_address.is_set
	|| is_mldp_lsp.is_set
	|| is_multicast_tunnel.is_set
	|| multicast_tunnel_legs.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::has_operation() const
{
    for (std::size_t index=0; index<multicast_leg.len(); index++)
    {
        if(multicast_leg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(input_label.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(frr_interface_name.yfilter)
	|| ydk::is_set(frr_label.yfilter)
	|| ydk::is_set(entry_frr_state.yfilter)
	|| ydk::is_set(frr_next_hop_ipv4_address.yfilter)
	|| ydk::is_set(is_mldp_lsp.yfilter)
	|| ydk::is_set(is_multicast_tunnel.yfilter)
	|| ydk::is_set(multicast_tunnel_legs.yfilter)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-db";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.yfilter)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (frr_interface_name.is_set || is_set(frr_interface_name.yfilter)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.yfilter)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (entry_frr_state.is_set || is_set(entry_frr_state.yfilter)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (frr_next_hop_ipv4_address.is_set || is_set(frr_next_hop_ipv4_address.yfilter)) leaf_name_data.push_back(frr_next_hop_ipv4_address.get_name_leafdata());
    if (is_mldp_lsp.is_set || is_set(is_mldp_lsp.yfilter)) leaf_name_data.push_back(is_mldp_lsp.get_name_leafdata());
    if (is_multicast_tunnel.is_set || is_set(is_multicast_tunnel.yfilter)) leaf_name_data.push_back(is_multicast_tunnel.get_name_leafdata());
    if (multicast_tunnel_legs.is_set || is_set(multicast_tunnel_legs.yfilter)) leaf_name_data.push_back(multicast_tunnel_legs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id == nullptr)
        {
            frr_entry_id = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId>();
        }
        return frr_entry_id;
    }

    if(child_yang_name == "multicast-leg")
    {
        auto ent_ = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg>();
        ent_->parent = this;
        multicast_leg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frr_entry_id != nullptr)
    {
        _children["frr-entry-id"] = frr_entry_id;
    }

    count_ = 0;
    for (auto ent_ : multicast_leg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-label")
    {
        input_label = value;
        input_label.value_namespace = name_space;
        input_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
        frr_interface_name.value_namespace = name_space;
        frr_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
        frr_label.value_namespace = name_space;
        frr_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
        entry_frr_state.value_namespace = name_space;
        entry_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address = value;
        frr_next_hop_ipv4_address.value_namespace = name_space;
        frr_next_hop_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp = value;
        is_mldp_lsp.value_namespace = name_space;
        is_mldp_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multicast-tunnel")
    {
        is_multicast_tunnel = value;
        is_multicast_tunnel.value_namespace = name_space;
        is_multicast_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-legs")
    {
        multicast_tunnel_legs = value;
        multicast_tunnel_legs.value_namespace = name_space;
        multicast_tunnel_legs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "input-label")
    {
        input_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-label")
    {
        frr_label.yfilter = yfilter;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state.yfilter = yfilter;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp.yfilter = yfilter;
    }
    if(value_path == "is-multicast-tunnel")
    {
        is_multicast_tunnel.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-legs")
    {
        multicast_tunnel_legs.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-entry-id" || name == "multicast-leg" || name == "tunnel-interface-name" || name == "input-label" || name == "outgoing-interface" || name == "outgoing-label" || name == "frr-interface-name" || name == "frr-label" || name == "entry-frr-state" || name == "frr-next-hop-ipv4-address" || name == "is-mldp-lsp" || name == "is-multicast-tunnel" || name == "multicast-tunnel-legs")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
        ,
    head(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head>())
    , midpoint(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint>())
{
    head->parent = this;
    midpoint->parent = this;

    yang_name = "frr-entry-id"; yang_parent_name = "frr-db"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::~FrrEntryId()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::has_data() const
{
    if (is_presence_container) return true;
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head>();
        }
        return head;
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint == nullptr)
        {
            midpoint = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint>();
        }
        return midpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(head != nullptr)
    {
        _children["head"] = head;
    }

    if(midpoint != nullptr)
    {
        _children["midpoint"] = midpoint;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "midpoint" || name == "role")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint32, "destination-prefix-length"}
{

    yang_name = "head"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::~Head()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::has_data() const
{
    if (is_presence_container) return true;
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_prefix_length.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.yfilter)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
        destination_prefix_length.value_namespace = name_space;
        destination_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-prefix" || name == "destination-prefix-length")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::Midpoint()
    :
    source_address{YType::str, "source-address"},
    lspid{YType::uint32, "lspid"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "midpoint"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| lspid.is_set
	|| tunnel_id.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "lspid" || name == "tunnel-id")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::MulticastLeg()
    :
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    input_label{YType::uint32, "input-label"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_label{YType::uint32, "outgoing-label"},
    frr_interface_name{YType::str, "frr-interface-name"},
    frr_label{YType::uint32, "frr-label"},
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    frr_next_hop_ipv4_address{YType::str, "frr-next-hop-ipv4-address"},
    is_mldp_lsp{YType::boolean, "is-mldp-lsp"}
        ,
    frr_entry_id(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId>())
{
    frr_entry_id->parent = this;

    yang_name = "multicast-leg"; yang_parent_name = "frr-db"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::~MulticastLeg()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_interface_name.is_set
	|| input_label.is_set
	|| outgoing_interface.is_set
	|| outgoing_label.is_set
	|| frr_interface_name.is_set
	|| frr_label.is_set
	|| entry_frr_state.is_set
	|| frr_next_hop_ipv4_address.is_set
	|| is_mldp_lsp.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(input_label.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(frr_interface_name.yfilter)
	|| ydk::is_set(frr_label.yfilter)
	|| ydk::is_set(entry_frr_state.yfilter)
	|| ydk::is_set(frr_next_hop_ipv4_address.yfilter)
	|| ydk::is_set(is_mldp_lsp.yfilter)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-leg";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.yfilter)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (frr_interface_name.is_set || is_set(frr_interface_name.yfilter)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.yfilter)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (entry_frr_state.is_set || is_set(entry_frr_state.yfilter)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (frr_next_hop_ipv4_address.is_set || is_set(frr_next_hop_ipv4_address.yfilter)) leaf_name_data.push_back(frr_next_hop_ipv4_address.get_name_leafdata());
    if (is_mldp_lsp.is_set || is_set(is_mldp_lsp.yfilter)) leaf_name_data.push_back(is_mldp_lsp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id == nullptr)
        {
            frr_entry_id = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId>();
        }
        return frr_entry_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frr_entry_id != nullptr)
    {
        _children["frr-entry-id"] = frr_entry_id;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-label")
    {
        input_label = value;
        input_label.value_namespace = name_space;
        input_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
        frr_interface_name.value_namespace = name_space;
        frr_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
        frr_label.value_namespace = name_space;
        frr_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
        entry_frr_state.value_namespace = name_space;
        entry_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address = value;
        frr_next_hop_ipv4_address.value_namespace = name_space;
        frr_next_hop_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp = value;
        is_mldp_lsp.value_namespace = name_space;
        is_mldp_lsp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "input-label")
    {
        input_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-label")
    {
        frr_label.yfilter = yfilter;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state.yfilter = yfilter;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-entry-id" || name == "tunnel-interface-name" || name == "input-label" || name == "outgoing-interface" || name == "outgoing-label" || name == "frr-interface-name" || name == "frr-label" || name == "entry-frr-state" || name == "frr-next-hop-ipv4-address" || name == "is-mldp-lsp")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
        ,
    head(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head>())
    , midpoint(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint>())
{
    head->parent = this;
    midpoint->parent = this;

    yang_name = "frr-entry-id"; yang_parent_name = "multicast-leg"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::~FrrEntryId()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::has_data() const
{
    if (is_presence_container) return true;
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head>();
        }
        return head;
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint == nullptr)
        {
            midpoint = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint>();
        }
        return midpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(head != nullptr)
    {
        _children["head"] = head;
    }

    if(midpoint != nullptr)
    {
        _children["midpoint"] = midpoint;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "midpoint" || name == "role")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint32, "destination-prefix-length"}
{

    yang_name = "head"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::~Head()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::has_data() const
{
    if (is_presence_container) return true;
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_prefix_length.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.yfilter)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
        destination_prefix_length.value_namespace = name_space;
        destination_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-prefix" || name == "destination-prefix-length")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::Midpoint()
    :
    source_address{YType::str, "source-address"},
    lspid{YType::uint32, "lspid"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "midpoint"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| lspid.is_set
	|| tunnel_id.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "lspid" || name == "tunnel-id")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHeads()
    :
    frrdb_tunnel_head(this, {"interface_name"})
{

    yang_name = "frrdb-tunnel-heads"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::~FrrdbTunnelHeads()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frrdb_tunnel_head.len(); index++)
    {
        if(frrdb_tunnel_head[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::has_operation() const
{
    for (std::size_t index=0; index<frrdb_tunnel_head.len(); index++)
    {
        if(frrdb_tunnel_head[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-heads";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-tunnel-head")
    {
        auto ent_ = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead>();
        ent_->parent = this;
        frrdb_tunnel_head.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frrdb_tunnel_head.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrdb-tunnel-head")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrdbTunnelHead()
    :
    interface_name{YType::str, "interface-name"},
    outgoing_lable_string{YType::str, "outgoing-lable-string"},
    frr_lable_string{YType::str, "frr-lable-string"}
        ,
    frr_db(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb>())
{
    frr_db->parent = this;

    yang_name = "frrdb-tunnel-head"; yang_parent_name = "frrdb-tunnel-heads"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::~FrrdbTunnelHead()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| outgoing_lable_string.is_set
	|| frr_lable_string.is_set
	|| (frr_db !=  nullptr && frr_db->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(outgoing_lable_string.yfilter)
	|| ydk::is_set(frr_lable_string.yfilter)
	|| (frr_db !=  nullptr && frr_db->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-head";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (outgoing_lable_string.is_set || is_set(outgoing_lable_string.yfilter)) leaf_name_data.push_back(outgoing_lable_string.get_name_leafdata());
    if (frr_lable_string.is_set || is_set(frr_lable_string.yfilter)) leaf_name_data.push_back(frr_lable_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-db")
    {
        if(frr_db == nullptr)
        {
            frr_db = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb>();
        }
        return frr_db;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frr_db != nullptr)
    {
        _children["frr-db"] = frr_db;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-lable-string")
    {
        outgoing_lable_string = value;
        outgoing_lable_string.value_namespace = name_space;
        outgoing_lable_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-lable-string")
    {
        frr_lable_string = value;
        frr_lable_string.value_namespace = name_space;
        frr_lable_string.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "outgoing-lable-string")
    {
        outgoing_lable_string.yfilter = yfilter;
    }
    if(value_path == "frr-lable-string")
    {
        frr_lable_string.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-db" || name == "interface-name" || name == "outgoing-lable-string" || name == "frr-lable-string")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrDb()
    :
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    input_label{YType::uint32, "input-label"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_label{YType::uint32, "outgoing-label"},
    frr_interface_name{YType::str, "frr-interface-name"},
    frr_label{YType::uint32, "frr-label"},
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    frr_next_hop_ipv4_address{YType::str, "frr-next-hop-ipv4-address"},
    is_mldp_lsp{YType::boolean, "is-mldp-lsp"},
    is_multicast_tunnel{YType::boolean, "is-multicast-tunnel"},
    multicast_tunnel_legs{YType::uint32, "multicast-tunnel-legs"}
        ,
    frr_entry_id(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId>())
    , multicast_leg(this, {})
{
    frr_entry_id->parent = this;

    yang_name = "frr-db"; yang_parent_name = "frrdb-tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::~FrrDb()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<multicast_leg.len(); index++)
    {
        if(multicast_leg[index]->has_data())
            return true;
    }
    return tunnel_interface_name.is_set
	|| input_label.is_set
	|| outgoing_interface.is_set
	|| outgoing_label.is_set
	|| frr_interface_name.is_set
	|| frr_label.is_set
	|| entry_frr_state.is_set
	|| frr_next_hop_ipv4_address.is_set
	|| is_mldp_lsp.is_set
	|| is_multicast_tunnel.is_set
	|| multicast_tunnel_legs.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::has_operation() const
{
    for (std::size_t index=0; index<multicast_leg.len(); index++)
    {
        if(multicast_leg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(input_label.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(frr_interface_name.yfilter)
	|| ydk::is_set(frr_label.yfilter)
	|| ydk::is_set(entry_frr_state.yfilter)
	|| ydk::is_set(frr_next_hop_ipv4_address.yfilter)
	|| ydk::is_set(is_mldp_lsp.yfilter)
	|| ydk::is_set(is_multicast_tunnel.yfilter)
	|| ydk::is_set(multicast_tunnel_legs.yfilter)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-db";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.yfilter)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (frr_interface_name.is_set || is_set(frr_interface_name.yfilter)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.yfilter)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (entry_frr_state.is_set || is_set(entry_frr_state.yfilter)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (frr_next_hop_ipv4_address.is_set || is_set(frr_next_hop_ipv4_address.yfilter)) leaf_name_data.push_back(frr_next_hop_ipv4_address.get_name_leafdata());
    if (is_mldp_lsp.is_set || is_set(is_mldp_lsp.yfilter)) leaf_name_data.push_back(is_mldp_lsp.get_name_leafdata());
    if (is_multicast_tunnel.is_set || is_set(is_multicast_tunnel.yfilter)) leaf_name_data.push_back(is_multicast_tunnel.get_name_leafdata());
    if (multicast_tunnel_legs.is_set || is_set(multicast_tunnel_legs.yfilter)) leaf_name_data.push_back(multicast_tunnel_legs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id == nullptr)
        {
            frr_entry_id = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId>();
        }
        return frr_entry_id;
    }

    if(child_yang_name == "multicast-leg")
    {
        auto ent_ = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg>();
        ent_->parent = this;
        multicast_leg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frr_entry_id != nullptr)
    {
        _children["frr-entry-id"] = frr_entry_id;
    }

    count_ = 0;
    for (auto ent_ : multicast_leg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-label")
    {
        input_label = value;
        input_label.value_namespace = name_space;
        input_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
        frr_interface_name.value_namespace = name_space;
        frr_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
        frr_label.value_namespace = name_space;
        frr_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
        entry_frr_state.value_namespace = name_space;
        entry_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address = value;
        frr_next_hop_ipv4_address.value_namespace = name_space;
        frr_next_hop_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp = value;
        is_mldp_lsp.value_namespace = name_space;
        is_mldp_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multicast-tunnel")
    {
        is_multicast_tunnel = value;
        is_multicast_tunnel.value_namespace = name_space;
        is_multicast_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-legs")
    {
        multicast_tunnel_legs = value;
        multicast_tunnel_legs.value_namespace = name_space;
        multicast_tunnel_legs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "input-label")
    {
        input_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-label")
    {
        frr_label.yfilter = yfilter;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state.yfilter = yfilter;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp.yfilter = yfilter;
    }
    if(value_path == "is-multicast-tunnel")
    {
        is_multicast_tunnel.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-legs")
    {
        multicast_tunnel_legs.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-entry-id" || name == "multicast-leg" || name == "tunnel-interface-name" || name == "input-label" || name == "outgoing-interface" || name == "outgoing-label" || name == "frr-interface-name" || name == "frr-label" || name == "entry-frr-state" || name == "frr-next-hop-ipv4-address" || name == "is-mldp-lsp" || name == "is-multicast-tunnel" || name == "multicast-tunnel-legs")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
        ,
    head(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head>())
    , midpoint(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint>())
{
    head->parent = this;
    midpoint->parent = this;

    yang_name = "frr-entry-id"; yang_parent_name = "frr-db"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::~FrrEntryId()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::has_data() const
{
    if (is_presence_container) return true;
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head>();
        }
        return head;
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint == nullptr)
        {
            midpoint = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint>();
        }
        return midpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(head != nullptr)
    {
        _children["head"] = head;
    }

    if(midpoint != nullptr)
    {
        _children["midpoint"] = midpoint;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "midpoint" || name == "role")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint32, "destination-prefix-length"}
{

    yang_name = "head"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::~Head()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::has_data() const
{
    if (is_presence_container) return true;
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_prefix_length.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.yfilter)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
        destination_prefix_length.value_namespace = name_space;
        destination_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-prefix" || name == "destination-prefix-length")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::Midpoint()
    :
    source_address{YType::str, "source-address"},
    lspid{YType::uint32, "lspid"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "midpoint"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| lspid.is_set
	|| tunnel_id.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "lspid" || name == "tunnel-id")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::MulticastLeg()
    :
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    input_label{YType::uint32, "input-label"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_label{YType::uint32, "outgoing-label"},
    frr_interface_name{YType::str, "frr-interface-name"},
    frr_label{YType::uint32, "frr-label"},
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    frr_next_hop_ipv4_address{YType::str, "frr-next-hop-ipv4-address"},
    is_mldp_lsp{YType::boolean, "is-mldp-lsp"}
        ,
    frr_entry_id(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId>())
{
    frr_entry_id->parent = this;

    yang_name = "multicast-leg"; yang_parent_name = "frr-db"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::~MulticastLeg()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_interface_name.is_set
	|| input_label.is_set
	|| outgoing_interface.is_set
	|| outgoing_label.is_set
	|| frr_interface_name.is_set
	|| frr_label.is_set
	|| entry_frr_state.is_set
	|| frr_next_hop_ipv4_address.is_set
	|| is_mldp_lsp.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(input_label.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(frr_interface_name.yfilter)
	|| ydk::is_set(frr_label.yfilter)
	|| ydk::is_set(entry_frr_state.yfilter)
	|| ydk::is_set(frr_next_hop_ipv4_address.yfilter)
	|| ydk::is_set(is_mldp_lsp.yfilter)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-leg";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.yfilter)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (frr_interface_name.is_set || is_set(frr_interface_name.yfilter)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.yfilter)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (entry_frr_state.is_set || is_set(entry_frr_state.yfilter)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (frr_next_hop_ipv4_address.is_set || is_set(frr_next_hop_ipv4_address.yfilter)) leaf_name_data.push_back(frr_next_hop_ipv4_address.get_name_leafdata());
    if (is_mldp_lsp.is_set || is_set(is_mldp_lsp.yfilter)) leaf_name_data.push_back(is_mldp_lsp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id == nullptr)
        {
            frr_entry_id = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId>();
        }
        return frr_entry_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frr_entry_id != nullptr)
    {
        _children["frr-entry-id"] = frr_entry_id;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-label")
    {
        input_label = value;
        input_label.value_namespace = name_space;
        input_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
        frr_interface_name.value_namespace = name_space;
        frr_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
        frr_label.value_namespace = name_space;
        frr_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
        entry_frr_state.value_namespace = name_space;
        entry_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address = value;
        frr_next_hop_ipv4_address.value_namespace = name_space;
        frr_next_hop_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp = value;
        is_mldp_lsp.value_namespace = name_space;
        is_mldp_lsp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "input-label")
    {
        input_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-label")
    {
        frr_label.yfilter = yfilter;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state.yfilter = yfilter;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-entry-id" || name == "tunnel-interface-name" || name == "input-label" || name == "outgoing-interface" || name == "outgoing-label" || name == "frr-interface-name" || name == "frr-label" || name == "entry-frr-state" || name == "frr-next-hop-ipv4-address" || name == "is-mldp-lsp")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
        ,
    head(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head>())
    , midpoint(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint>())
{
    head->parent = this;
    midpoint->parent = this;

    yang_name = "frr-entry-id"; yang_parent_name = "multicast-leg"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::~FrrEntryId()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::has_data() const
{
    if (is_presence_container) return true;
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head>();
        }
        return head;
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint == nullptr)
        {
            midpoint = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint>();
        }
        return midpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(head != nullptr)
    {
        _children["head"] = head;
    }

    if(midpoint != nullptr)
    {
        _children["midpoint"] = midpoint;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "midpoint" || name == "role")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint32, "destination-prefix-length"}
{

    yang_name = "head"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::~Head()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::has_data() const
{
    if (is_presence_container) return true;
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_prefix_length.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.yfilter)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
        destination_prefix_length.value_namespace = name_space;
        destination_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-prefix" || name == "destination-prefix-length")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::Midpoint()
    :
    source_address{YType::str, "source-address"},
    lspid{YType::uint32, "lspid"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "midpoint"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| lspid.is_set
	|| tunnel_id.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "lspid" || name == "tunnel-id")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::FrrdbTunnelHeadSummary()
    :
    active{YType::uint32, "active"},
    ready{YType::uint32, "ready"},
    partial{YType::uint32, "partial"},
    other{YType::uint32, "other"}
{

    yang_name = "frrdb-tunnel-head-summary"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::~FrrdbTunnelHeadSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::has_data() const
{
    if (is_presence_container) return true;
    return active.is_set
	|| ready.is_set
	|| partial.is_set
	|| other.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(other.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-head-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (other.is_set || is_set(other.yfilter)) leaf_name_data.push_back(other.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other")
    {
        other = value;
        other.value_namespace = name_space;
        other.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "other")
    {
        other.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "ready" || name == "partial" || name == "other")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummaries()
    :
    frrdb_backup_interface_summary(this, {"interface_name"})
{

    yang_name = "frrdb-backup-interface-summaries"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::~FrrdbBackupInterfaceSummaries()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frrdb_backup_interface_summary.len(); index++)
    {
        if(frrdb_backup_interface_summary[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::has_operation() const
{
    for (std::size_t index=0; index<frrdb_backup_interface_summary.len(); index++)
    {
        if(frrdb_backup_interface_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-backup-interface-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-backup-interface-summary")
    {
        auto ent_ = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary>();
        ent_->parent = this;
        frrdb_backup_interface_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frrdb_backup_interface_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrdb-backup-interface-summary")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::FrrdbBackupInterfaceSummary()
    :
    interface_name{YType::str, "interface-name"},
    active{YType::uint32, "active"},
    ready{YType::uint32, "ready"},
    partial{YType::uint32, "partial"},
    other{YType::uint32, "other"}
{

    yang_name = "frrdb-backup-interface-summary"; yang_parent_name = "frrdb-backup-interface-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::~FrrdbBackupInterfaceSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| active.is_set
	|| ready.is_set
	|| partial.is_set
	|| other.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(other.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-backup-interface-summary";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (other.is_set || is_set(other.yfilter)) leaf_name_data.push_back(other.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other")
    {
        other = value;
        other.value_namespace = name_space;
        other.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "other")
    {
        other.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "active" || name == "ready" || name == "partial" || name == "other")
        return true;
    return false;
}


}
}

