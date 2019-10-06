
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_1.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

L2vpnForwarding::Nodes::Node::L2fibDhcpBindingCount::L2fibDhcpBindingCount()
    :
    bindings{YType::uint32, "bindings"}
{

    yang_name = "l2fib-dhcp-binding-count"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibDhcpBindingCount::~L2fibDhcpBindingCount()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibDhcpBindingCount::has_data() const
{
    if (is_presence_container) return true;
    return bindings.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibDhcpBindingCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bindings.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibDhcpBindingCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-dhcp-binding-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibDhcpBindingCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bindings.is_set || is_set(bindings.yfilter)) leaf_name_data.push_back(bindings.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibDhcpBindingCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibDhcpBindingCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibDhcpBindingCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bindings")
    {
        bindings = value;
        bindings.value_namespace = name_space;
        bindings.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibDhcpBindingCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bindings")
    {
        bindings.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibDhcpBindingCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bindings")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomains()
    :
    l2fib_bridge_domain(this, {})
{

    yang_name = "l2fib-bridge-domains"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::~L2fibBridgeDomains()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_bridge_domain.len(); index++)
    {
        if(l2fib_bridge_domain[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::has_operation() const
{
    for (std::size_t index=0; index<l2fib_bridge_domain.len(); index++)
    {
        if(l2fib_bridge_domain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-bridge-domains";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-bridge-domain")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain>();
        ent_->parent = this;
        l2fib_bridge_domain.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_bridge_domain.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-bridge-domain")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::L2fibBridgeDomain()
    :
    bd_group_name{YType::str, "bd-group-name"},
    bd_name{YType::str, "bd-name"},
    bridge_id{YType::uint32, "bridge-id"},
    bridge_port_count{YType::uint32, "bridge-port-count"},
    number_of_hwmac{YType::uint32, "number-of-hwmac"},
    number_of_swmac{YType::uint32, "number-of-swmac"},
    bridge_name{YType::str, "bridge-name"},
    shg_count{YType::uint32, "shg-count"},
    bridge_type{YType::enumeration, "bridge-type"},
    learn_key{YType::uint8, "learn-key"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Base>())
    , oper(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper>())
    , bd_pbb_union(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion>())
    , bvi_info(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BviInfo>())
    , p2mppw_info(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo>())
{
    base->parent = this;
    oper->parent = this;
    bd_pbb_union->parent = this;
    bvi_info->parent = this;
    p2mppw_info->parent = this;

    yang_name = "l2fib-bridge-domain"; yang_parent_name = "l2fib-bridge-domains"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::~L2fibBridgeDomain()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::has_data() const
{
    if (is_presence_container) return true;
    return bd_group_name.is_set
	|| bd_name.is_set
	|| bridge_id.is_set
	|| bridge_port_count.is_set
	|| number_of_hwmac.is_set
	|| number_of_swmac.is_set
	|| bridge_name.is_set
	|| shg_count.is_set
	|| bridge_type.is_set
	|| learn_key.is_set
	|| (base !=  nullptr && base->has_data())
	|| (oper !=  nullptr && oper->has_data())
	|| (bd_pbb_union !=  nullptr && bd_pbb_union->has_data())
	|| (bvi_info !=  nullptr && bvi_info->has_data())
	|| (p2mppw_info !=  nullptr && p2mppw_info->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_group_name.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(bridge_port_count.yfilter)
	|| ydk::is_set(number_of_hwmac.yfilter)
	|| ydk::is_set(number_of_swmac.yfilter)
	|| ydk::is_set(bridge_name.yfilter)
	|| ydk::is_set(shg_count.yfilter)
	|| ydk::is_set(bridge_type.yfilter)
	|| ydk::is_set(learn_key.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (oper !=  nullptr && oper->has_operation())
	|| (bd_pbb_union !=  nullptr && bd_pbb_union->has_operation())
	|| (bvi_info !=  nullptr && bvi_info->has_operation())
	|| (p2mppw_info !=  nullptr && p2mppw_info->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-bridge-domain";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_group_name.is_set || is_set(bd_group_name.yfilter)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (bridge_port_count.is_set || is_set(bridge_port_count.yfilter)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (number_of_hwmac.is_set || is_set(number_of_hwmac.yfilter)) leaf_name_data.push_back(number_of_hwmac.get_name_leafdata());
    if (number_of_swmac.is_set || is_set(number_of_swmac.yfilter)) leaf_name_data.push_back(number_of_swmac.get_name_leafdata());
    if (bridge_name.is_set || is_set(bridge_name.yfilter)) leaf_name_data.push_back(bridge_name.get_name_leafdata());
    if (shg_count.is_set || is_set(shg_count.yfilter)) leaf_name_data.push_back(shg_count.get_name_leafdata());
    if (bridge_type.is_set || is_set(bridge_type.yfilter)) leaf_name_data.push_back(bridge_type.get_name_leafdata());
    if (learn_key.is_set || is_set(learn_key.yfilter)) leaf_name_data.push_back(learn_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Base>();
        }
        return base;
    }

    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper>();
        }
        return oper;
    }

    if(child_yang_name == "bd-pbb-union")
    {
        if(bd_pbb_union == nullptr)
        {
            bd_pbb_union = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion>();
        }
        return bd_pbb_union;
    }

    if(child_yang_name == "bvi-info")
    {
        if(bvi_info == nullptr)
        {
            bvi_info = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BviInfo>();
        }
        return bvi_info;
    }

    if(child_yang_name == "p2mppw-info")
    {
        if(p2mppw_info == nullptr)
        {
            p2mppw_info = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo>();
        }
        return p2mppw_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(oper != nullptr)
    {
        _children["oper"] = oper;
    }

    if(bd_pbb_union != nullptr)
    {
        _children["bd-pbb-union"] = bd_pbb_union;
    }

    if(bvi_info != nullptr)
    {
        _children["bvi-info"] = bvi_info;
    }

    if(p2mppw_info != nullptr)
    {
        _children["p2mppw-info"] = p2mppw_info;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name = value;
        bd_group_name.value_namespace = name_space;
        bd_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
        bridge_port_count.value_namespace = name_space;
        bridge_port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-hwmac")
    {
        number_of_hwmac = value;
        number_of_hwmac.value_namespace = name_space;
        number_of_hwmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-swmac")
    {
        number_of_swmac = value;
        number_of_swmac.value_namespace = name_space;
        number_of_swmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-name")
    {
        bridge_name = value;
        bridge_name.value_namespace = name_space;
        bridge_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shg-count")
    {
        shg_count = value;
        shg_count.value_namespace = name_space;
        shg_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-type")
    {
        bridge_type = value;
        bridge_type.value_namespace = name_space;
        bridge_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn-key")
    {
        learn_key = value;
        learn_key.value_namespace = name_space;
        learn_key.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count.yfilter = yfilter;
    }
    if(value_path == "number-of-hwmac")
    {
        number_of_hwmac.yfilter = yfilter;
    }
    if(value_path == "number-of-swmac")
    {
        number_of_swmac.yfilter = yfilter;
    }
    if(value_path == "bridge-name")
    {
        bridge_name.yfilter = yfilter;
    }
    if(value_path == "shg-count")
    {
        shg_count.yfilter = yfilter;
    }
    if(value_path == "bridge-type")
    {
        bridge_type.yfilter = yfilter;
    }
    if(value_path == "learn-key")
    {
        learn_key.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "oper" || name == "bd-pbb-union" || name == "bvi-info" || name == "p2mppw-info" || name == "bd-group-name" || name == "bd-name" || name == "bridge-id" || name == "bridge-port-count" || name == "number-of-hwmac" || name == "number-of-swmac" || name == "bridge-name" || name == "shg-count" || name == "bridge-type" || name == "learn-key")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2fib-bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::Oper()
    :
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"}
        ,
    operational_information(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation>())
{
    operational_information->parent = this;

    yang_name = "oper"; yang_parent_name = "l2fib-bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::~Oper()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::has_data() const
{
    if (is_presence_container) return true;
    return unicast_storm_control_pps.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| broadcast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| (operational_information !=  nullptr && operational_information->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| (operational_information !=  nullptr && operational_information->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operational-information")
    {
        if(operational_information == nullptr)
        {
            operational_information = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation>();
        }
        return operational_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(operational_information != nullptr)
    {
        _children["operational-information"] = operational_information;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operational-information" || name == "unicast-storm-control-pps" || name == "unicast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "broadcast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "multicast-storm-control-kb-ps")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::OperationalInformation()
    :
    mtu{YType::uint32, "mtu"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_limit{YType::uint32, "mac-limit"},
    number_of_macs{YType::uint32, "number-of-macs"},
    admin_disabled{YType::boolean, "admin-disabled"},
    flooding_disabled{YType::boolean, "flooding-disabled"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_threshold{YType::uint32, "mac-limit-threshold"},
    mac_learning_disabled{YType::boolean, "mac-learning-disabled"},
    mac_port_down_flush_disabled{YType::boolean, "mac-port-down-flush-disabled"},
    mac_limit_notification_type{YType::enumeration, "mac-limit-notification-type"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    is_mac_secure_accept_shutdown{YType::boolean, "is-mac-secure-accept-shutdown"},
    is_mac_secure_threshold_enabled{YType::boolean, "is-mac-secure-threshold-enabled"},
    mac_aging_type{YType::boolean, "mac-aging-type"},
    storm_control_unicast_enabled{YType::boolean, "storm-control-unicast-enabled"},
    storm_control_broadcast_enabled{YType::boolean, "storm-control-broadcast-enabled"},
    storm_control_multicast_enabled{YType::boolean, "storm-control-multicast-enabled"},
    storm_control_unicast_rate_unit{YType::enumeration, "storm-control-unicast-rate-unit"},
    storm_control_broadcast_rate_unit{YType::enumeration, "storm-control-broadcast-rate-unit"},
    storm_control_multicast_rate_unit{YType::enumeration, "storm-control-multicast-rate-unit"},
    dhcp_enabled{YType::boolean, "dhcp-enabled"},
    dhcp_trusted{YType::boolean, "dhcp-trusted"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_addr_validation_ipv4_enabled{YType::boolean, "is-dai-addr-validation-ipv4-enabled"},
    is_dai_addr_validation_source_mac_enabled{YType::boolean, "is-dai-addr-validation-source-mac-enabled"},
    is_dai_addr_validation_destination_mac_enabled{YType::boolean, "is-dai-addr-validation-destination-mac-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_ipsg_enabled{YType::boolean, "is-ipsg-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_vpls_flood_optimization_enabled{YType::boolean, "is-vpls-flood-optimization-enabled"},
    igmp_snoop_enabled{YType::boolean, "igmp-snoop-enabled"},
    igmp_snoop_profile_enabled{YType::boolean, "igmp-snoop-profile-enabled"},
    igmp_flood_forward_enabled{YType::boolean, "igmp-flood-forward-enabled"},
    igmp_mroute_port_enabled{YType::boolean, "igmp-mroute-port-enabled"},
    igmp_route_guard_enabled{YType::boolean, "igmp-route-guard-enabled"},
    mld_snoop_enabled{YType::boolean, "mld-snoop-enabled"},
    mld_snoop_profile_enabled{YType::boolean, "mld-snoop-profile-enabled"},
    mld_flood_forward_enabled{YType::boolean, "mld-flood-forward-enabled"},
    mld_mroute_port_enabled{YType::boolean, "mld-mroute-port-enabled"},
    mld_route_guard_enabled{YType::boolean, "mld-route-guard-enabled"},
    stp_participating{YType::boolean, "stp-participating"},
    bvi_configured{YType::boolean, "bvi-configured"},
    is_bvi_up{YType::boolean, "is-bvi-up"},
    is_vni_enabled{YType::boolean, "is-vni-enabled"},
    is_evpn_enabled{YType::boolean, "is-evpn-enabled"},
    unknown_unicast_flooding_disabled{YType::boolean, "unknown-unicast-flooding-disabled"},
    is_pbbevpn_enabled{YType::boolean, "is-pbbevpn-enabled"},
    is_swmac_learning{YType::boolean, "is-swmac-learning"},
    is_evpn_flow_label{YType::boolean, "is-evpn-flow-label"},
    is_evpn_cw_disable{YType::boolean, "is-evpn-cw-disable"},
    msti{YType::uint32, "msti"},
    is_p2mp_pw_enabled{YType::boolean, "is-p2mp-pw-enabled"},
    is_igmp_snoop_enabled{YType::boolean, "is-igmp-snoop-enabled"},
    nv_satellite_offload_ipv4_multicast_disabled{YType::boolean, "nv-satellite-offload-ipv4-multicast-disabled"}
        ,
    feature(this, {})
{

    yang_name = "operational-information"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::~OperationalInformation()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<feature.len(); index++)
    {
        if(feature[index]->has_data())
            return true;
    }
    return mtu.is_set
	|| mac_aging_time.is_set
	|| mac_limit.is_set
	|| number_of_macs.is_set
	|| admin_disabled.is_set
	|| flooding_disabled.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| mac_limit_action.is_set
	|| mac_limit_threshold.is_set
	|| mac_learning_disabled.is_set
	|| mac_port_down_flush_disabled.is_set
	|| mac_limit_notification_type.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| mac_secure_action.is_set
	|| is_mac_secure_accept_shutdown.is_set
	|| is_mac_secure_threshold_enabled.is_set
	|| mac_aging_type.is_set
	|| storm_control_unicast_enabled.is_set
	|| storm_control_broadcast_enabled.is_set
	|| storm_control_multicast_enabled.is_set
	|| storm_control_unicast_rate_unit.is_set
	|| storm_control_broadcast_rate_unit.is_set
	|| storm_control_multicast_rate_unit.is_set
	|| dhcp_enabled.is_set
	|| dhcp_trusted.is_set
	|| is_dai_enabled.is_set
	|| is_dai_addr_validation_ipv4_enabled.is_set
	|| is_dai_addr_validation_source_mac_enabled.is_set
	|| is_dai_addr_validation_destination_mac_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_ipsg_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_vpls_flood_optimization_enabled.is_set
	|| igmp_snoop_enabled.is_set
	|| igmp_snoop_profile_enabled.is_set
	|| igmp_flood_forward_enabled.is_set
	|| igmp_mroute_port_enabled.is_set
	|| igmp_route_guard_enabled.is_set
	|| mld_snoop_enabled.is_set
	|| mld_snoop_profile_enabled.is_set
	|| mld_flood_forward_enabled.is_set
	|| mld_mroute_port_enabled.is_set
	|| mld_route_guard_enabled.is_set
	|| stp_participating.is_set
	|| bvi_configured.is_set
	|| is_bvi_up.is_set
	|| is_vni_enabled.is_set
	|| is_evpn_enabled.is_set
	|| unknown_unicast_flooding_disabled.is_set
	|| is_pbbevpn_enabled.is_set
	|| is_swmac_learning.is_set
	|| is_evpn_flow_label.is_set
	|| is_evpn_cw_disable.is_set
	|| msti.is_set
	|| is_p2mp_pw_enabled.is_set
	|| is_igmp_snoop_enabled.is_set
	|| nv_satellite_offload_ipv4_multicast_disabled.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::has_operation() const
{
    for (std::size_t index=0; index<feature.len(); index++)
    {
        if(feature[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(mac_aging_time.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(number_of_macs.yfilter)
	|| ydk::is_set(admin_disabled.yfilter)
	|| ydk::is_set(flooding_disabled.yfilter)
	|| ydk::is_set(flood_unknown_unicast_enabled.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(mac_limit_threshold.yfilter)
	|| ydk::is_set(mac_learning_disabled.yfilter)
	|| ydk::is_set(mac_port_down_flush_disabled.yfilter)
	|| ydk::is_set(mac_limit_notification_type.yfilter)
	|| ydk::is_set(is_mac_secure_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_logging_enabled.yfilter)
	|| ydk::is_set(mac_secure_action.yfilter)
	|| ydk::is_set(is_mac_secure_accept_shutdown.yfilter)
	|| ydk::is_set(is_mac_secure_threshold_enabled.yfilter)
	|| ydk::is_set(mac_aging_type.yfilter)
	|| ydk::is_set(storm_control_unicast_enabled.yfilter)
	|| ydk::is_set(storm_control_broadcast_enabled.yfilter)
	|| ydk::is_set(storm_control_multicast_enabled.yfilter)
	|| ydk::is_set(storm_control_unicast_rate_unit.yfilter)
	|| ydk::is_set(storm_control_broadcast_rate_unit.yfilter)
	|| ydk::is_set(storm_control_multicast_rate_unit.yfilter)
	|| ydk::is_set(dhcp_enabled.yfilter)
	|| ydk::is_set(dhcp_trusted.yfilter)
	|| ydk::is_set(is_dai_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_ipv4_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_source_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_destination_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_logging_enabled.yfilter)
	|| ydk::is_set(is_ipsg_enabled.yfilter)
	|| ydk::is_set(is_ipsg_logging_enabled.yfilter)
	|| ydk::is_set(is_vpls_flood_optimization_enabled.yfilter)
	|| ydk::is_set(igmp_snoop_enabled.yfilter)
	|| ydk::is_set(igmp_snoop_profile_enabled.yfilter)
	|| ydk::is_set(igmp_flood_forward_enabled.yfilter)
	|| ydk::is_set(igmp_mroute_port_enabled.yfilter)
	|| ydk::is_set(igmp_route_guard_enabled.yfilter)
	|| ydk::is_set(mld_snoop_enabled.yfilter)
	|| ydk::is_set(mld_snoop_profile_enabled.yfilter)
	|| ydk::is_set(mld_flood_forward_enabled.yfilter)
	|| ydk::is_set(mld_mroute_port_enabled.yfilter)
	|| ydk::is_set(mld_route_guard_enabled.yfilter)
	|| ydk::is_set(stp_participating.yfilter)
	|| ydk::is_set(bvi_configured.yfilter)
	|| ydk::is_set(is_bvi_up.yfilter)
	|| ydk::is_set(is_vni_enabled.yfilter)
	|| ydk::is_set(is_evpn_enabled.yfilter)
	|| ydk::is_set(unknown_unicast_flooding_disabled.yfilter)
	|| ydk::is_set(is_pbbevpn_enabled.yfilter)
	|| ydk::is_set(is_swmac_learning.yfilter)
	|| ydk::is_set(is_evpn_flow_label.yfilter)
	|| ydk::is_set(is_evpn_cw_disable.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(is_p2mp_pw_enabled.yfilter)
	|| ydk::is_set(is_igmp_snoop_enabled.yfilter)
	|| ydk::is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.yfilter)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (number_of_macs.is_set || is_set(number_of_macs.yfilter)) leaf_name_data.push_back(number_of_macs.get_name_leafdata());
    if (admin_disabled.is_set || is_set(admin_disabled.yfilter)) leaf_name_data.push_back(admin_disabled.get_name_leafdata());
    if (flooding_disabled.is_set || is_set(flooding_disabled.yfilter)) leaf_name_data.push_back(flooding_disabled.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.yfilter)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_threshold.is_set || is_set(mac_limit_threshold.yfilter)) leaf_name_data.push_back(mac_limit_threshold.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.yfilter)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (mac_limit_notification_type.is_set || is_set(mac_limit_notification_type.yfilter)) leaf_name_data.push_back(mac_limit_notification_type.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.yfilter)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (is_mac_secure_accept_shutdown.is_set || is_set(is_mac_secure_accept_shutdown.yfilter)) leaf_name_data.push_back(is_mac_secure_accept_shutdown.get_name_leafdata());
    if (is_mac_secure_threshold_enabled.is_set || is_set(is_mac_secure_threshold_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_threshold_enabled.get_name_leafdata());
    if (mac_aging_type.is_set || is_set(mac_aging_type.yfilter)) leaf_name_data.push_back(mac_aging_type.get_name_leafdata());
    if (storm_control_unicast_enabled.is_set || is_set(storm_control_unicast_enabled.yfilter)) leaf_name_data.push_back(storm_control_unicast_enabled.get_name_leafdata());
    if (storm_control_broadcast_enabled.is_set || is_set(storm_control_broadcast_enabled.yfilter)) leaf_name_data.push_back(storm_control_broadcast_enabled.get_name_leafdata());
    if (storm_control_multicast_enabled.is_set || is_set(storm_control_multicast_enabled.yfilter)) leaf_name_data.push_back(storm_control_multicast_enabled.get_name_leafdata());
    if (storm_control_unicast_rate_unit.is_set || is_set(storm_control_unicast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_unicast_rate_unit.get_name_leafdata());
    if (storm_control_broadcast_rate_unit.is_set || is_set(storm_control_broadcast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_broadcast_rate_unit.get_name_leafdata());
    if (storm_control_multicast_rate_unit.is_set || is_set(storm_control_multicast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_multicast_rate_unit.get_name_leafdata());
    if (dhcp_enabled.is_set || is_set(dhcp_enabled.yfilter)) leaf_name_data.push_back(dhcp_enabled.get_name_leafdata());
    if (dhcp_trusted.is_set || is_set(dhcp_trusted.yfilter)) leaf_name_data.push_back(dhcp_trusted.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.yfilter)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_addr_validation_ipv4_enabled.is_set || is_set(is_dai_addr_validation_ipv4_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validation_source_mac_enabled.is_set || is_set(is_dai_addr_validation_source_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_source_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validation_destination_mac_enabled.is_set || is_set(is_dai_addr_validation_destination_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_destination_mac_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.yfilter)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_ipsg_enabled.is_set || is_set(is_ipsg_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_vpls_flood_optimization_enabled.is_set || is_set(is_vpls_flood_optimization_enabled.yfilter)) leaf_name_data.push_back(is_vpls_flood_optimization_enabled.get_name_leafdata());
    if (igmp_snoop_enabled.is_set || is_set(igmp_snoop_enabled.yfilter)) leaf_name_data.push_back(igmp_snoop_enabled.get_name_leafdata());
    if (igmp_snoop_profile_enabled.is_set || is_set(igmp_snoop_profile_enabled.yfilter)) leaf_name_data.push_back(igmp_snoop_profile_enabled.get_name_leafdata());
    if (igmp_flood_forward_enabled.is_set || is_set(igmp_flood_forward_enabled.yfilter)) leaf_name_data.push_back(igmp_flood_forward_enabled.get_name_leafdata());
    if (igmp_mroute_port_enabled.is_set || is_set(igmp_mroute_port_enabled.yfilter)) leaf_name_data.push_back(igmp_mroute_port_enabled.get_name_leafdata());
    if (igmp_route_guard_enabled.is_set || is_set(igmp_route_guard_enabled.yfilter)) leaf_name_data.push_back(igmp_route_guard_enabled.get_name_leafdata());
    if (mld_snoop_enabled.is_set || is_set(mld_snoop_enabled.yfilter)) leaf_name_data.push_back(mld_snoop_enabled.get_name_leafdata());
    if (mld_snoop_profile_enabled.is_set || is_set(mld_snoop_profile_enabled.yfilter)) leaf_name_data.push_back(mld_snoop_profile_enabled.get_name_leafdata());
    if (mld_flood_forward_enabled.is_set || is_set(mld_flood_forward_enabled.yfilter)) leaf_name_data.push_back(mld_flood_forward_enabled.get_name_leafdata());
    if (mld_mroute_port_enabled.is_set || is_set(mld_mroute_port_enabled.yfilter)) leaf_name_data.push_back(mld_mroute_port_enabled.get_name_leafdata());
    if (mld_route_guard_enabled.is_set || is_set(mld_route_guard_enabled.yfilter)) leaf_name_data.push_back(mld_route_guard_enabled.get_name_leafdata());
    if (stp_participating.is_set || is_set(stp_participating.yfilter)) leaf_name_data.push_back(stp_participating.get_name_leafdata());
    if (bvi_configured.is_set || is_set(bvi_configured.yfilter)) leaf_name_data.push_back(bvi_configured.get_name_leafdata());
    if (is_bvi_up.is_set || is_set(is_bvi_up.yfilter)) leaf_name_data.push_back(is_bvi_up.get_name_leafdata());
    if (is_vni_enabled.is_set || is_set(is_vni_enabled.yfilter)) leaf_name_data.push_back(is_vni_enabled.get_name_leafdata());
    if (is_evpn_enabled.is_set || is_set(is_evpn_enabled.yfilter)) leaf_name_data.push_back(is_evpn_enabled.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.yfilter)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());
    if (is_pbbevpn_enabled.is_set || is_set(is_pbbevpn_enabled.yfilter)) leaf_name_data.push_back(is_pbbevpn_enabled.get_name_leafdata());
    if (is_swmac_learning.is_set || is_set(is_swmac_learning.yfilter)) leaf_name_data.push_back(is_swmac_learning.get_name_leafdata());
    if (is_evpn_flow_label.is_set || is_set(is_evpn_flow_label.yfilter)) leaf_name_data.push_back(is_evpn_flow_label.get_name_leafdata());
    if (is_evpn_cw_disable.is_set || is_set(is_evpn_cw_disable.yfilter)) leaf_name_data.push_back(is_evpn_cw_disable.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (is_p2mp_pw_enabled.is_set || is_set(is_p2mp_pw_enabled.yfilter)) leaf_name_data.push_back(is_p2mp_pw_enabled.get_name_leafdata());
    if (is_igmp_snoop_enabled.is_set || is_set(is_igmp_snoop_enabled.yfilter)) leaf_name_data.push_back(is_igmp_snoop_enabled.get_name_leafdata());
    if (nv_satellite_offload_ipv4_multicast_disabled.is_set || is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter)) leaf_name_data.push_back(nv_satellite_offload_ipv4_multicast_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "feature")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature>();
        ent_->parent = this;
        feature.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : feature.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
        mac_aging_time.value_namespace = name_space;
        mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs = value;
        number_of_macs.value_namespace = name_space;
        number_of_macs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-disabled")
    {
        admin_disabled = value;
        admin_disabled.value_namespace = name_space;
        admin_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled = value;
        flooding_disabled.value_namespace = name_space;
        flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
        flood_unknown_unicast_enabled.value_namespace = name_space;
        flood_unknown_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
        mac_limit_action.value_namespace = name_space;
        mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold = value;
        mac_limit_threshold.value_namespace = name_space;
        mac_limit_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
        mac_learning_disabled.value_namespace = name_space;
        mac_learning_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
        mac_port_down_flush_disabled.value_namespace = name_space;
        mac_port_down_flush_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type = value;
        mac_limit_notification_type.value_namespace = name_space;
        mac_limit_notification_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
        is_mac_secure_enabled.value_namespace = name_space;
        is_mac_secure_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
        is_mac_secure_logging_enabled.value_namespace = name_space;
        is_mac_secure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
        mac_secure_action.value_namespace = name_space;
        mac_secure_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown = value;
        is_mac_secure_accept_shutdown.value_namespace = name_space;
        is_mac_secure_accept_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled = value;
        is_mac_secure_threshold_enabled.value_namespace = name_space;
        is_mac_secure_threshold_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type = value;
        mac_aging_type.value_namespace = name_space;
        mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled = value;
        storm_control_unicast_enabled.value_namespace = name_space;
        storm_control_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled = value;
        storm_control_broadcast_enabled.value_namespace = name_space;
        storm_control_broadcast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled = value;
        storm_control_multicast_enabled.value_namespace = name_space;
        storm_control_multicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit = value;
        storm_control_unicast_rate_unit.value_namespace = name_space;
        storm_control_unicast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit = value;
        storm_control_broadcast_rate_unit.value_namespace = name_space;
        storm_control_broadcast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit = value;
        storm_control_multicast_rate_unit.value_namespace = name_space;
        storm_control_multicast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled = value;
        dhcp_enabled.value_namespace = name_space;
        dhcp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted = value;
        dhcp_trusted.value_namespace = name_space;
        dhcp_trusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
        is_dai_enabled.value_namespace = name_space;
        is_dai_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled = value;
        is_dai_addr_validation_ipv4_enabled.value_namespace = name_space;
        is_dai_addr_validation_ipv4_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled = value;
        is_dai_addr_validation_source_mac_enabled.value_namespace = name_space;
        is_dai_addr_validation_source_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled = value;
        is_dai_addr_validation_destination_mac_enabled.value_namespace = name_space;
        is_dai_addr_validation_destination_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
        is_dai_logging_enabled.value_namespace = name_space;
        is_dai_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled = value;
        is_ipsg_enabled.value_namespace = name_space;
        is_ipsg_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
        is_ipsg_logging_enabled.value_namespace = name_space;
        is_ipsg_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled = value;
        is_vpls_flood_optimization_enabled.value_namespace = name_space;
        is_vpls_flood_optimization_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled = value;
        igmp_snoop_enabled.value_namespace = name_space;
        igmp_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled = value;
        igmp_snoop_profile_enabled.value_namespace = name_space;
        igmp_snoop_profile_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled = value;
        igmp_flood_forward_enabled.value_namespace = name_space;
        igmp_flood_forward_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled = value;
        igmp_mroute_port_enabled.value_namespace = name_space;
        igmp_mroute_port_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled = value;
        igmp_route_guard_enabled.value_namespace = name_space;
        igmp_route_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled = value;
        mld_snoop_enabled.value_namespace = name_space;
        mld_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled = value;
        mld_snoop_profile_enabled.value_namespace = name_space;
        mld_snoop_profile_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled = value;
        mld_flood_forward_enabled.value_namespace = name_space;
        mld_flood_forward_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled = value;
        mld_mroute_port_enabled.value_namespace = name_space;
        mld_mroute_port_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled = value;
        mld_route_guard_enabled.value_namespace = name_space;
        mld_route_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp-participating")
    {
        stp_participating = value;
        stp_participating.value_namespace = name_space;
        stp_participating.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured = value;
        bvi_configured.value_namespace = name_space;
        bvi_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up = value;
        is_bvi_up.value_namespace = name_space;
        is_bvi_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled = value;
        is_vni_enabled.value_namespace = name_space;
        is_vni_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled = value;
        is_evpn_enabled.value_namespace = name_space;
        is_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
        unknown_unicast_flooding_disabled.value_namespace = name_space;
        unknown_unicast_flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled = value;
        is_pbbevpn_enabled.value_namespace = name_space;
        is_pbbevpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning = value;
        is_swmac_learning.value_namespace = name_space;
        is_swmac_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label = value;
        is_evpn_flow_label.value_namespace = name_space;
        is_evpn_flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable = value;
        is_evpn_cw_disable.value_namespace = name_space;
        is_evpn_cw_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled = value;
        is_p2mp_pw_enabled.value_namespace = name_space;
        is_p2mp_pw_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled = value;
        is_igmp_snoop_enabled.value_namespace = name_space;
        is_igmp_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled = value;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace = name_space;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs.yfilter = yfilter;
    }
    if(value_path == "admin-disabled")
    {
        admin_disabled.yfilter = yfilter;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled.yfilter = yfilter;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type.yfilter = yfilter;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled.yfilter = yfilter;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted.yfilter = yfilter;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "stp-participating")
    {
        stp_participating.yfilter = yfilter;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured.yfilter = yfilter;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up.yfilter = yfilter;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled.yfilter = yfilter;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled.yfilter = yfilter;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled.yfilter = yfilter;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning.yfilter = yfilter;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label.yfilter = yfilter;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled.yfilter = yfilter;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "feature" || name == "mtu" || name == "mac-aging-time" || name == "mac-limit" || name == "number-of-macs" || name == "admin-disabled" || name == "flooding-disabled" || name == "flood-unknown-unicast-enabled" || name == "mac-limit-action" || name == "mac-limit-threshold" || name == "mac-learning-disabled" || name == "mac-port-down-flush-disabled" || name == "mac-limit-notification-type" || name == "is-mac-secure-enabled" || name == "is-mac-secure-logging-enabled" || name == "mac-secure-action" || name == "is-mac-secure-accept-shutdown" || name == "is-mac-secure-threshold-enabled" || name == "mac-aging-type" || name == "storm-control-unicast-enabled" || name == "storm-control-broadcast-enabled" || name == "storm-control-multicast-enabled" || name == "storm-control-unicast-rate-unit" || name == "storm-control-broadcast-rate-unit" || name == "storm-control-multicast-rate-unit" || name == "dhcp-enabled" || name == "dhcp-trusted" || name == "is-dai-enabled" || name == "is-dai-addr-validation-ipv4-enabled" || name == "is-dai-addr-validation-source-mac-enabled" || name == "is-dai-addr-validation-destination-mac-enabled" || name == "is-dai-logging-enabled" || name == "is-ipsg-enabled" || name == "is-ipsg-logging-enabled" || name == "is-vpls-flood-optimization-enabled" || name == "igmp-snoop-enabled" || name == "igmp-snoop-profile-enabled" || name == "igmp-flood-forward-enabled" || name == "igmp-mroute-port-enabled" || name == "igmp-route-guard-enabled" || name == "mld-snoop-enabled" || name == "mld-snoop-profile-enabled" || name == "mld-flood-forward-enabled" || name == "mld-mroute-port-enabled" || name == "mld-route-guard-enabled" || name == "stp-participating" || name == "bvi-configured" || name == "is-bvi-up" || name == "is-vni-enabled" || name == "is-evpn-enabled" || name == "unknown-unicast-flooding-disabled" || name == "is-pbbevpn-enabled" || name == "is-swmac-learning" || name == "is-evpn-flow-label" || name == "is-evpn-cw-disable" || name == "msti" || name == "is-p2mp-pw-enabled" || name == "is-igmp-snoop-enabled" || name == "nv-satellite-offload-ipv4-multicast-disabled")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Feature()
    :
    feature_type{YType::enumeration, "feature-type"}
        ,
    dhcp(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp>())
    , igmp(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Igmp>())
    , mld(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Mld>())
{
    dhcp->parent = this;
    igmp->parent = this;
    mld->parent = this;

    yang_name = "feature"; yang_parent_name = "operational-information"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::~Feature()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::has_data() const
{
    if (is_presence_container) return true;
    return feature_type.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (mld !=  nullptr && mld->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(feature_type.yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (mld !=  nullptr && mld->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (feature_type.is_set || is_set(feature_type.yfilter)) leaf_name_data.push_back(feature_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "mld")
    {
        if(mld == nullptr)
        {
            mld = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Mld>();
        }
        return mld;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(igmp != nullptr)
    {
        _children["igmp"] = igmp;
    }

    if(mld != nullptr)
    {
        _children["mld"] = mld;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "feature-type")
    {
        feature_type = value;
        feature_type.value_namespace = name_space;
        feature_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "feature-type")
    {
        feature_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "igmp" || name == "mld" || name == "feature-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::Dhcp()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "dhcp"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::~Dhcp()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::Igmp()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "igmp"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::~Igmp()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Mld::Mld()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "mld"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Mld::~Mld()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Mld::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Mld::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Mld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Mld::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Mld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Mld::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Mld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::BdPbbUnion()
    :
    pbb_type{YType::enumeration, "pbb-type"}
        ,
    edge(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Edge>())
    , core(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Core>())
{
    edge->parent = this;
    core->parent = this;

    yang_name = "bd-pbb-union"; yang_parent_name = "l2fib-bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::~BdPbbUnion()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::has_data() const
{
    if (is_presence_container) return true;
    return pbb_type.is_set
	|| (edge !=  nullptr && edge->has_data())
	|| (core !=  nullptr && core->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_type.yfilter)
	|| (edge !=  nullptr && edge->has_operation())
	|| (core !=  nullptr && core->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pbb-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_type.is_set || is_set(pbb_type.yfilter)) leaf_name_data.push_back(pbb_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "edge")
    {
        if(edge == nullptr)
        {
            edge = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Edge>();
        }
        return edge;
    }

    if(child_yang_name == "core")
    {
        if(core == nullptr)
        {
            core = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Core>();
        }
        return core;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(edge != nullptr)
    {
        _children["edge"] = edge;
    }

    if(core != nullptr)
    {
        _children["core"] = core;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-type")
    {
        pbb_type = value;
        pbb_type.value_namespace = name_space;
        pbb_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-type")
    {
        pbb_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "edge" || name == "core" || name == "pbb-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Edge::Edge()
    :
    i_sid{YType::uint32, "i-sid"},
    core_bd_name{YType::str, "core-bd-name"},
    mirp_lite_rx{YType::uint64, "mirp-lite-rx"},
    mirp_lite_tx{YType::uint64, "mirp-lite-tx"}
{

    yang_name = "edge"; yang_parent_name = "bd-pbb-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Edge::~Edge()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Edge::has_data() const
{
    if (is_presence_container) return true;
    return i_sid.is_set
	|| core_bd_name.is_set
	|| mirp_lite_rx.is_set
	|| mirp_lite_tx.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Edge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(i_sid.yfilter)
	|| ydk::is_set(core_bd_name.yfilter)
	|| ydk::is_set(mirp_lite_rx.yfilter)
	|| ydk::is_set(mirp_lite_tx.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Edge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (i_sid.is_set || is_set(i_sid.yfilter)) leaf_name_data.push_back(i_sid.get_name_leafdata());
    if (core_bd_name.is_set || is_set(core_bd_name.yfilter)) leaf_name_data.push_back(core_bd_name.get_name_leafdata());
    if (mirp_lite_rx.is_set || is_set(mirp_lite_rx.yfilter)) leaf_name_data.push_back(mirp_lite_rx.get_name_leafdata());
    if (mirp_lite_tx.is_set || is_set(mirp_lite_tx.yfilter)) leaf_name_data.push_back(mirp_lite_tx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Edge::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Edge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "i-sid")
    {
        i_sid = value;
        i_sid.value_namespace = name_space;
        i_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-bd-name")
    {
        core_bd_name = value;
        core_bd_name.value_namespace = name_space;
        core_bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirp-lite-rx")
    {
        mirp_lite_rx = value;
        mirp_lite_rx.value_namespace = name_space;
        mirp_lite_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirp-lite-tx")
    {
        mirp_lite_tx = value;
        mirp_lite_tx.value_namespace = name_space;
        mirp_lite_tx.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Edge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "i-sid")
    {
        i_sid.yfilter = yfilter;
    }
    if(value_path == "core-bd-name")
    {
        core_bd_name.yfilter = yfilter;
    }
    if(value_path == "mirp-lite-rx")
    {
        mirp_lite_rx.yfilter = yfilter;
    }
    if(value_path == "mirp-lite-tx")
    {
        mirp_lite_tx.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Edge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "i-sid" || name == "core-bd-name" || name == "mirp-lite-rx" || name == "mirp-lite-tx")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Core::Core()
    :
    nber_edge_bd{YType::uint32, "nber-edge-bd"}
{

    yang_name = "core"; yang_parent_name = "bd-pbb-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Core::~Core()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Core::has_data() const
{
    if (is_presence_container) return true;
    return nber_edge_bd.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Core::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nber_edge_bd.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Core::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Core::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nber_edge_bd.is_set || is_set(nber_edge_bd.yfilter)) leaf_name_data.push_back(nber_edge_bd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Core::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Core::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Core::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nber-edge-bd")
    {
        nber_edge_bd = value;
        nber_edge_bd.value_namespace = name_space;
        nber_edge_bd.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Core::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nber-edge-bd")
    {
        nber_edge_bd.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Core::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nber-edge-bd")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BviInfo::BviInfo()
    :
    bvi_ifh{YType::str, "bvi-ifh"},
    bvi_xid{YType::uint32, "bvi-xid"},
    bvi_name{YType::str, "bvi-name"},
    bvi_shg_id{YType::uint32, "bvi-shg-id"},
    irb_plat_data_len{YType::uint32, "irb-plat-data-len"},
    irb_plat_data{YType::str, "irb-plat-data"}
{

    yang_name = "bvi-info"; yang_parent_name = "l2fib-bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BviInfo::~BviInfo()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BviInfo::has_data() const
{
    if (is_presence_container) return true;
    return bvi_ifh.is_set
	|| bvi_xid.is_set
	|| bvi_name.is_set
	|| bvi_shg_id.is_set
	|| irb_plat_data_len.is_set
	|| irb_plat_data.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BviInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bvi_ifh.yfilter)
	|| ydk::is_set(bvi_xid.yfilter)
	|| ydk::is_set(bvi_name.yfilter)
	|| ydk::is_set(bvi_shg_id.yfilter)
	|| ydk::is_set(irb_plat_data_len.yfilter)
	|| ydk::is_set(irb_plat_data.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BviInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bvi-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BviInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bvi_ifh.is_set || is_set(bvi_ifh.yfilter)) leaf_name_data.push_back(bvi_ifh.get_name_leafdata());
    if (bvi_xid.is_set || is_set(bvi_xid.yfilter)) leaf_name_data.push_back(bvi_xid.get_name_leafdata());
    if (bvi_name.is_set || is_set(bvi_name.yfilter)) leaf_name_data.push_back(bvi_name.get_name_leafdata());
    if (bvi_shg_id.is_set || is_set(bvi_shg_id.yfilter)) leaf_name_data.push_back(bvi_shg_id.get_name_leafdata());
    if (irb_plat_data_len.is_set || is_set(irb_plat_data_len.yfilter)) leaf_name_data.push_back(irb_plat_data_len.get_name_leafdata());
    if (irb_plat_data.is_set || is_set(irb_plat_data.yfilter)) leaf_name_data.push_back(irb_plat_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BviInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BviInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BviInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bvi-ifh")
    {
        bvi_ifh = value;
        bvi_ifh.value_namespace = name_space;
        bvi_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-xid")
    {
        bvi_xid = value;
        bvi_xid.value_namespace = name_space;
        bvi_xid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-name")
    {
        bvi_name = value;
        bvi_name.value_namespace = name_space;
        bvi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-shg-id")
    {
        bvi_shg_id = value;
        bvi_shg_id.value_namespace = name_space;
        bvi_shg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "irb-plat-data-len")
    {
        irb_plat_data_len = value;
        irb_plat_data_len.value_namespace = name_space;
        irb_plat_data_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "irb-plat-data")
    {
        irb_plat_data = value;
        irb_plat_data.value_namespace = name_space;
        irb_plat_data.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BviInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bvi-ifh")
    {
        bvi_ifh.yfilter = yfilter;
    }
    if(value_path == "bvi-xid")
    {
        bvi_xid.yfilter = yfilter;
    }
    if(value_path == "bvi-name")
    {
        bvi_name.yfilter = yfilter;
    }
    if(value_path == "bvi-shg-id")
    {
        bvi_shg_id.yfilter = yfilter;
    }
    if(value_path == "irb-plat-data-len")
    {
        irb_plat_data_len.yfilter = yfilter;
    }
    if(value_path == "irb-plat-data")
    {
        irb_plat_data.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BviInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bvi-ifh" || name == "bvi-xid" || name == "bvi-name" || name == "bvi-shg-id" || name == "irb-plat-data-len" || name == "irb-plat-data")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::P2mppwInfo()
    :
    ptree_type{YType::enumeration, "ptree-type"},
    lsm_id{YType::uint32, "lsm-id"},
    p2mp_te_interface{YType::str, "p2mp-te-interface"},
    parent_nh_valid{YType::boolean, "parent-nh-valid"},
    parent_nh_bound{YType::boolean, "parent-nh-bound"},
    local_label{YType::uint32, "local-label"}
        ,
    parent_next_hop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop>())
{
    parent_next_hop->parent = this;

    yang_name = "p2mppw-info"; yang_parent_name = "l2fib-bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::~P2mppwInfo()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::has_data() const
{
    if (is_presence_container) return true;
    return ptree_type.is_set
	|| lsm_id.is_set
	|| p2mp_te_interface.is_set
	|| parent_nh_valid.is_set
	|| parent_nh_bound.is_set
	|| local_label.is_set
	|| (parent_next_hop !=  nullptr && parent_next_hop->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ptree_type.yfilter)
	|| ydk::is_set(lsm_id.yfilter)
	|| ydk::is_set(p2mp_te_interface.yfilter)
	|| ydk::is_set(parent_nh_valid.yfilter)
	|| ydk::is_set(parent_nh_bound.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| (parent_next_hop !=  nullptr && parent_next_hop->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mppw-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ptree_type.is_set || is_set(ptree_type.yfilter)) leaf_name_data.push_back(ptree_type.get_name_leafdata());
    if (lsm_id.is_set || is_set(lsm_id.yfilter)) leaf_name_data.push_back(lsm_id.get_name_leafdata());
    if (p2mp_te_interface.is_set || is_set(p2mp_te_interface.yfilter)) leaf_name_data.push_back(p2mp_te_interface.get_name_leafdata());
    if (parent_nh_valid.is_set || is_set(parent_nh_valid.yfilter)) leaf_name_data.push_back(parent_nh_valid.get_name_leafdata());
    if (parent_nh_bound.is_set || is_set(parent_nh_bound.yfilter)) leaf_name_data.push_back(parent_nh_bound.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parent-next-hop")
    {
        if(parent_next_hop == nullptr)
        {
            parent_next_hop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop>();
        }
        return parent_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(parent_next_hop != nullptr)
    {
        _children["parent-next-hop"] = parent_next_hop;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ptree-type")
    {
        ptree_type = value;
        ptree_type.value_namespace = name_space;
        ptree_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsm-id")
    {
        lsm_id = value;
        lsm_id.value_namespace = name_space;
        lsm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-te-interface")
    {
        p2mp_te_interface = value;
        p2mp_te_interface.value_namespace = name_space;
        p2mp_te_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-nh-valid")
    {
        parent_nh_valid = value;
        parent_nh_valid.value_namespace = name_space;
        parent_nh_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-nh-bound")
    {
        parent_nh_bound = value;
        parent_nh_bound.value_namespace = name_space;
        parent_nh_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ptree-type")
    {
        ptree_type.yfilter = yfilter;
    }
    if(value_path == "lsm-id")
    {
        lsm_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-te-interface")
    {
        p2mp_te_interface.yfilter = yfilter;
    }
    if(value_path == "parent-nh-valid")
    {
        parent_nh_valid.yfilter = yfilter;
    }
    if(value_path == "parent-nh-bound")
    {
        parent_nh_bound.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parent-next-hop" || name == "ptree-type" || name == "lsm-id" || name == "p2mp-te-interface" || name == "parent-nh-valid" || name == "parent-nh-bound" || name == "local-label")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::ParentNextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    children_count{YType::uint32, "children-count"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::Base>())
{
    base->parent = this;

    yang_name = "parent-next-hop"; yang_parent_name = "p2mppw-info"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::~ParentNextHop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| children_count.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "children-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "parent-next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummaries()
    :
    l2fib_mstp_summary(this, {})
{

    yang_name = "l2fib-mstp-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::~L2fibMstpSummaries()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_mstp_summary.len(); index++)
    {
        if(l2fib_mstp_summary[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mstp_summary.len(); index++)
    {
        if(l2fib_mstp_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mstp-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mstp-summary")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary>();
        ent_->parent = this;
        l2fib_mstp_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_mstp_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mstp-summary")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::L2fibMstpSummary()
    :
    parent_interface{YType::str, "parent-interface"},
    main_interface_type{YType::enumeration, "main-interface-type"},
    msti{YType::uint32, "msti"},
    parent_interface_xr{YType::str, "parent-interface-xr"},
    msti_xr{YType::uint32, "msti-xr"},
    state{YType::uint32, "state"},
    bridge_port_count{YType::uint32, "bridge-port-count"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::Base>())
{
    base->parent = this;

    yang_name = "l2fib-mstp-summary"; yang_parent_name = "l2fib-mstp-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::~L2fibMstpSummary()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::has_data() const
{
    if (is_presence_container) return true;
    return parent_interface.is_set
	|| main_interface_type.is_set
	|| msti.is_set
	|| parent_interface_xr.is_set
	|| msti_xr.is_set
	|| state.is_set
	|| bridge_port_count.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(parent_interface.yfilter)
	|| ydk::is_set(main_interface_type.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(parent_interface_xr.yfilter)
	|| ydk::is_set(msti_xr.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(bridge_port_count.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mstp-summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parent_interface.is_set || is_set(parent_interface.yfilter)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (main_interface_type.is_set || is_set(main_interface_type.yfilter)) leaf_name_data.push_back(main_interface_type.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (parent_interface_xr.is_set || is_set(parent_interface_xr.yfilter)) leaf_name_data.push_back(parent_interface_xr.get_name_leafdata());
    if (msti_xr.is_set || is_set(msti_xr.yfilter)) leaf_name_data.push_back(msti_xr.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (bridge_port_count.is_set || is_set(bridge_port_count.yfilter)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "parent-interface")
    {
        parent_interface = value;
        parent_interface.value_namespace = name_space;
        parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface-type")
    {
        main_interface_type = value;
        main_interface_type.value_namespace = name_space;
        main_interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-xr")
    {
        parent_interface_xr = value;
        parent_interface_xr.value_namespace = name_space;
        parent_interface_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-xr")
    {
        msti_xr = value;
        msti_xr.value_namespace = name_space;
        msti_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
        bridge_port_count.value_namespace = name_space;
        bridge_port_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "parent-interface")
    {
        parent_interface.yfilter = yfilter;
    }
    if(value_path == "main-interface-type")
    {
        main_interface_type.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "parent-interface-xr")
    {
        parent_interface_xr.yfilter = yfilter;
    }
    if(value_path == "msti-xr")
    {
        msti_xr.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "parent-interface" || name == "main-interface-type" || name == "msti" || name == "parent-interface-xr" || name == "msti-xr" || name == "state" || name == "bridge-port-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2fib-mstp-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::L2fibResourceAvailability()
    :
    overall_out_of_resource_mode{YType::uint32, "overall-out-of-resource-mode"},
    hardware_resource_mode_information{YType::str, "hardware-resource-mode-information"},
    hardware_resource_mode{YType::uint32, "hardware-resource-mode"}
        ,
    shm_resource(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::ShmResource>())
{
    shm_resource->parent = this;

    yang_name = "l2fib-resource-availability"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::~L2fibResourceAvailability()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : hardware_resource_mode.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return overall_out_of_resource_mode.is_set
	|| hardware_resource_mode_information.is_set
	|| (shm_resource !=  nullptr && shm_resource->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::has_operation() const
{
    for (auto const & leaf : hardware_resource_mode.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(overall_out_of_resource_mode.yfilter)
	|| ydk::is_set(hardware_resource_mode_information.yfilter)
	|| ydk::is_set(hardware_resource_mode.yfilter)
	|| (shm_resource !=  nullptr && shm_resource->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-resource-availability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overall_out_of_resource_mode.is_set || is_set(overall_out_of_resource_mode.yfilter)) leaf_name_data.push_back(overall_out_of_resource_mode.get_name_leafdata());
    if (hardware_resource_mode_information.is_set || is_set(hardware_resource_mode_information.yfilter)) leaf_name_data.push_back(hardware_resource_mode_information.get_name_leafdata());

    auto hardware_resource_mode_name_datas = hardware_resource_mode.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), hardware_resource_mode_name_datas.begin(), hardware_resource_mode_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shm-resource")
    {
        if(shm_resource == nullptr)
        {
            shm_resource = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::ShmResource>();
        }
        return shm_resource;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(shm_resource != nullptr)
    {
        _children["shm-resource"] = shm_resource;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "overall-out-of-resource-mode")
    {
        overall_out_of_resource_mode = value;
        overall_out_of_resource_mode.value_namespace = name_space;
        overall_out_of_resource_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-resource-mode-information")
    {
        hardware_resource_mode_information = value;
        hardware_resource_mode_information.value_namespace = name_space;
        hardware_resource_mode_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-resource-mode")
    {
        hardware_resource_mode.append(value);
    }
}

void L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "overall-out-of-resource-mode")
    {
        overall_out_of_resource_mode.yfilter = yfilter;
    }
    if(value_path == "hardware-resource-mode-information")
    {
        hardware_resource_mode_information.yfilter = yfilter;
    }
    if(value_path == "hardware-resource-mode")
    {
        hardware_resource_mode.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shm-resource" || name == "overall-out-of-resource-mode" || name == "hardware-resource-mode-information" || name == "hardware-resource-mode")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::ShmResource::ShmResource()
    :
    oout_of_resource_mode{YType::uint32, "oout-of-resource-mode"},
    maximum_available{YType::uint64, "maximum-available"},
    average_available{YType::uint64, "average-available"},
    average_utility{YType::uint64, "average-utility"}
{

    yang_name = "shm-resource"; yang_parent_name = "l2fib-resource-availability"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::ShmResource::~ShmResource()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::ShmResource::has_data() const
{
    if (is_presence_container) return true;
    return oout_of_resource_mode.is_set
	|| maximum_available.is_set
	|| average_available.is_set
	|| average_utility.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::ShmResource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oout_of_resource_mode.yfilter)
	|| ydk::is_set(maximum_available.yfilter)
	|| ydk::is_set(average_available.yfilter)
	|| ydk::is_set(average_utility.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::ShmResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shm-resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::ShmResource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oout_of_resource_mode.is_set || is_set(oout_of_resource_mode.yfilter)) leaf_name_data.push_back(oout_of_resource_mode.get_name_leafdata());
    if (maximum_available.is_set || is_set(maximum_available.yfilter)) leaf_name_data.push_back(maximum_available.get_name_leafdata());
    if (average_available.is_set || is_set(average_available.yfilter)) leaf_name_data.push_back(average_available.get_name_leafdata());
    if (average_utility.is_set || is_set(average_utility.yfilter)) leaf_name_data.push_back(average_utility.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::ShmResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::ShmResource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::ShmResource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oout-of-resource-mode")
    {
        oout_of_resource_mode = value;
        oout_of_resource_mode.value_namespace = name_space;
        oout_of_resource_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-available")
    {
        maximum_available = value;
        maximum_available.value_namespace = name_space;
        maximum_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-available")
    {
        average_available = value;
        average_available.value_namespace = name_space;
        average_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-utility")
    {
        average_utility = value;
        average_utility.value_namespace = name_space;
        average_utility.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::ShmResource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oout-of-resource-mode")
    {
        oout_of_resource_mode.yfilter = yfilter;
    }
    if(value_path == "maximum-available")
    {
        maximum_available.yfilter = yfilter;
    }
    if(value_path == "average-available")
    {
        average_available.yfilter = yfilter;
    }
    if(value_path == "average-utility")
    {
        average_utility.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::ShmResource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oout-of-resource-mode" || name == "maximum-available" || name == "average-available" || name == "average-utility")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgresses()
    :
    l2fibmac_hardware_egress(this, {})
{

    yang_name = "l2fibmac-hardware-egresses"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::~L2fibmacHardwareEgresses()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fibmac_hardware_egress.len(); index++)
    {
        if(l2fibmac_hardware_egress[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::has_operation() const
{
    for (std::size_t index=0; index<l2fibmac_hardware_egress.len(); index++)
    {
        if(l2fibmac_hardware_egress[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibmac-hardware-egresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fibmac-hardware-egress")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress>();
        ent_->parent = this;
        l2fibmac_hardware_egress.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fibmac_hardware_egress.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fibmac-hardware-egress")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::L2fibmacHardwareEgress()
    :
    address{YType::str, "address"},
    group_name{YType::str, "group-name"},
    name{YType::str, "name"},
    platform_is_hw_learn{YType::uint8, "platform-is-hw-learn"},
    node_id{YType::str, "node-id"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    bridge_id{YType::uint32, "bridge-id"},
    bmac_configured{YType::boolean, "bmac-configured"},
    vni_l3_flag{YType::boolean, "vni-l3-flag"},
    pbb_bmac{YType::str, "pbb-bmac"},
    l3_encapsulationvlan_id{YType::uint16, "l3-encapsulationvlan-id"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    peer_vtep_ip{YType::str, "peer-vtep-ip"},
    flag_extension{YType::uint16, "flag-extension"},
    vni{YType::uint32, "vni"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Base>())
    , segment(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment>())
    , evpn_ctx(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx>())
    , next_hop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop>())
{
    base->parent = this;
    segment->parent = this;
    evpn_ctx->parent = this;
    next_hop->parent = this;

    yang_name = "l2fibmac-hardware-egress"; yang_parent_name = "l2fibmac-hardware-egresses"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::~L2fibmacHardwareEgress()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| group_name.is_set
	|| name.is_set
	|| platform_is_hw_learn.is_set
	|| node_id.is_set
	|| bridge_domain_name.is_set
	|| bridge_id.is_set
	|| bmac_configured.is_set
	|| vni_l3_flag.is_set
	|| pbb_bmac.is_set
	|| l3_encapsulationvlan_id.is_set
	|| next_hop_valid.is_set
	|| peer_vtep_ip.is_set
	|| flag_extension.is_set
	|| vni.is_set
	|| (base !=  nullptr && base->has_data())
	|| (segment !=  nullptr && segment->has_data())
	|| (evpn_ctx !=  nullptr && evpn_ctx->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(platform_is_hw_learn.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(bmac_configured.yfilter)
	|| ydk::is_set(vni_l3_flag.yfilter)
	|| ydk::is_set(pbb_bmac.yfilter)
	|| ydk::is_set(l3_encapsulationvlan_id.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(peer_vtep_ip.yfilter)
	|| ydk::is_set(flag_extension.yfilter)
	|| ydk::is_set(vni.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (segment !=  nullptr && segment->has_operation())
	|| (evpn_ctx !=  nullptr && evpn_ctx->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibmac-hardware-egress";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (platform_is_hw_learn.is_set || is_set(platform_is_hw_learn.yfilter)) leaf_name_data.push_back(platform_is_hw_learn.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (bmac_configured.is_set || is_set(bmac_configured.yfilter)) leaf_name_data.push_back(bmac_configured.get_name_leafdata());
    if (vni_l3_flag.is_set || is_set(vni_l3_flag.yfilter)) leaf_name_data.push_back(vni_l3_flag.get_name_leafdata());
    if (pbb_bmac.is_set || is_set(pbb_bmac.yfilter)) leaf_name_data.push_back(pbb_bmac.get_name_leafdata());
    if (l3_encapsulationvlan_id.is_set || is_set(l3_encapsulationvlan_id.yfilter)) leaf_name_data.push_back(l3_encapsulationvlan_id.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (peer_vtep_ip.is_set || is_set(peer_vtep_ip.yfilter)) leaf_name_data.push_back(peer_vtep_ip.get_name_leafdata());
    if (flag_extension.is_set || is_set(flag_extension.yfilter)) leaf_name_data.push_back(flag_extension.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Base>();
        }
        return base;
    }

    if(child_yang_name == "segment")
    {
        if(segment == nullptr)
        {
            segment = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment>();
        }
        return segment;
    }

    if(child_yang_name == "evpn-ctx")
    {
        if(evpn_ctx == nullptr)
        {
            evpn_ctx = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx>();
        }
        return evpn_ctx;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(segment != nullptr)
    {
        _children["segment"] = segment;
    }

    if(evpn_ctx != nullptr)
    {
        _children["evpn-ctx"] = evpn_ctx;
    }

    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-is-hw-learn")
    {
        platform_is_hw_learn = value;
        platform_is_hw_learn.value_namespace = name_space;
        platform_is_hw_learn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmac-configured")
    {
        bmac_configured = value;
        bmac_configured.value_namespace = name_space;
        bmac_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-l3-flag")
    {
        vni_l3_flag = value;
        vni_l3_flag.value_namespace = name_space;
        vni_l3_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-bmac")
    {
        pbb_bmac = value;
        pbb_bmac.value_namespace = name_space;
        pbb_bmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3-encapsulationvlan-id")
    {
        l3_encapsulationvlan_id = value;
        l3_encapsulationvlan_id.value_namespace = name_space;
        l3_encapsulationvlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-vtep-ip")
    {
        peer_vtep_ip = value;
        peer_vtep_ip.value_namespace = name_space;
        peer_vtep_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-extension")
    {
        flag_extension = value;
        flag_extension.value_namespace = name_space;
        flag_extension.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "platform-is-hw-learn")
    {
        platform_is_hw_learn.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "bmac-configured")
    {
        bmac_configured.yfilter = yfilter;
    }
    if(value_path == "vni-l3-flag")
    {
        vni_l3_flag.yfilter = yfilter;
    }
    if(value_path == "pbb-bmac")
    {
        pbb_bmac.yfilter = yfilter;
    }
    if(value_path == "l3-encapsulationvlan-id")
    {
        l3_encapsulationvlan_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "peer-vtep-ip")
    {
        peer_vtep_ip.yfilter = yfilter;
    }
    if(value_path == "flag-extension")
    {
        flag_extension.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "segment" || name == "evpn-ctx" || name == "next-hop" || name == "address" || name == "group-name" || name == "name" || name == "platform-is-hw-learn" || name == "node-id" || name == "bridge-domain-name" || name == "bridge-id" || name == "bmac-configured" || name == "vni-l3-flag" || name == "pbb-bmac" || name == "l3-encapsulationvlan-id" || name == "next-hop-valid" || name == "peer-vtep-ip" || name == "flag-extension" || name == "vni")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2fibmac-hardware-egress"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Segment()
    :
    data_type{YType::enumeration, "data-type"}
        ,
    ac(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Ac>())
    , pbb(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pbb>())
    , vni(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Vni>())
    , evpn(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Evpn>())
    , pw(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pw>())
{
    ac->parent = this;
    pbb->parent = this;
    vni->parent = this;
    evpn->parent = this;
    pw->parent = this;

    yang_name = "segment"; yang_parent_name = "l2fibmac-hardware-egress"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::~Segment()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (vni !=  nullptr && vni->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (pw !=  nullptr && pw->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (vni !=  nullptr && vni->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (pw !=  nullptr && pw->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pbb>();
        }
        return pbb;
    }

    if(child_yang_name == "vni")
    {
        if(vni == nullptr)
        {
            vni = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Vni>();
        }
        return vni;
    }

    if(child_yang_name == "evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pw>();
        }
        return pw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ac != nullptr)
    {
        _children["ac"] = ac;
    }

    if(pbb != nullptr)
    {
        _children["pbb"] = pbb;
    }

    if(vni != nullptr)
    {
        _children["vni"] = vni;
    }

    if(evpn != nullptr)
    {
        _children["evpn"] = evpn;
    }

    if(pw != nullptr)
    {
        _children["pw"] = pw;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "pbb" || name == "vni" || name == "evpn" || name == "pw" || name == "data-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Ac::Ac()
    :
    interface_name{YType::str, "interface-name"},
    vsp_vlan{YType::uint16, "vsp-vlan"}
{

    yang_name = "ac"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Ac::~Ac()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Ac::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| vsp_vlan.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(vsp_vlan.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (vsp_vlan.is_set || is_set(vsp_vlan.yfilter)) leaf_name_data.push_back(vsp_vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vsp-vlan")
    {
        vsp_vlan = value;
        vsp_vlan.value_namespace = name_space;
        vsp_vlan.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "vsp-vlan")
    {
        vsp_vlan.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "vsp-vlan")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pbb::Pbb()
    :
    xcid{YType::uint32, "xcid"}
{

    yang_name = "pbb"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pbb::~Pbb()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pbb::has_data() const
{
    if (is_presence_container) return true;
    return xcid.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pbb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pbb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pbb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xcid")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Vni::Vni()
    :
    xcid{YType::uint32, "xcid"},
    parent_if{YType::str, "parent-if"}
{

    yang_name = "vni"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Vni::~Vni()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Vni::has_data() const
{
    if (is_presence_container) return true;
    return xcid.is_set
	|| parent_if.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Vni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(parent_if.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Vni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (parent_if.is_set || is_set(parent_if.yfilter)) leaf_name_data.push_back(parent_if.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Vni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Vni::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Vni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-if")
    {
        parent_if = value;
        parent_if.value_namespace = name_space;
        parent_if.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Vni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "parent-if")
    {
        parent_if.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Vni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xcid" || name == "parent-if")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Evpn::Evpn()
    :
    xcid{YType::uint32, "xcid"}
{

    yang_name = "evpn"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Evpn::~Evpn()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Evpn::has_data() const
{
    if (is_presence_container) return true;
    return xcid.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Evpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xcid")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pw::Pw()
    :
    pw_id{YType::uint64, "pw-id"},
    next_hop_address{YType::str, "next-hop-address"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"}
{

    yang_name = "pw"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pw::~Pw()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pw::has_data() const
{
    if (is_presence_container) return true;
    return pw_id.is_set
	|| next_hop_address.is_set
	|| pseudo_wire_id_type.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(pseudo_wire_id_type.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
        pseudo_wire_id_type.value_namespace = name_space;
        pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-id" || name == "next-hop-address" || name == "pseudo-wire-id-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::EvpnCtx()
    :
    data_type{YType::enumeration, "data-type"},
    esi_id{YType::uint16, "esi-id"},
    local_label{YType::uint32, "local-label"},
    bp_ifh{YType::str, "bp-ifh"}
        ,
    mcast_ole(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::McastOle>())
{
    mcast_ole->parent = this;

    yang_name = "evpn-ctx"; yang_parent_name = "l2fibmac-hardware-egress"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::~EvpnCtx()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| esi_id.is_set
	|| local_label.is_set
	|| bp_ifh.is_set
	|| (mcast_ole !=  nullptr && mcast_ole->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(esi_id.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(bp_ifh.yfilter)
	|| (mcast_ole !=  nullptr && mcast_ole->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-ctx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (esi_id.is_set || is_set(esi_id.yfilter)) leaf_name_data.push_back(esi_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (bp_ifh.is_set || is_set(bp_ifh.yfilter)) leaf_name_data.push_back(bp_ifh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcast-ole")
    {
        if(mcast_ole == nullptr)
        {
            mcast_ole = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::McastOle>();
        }
        return mcast_ole;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mcast_ole != nullptr)
    {
        _children["mcast-ole"] = mcast_ole;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-id")
    {
        esi_id = value;
        esi_id.value_namespace = name_space;
        esi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bp-ifh")
    {
        bp_ifh = value;
        bp_ifh.value_namespace = name_space;
        bp_ifh.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "esi-id")
    {
        esi_id.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "bp-ifh")
    {
        bp_ifh.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-ole" || name == "data-type" || name == "esi-id" || name == "local-label" || name == "bp-ifh")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::McastOle::McastOle()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop_ipv6_addr{YType::str, "next-hop-ipv6-addr"},
    mcast_label{YType::uint32, "mcast-label"},
    mcast_encapsulation{YType::uint32, "mcast-encapsulation"}
{

    yang_name = "mcast-ole"; yang_parent_name = "evpn-ctx"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::McastOle::~McastOle()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::McastOle::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop_ipv6_addr.is_set
	|| mcast_label.is_set
	|| mcast_encapsulation.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::McastOle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop_ipv6_addr.yfilter)
	|| ydk::is_set(mcast_label.yfilter)
	|| ydk::is_set(mcast_encapsulation.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::McastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-ole";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::McastOle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop_ipv6_addr.is_set || is_set(next_hop_ipv6_addr.yfilter)) leaf_name_data.push_back(next_hop_ipv6_addr.get_name_leafdata());
    if (mcast_label.is_set || is_set(mcast_label.yfilter)) leaf_name_data.push_back(mcast_label.get_name_leafdata());
    if (mcast_encapsulation.is_set || is_set(mcast_encapsulation.yfilter)) leaf_name_data.push_back(mcast_encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::McastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::McastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::McastOle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr = value;
        next_hop_ipv6_addr.value_namespace = name_space;
        next_hop_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-label")
    {
        mcast_label = value;
        mcast_label.value_namespace = name_space;
        mcast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-encapsulation")
    {
        mcast_encapsulation = value;
        mcast_encapsulation.value_namespace = name_space;
        mcast_encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::McastOle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "mcast-label")
    {
        mcast_label.yfilter = yfilter;
    }
    if(value_path == "mcast-encapsulation")
    {
        mcast_encapsulation.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::McastOle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop-ipv6-addr" || name == "mcast-label" || name == "mcast-encapsulation")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::NextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    children_count{YType::uint32, "children-count"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "l2fibmac-hardware-egress"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::~NextHop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| children_count.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "children-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2s()
    :
    l2fibx_con_l2tpv2(this, {})
{

    yang_name = "l2fibx-con-l2tpv2s"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::~L2fibxConL2tpv2s()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fibx_con_l2tpv2.len(); index++)
    {
        if(l2fibx_con_l2tpv2[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::has_operation() const
{
    for (std::size_t index=0; index<l2fibx_con_l2tpv2.len(); index++)
    {
        if(l2fibx_con_l2tpv2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibx-con-l2tpv2s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fibx-con-l2tpv2")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2>();
        ent_->parent = this;
        l2fibx_con_l2tpv2.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fibx_con_l2tpv2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fibx-con-l2tpv2")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::L2fibxConL2tpv2()
    :
    interface_name{YType::str, "interface-name"},
    vsp_vlan_id{YType::uint32, "vsp-vlan-id"},
    xcon_name{YType::str, "xcon-name"},
    bound{YType::boolean, "bound"},
    switching_type{YType::enumeration, "switching-type"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Base>())
    , segment1(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1>())
    , segment2(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2>())
{
    base->parent = this;
    segment1->parent = this;
    segment2->parent = this;

    yang_name = "l2fibx-con-l2tpv2"; yang_parent_name = "l2fibx-con-l2tpv2s"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::~L2fibxConL2tpv2()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| vsp_vlan_id.is_set
	|| xcon_name.is_set
	|| bound.is_set
	|| switching_type.is_set
	|| (base !=  nullptr && base->has_data())
	|| (segment1 !=  nullptr && segment1->has_data())
	|| (segment2 !=  nullptr && segment2->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(vsp_vlan_id.yfilter)
	|| ydk::is_set(xcon_name.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(switching_type.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (segment1 !=  nullptr && segment1->has_operation())
	|| (segment2 !=  nullptr && segment2->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibx-con-l2tpv2";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (vsp_vlan_id.is_set || is_set(vsp_vlan_id.yfilter)) leaf_name_data.push_back(vsp_vlan_id.get_name_leafdata());
    if (xcon_name.is_set || is_set(xcon_name.yfilter)) leaf_name_data.push_back(xcon_name.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (switching_type.is_set || is_set(switching_type.yfilter)) leaf_name_data.push_back(switching_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Base>();
        }
        return base;
    }

    if(child_yang_name == "segment1")
    {
        if(segment1 == nullptr)
        {
            segment1 = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1>();
        }
        return segment1;
    }

    if(child_yang_name == "segment2")
    {
        if(segment2 == nullptr)
        {
            segment2 = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2>();
        }
        return segment2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(segment1 != nullptr)
    {
        _children["segment1"] = segment1;
    }

    if(segment2 != nullptr)
    {
        _children["segment2"] = segment2;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vsp-vlan-id")
    {
        vsp_vlan_id = value;
        vsp_vlan_id.value_namespace = name_space;
        vsp_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcon-name")
    {
        xcon_name = value;
        xcon_name.value_namespace = name_space;
        xcon_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-type")
    {
        switching_type = value;
        switching_type.value_namespace = name_space;
        switching_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "vsp-vlan-id")
    {
        vsp_vlan_id.yfilter = yfilter;
    }
    if(value_path == "xcon-name")
    {
        xcon_name.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "switching-type")
    {
        switching_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "segment1" || name == "segment2" || name == "interface-name" || name == "vsp-vlan-id" || name == "xcon-name" || name == "bound" || name == "switching-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2fibx-con-l2tpv2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Segment1()
    :
    data_type{YType::enumeration, "data-type"}
        ,
    ac(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac>())
    , pbb(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb>())
    , vni(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni>())
    , evpn(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn>())
    , monitor_session(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession>())
    , pw(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw>())
{
    ac->parent = this;
    pbb->parent = this;
    vni->parent = this;
    evpn->parent = this;
    monitor_session->parent = this;
    pw->parent = this;

    yang_name = "segment1"; yang_parent_name = "l2fibx-con-l2tpv2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::~Segment1()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (vni !=  nullptr && vni->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (monitor_session !=  nullptr && monitor_session->has_data())
	|| (pw !=  nullptr && pw->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (vni !=  nullptr && vni->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (monitor_session !=  nullptr && monitor_session->has_operation())
	|| (pw !=  nullptr && pw->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb>();
        }
        return pbb;
    }

    if(child_yang_name == "vni")
    {
        if(vni == nullptr)
        {
            vni = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni>();
        }
        return vni;
    }

    if(child_yang_name == "evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "monitor-session")
    {
        if(monitor_session == nullptr)
        {
            monitor_session = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession>();
        }
        return monitor_session;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw>();
        }
        return pw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ac != nullptr)
    {
        _children["ac"] = ac;
    }

    if(pbb != nullptr)
    {
        _children["pbb"] = pbb;
    }

    if(vni != nullptr)
    {
        _children["vni"] = vni;
    }

    if(evpn != nullptr)
    {
        _children["evpn"] = evpn;
    }

    if(monitor_session != nullptr)
    {
        _children["monitor-session"] = monitor_session;
    }

    if(pw != nullptr)
    {
        _children["pw"] = pw;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "pbb" || name == "vni" || name == "evpn" || name == "monitor-session" || name == "pw" || name == "data-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::Ac()
    :
    interface_name{YType::str, "interface-name"},
    sub_interface_handle{YType::str, "sub-interface-handle"},
    attachment_circuit_id{YType::uint32, "attachment-circuit-id"},
    attachment_circuit_mtu{YType::uint16, "attachment-circuit-mtu"},
    actype{YType::uint8, "actype"},
    inter_working_mode{YType::uint8, "inter-working-mode"},
    adjacency_valid{YType::boolean, "adjacency-valid"},
    adjacency_address{YType::str, "adjacency-address"},
    bound{YType::boolean, "bound"},
    ip_inter_working_mac{YType::str, "ip-inter-working-mac"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"},
    fxc_next_hop_valid{YType::boolean, "fxc-next-hop-valid"},
    vlan_id_count{YType::uint8, "vlan-id-count"},
    first_vlan_id{YType::uint16, "first-vlan-id"},
    second_vlan_id{YType::uint16, "second-vlan-id"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::Base>())
    , fxc_next_hop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop>())
{
    base->parent = this;
    fxc_next_hop->parent = this;

    yang_name = "ac"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::~Ac()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| sub_interface_handle.is_set
	|| attachment_circuit_id.is_set
	|| attachment_circuit_mtu.is_set
	|| actype.is_set
	|| inter_working_mode.is_set
	|| adjacency_valid.is_set
	|| adjacency_address.is_set
	|| bound.is_set
	|| ip_inter_working_mac.is_set
	|| redundancy_group_id.is_set
	|| redundancy_object_id.is_set
	|| evpn_internal_label.is_set
	|| fxc_next_hop_valid.is_set
	|| vlan_id_count.is_set
	|| first_vlan_id.is_set
	|| second_vlan_id.is_set
	|| (base !=  nullptr && base->has_data())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(sub_interface_handle.yfilter)
	|| ydk::is_set(attachment_circuit_id.yfilter)
	|| ydk::is_set(attachment_circuit_mtu.yfilter)
	|| ydk::is_set(actype.yfilter)
	|| ydk::is_set(inter_working_mode.yfilter)
	|| ydk::is_set(adjacency_valid.yfilter)
	|| ydk::is_set(adjacency_address.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(ip_inter_working_mac.yfilter)
	|| ydk::is_set(redundancy_group_id.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter)
	|| ydk::is_set(evpn_internal_label.yfilter)
	|| ydk::is_set(fxc_next_hop_valid.yfilter)
	|| ydk::is_set(vlan_id_count.yfilter)
	|| ydk::is_set(first_vlan_id.yfilter)
	|| ydk::is_set(second_vlan_id.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sub_interface_handle.is_set || is_set(sub_interface_handle.yfilter)) leaf_name_data.push_back(sub_interface_handle.get_name_leafdata());
    if (attachment_circuit_id.is_set || is_set(attachment_circuit_id.yfilter)) leaf_name_data.push_back(attachment_circuit_id.get_name_leafdata());
    if (attachment_circuit_mtu.is_set || is_set(attachment_circuit_mtu.yfilter)) leaf_name_data.push_back(attachment_circuit_mtu.get_name_leafdata());
    if (actype.is_set || is_set(actype.yfilter)) leaf_name_data.push_back(actype.get_name_leafdata());
    if (inter_working_mode.is_set || is_set(inter_working_mode.yfilter)) leaf_name_data.push_back(inter_working_mode.get_name_leafdata());
    if (adjacency_valid.is_set || is_set(adjacency_valid.yfilter)) leaf_name_data.push_back(adjacency_valid.get_name_leafdata());
    if (adjacency_address.is_set || is_set(adjacency_address.yfilter)) leaf_name_data.push_back(adjacency_address.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (ip_inter_working_mac.is_set || is_set(ip_inter_working_mac.yfilter)) leaf_name_data.push_back(ip_inter_working_mac.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.yfilter)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.yfilter)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());
    if (fxc_next_hop_valid.is_set || is_set(fxc_next_hop_valid.yfilter)) leaf_name_data.push_back(fxc_next_hop_valid.get_name_leafdata());
    if (vlan_id_count.is_set || is_set(vlan_id_count.yfilter)) leaf_name_data.push_back(vlan_id_count.get_name_leafdata());
    if (first_vlan_id.is_set || is_set(first_vlan_id.yfilter)) leaf_name_data.push_back(first_vlan_id.get_name_leafdata());
    if (second_vlan_id.is_set || is_set(second_vlan_id.yfilter)) leaf_name_data.push_back(second_vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::Base>();
        }
        return base;
    }

    if(child_yang_name == "fxc-next-hop")
    {
        if(fxc_next_hop == nullptr)
        {
            fxc_next_hop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop>();
        }
        return fxc_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(fxc_next_hop != nullptr)
    {
        _children["fxc-next-hop"] = fxc_next_hop;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle = value;
        sub_interface_handle.value_namespace = name_space;
        sub_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id = value;
        attachment_circuit_id.value_namespace = name_space;
        attachment_circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu = value;
        attachment_circuit_mtu.value_namespace = name_space;
        attachment_circuit_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actype")
    {
        actype = value;
        actype.value_namespace = name_space;
        actype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode = value;
        inter_working_mode.value_namespace = name_space;
        inter_working_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid = value;
        adjacency_valid.value_namespace = name_space;
        adjacency_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address = value;
        adjacency_address.value_namespace = name_space;
        adjacency_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac = value;
        ip_inter_working_mac.value_namespace = name_space;
        ip_inter_working_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
        redundancy_group_id.value_namespace = name_space;
        redundancy_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
        evpn_internal_label.value_namespace = name_space;
        evpn_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid = value;
        fxc_next_hop_valid.value_namespace = name_space;
        fxc_next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id-count")
    {
        vlan_id_count = value;
        vlan_id_count.value_namespace = name_space;
        vlan_id_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-vlan-id")
    {
        first_vlan_id = value;
        first_vlan_id.value_namespace = name_space;
        first_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-vlan-id")
    {
        second_vlan_id = value;
        second_vlan_id.value_namespace = name_space;
        second_vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu.yfilter = yfilter;
    }
    if(value_path == "actype")
    {
        actype.yfilter = yfilter;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode.yfilter = yfilter;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid.yfilter = yfilter;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label.yfilter = yfilter;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "vlan-id-count")
    {
        vlan_id_count.yfilter = yfilter;
    }
    if(value_path == "first-vlan-id")
    {
        first_vlan_id.yfilter = yfilter;
    }
    if(value_path == "second-vlan-id")
    {
        second_vlan_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "fxc-next-hop" || name == "interface-name" || name == "sub-interface-handle" || name == "attachment-circuit-id" || name == "attachment-circuit-mtu" || name == "actype" || name == "inter-working-mode" || name == "adjacency-valid" || name == "adjacency-address" || name == "bound" || name == "ip-inter-working-mac" || name == "redundancy-group-id" || name == "redundancy-object-id" || name == "evpn-internal-label" || name == "fxc-next-hop-valid" || name == "vlan-id-count" || name == "first-vlan-id" || name == "second-vlan-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::Base::Base()
{

    yang_name = "base"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::FxcNextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    children_count{YType::uint32, "children-count"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::Base>())
{
    base->parent = this;

    yang_name = "fxc-next-hop"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::~FxcNextHop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| children_count.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxc-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "children-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "fxc-next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::Pbb()
    :
    bound{YType::boolean, "bound"},
    forward_class{YType::uint8, "forward-class"},
    core_pbb_evpn_enabled{YType::boolean, "core-pbb-evpn-enabled"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::Base>())
    , pbb_union(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion>())
{
    base->parent = this;
    pbb_union->parent = this;

    yang_name = "pbb"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::~Pbb()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::has_data() const
{
    if (is_presence_container) return true;
    return bound.is_set
	|| forward_class.is_set
	|| core_pbb_evpn_enabled.is_set
	|| (base !=  nullptr && base->has_data())
	|| (pbb_union !=  nullptr && pbb_union->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(core_pbb_evpn_enabled.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (pbb_union !=  nullptr && pbb_union->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (core_pbb_evpn_enabled.is_set || is_set(core_pbb_evpn_enabled.yfilter)) leaf_name_data.push_back(core_pbb_evpn_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::Base>();
        }
        return base;
    }

    if(child_yang_name == "pbb-union")
    {
        if(pbb_union == nullptr)
        {
            pbb_union = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion>();
        }
        return pbb_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(pbb_union != nullptr)
    {
        _children["pbb-union"] = pbb_union;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-pbb-evpn-enabled")
    {
        core_pbb_evpn_enabled = value;
        core_pbb_evpn_enabled.value_namespace = name_space;
        core_pbb_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "core-pbb-evpn-enabled")
    {
        core_pbb_evpn_enabled.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "pbb-union" || name == "bound" || name == "forward-class" || name == "core-pbb-evpn-enabled")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::Base::Base()
{

    yang_name = "base"; yang_parent_name = "pbb"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::PbbUnion()
    :
    pbb_type{YType::enumeration, "pbb-type"}
        ,
    edge(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Edge>())
    , core(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Core>())
{
    edge->parent = this;
    core->parent = this;

    yang_name = "pbb-union"; yang_parent_name = "pbb"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::~PbbUnion()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::has_data() const
{
    if (is_presence_container) return true;
    return pbb_type.is_set
	|| (edge !=  nullptr && edge->has_data())
	|| (core !=  nullptr && core->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_type.yfilter)
	|| (edge !=  nullptr && edge->has_operation())
	|| (core !=  nullptr && core->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_type.is_set || is_set(pbb_type.yfilter)) leaf_name_data.push_back(pbb_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "edge")
    {
        if(edge == nullptr)
        {
            edge = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Edge>();
        }
        return edge;
    }

    if(child_yang_name == "core")
    {
        if(core == nullptr)
        {
            core = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Core>();
        }
        return core;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(edge != nullptr)
    {
        _children["edge"] = edge;
    }

    if(core != nullptr)
    {
        _children["core"] = core;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-type")
    {
        pbb_type = value;
        pbb_type.value_namespace = name_space;
        pbb_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-type")
    {
        pbb_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "edge" || name == "core" || name == "pbb-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Edge::Edge()
    :
    mac_configured{YType::boolean, "mac-configured"},
    mac{YType::str, "mac"}
{

    yang_name = "edge"; yang_parent_name = "pbb-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Edge::~Edge()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Edge::has_data() const
{
    if (is_presence_container) return true;
    return mac_configured.is_set
	|| mac.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Edge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_configured.yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Edge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_configured.is_set || is_set(mac_configured.yfilter)) leaf_name_data.push_back(mac_configured.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Edge::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Edge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-configured")
    {
        mac_configured = value;
        mac_configured.value_namespace = name_space;
        mac_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Edge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-configured")
    {
        mac_configured.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Edge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-configured" || name == "mac")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Core::Core()
    :
    vlan_id{YType::uint32, "vlan-id"}
{

    yang_name = "core"; yang_parent_name = "pbb-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Core::~Core()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Core::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Core::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Core::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Core::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Core::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Core::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Core::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Core::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Core::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::Vni()
    :
    srcip{YType::str, "srcip"},
    mcastip{YType::str, "mcastip"},
    bound{YType::boolean, "bound"},
    parent_if{YType::str, "parent-if"},
    encap{YType::uint32, "encap"},
    udp_port{YType::uint32, "udp-port"},
    source_vtep_if{YType::str, "source-vtep-if"},
    any_cast_ip{YType::str, "any-cast-ip"},
    anycast_mcast_ip{YType::str, "anycast-mcast-ip"},
    ingress_replication{YType::boolean, "ingress-replication"},
    vx_lan_mode{YType::uint32, "vx-lan-mode"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::Base>())
{
    base->parent = this;

    yang_name = "vni"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::~Vni()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::has_data() const
{
    if (is_presence_container) return true;
    return srcip.is_set
	|| mcastip.is_set
	|| bound.is_set
	|| parent_if.is_set
	|| encap.is_set
	|| udp_port.is_set
	|| source_vtep_if.is_set
	|| any_cast_ip.is_set
	|| anycast_mcast_ip.is_set
	|| ingress_replication.is_set
	|| vx_lan_mode.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(mcastip.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(parent_if.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(udp_port.yfilter)
	|| ydk::is_set(source_vtep_if.yfilter)
	|| ydk::is_set(any_cast_ip.yfilter)
	|| ydk::is_set(anycast_mcast_ip.yfilter)
	|| ydk::is_set(ingress_replication.yfilter)
	|| ydk::is_set(vx_lan_mode.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (mcastip.is_set || is_set(mcastip.yfilter)) leaf_name_data.push_back(mcastip.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (parent_if.is_set || is_set(parent_if.yfilter)) leaf_name_data.push_back(parent_if.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.yfilter)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (source_vtep_if.is_set || is_set(source_vtep_if.yfilter)) leaf_name_data.push_back(source_vtep_if.get_name_leafdata());
    if (any_cast_ip.is_set || is_set(any_cast_ip.yfilter)) leaf_name_data.push_back(any_cast_ip.get_name_leafdata());
    if (anycast_mcast_ip.is_set || is_set(anycast_mcast_ip.yfilter)) leaf_name_data.push_back(anycast_mcast_ip.get_name_leafdata());
    if (ingress_replication.is_set || is_set(ingress_replication.yfilter)) leaf_name_data.push_back(ingress_replication.get_name_leafdata());
    if (vx_lan_mode.is_set || is_set(vx_lan_mode.yfilter)) leaf_name_data.push_back(vx_lan_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcip")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastip")
    {
        mcastip = value;
        mcastip.value_namespace = name_space;
        mcastip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-if")
    {
        parent_if = value;
        parent_if.value_namespace = name_space;
        parent_if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
        udp_port.value_namespace = name_space;
        udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-vtep-if")
    {
        source_vtep_if = value;
        source_vtep_if.value_namespace = name_space;
        source_vtep_if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any-cast-ip")
    {
        any_cast_ip = value;
        any_cast_ip.value_namespace = name_space;
        any_cast_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-mcast-ip")
    {
        anycast_mcast_ip = value;
        anycast_mcast_ip.value_namespace = name_space;
        anycast_mcast_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-replication")
    {
        ingress_replication = value;
        ingress_replication.value_namespace = name_space;
        ingress_replication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vx-lan-mode")
    {
        vx_lan_mode = value;
        vx_lan_mode.value_namespace = name_space;
        vx_lan_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcip")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "mcastip")
    {
        mcastip.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "parent-if")
    {
        parent_if.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "udp-port")
    {
        udp_port.yfilter = yfilter;
    }
    if(value_path == "source-vtep-if")
    {
        source_vtep_if.yfilter = yfilter;
    }
    if(value_path == "any-cast-ip")
    {
        any_cast_ip.yfilter = yfilter;
    }
    if(value_path == "anycast-mcast-ip")
    {
        anycast_mcast_ip.yfilter = yfilter;
    }
    if(value_path == "ingress-replication")
    {
        ingress_replication.yfilter = yfilter;
    }
    if(value_path == "vx-lan-mode")
    {
        vx_lan_mode.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "srcip" || name == "mcastip" || name == "bound" || name == "parent-if" || name == "encap" || name == "udp-port" || name == "source-vtep-if" || name == "any-cast-ip" || name == "anycast-mcast-ip" || name == "ingress-replication" || name == "vx-lan-mode")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::Base::Base()
{

    yang_name = "base"; yang_parent_name = "vni"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::Evpn()
    :
    bound{YType::boolean, "bound"},
    evi{YType::uint32, "evi"},
    forward_class{YType::uint8, "forward-class"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::Base>())
{
    base->parent = this;

    yang_name = "evpn"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::~Evpn()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::has_data() const
{
    if (is_presence_container) return true;
    return bound.is_set
	|| evi.is_set
	|| forward_class.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "bound" || name == "evi" || name == "forward-class")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::Base::Base()
{

    yang_name = "base"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::MonitorSession()
    :
    xcid{YType::uint32, "xcid"},
    session_name{YType::str, "session-name"},
    hardware_information{YType::str, "hardware-information"},
    bound{YType::boolean, "bound"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::Base>())
{
    base->parent = this;

    yang_name = "monitor-session"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::~MonitorSession()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::has_data() const
{
    if (is_presence_container) return true;
    return xcid.is_set
	|| session_name.is_set
	|| hardware_information.is_set
	|| bound.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "xcid" || name == "session-name" || name == "hardware-information" || name == "bound")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::Base::Base()
{

    yang_name = "base"; yang_parent_name = "monitor-session"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::Pw()
    :
    pw_id{YType::uint64, "pw-id"},
    signal_capability_flags{YType::uint32, "signal-capability-flags"},
    context{YType::uint16, "context"},
    sequence_resync_threshold{YType::uint16, "sequence-resync-threshold"},
    bound{YType::boolean, "bound"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    backup_configured{YType::boolean, "backup-configured"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    active{YType::boolean, "active"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_load_balance_type{YType::enumeration, "pw-load-balance-type"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    grouping_supported{YType::boolean, "grouping-supported"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    global_id{YType::uint32, "global-id"},
    ac_id{YType::uint32, "ac-id"},
    forward_class{YType::uint8, "forward-class"},
    next_hop_address{YType::str, "next-hop-address"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::Base>())
    , next_hop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop>())
    , pseudo_wire_union(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion>())
    , backup_pseudo_wire(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire>())
{
    base->parent = this;
    next_hop->parent = this;
    pseudo_wire_union->parent = this;
    backup_pseudo_wire->parent = this;

    yang_name = "pw"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::~Pw()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::has_data() const
{
    if (is_presence_container) return true;
    return pw_id.is_set
	|| signal_capability_flags.is_set
	|| context.is_set
	|| sequence_resync_threshold.is_set
	|| bound.is_set
	|| next_hop_valid.is_set
	|| backup_configured.is_set
	|| redundancy_role.is_set
	|| active.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_load_balance_type.is_set
	|| pw_flow_label_tx.is_set
	|| grouping_supported.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| global_id.is_set
	|| ac_id.is_set
	|| forward_class.is_set
	|| next_hop_address.is_set
	|| (base !=  nullptr && base->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_data())
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(signal_capability_flags.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(sequence_resync_threshold.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(backup_configured.yfilter)
	|| ydk::is_set(redundancy_role.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(pseudo_wire_id_type.yfilter)
	|| ydk::is_set(pw_load_balance_type.yfilter)
	|| ydk::is_set(pw_flow_label_tx.yfilter)
	|| ydk::is_set(grouping_supported.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_state.yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(ac_id.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_operation())
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (signal_capability_flags.is_set || is_set(signal_capability_flags.yfilter)) leaf_name_data.push_back(signal_capability_flags.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (sequence_resync_threshold.is_set || is_set(sequence_resync_threshold.yfilter)) leaf_name_data.push_back(sequence_resync_threshold.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (backup_configured.is_set || is_set(backup_configured.yfilter)) leaf_name_data.push_back(backup_configured.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.yfilter)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_load_balance_type.is_set || is_set(pw_load_balance_type.yfilter)) leaf_name_data.push_back(pw_load_balance_type.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.yfilter)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.yfilter)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.yfilter)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (ac_id.is_set || is_set(ac_id.yfilter)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::Base>();
        }
        return base;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "pseudo-wire-union")
    {
        if(pseudo_wire_union == nullptr)
        {
            pseudo_wire_union = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion>();
        }
        return pseudo_wire_union;
    }

    if(child_yang_name == "backup-pseudo-wire")
    {
        if(backup_pseudo_wire == nullptr)
        {
            backup_pseudo_wire = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire>();
        }
        return backup_pseudo_wire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(pseudo_wire_union != nullptr)
    {
        _children["pseudo-wire-union"] = pseudo_wire_union;
    }

    if(backup_pseudo_wire != nullptr)
    {
        _children["backup-pseudo-wire"] = backup_pseudo_wire;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags = value;
        signal_capability_flags.value_namespace = name_space;
        signal_capability_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold = value;
        sequence_resync_threshold.value_namespace = name_space;
        sequence_resync_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-configured")
    {
        backup_configured = value;
        backup_configured.value_namespace = name_space;
        backup_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
        redundancy_role.value_namespace = name_space;
        redundancy_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
        pseudo_wire_id_type.value_namespace = name_space;
        pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type = value;
        pw_load_balance_type.value_namespace = name_space;
        pw_load_balance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
        pw_flow_label_tx.value_namespace = name_space;
        pw_flow_label_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
        grouping_supported.value_namespace = name_space;
        grouping_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-state")
    {
        group_state = value;
        group_state.value_namespace = name_space;
        group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-id")
    {
        ac_id = value;
        ac_id.value_namespace = name_space;
        ac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "backup-configured")
    {
        backup_configured.yfilter = yfilter;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx.yfilter = yfilter;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-state")
    {
        group_state.yfilter = yfilter;
    }
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "ac-id")
    {
        ac_id.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop" || name == "pseudo-wire-union" || name == "backup-pseudo-wire" || name == "pw-id" || name == "signal-capability-flags" || name == "context" || name == "sequence-resync-threshold" || name == "bound" || name == "next-hop-valid" || name == "backup-configured" || name == "redundancy-role" || name == "active" || name == "pseudo-wire-id-type" || name == "pw-load-balance-type" || name == "pw-flow-label-tx" || name == "grouping-supported" || name == "group-id" || name == "group-state" || name == "global-id" || name == "ac-id" || name == "forward-class" || name == "next-hop-address")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::Base::Base()
{

    yang_name = "base"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::NextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    children_count{YType::uint32, "children-count"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::~NextHop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| children_count.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "children-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::PseudoWireUnion()
    :
    data_type{YType::enumeration, "data-type"}
        ,
    mpls(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::Mpls>())
    , l2tp(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp>())
    , l2tpv2(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2>())
    , l2tp_ipv6_ts(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts>())
{
    mpls->parent = this;
    l2tp->parent = this;
    l2tpv2->parent = this;
    l2tp_ipv6_ts->parent = this;

    yang_name = "pseudo-wire-union"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::~PseudoWireUnion()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| (mpls !=  nullptr && mpls->has_data())
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_data())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_operation())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-wire-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "l2tp")
    {
        if(l2tp == nullptr)
        {
            l2tp = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp>();
        }
        return l2tp;
    }

    if(child_yang_name == "l2tpv2")
    {
        if(l2tpv2 == nullptr)
        {
            l2tpv2 = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2>();
        }
        return l2tpv2;
    }

    if(child_yang_name == "l2tp-ipv6-ts")
    {
        if(l2tp_ipv6_ts == nullptr)
        {
            l2tp_ipv6_ts = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts>();
        }
        return l2tp_ipv6_ts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(l2tp != nullptr)
    {
        _children["l2tp"] = l2tp;
    }

    if(l2tpv2 != nullptr)
    {
        _children["l2tpv2"] = l2tpv2;
    }

    if(l2tp_ipv6_ts != nullptr)
    {
        _children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "l2tp" || name == "l2tpv2" || name == "l2tp-ipv6-ts" || name == "data-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::Mpls::Mpls()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{

    yang_name = "mpls"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::Mpls::~Mpls()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_label.yfilter)
	|| ydk::is_set(pw_local_label.yfilter)
	|| ydk::is_set(pw_tunnel_interface.yfilter)
	|| ydk::is_set(pw_xcid.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.yfilter)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.yfilter)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.yfilter)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.yfilter)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
        pw_label.value_namespace = name_space;
        pw_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
        pw_local_label.value_namespace = name_space;
        pw_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
        pw_tunnel_interface.value_namespace = name_space;
        pw_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
        pw_xcid.value_namespace = name_space;
        pw_xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-label")
    {
        pw_label.yfilter = yfilter;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label.yfilter = yfilter;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-label" || name == "pw-local-label" || name == "pw-tunnel-interface" || name == "pw-xcid")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::L2tp()
    :
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"}
        ,
    local(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Local>())
    , remote(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tp"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::~L2tp()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::has_data() const
{
    if (is_presence_container) return true;
    return tos_val.is_set
	|| ttl.is_set
	|| path_mtu.is_set
	|| sequence_number_sent.is_set
	|| sequence_number_expected.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "tos-val" || name == "ttl" || name == "path-mtu" || name == "sequence-number-sent" || name == "sequence-number-expected")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"}
{

    yang_name = "local"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Local::~Local()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Local::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"}
{

    yang_name = "remote"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Remote::~Remote()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Remote::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::L2tpv2()
    :
    pw_flags{YType::uint8, "pw-flags"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    path_mtu{YType::uint16, "path-mtu"},
    protocol{YType::uint16, "protocol"},
    rem_udp_port{YType::uint16, "rem-udp-port"},
    xconnect_id{YType::uint32, "xconnect-id"},
    next_hop_address{YType::str, "next-hop-address"},
    source_address{YType::str, "source-address"}
        ,
    local(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Local>())
    , remote(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tpv2"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::~L2tpv2()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::has_data() const
{
    if (is_presence_container) return true;
    return pw_flags.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| path_mtu.is_set
	|| protocol.is_set
	|| rem_udp_port.is_set
	|| xconnect_id.is_set
	|| next_hop_address.is_set
	|| source_address.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_flags.yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(rem_udp_port.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_flags.is_set || is_set(pw_flags.yfilter)) leaf_name_data.push_back(pw_flags.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rem_udp_port.is_set || is_set(rem_udp_port.yfilter)) leaf_name_data.push_back(rem_udp_port.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-flags")
    {
        pw_flags = value;
        pw_flags.value_namespace = name_space;
        pw_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port = value;
        rem_udp_port.value_namespace = name_space;
        rem_udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-flags")
    {
        pw_flags.yfilter = yfilter;
    }
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "pw-flags" || name == "tos-val" || name == "ttl" || name == "path-mtu" || name == "protocol" || name == "rem-udp-port" || name == "xconnect-id" || name == "next-hop-address" || name == "source-address")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "local"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::~Local()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tunnel-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "remote"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::~Remote()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tunnel-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::L2tpIpv6Ts()
    :
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
        ,
    local(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local>())
    , remote(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tp-ipv6-ts"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::~L2tpIpv6Ts()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::has_data() const
{
    if (is_presence_container) return true;
    return tos_val.is_set
	|| ttl.is_set
	|| path_mtu.is_set
	|| sequence_number_sent.is_set
	|| sequence_number_expected.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-ipv6-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "tos-val" || name == "ttl" || name == "path-mtu" || name == "sequence-number-sent" || name == "sequence-number-expected" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::Local()
    :
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"},
    secondary_cookie_size{YType::uint8, "secondary-cookie-size"},
    secondary_cookie_low_value{YType::uint32, "secondary-cookie-low-value"},
    secondary_cookie_high_value{YType::uint32, "secondary-cookie-high-value"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "local"; yang_parent_name = "l2tp-ipv6-ts"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::~Local()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::has_data() const
{
    if (is_presence_container) return true;
    return cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set
	|| secondary_cookie_size.is_set
	|| secondary_cookie_low_value.is_set
	|| secondary_cookie_high_value.is_set
	|| session_id.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter)
	|| ydk::is_set(secondary_cookie_size.yfilter)
	|| ydk::is_set(secondary_cookie_low_value.yfilter)
	|| ydk::is_set(secondary_cookie_high_value.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (secondary_cookie_size.is_set || is_set(secondary_cookie_size.yfilter)) leaf_name_data.push_back(secondary_cookie_size.get_name_leafdata());
    if (secondary_cookie_low_value.is_set || is_set(secondary_cookie_low_value.yfilter)) leaf_name_data.push_back(secondary_cookie_low_value.get_name_leafdata());
    if (secondary_cookie_high_value.is_set || is_set(secondary_cookie_high_value.yfilter)) leaf_name_data.push_back(secondary_cookie_high_value.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size = value;
        secondary_cookie_size.value_namespace = name_space;
        secondary_cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value = value;
        secondary_cookie_low_value.value_namespace = name_space;
        secondary_cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value = value;
        secondary_cookie_high_value.value_namespace = name_space;
        secondary_cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value" || name == "secondary-cookie-size" || name == "secondary-cookie-low-value" || name == "secondary-cookie-high-value" || name == "session-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"}
{

    yang_name = "remote"; yang_parent_name = "l2tp-ipv6-ts"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::~Remote()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::BackupPseudoWire()
    :
    backup_next_hop{YType::str, "backup-next-hop"},
    backup_pseudo_wire_id_type{YType::enumeration, "backup-pseudo-wire-id-type"},
    backup_pseudo_wire_id{YType::uint32, "backup-pseudo-wire-id"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    active{YType::boolean, "active"},
    bound{YType::boolean, "bound"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    grouping_supported{YType::boolean, "grouping-supported"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"}
        ,
    atom(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::Atom>())
{
    atom->parent = this;

    yang_name = "backup-pseudo-wire"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::~BackupPseudoWire()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::has_data() const
{
    if (is_presence_container) return true;
    return backup_next_hop.is_set
	|| backup_pseudo_wire_id_type.is_set
	|| backup_pseudo_wire_id.is_set
	|| redundancy_role.is_set
	|| active.is_set
	|| bound.is_set
	|| pw_flow_label_tx.is_set
	|| grouping_supported.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| (atom !=  nullptr && atom->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_next_hop.yfilter)
	|| ydk::is_set(backup_pseudo_wire_id_type.yfilter)
	|| ydk::is_set(backup_pseudo_wire_id.yfilter)
	|| ydk::is_set(redundancy_role.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(pw_flow_label_tx.yfilter)
	|| ydk::is_set(grouping_supported.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_state.yfilter)
	|| (atom !=  nullptr && atom->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudo-wire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_next_hop.is_set || is_set(backup_next_hop.yfilter)) leaf_name_data.push_back(backup_next_hop.get_name_leafdata());
    if (backup_pseudo_wire_id_type.is_set || is_set(backup_pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(backup_pseudo_wire_id_type.get_name_leafdata());
    if (backup_pseudo_wire_id.is_set || is_set(backup_pseudo_wire_id.yfilter)) leaf_name_data.push_back(backup_pseudo_wire_id.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.yfilter)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.yfilter)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.yfilter)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.yfilter)) leaf_name_data.push_back(group_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atom")
    {
        if(atom == nullptr)
        {
            atom = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::Atom>();
        }
        return atom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atom != nullptr)
    {
        _children["atom"] = atom;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-next-hop")
    {
        backup_next_hop = value;
        backup_next_hop.value_namespace = name_space;
        backup_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type = value;
        backup_pseudo_wire_id_type.value_namespace = name_space;
        backup_pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id = value;
        backup_pseudo_wire_id.value_namespace = name_space;
        backup_pseudo_wire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
        redundancy_role.value_namespace = name_space;
        redundancy_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
        pw_flow_label_tx.value_namespace = name_space;
        pw_flow_label_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
        grouping_supported.value_namespace = name_space;
        grouping_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-state")
    {
        group_state = value;
        group_state.value_namespace = name_space;
        group_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-next-hop")
    {
        backup_next_hop.yfilter = yfilter;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx.yfilter = yfilter;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-state")
    {
        group_state.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atom" || name == "backup-next-hop" || name == "backup-pseudo-wire-id-type" || name == "backup-pseudo-wire-id" || name == "redundancy-role" || name == "active" || name == "bound" || name == "pw-flow-label-tx" || name == "grouping-supported" || name == "group-id" || name == "group-state")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::Atom::Atom()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{

    yang_name = "atom"; yang_parent_name = "backup-pseudo-wire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::Atom::~Atom()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::Atom::has_data() const
{
    if (is_presence_container) return true;
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::Atom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_label.yfilter)
	|| ydk::is_set(pw_local_label.yfilter)
	|| ydk::is_set(pw_tunnel_interface.yfilter)
	|| ydk::is_set(pw_xcid.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::Atom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.yfilter)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.yfilter)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.yfilter)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.yfilter)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::Atom::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::Atom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
        pw_label.value_namespace = name_space;
        pw_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
        pw_local_label.value_namespace = name_space;
        pw_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
        pw_tunnel_interface.value_namespace = name_space;
        pw_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
        pw_xcid.value_namespace = name_space;
        pw_xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::Atom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-label")
    {
        pw_label.yfilter = yfilter;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label.yfilter = yfilter;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::Atom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-label" || name == "pw-local-label" || name == "pw-tunnel-interface" || name == "pw-xcid")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Segment2()
    :
    data_type{YType::enumeration, "data-type"}
        ,
    ac(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac>())
    , bp(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp>())
    , fxs(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs>())
    , pw(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw>())
{
    ac->parent = this;
    bp->parent = this;
    fxs->parent = this;
    pw->parent = this;

    yang_name = "segment2"; yang_parent_name = "l2fibx-con-l2tpv2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::~Segment2()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (bp !=  nullptr && bp->has_data())
	|| (fxs !=  nullptr && fxs->has_data())
	|| (pw !=  nullptr && pw->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (bp !=  nullptr && bp->has_operation())
	|| (fxs !=  nullptr && fxs->has_operation())
	|| (pw !=  nullptr && pw->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "bp")
    {
        if(bp == nullptr)
        {
            bp = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp>();
        }
        return bp;
    }

    if(child_yang_name == "fxs")
    {
        if(fxs == nullptr)
        {
            fxs = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs>();
        }
        return fxs;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw>();
        }
        return pw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ac != nullptr)
    {
        _children["ac"] = ac;
    }

    if(bp != nullptr)
    {
        _children["bp"] = bp;
    }

    if(fxs != nullptr)
    {
        _children["fxs"] = fxs;
    }

    if(pw != nullptr)
    {
        _children["pw"] = pw;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "bp" || name == "fxs" || name == "pw" || name == "data-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::Ac()
    :
    interface_name{YType::str, "interface-name"},
    sub_interface_handle{YType::str, "sub-interface-handle"},
    attachment_circuit_id{YType::uint32, "attachment-circuit-id"},
    attachment_circuit_mtu{YType::uint16, "attachment-circuit-mtu"},
    actype{YType::uint8, "actype"},
    inter_working_mode{YType::uint8, "inter-working-mode"},
    adjacency_valid{YType::boolean, "adjacency-valid"},
    adjacency_address{YType::str, "adjacency-address"},
    bound{YType::boolean, "bound"},
    ip_inter_working_mac{YType::str, "ip-inter-working-mac"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"},
    fxc_next_hop_valid{YType::boolean, "fxc-next-hop-valid"},
    vlan_id_count{YType::uint8, "vlan-id-count"},
    first_vlan_id{YType::uint16, "first-vlan-id"},
    second_vlan_id{YType::uint16, "second-vlan-id"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::Base>())
    , fxc_next_hop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop>())
{
    base->parent = this;
    fxc_next_hop->parent = this;

    yang_name = "ac"; yang_parent_name = "segment2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::~Ac()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| sub_interface_handle.is_set
	|| attachment_circuit_id.is_set
	|| attachment_circuit_mtu.is_set
	|| actype.is_set
	|| inter_working_mode.is_set
	|| adjacency_valid.is_set
	|| adjacency_address.is_set
	|| bound.is_set
	|| ip_inter_working_mac.is_set
	|| redundancy_group_id.is_set
	|| redundancy_object_id.is_set
	|| evpn_internal_label.is_set
	|| fxc_next_hop_valid.is_set
	|| vlan_id_count.is_set
	|| first_vlan_id.is_set
	|| second_vlan_id.is_set
	|| (base !=  nullptr && base->has_data())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(sub_interface_handle.yfilter)
	|| ydk::is_set(attachment_circuit_id.yfilter)
	|| ydk::is_set(attachment_circuit_mtu.yfilter)
	|| ydk::is_set(actype.yfilter)
	|| ydk::is_set(inter_working_mode.yfilter)
	|| ydk::is_set(adjacency_valid.yfilter)
	|| ydk::is_set(adjacency_address.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(ip_inter_working_mac.yfilter)
	|| ydk::is_set(redundancy_group_id.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter)
	|| ydk::is_set(evpn_internal_label.yfilter)
	|| ydk::is_set(fxc_next_hop_valid.yfilter)
	|| ydk::is_set(vlan_id_count.yfilter)
	|| ydk::is_set(first_vlan_id.yfilter)
	|| ydk::is_set(second_vlan_id.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sub_interface_handle.is_set || is_set(sub_interface_handle.yfilter)) leaf_name_data.push_back(sub_interface_handle.get_name_leafdata());
    if (attachment_circuit_id.is_set || is_set(attachment_circuit_id.yfilter)) leaf_name_data.push_back(attachment_circuit_id.get_name_leafdata());
    if (attachment_circuit_mtu.is_set || is_set(attachment_circuit_mtu.yfilter)) leaf_name_data.push_back(attachment_circuit_mtu.get_name_leafdata());
    if (actype.is_set || is_set(actype.yfilter)) leaf_name_data.push_back(actype.get_name_leafdata());
    if (inter_working_mode.is_set || is_set(inter_working_mode.yfilter)) leaf_name_data.push_back(inter_working_mode.get_name_leafdata());
    if (adjacency_valid.is_set || is_set(adjacency_valid.yfilter)) leaf_name_data.push_back(adjacency_valid.get_name_leafdata());
    if (adjacency_address.is_set || is_set(adjacency_address.yfilter)) leaf_name_data.push_back(adjacency_address.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (ip_inter_working_mac.is_set || is_set(ip_inter_working_mac.yfilter)) leaf_name_data.push_back(ip_inter_working_mac.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.yfilter)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.yfilter)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());
    if (fxc_next_hop_valid.is_set || is_set(fxc_next_hop_valid.yfilter)) leaf_name_data.push_back(fxc_next_hop_valid.get_name_leafdata());
    if (vlan_id_count.is_set || is_set(vlan_id_count.yfilter)) leaf_name_data.push_back(vlan_id_count.get_name_leafdata());
    if (first_vlan_id.is_set || is_set(first_vlan_id.yfilter)) leaf_name_data.push_back(first_vlan_id.get_name_leafdata());
    if (second_vlan_id.is_set || is_set(second_vlan_id.yfilter)) leaf_name_data.push_back(second_vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::Base>();
        }
        return base;
    }

    if(child_yang_name == "fxc-next-hop")
    {
        if(fxc_next_hop == nullptr)
        {
            fxc_next_hop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop>();
        }
        return fxc_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(fxc_next_hop != nullptr)
    {
        _children["fxc-next-hop"] = fxc_next_hop;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle = value;
        sub_interface_handle.value_namespace = name_space;
        sub_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id = value;
        attachment_circuit_id.value_namespace = name_space;
        attachment_circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu = value;
        attachment_circuit_mtu.value_namespace = name_space;
        attachment_circuit_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actype")
    {
        actype = value;
        actype.value_namespace = name_space;
        actype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode = value;
        inter_working_mode.value_namespace = name_space;
        inter_working_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid = value;
        adjacency_valid.value_namespace = name_space;
        adjacency_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address = value;
        adjacency_address.value_namespace = name_space;
        adjacency_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac = value;
        ip_inter_working_mac.value_namespace = name_space;
        ip_inter_working_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
        redundancy_group_id.value_namespace = name_space;
        redundancy_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
        evpn_internal_label.value_namespace = name_space;
        evpn_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid = value;
        fxc_next_hop_valid.value_namespace = name_space;
        fxc_next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id-count")
    {
        vlan_id_count = value;
        vlan_id_count.value_namespace = name_space;
        vlan_id_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-vlan-id")
    {
        first_vlan_id = value;
        first_vlan_id.value_namespace = name_space;
        first_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-vlan-id")
    {
        second_vlan_id = value;
        second_vlan_id.value_namespace = name_space;
        second_vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu.yfilter = yfilter;
    }
    if(value_path == "actype")
    {
        actype.yfilter = yfilter;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode.yfilter = yfilter;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid.yfilter = yfilter;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label.yfilter = yfilter;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "vlan-id-count")
    {
        vlan_id_count.yfilter = yfilter;
    }
    if(value_path == "first-vlan-id")
    {
        first_vlan_id.yfilter = yfilter;
    }
    if(value_path == "second-vlan-id")
    {
        second_vlan_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "fxc-next-hop" || name == "interface-name" || name == "sub-interface-handle" || name == "attachment-circuit-id" || name == "attachment-circuit-mtu" || name == "actype" || name == "inter-working-mode" || name == "adjacency-valid" || name == "adjacency-address" || name == "bound" || name == "ip-inter-working-mac" || name == "redundancy-group-id" || name == "redundancy-object-id" || name == "evpn-internal-label" || name == "fxc-next-hop-valid" || name == "vlan-id-count" || name == "first-vlan-id" || name == "second-vlan-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::Base::Base()
{

    yang_name = "base"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::FxcNextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    children_count{YType::uint32, "children-count"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::Base>())
{
    base->parent = this;

    yang_name = "fxc-next-hop"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::~FxcNextHop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| children_count.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxc-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "children-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "fxc-next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Bp()
    :
    bridge_id{YType::uint32, "bridge-id"},
    shg_id{YType::uint32, "shg-id"},
    msti_pointer{YType::uint32, "msti-pointer"},
    segment_type{YType::uint8, "segment-type"},
    mvrp_sequence_number{YType::uint16, "mvrp-sequence-number"},
    learn_key{YType::uint8, "learn-key"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Base>())
    , oper(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper>())
    , p2mp(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::P2mp>())
{
    base->parent = this;
    oper->parent = this;
    p2mp->parent = this;

    yang_name = "bp"; yang_parent_name = "segment2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::~Bp()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::has_data() const
{
    if (is_presence_container) return true;
    return bridge_id.is_set
	|| shg_id.is_set
	|| msti_pointer.is_set
	|| segment_type.is_set
	|| mvrp_sequence_number.is_set
	|| learn_key.is_set
	|| (base !=  nullptr && base->has_data())
	|| (oper !=  nullptr && oper->has_data())
	|| (p2mp !=  nullptr && p2mp->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(shg_id.yfilter)
	|| ydk::is_set(msti_pointer.yfilter)
	|| ydk::is_set(segment_type.yfilter)
	|| ydk::is_set(mvrp_sequence_number.yfilter)
	|| ydk::is_set(learn_key.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (oper !=  nullptr && oper->has_operation())
	|| (p2mp !=  nullptr && p2mp->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (shg_id.is_set || is_set(shg_id.yfilter)) leaf_name_data.push_back(shg_id.get_name_leafdata());
    if (msti_pointer.is_set || is_set(msti_pointer.yfilter)) leaf_name_data.push_back(msti_pointer.get_name_leafdata());
    if (segment_type.is_set || is_set(segment_type.yfilter)) leaf_name_data.push_back(segment_type.get_name_leafdata());
    if (mvrp_sequence_number.is_set || is_set(mvrp_sequence_number.yfilter)) leaf_name_data.push_back(mvrp_sequence_number.get_name_leafdata());
    if (learn_key.is_set || is_set(learn_key.yfilter)) leaf_name_data.push_back(learn_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Base>();
        }
        return base;
    }

    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper>();
        }
        return oper;
    }

    if(child_yang_name == "p2mp")
    {
        if(p2mp == nullptr)
        {
            p2mp = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::P2mp>();
        }
        return p2mp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(oper != nullptr)
    {
        _children["oper"] = oper;
    }

    if(p2mp != nullptr)
    {
        _children["p2mp"] = p2mp;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shg-id")
    {
        shg_id = value;
        shg_id.value_namespace = name_space;
        shg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-pointer")
    {
        msti_pointer = value;
        msti_pointer.value_namespace = name_space;
        msti_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-type")
    {
        segment_type = value;
        segment_type.value_namespace = name_space;
        segment_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number = value;
        mvrp_sequence_number.value_namespace = name_space;
        mvrp_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn-key")
    {
        learn_key = value;
        learn_key.value_namespace = name_space;
        learn_key.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "shg-id")
    {
        shg_id.yfilter = yfilter;
    }
    if(value_path == "msti-pointer")
    {
        msti_pointer.yfilter = yfilter;
    }
    if(value_path == "segment-type")
    {
        segment_type.yfilter = yfilter;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number.yfilter = yfilter;
    }
    if(value_path == "learn-key")
    {
        learn_key.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "oper" || name == "p2mp" || name == "bridge-id" || name == "shg-id" || name == "msti-pointer" || name == "segment-type" || name == "mvrp-sequence-number" || name == "learn-key")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Base::Base()
{

    yang_name = "base"; yang_parent_name = "bp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::Oper()
    :
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"}
        ,
    operational_information(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation>())
{
    operational_information->parent = this;

    yang_name = "oper"; yang_parent_name = "bp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::~Oper()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::has_data() const
{
    if (is_presence_container) return true;
    return unicast_storm_control_pps.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| broadcast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| (operational_information !=  nullptr && operational_information->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| (operational_information !=  nullptr && operational_information->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operational-information")
    {
        if(operational_information == nullptr)
        {
            operational_information = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation>();
        }
        return operational_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(operational_information != nullptr)
    {
        _children["operational-information"] = operational_information;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operational-information" || name == "unicast-storm-control-pps" || name == "unicast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "broadcast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "multicast-storm-control-kb-ps")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::OperationalInformation()
    :
    mtu{YType::uint32, "mtu"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_limit{YType::uint32, "mac-limit"},
    number_of_macs{YType::uint32, "number-of-macs"},
    admin_disabled{YType::boolean, "admin-disabled"},
    flooding_disabled{YType::boolean, "flooding-disabled"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_threshold{YType::uint32, "mac-limit-threshold"},
    mac_learning_disabled{YType::boolean, "mac-learning-disabled"},
    mac_port_down_flush_disabled{YType::boolean, "mac-port-down-flush-disabled"},
    mac_limit_notification_type{YType::enumeration, "mac-limit-notification-type"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    is_mac_secure_accept_shutdown{YType::boolean, "is-mac-secure-accept-shutdown"},
    is_mac_secure_threshold_enabled{YType::boolean, "is-mac-secure-threshold-enabled"},
    mac_aging_type{YType::boolean, "mac-aging-type"},
    storm_control_unicast_enabled{YType::boolean, "storm-control-unicast-enabled"},
    storm_control_broadcast_enabled{YType::boolean, "storm-control-broadcast-enabled"},
    storm_control_multicast_enabled{YType::boolean, "storm-control-multicast-enabled"},
    storm_control_unicast_rate_unit{YType::enumeration, "storm-control-unicast-rate-unit"},
    storm_control_broadcast_rate_unit{YType::enumeration, "storm-control-broadcast-rate-unit"},
    storm_control_multicast_rate_unit{YType::enumeration, "storm-control-multicast-rate-unit"},
    dhcp_enabled{YType::boolean, "dhcp-enabled"},
    dhcp_trusted{YType::boolean, "dhcp-trusted"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_addr_validation_ipv4_enabled{YType::boolean, "is-dai-addr-validation-ipv4-enabled"},
    is_dai_addr_validation_source_mac_enabled{YType::boolean, "is-dai-addr-validation-source-mac-enabled"},
    is_dai_addr_validation_destination_mac_enabled{YType::boolean, "is-dai-addr-validation-destination-mac-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_ipsg_enabled{YType::boolean, "is-ipsg-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_vpls_flood_optimization_enabled{YType::boolean, "is-vpls-flood-optimization-enabled"},
    igmp_snoop_enabled{YType::boolean, "igmp-snoop-enabled"},
    igmp_snoop_profile_enabled{YType::boolean, "igmp-snoop-profile-enabled"},
    igmp_flood_forward_enabled{YType::boolean, "igmp-flood-forward-enabled"},
    igmp_mroute_port_enabled{YType::boolean, "igmp-mroute-port-enabled"},
    igmp_route_guard_enabled{YType::boolean, "igmp-route-guard-enabled"},
    mld_snoop_enabled{YType::boolean, "mld-snoop-enabled"},
    mld_snoop_profile_enabled{YType::boolean, "mld-snoop-profile-enabled"},
    mld_flood_forward_enabled{YType::boolean, "mld-flood-forward-enabled"},
    mld_mroute_port_enabled{YType::boolean, "mld-mroute-port-enabled"},
    mld_route_guard_enabled{YType::boolean, "mld-route-guard-enabled"},
    stp_participating{YType::boolean, "stp-participating"},
    bvi_configured{YType::boolean, "bvi-configured"},
    is_bvi_up{YType::boolean, "is-bvi-up"},
    is_vni_enabled{YType::boolean, "is-vni-enabled"},
    is_evpn_enabled{YType::boolean, "is-evpn-enabled"},
    unknown_unicast_flooding_disabled{YType::boolean, "unknown-unicast-flooding-disabled"},
    is_pbbevpn_enabled{YType::boolean, "is-pbbevpn-enabled"},
    is_swmac_learning{YType::boolean, "is-swmac-learning"},
    is_evpn_flow_label{YType::boolean, "is-evpn-flow-label"},
    is_evpn_cw_disable{YType::boolean, "is-evpn-cw-disable"},
    msti{YType::uint32, "msti"},
    is_p2mp_pw_enabled{YType::boolean, "is-p2mp-pw-enabled"},
    is_igmp_snoop_enabled{YType::boolean, "is-igmp-snoop-enabled"},
    nv_satellite_offload_ipv4_multicast_disabled{YType::boolean, "nv-satellite-offload-ipv4-multicast-disabled"}
        ,
    feature(this, {})
{

    yang_name = "operational-information"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::~OperationalInformation()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<feature.len(); index++)
    {
        if(feature[index]->has_data())
            return true;
    }
    return mtu.is_set
	|| mac_aging_time.is_set
	|| mac_limit.is_set
	|| number_of_macs.is_set
	|| admin_disabled.is_set
	|| flooding_disabled.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| mac_limit_action.is_set
	|| mac_limit_threshold.is_set
	|| mac_learning_disabled.is_set
	|| mac_port_down_flush_disabled.is_set
	|| mac_limit_notification_type.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| mac_secure_action.is_set
	|| is_mac_secure_accept_shutdown.is_set
	|| is_mac_secure_threshold_enabled.is_set
	|| mac_aging_type.is_set
	|| storm_control_unicast_enabled.is_set
	|| storm_control_broadcast_enabled.is_set
	|| storm_control_multicast_enabled.is_set
	|| storm_control_unicast_rate_unit.is_set
	|| storm_control_broadcast_rate_unit.is_set
	|| storm_control_multicast_rate_unit.is_set
	|| dhcp_enabled.is_set
	|| dhcp_trusted.is_set
	|| is_dai_enabled.is_set
	|| is_dai_addr_validation_ipv4_enabled.is_set
	|| is_dai_addr_validation_source_mac_enabled.is_set
	|| is_dai_addr_validation_destination_mac_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_ipsg_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_vpls_flood_optimization_enabled.is_set
	|| igmp_snoop_enabled.is_set
	|| igmp_snoop_profile_enabled.is_set
	|| igmp_flood_forward_enabled.is_set
	|| igmp_mroute_port_enabled.is_set
	|| igmp_route_guard_enabled.is_set
	|| mld_snoop_enabled.is_set
	|| mld_snoop_profile_enabled.is_set
	|| mld_flood_forward_enabled.is_set
	|| mld_mroute_port_enabled.is_set
	|| mld_route_guard_enabled.is_set
	|| stp_participating.is_set
	|| bvi_configured.is_set
	|| is_bvi_up.is_set
	|| is_vni_enabled.is_set
	|| is_evpn_enabled.is_set
	|| unknown_unicast_flooding_disabled.is_set
	|| is_pbbevpn_enabled.is_set
	|| is_swmac_learning.is_set
	|| is_evpn_flow_label.is_set
	|| is_evpn_cw_disable.is_set
	|| msti.is_set
	|| is_p2mp_pw_enabled.is_set
	|| is_igmp_snoop_enabled.is_set
	|| nv_satellite_offload_ipv4_multicast_disabled.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::has_operation() const
{
    for (std::size_t index=0; index<feature.len(); index++)
    {
        if(feature[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(mac_aging_time.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(number_of_macs.yfilter)
	|| ydk::is_set(admin_disabled.yfilter)
	|| ydk::is_set(flooding_disabled.yfilter)
	|| ydk::is_set(flood_unknown_unicast_enabled.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(mac_limit_threshold.yfilter)
	|| ydk::is_set(mac_learning_disabled.yfilter)
	|| ydk::is_set(mac_port_down_flush_disabled.yfilter)
	|| ydk::is_set(mac_limit_notification_type.yfilter)
	|| ydk::is_set(is_mac_secure_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_logging_enabled.yfilter)
	|| ydk::is_set(mac_secure_action.yfilter)
	|| ydk::is_set(is_mac_secure_accept_shutdown.yfilter)
	|| ydk::is_set(is_mac_secure_threshold_enabled.yfilter)
	|| ydk::is_set(mac_aging_type.yfilter)
	|| ydk::is_set(storm_control_unicast_enabled.yfilter)
	|| ydk::is_set(storm_control_broadcast_enabled.yfilter)
	|| ydk::is_set(storm_control_multicast_enabled.yfilter)
	|| ydk::is_set(storm_control_unicast_rate_unit.yfilter)
	|| ydk::is_set(storm_control_broadcast_rate_unit.yfilter)
	|| ydk::is_set(storm_control_multicast_rate_unit.yfilter)
	|| ydk::is_set(dhcp_enabled.yfilter)
	|| ydk::is_set(dhcp_trusted.yfilter)
	|| ydk::is_set(is_dai_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_ipv4_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_source_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_destination_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_logging_enabled.yfilter)
	|| ydk::is_set(is_ipsg_enabled.yfilter)
	|| ydk::is_set(is_ipsg_logging_enabled.yfilter)
	|| ydk::is_set(is_vpls_flood_optimization_enabled.yfilter)
	|| ydk::is_set(igmp_snoop_enabled.yfilter)
	|| ydk::is_set(igmp_snoop_profile_enabled.yfilter)
	|| ydk::is_set(igmp_flood_forward_enabled.yfilter)
	|| ydk::is_set(igmp_mroute_port_enabled.yfilter)
	|| ydk::is_set(igmp_route_guard_enabled.yfilter)
	|| ydk::is_set(mld_snoop_enabled.yfilter)
	|| ydk::is_set(mld_snoop_profile_enabled.yfilter)
	|| ydk::is_set(mld_flood_forward_enabled.yfilter)
	|| ydk::is_set(mld_mroute_port_enabled.yfilter)
	|| ydk::is_set(mld_route_guard_enabled.yfilter)
	|| ydk::is_set(stp_participating.yfilter)
	|| ydk::is_set(bvi_configured.yfilter)
	|| ydk::is_set(is_bvi_up.yfilter)
	|| ydk::is_set(is_vni_enabled.yfilter)
	|| ydk::is_set(is_evpn_enabled.yfilter)
	|| ydk::is_set(unknown_unicast_flooding_disabled.yfilter)
	|| ydk::is_set(is_pbbevpn_enabled.yfilter)
	|| ydk::is_set(is_swmac_learning.yfilter)
	|| ydk::is_set(is_evpn_flow_label.yfilter)
	|| ydk::is_set(is_evpn_cw_disable.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(is_p2mp_pw_enabled.yfilter)
	|| ydk::is_set(is_igmp_snoop_enabled.yfilter)
	|| ydk::is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.yfilter)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (number_of_macs.is_set || is_set(number_of_macs.yfilter)) leaf_name_data.push_back(number_of_macs.get_name_leafdata());
    if (admin_disabled.is_set || is_set(admin_disabled.yfilter)) leaf_name_data.push_back(admin_disabled.get_name_leafdata());
    if (flooding_disabled.is_set || is_set(flooding_disabled.yfilter)) leaf_name_data.push_back(flooding_disabled.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.yfilter)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_threshold.is_set || is_set(mac_limit_threshold.yfilter)) leaf_name_data.push_back(mac_limit_threshold.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.yfilter)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (mac_limit_notification_type.is_set || is_set(mac_limit_notification_type.yfilter)) leaf_name_data.push_back(mac_limit_notification_type.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.yfilter)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (is_mac_secure_accept_shutdown.is_set || is_set(is_mac_secure_accept_shutdown.yfilter)) leaf_name_data.push_back(is_mac_secure_accept_shutdown.get_name_leafdata());
    if (is_mac_secure_threshold_enabled.is_set || is_set(is_mac_secure_threshold_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_threshold_enabled.get_name_leafdata());
    if (mac_aging_type.is_set || is_set(mac_aging_type.yfilter)) leaf_name_data.push_back(mac_aging_type.get_name_leafdata());
    if (storm_control_unicast_enabled.is_set || is_set(storm_control_unicast_enabled.yfilter)) leaf_name_data.push_back(storm_control_unicast_enabled.get_name_leafdata());
    if (storm_control_broadcast_enabled.is_set || is_set(storm_control_broadcast_enabled.yfilter)) leaf_name_data.push_back(storm_control_broadcast_enabled.get_name_leafdata());
    if (storm_control_multicast_enabled.is_set || is_set(storm_control_multicast_enabled.yfilter)) leaf_name_data.push_back(storm_control_multicast_enabled.get_name_leafdata());
    if (storm_control_unicast_rate_unit.is_set || is_set(storm_control_unicast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_unicast_rate_unit.get_name_leafdata());
    if (storm_control_broadcast_rate_unit.is_set || is_set(storm_control_broadcast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_broadcast_rate_unit.get_name_leafdata());
    if (storm_control_multicast_rate_unit.is_set || is_set(storm_control_multicast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_multicast_rate_unit.get_name_leafdata());
    if (dhcp_enabled.is_set || is_set(dhcp_enabled.yfilter)) leaf_name_data.push_back(dhcp_enabled.get_name_leafdata());
    if (dhcp_trusted.is_set || is_set(dhcp_trusted.yfilter)) leaf_name_data.push_back(dhcp_trusted.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.yfilter)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_addr_validation_ipv4_enabled.is_set || is_set(is_dai_addr_validation_ipv4_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validation_source_mac_enabled.is_set || is_set(is_dai_addr_validation_source_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_source_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validation_destination_mac_enabled.is_set || is_set(is_dai_addr_validation_destination_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_destination_mac_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.yfilter)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_ipsg_enabled.is_set || is_set(is_ipsg_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_vpls_flood_optimization_enabled.is_set || is_set(is_vpls_flood_optimization_enabled.yfilter)) leaf_name_data.push_back(is_vpls_flood_optimization_enabled.get_name_leafdata());
    if (igmp_snoop_enabled.is_set || is_set(igmp_snoop_enabled.yfilter)) leaf_name_data.push_back(igmp_snoop_enabled.get_name_leafdata());
    if (igmp_snoop_profile_enabled.is_set || is_set(igmp_snoop_profile_enabled.yfilter)) leaf_name_data.push_back(igmp_snoop_profile_enabled.get_name_leafdata());
    if (igmp_flood_forward_enabled.is_set || is_set(igmp_flood_forward_enabled.yfilter)) leaf_name_data.push_back(igmp_flood_forward_enabled.get_name_leafdata());
    if (igmp_mroute_port_enabled.is_set || is_set(igmp_mroute_port_enabled.yfilter)) leaf_name_data.push_back(igmp_mroute_port_enabled.get_name_leafdata());
    if (igmp_route_guard_enabled.is_set || is_set(igmp_route_guard_enabled.yfilter)) leaf_name_data.push_back(igmp_route_guard_enabled.get_name_leafdata());
    if (mld_snoop_enabled.is_set || is_set(mld_snoop_enabled.yfilter)) leaf_name_data.push_back(mld_snoop_enabled.get_name_leafdata());
    if (mld_snoop_profile_enabled.is_set || is_set(mld_snoop_profile_enabled.yfilter)) leaf_name_data.push_back(mld_snoop_profile_enabled.get_name_leafdata());
    if (mld_flood_forward_enabled.is_set || is_set(mld_flood_forward_enabled.yfilter)) leaf_name_data.push_back(mld_flood_forward_enabled.get_name_leafdata());
    if (mld_mroute_port_enabled.is_set || is_set(mld_mroute_port_enabled.yfilter)) leaf_name_data.push_back(mld_mroute_port_enabled.get_name_leafdata());
    if (mld_route_guard_enabled.is_set || is_set(mld_route_guard_enabled.yfilter)) leaf_name_data.push_back(mld_route_guard_enabled.get_name_leafdata());
    if (stp_participating.is_set || is_set(stp_participating.yfilter)) leaf_name_data.push_back(stp_participating.get_name_leafdata());
    if (bvi_configured.is_set || is_set(bvi_configured.yfilter)) leaf_name_data.push_back(bvi_configured.get_name_leafdata());
    if (is_bvi_up.is_set || is_set(is_bvi_up.yfilter)) leaf_name_data.push_back(is_bvi_up.get_name_leafdata());
    if (is_vni_enabled.is_set || is_set(is_vni_enabled.yfilter)) leaf_name_data.push_back(is_vni_enabled.get_name_leafdata());
    if (is_evpn_enabled.is_set || is_set(is_evpn_enabled.yfilter)) leaf_name_data.push_back(is_evpn_enabled.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.yfilter)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());
    if (is_pbbevpn_enabled.is_set || is_set(is_pbbevpn_enabled.yfilter)) leaf_name_data.push_back(is_pbbevpn_enabled.get_name_leafdata());
    if (is_swmac_learning.is_set || is_set(is_swmac_learning.yfilter)) leaf_name_data.push_back(is_swmac_learning.get_name_leafdata());
    if (is_evpn_flow_label.is_set || is_set(is_evpn_flow_label.yfilter)) leaf_name_data.push_back(is_evpn_flow_label.get_name_leafdata());
    if (is_evpn_cw_disable.is_set || is_set(is_evpn_cw_disable.yfilter)) leaf_name_data.push_back(is_evpn_cw_disable.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (is_p2mp_pw_enabled.is_set || is_set(is_p2mp_pw_enabled.yfilter)) leaf_name_data.push_back(is_p2mp_pw_enabled.get_name_leafdata());
    if (is_igmp_snoop_enabled.is_set || is_set(is_igmp_snoop_enabled.yfilter)) leaf_name_data.push_back(is_igmp_snoop_enabled.get_name_leafdata());
    if (nv_satellite_offload_ipv4_multicast_disabled.is_set || is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter)) leaf_name_data.push_back(nv_satellite_offload_ipv4_multicast_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "feature")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature>();
        ent_->parent = this;
        feature.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : feature.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
        mac_aging_time.value_namespace = name_space;
        mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs = value;
        number_of_macs.value_namespace = name_space;
        number_of_macs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-disabled")
    {
        admin_disabled = value;
        admin_disabled.value_namespace = name_space;
        admin_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled = value;
        flooding_disabled.value_namespace = name_space;
        flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
        flood_unknown_unicast_enabled.value_namespace = name_space;
        flood_unknown_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
        mac_limit_action.value_namespace = name_space;
        mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold = value;
        mac_limit_threshold.value_namespace = name_space;
        mac_limit_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
        mac_learning_disabled.value_namespace = name_space;
        mac_learning_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
        mac_port_down_flush_disabled.value_namespace = name_space;
        mac_port_down_flush_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type = value;
        mac_limit_notification_type.value_namespace = name_space;
        mac_limit_notification_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
        is_mac_secure_enabled.value_namespace = name_space;
        is_mac_secure_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
        is_mac_secure_logging_enabled.value_namespace = name_space;
        is_mac_secure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
        mac_secure_action.value_namespace = name_space;
        mac_secure_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown = value;
        is_mac_secure_accept_shutdown.value_namespace = name_space;
        is_mac_secure_accept_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled = value;
        is_mac_secure_threshold_enabled.value_namespace = name_space;
        is_mac_secure_threshold_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type = value;
        mac_aging_type.value_namespace = name_space;
        mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled = value;
        storm_control_unicast_enabled.value_namespace = name_space;
        storm_control_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled = value;
        storm_control_broadcast_enabled.value_namespace = name_space;
        storm_control_broadcast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled = value;
        storm_control_multicast_enabled.value_namespace = name_space;
        storm_control_multicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit = value;
        storm_control_unicast_rate_unit.value_namespace = name_space;
        storm_control_unicast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit = value;
        storm_control_broadcast_rate_unit.value_namespace = name_space;
        storm_control_broadcast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit = value;
        storm_control_multicast_rate_unit.value_namespace = name_space;
        storm_control_multicast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled = value;
        dhcp_enabled.value_namespace = name_space;
        dhcp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted = value;
        dhcp_trusted.value_namespace = name_space;
        dhcp_trusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
        is_dai_enabled.value_namespace = name_space;
        is_dai_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled = value;
        is_dai_addr_validation_ipv4_enabled.value_namespace = name_space;
        is_dai_addr_validation_ipv4_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled = value;
        is_dai_addr_validation_source_mac_enabled.value_namespace = name_space;
        is_dai_addr_validation_source_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled = value;
        is_dai_addr_validation_destination_mac_enabled.value_namespace = name_space;
        is_dai_addr_validation_destination_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
        is_dai_logging_enabled.value_namespace = name_space;
        is_dai_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled = value;
        is_ipsg_enabled.value_namespace = name_space;
        is_ipsg_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
        is_ipsg_logging_enabled.value_namespace = name_space;
        is_ipsg_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled = value;
        is_vpls_flood_optimization_enabled.value_namespace = name_space;
        is_vpls_flood_optimization_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled = value;
        igmp_snoop_enabled.value_namespace = name_space;
        igmp_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled = value;
        igmp_snoop_profile_enabled.value_namespace = name_space;
        igmp_snoop_profile_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled = value;
        igmp_flood_forward_enabled.value_namespace = name_space;
        igmp_flood_forward_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled = value;
        igmp_mroute_port_enabled.value_namespace = name_space;
        igmp_mroute_port_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled = value;
        igmp_route_guard_enabled.value_namespace = name_space;
        igmp_route_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled = value;
        mld_snoop_enabled.value_namespace = name_space;
        mld_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled = value;
        mld_snoop_profile_enabled.value_namespace = name_space;
        mld_snoop_profile_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled = value;
        mld_flood_forward_enabled.value_namespace = name_space;
        mld_flood_forward_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled = value;
        mld_mroute_port_enabled.value_namespace = name_space;
        mld_mroute_port_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled = value;
        mld_route_guard_enabled.value_namespace = name_space;
        mld_route_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp-participating")
    {
        stp_participating = value;
        stp_participating.value_namespace = name_space;
        stp_participating.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured = value;
        bvi_configured.value_namespace = name_space;
        bvi_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up = value;
        is_bvi_up.value_namespace = name_space;
        is_bvi_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled = value;
        is_vni_enabled.value_namespace = name_space;
        is_vni_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled = value;
        is_evpn_enabled.value_namespace = name_space;
        is_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
        unknown_unicast_flooding_disabled.value_namespace = name_space;
        unknown_unicast_flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled = value;
        is_pbbevpn_enabled.value_namespace = name_space;
        is_pbbevpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning = value;
        is_swmac_learning.value_namespace = name_space;
        is_swmac_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label = value;
        is_evpn_flow_label.value_namespace = name_space;
        is_evpn_flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable = value;
        is_evpn_cw_disable.value_namespace = name_space;
        is_evpn_cw_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled = value;
        is_p2mp_pw_enabled.value_namespace = name_space;
        is_p2mp_pw_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled = value;
        is_igmp_snoop_enabled.value_namespace = name_space;
        is_igmp_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled = value;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace = name_space;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs.yfilter = yfilter;
    }
    if(value_path == "admin-disabled")
    {
        admin_disabled.yfilter = yfilter;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled.yfilter = yfilter;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type.yfilter = yfilter;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled.yfilter = yfilter;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted.yfilter = yfilter;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "stp-participating")
    {
        stp_participating.yfilter = yfilter;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured.yfilter = yfilter;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up.yfilter = yfilter;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled.yfilter = yfilter;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled.yfilter = yfilter;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled.yfilter = yfilter;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning.yfilter = yfilter;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label.yfilter = yfilter;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled.yfilter = yfilter;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "feature" || name == "mtu" || name == "mac-aging-time" || name == "mac-limit" || name == "number-of-macs" || name == "admin-disabled" || name == "flooding-disabled" || name == "flood-unknown-unicast-enabled" || name == "mac-limit-action" || name == "mac-limit-threshold" || name == "mac-learning-disabled" || name == "mac-port-down-flush-disabled" || name == "mac-limit-notification-type" || name == "is-mac-secure-enabled" || name == "is-mac-secure-logging-enabled" || name == "mac-secure-action" || name == "is-mac-secure-accept-shutdown" || name == "is-mac-secure-threshold-enabled" || name == "mac-aging-type" || name == "storm-control-unicast-enabled" || name == "storm-control-broadcast-enabled" || name == "storm-control-multicast-enabled" || name == "storm-control-unicast-rate-unit" || name == "storm-control-broadcast-rate-unit" || name == "storm-control-multicast-rate-unit" || name == "dhcp-enabled" || name == "dhcp-trusted" || name == "is-dai-enabled" || name == "is-dai-addr-validation-ipv4-enabled" || name == "is-dai-addr-validation-source-mac-enabled" || name == "is-dai-addr-validation-destination-mac-enabled" || name == "is-dai-logging-enabled" || name == "is-ipsg-enabled" || name == "is-ipsg-logging-enabled" || name == "is-vpls-flood-optimization-enabled" || name == "igmp-snoop-enabled" || name == "igmp-snoop-profile-enabled" || name == "igmp-flood-forward-enabled" || name == "igmp-mroute-port-enabled" || name == "igmp-route-guard-enabled" || name == "mld-snoop-enabled" || name == "mld-snoop-profile-enabled" || name == "mld-flood-forward-enabled" || name == "mld-mroute-port-enabled" || name == "mld-route-guard-enabled" || name == "stp-participating" || name == "bvi-configured" || name == "is-bvi-up" || name == "is-vni-enabled" || name == "is-evpn-enabled" || name == "unknown-unicast-flooding-disabled" || name == "is-pbbevpn-enabled" || name == "is-swmac-learning" || name == "is-evpn-flow-label" || name == "is-evpn-cw-disable" || name == "msti" || name == "is-p2mp-pw-enabled" || name == "is-igmp-snoop-enabled" || name == "nv-satellite-offload-ipv4-multicast-disabled")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Feature()
    :
    feature_type{YType::enumeration, "feature-type"}
        ,
    dhcp(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp>())
    , igmp(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp>())
    , mld(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld>())
{
    dhcp->parent = this;
    igmp->parent = this;
    mld->parent = this;

    yang_name = "feature"; yang_parent_name = "operational-information"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::~Feature()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::has_data() const
{
    if (is_presence_container) return true;
    return feature_type.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (mld !=  nullptr && mld->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(feature_type.yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (mld !=  nullptr && mld->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (feature_type.is_set || is_set(feature_type.yfilter)) leaf_name_data.push_back(feature_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "mld")
    {
        if(mld == nullptr)
        {
            mld = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld>();
        }
        return mld;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(igmp != nullptr)
    {
        _children["igmp"] = igmp;
    }

    if(mld != nullptr)
    {
        _children["mld"] = mld;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "feature-type")
    {
        feature_type = value;
        feature_type.value_namespace = name_space;
        feature_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "feature-type")
    {
        feature_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "igmp" || name == "mld" || name == "feature-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::Dhcp()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "dhcp"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::~Dhcp()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::Igmp()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "igmp"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::~Igmp()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::Mld()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "mld"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::~Mld()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::P2mp::P2mp()
    :
    ptree_type{YType::enumeration, "ptree-type"},
    lsm_id{YType::uint32, "lsm-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    p2mp_id{YType::uint16, "p2mp-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    ptree_owner_lmrib{YType::boolean, "ptree-owner-lmrib"}
{

    yang_name = "p2mp"; yang_parent_name = "bp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::P2mp::~P2mp()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::P2mp::has_data() const
{
    if (is_presence_container) return true;
    return ptree_type.is_set
	|| lsm_id.is_set
	|| tunnel_id.is_set
	|| p2mp_id.is_set
	|| extended_tunnel_id.is_set
	|| ptree_owner_lmrib.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::P2mp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ptree_type.yfilter)
	|| ydk::is_set(lsm_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(ptree_owner_lmrib.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::P2mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::P2mp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ptree_type.is_set || is_set(ptree_type.yfilter)) leaf_name_data.push_back(ptree_type.get_name_leafdata());
    if (lsm_id.is_set || is_set(lsm_id.yfilter)) leaf_name_data.push_back(lsm_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (ptree_owner_lmrib.is_set || is_set(ptree_owner_lmrib.yfilter)) leaf_name_data.push_back(ptree_owner_lmrib.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::P2mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::P2mp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::P2mp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ptree-type")
    {
        ptree_type = value;
        ptree_type.value_namespace = name_space;
        ptree_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsm-id")
    {
        lsm_id = value;
        lsm_id.value_namespace = name_space;
        lsm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptree-owner-lmrib")
    {
        ptree_owner_lmrib = value;
        ptree_owner_lmrib.value_namespace = name_space;
        ptree_owner_lmrib.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::P2mp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ptree-type")
    {
        ptree_type.yfilter = yfilter;
    }
    if(value_path == "lsm-id")
    {
        lsm_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "ptree-owner-lmrib")
    {
        ptree_owner_lmrib.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::P2mp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ptree-type" || name == "lsm-id" || name == "tunnel-id" || name == "p2mp-id" || name == "extended-tunnel-id" || name == "ptree-owner-lmrib")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::Fxs()
    :
    fxs_id{YType::uint32, "fxs-id"},
    segment_type{YType::uint8, "segment-type"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::Base>())
{
    base->parent = this;

    yang_name = "fxs"; yang_parent_name = "segment2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::~Fxs()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::has_data() const
{
    if (is_presence_container) return true;
    return fxs_id.is_set
	|| segment_type.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fxs_id.yfilter)
	|| ydk::is_set(segment_type.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fxs_id.is_set || is_set(fxs_id.yfilter)) leaf_name_data.push_back(fxs_id.get_name_leafdata());
    if (segment_type.is_set || is_set(segment_type.yfilter)) leaf_name_data.push_back(segment_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fxs-id")
    {
        fxs_id = value;
        fxs_id.value_namespace = name_space;
        fxs_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-type")
    {
        segment_type = value;
        segment_type.value_namespace = name_space;
        segment_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fxs-id")
    {
        fxs_id.yfilter = yfilter;
    }
    if(value_path == "segment-type")
    {
        segment_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "fxs-id" || name == "segment-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::Base::Base()
{

    yang_name = "base"; yang_parent_name = "fxs"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::Pw()
    :
    pw_id{YType::uint64, "pw-id"},
    signal_capability_flags{YType::uint32, "signal-capability-flags"},
    context{YType::uint16, "context"},
    sequence_resync_threshold{YType::uint16, "sequence-resync-threshold"},
    bound{YType::boolean, "bound"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    backup_configured{YType::boolean, "backup-configured"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    active{YType::boolean, "active"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_load_balance_type{YType::enumeration, "pw-load-balance-type"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    grouping_supported{YType::boolean, "grouping-supported"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    global_id{YType::uint32, "global-id"},
    ac_id{YType::uint32, "ac-id"},
    forward_class{YType::uint8, "forward-class"},
    next_hop_address{YType::str, "next-hop-address"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::Base>())
    , next_hop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop>())
    , pseudo_wire_union(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion>())
    , backup_pseudo_wire(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire>())
{
    base->parent = this;
    next_hop->parent = this;
    pseudo_wire_union->parent = this;
    backup_pseudo_wire->parent = this;

    yang_name = "pw"; yang_parent_name = "segment2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::~Pw()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::has_data() const
{
    if (is_presence_container) return true;
    return pw_id.is_set
	|| signal_capability_flags.is_set
	|| context.is_set
	|| sequence_resync_threshold.is_set
	|| bound.is_set
	|| next_hop_valid.is_set
	|| backup_configured.is_set
	|| redundancy_role.is_set
	|| active.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_load_balance_type.is_set
	|| pw_flow_label_tx.is_set
	|| grouping_supported.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| global_id.is_set
	|| ac_id.is_set
	|| forward_class.is_set
	|| next_hop_address.is_set
	|| (base !=  nullptr && base->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_data())
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(signal_capability_flags.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(sequence_resync_threshold.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(backup_configured.yfilter)
	|| ydk::is_set(redundancy_role.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(pseudo_wire_id_type.yfilter)
	|| ydk::is_set(pw_load_balance_type.yfilter)
	|| ydk::is_set(pw_flow_label_tx.yfilter)
	|| ydk::is_set(grouping_supported.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_state.yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(ac_id.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_operation())
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (signal_capability_flags.is_set || is_set(signal_capability_flags.yfilter)) leaf_name_data.push_back(signal_capability_flags.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (sequence_resync_threshold.is_set || is_set(sequence_resync_threshold.yfilter)) leaf_name_data.push_back(sequence_resync_threshold.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (backup_configured.is_set || is_set(backup_configured.yfilter)) leaf_name_data.push_back(backup_configured.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.yfilter)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_load_balance_type.is_set || is_set(pw_load_balance_type.yfilter)) leaf_name_data.push_back(pw_load_balance_type.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.yfilter)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.yfilter)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.yfilter)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (ac_id.is_set || is_set(ac_id.yfilter)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::Base>();
        }
        return base;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "pseudo-wire-union")
    {
        if(pseudo_wire_union == nullptr)
        {
            pseudo_wire_union = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion>();
        }
        return pseudo_wire_union;
    }

    if(child_yang_name == "backup-pseudo-wire")
    {
        if(backup_pseudo_wire == nullptr)
        {
            backup_pseudo_wire = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire>();
        }
        return backup_pseudo_wire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(pseudo_wire_union != nullptr)
    {
        _children["pseudo-wire-union"] = pseudo_wire_union;
    }

    if(backup_pseudo_wire != nullptr)
    {
        _children["backup-pseudo-wire"] = backup_pseudo_wire;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags = value;
        signal_capability_flags.value_namespace = name_space;
        signal_capability_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold = value;
        sequence_resync_threshold.value_namespace = name_space;
        sequence_resync_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-configured")
    {
        backup_configured = value;
        backup_configured.value_namespace = name_space;
        backup_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
        redundancy_role.value_namespace = name_space;
        redundancy_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
        pseudo_wire_id_type.value_namespace = name_space;
        pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type = value;
        pw_load_balance_type.value_namespace = name_space;
        pw_load_balance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
        pw_flow_label_tx.value_namespace = name_space;
        pw_flow_label_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
        grouping_supported.value_namespace = name_space;
        grouping_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-state")
    {
        group_state = value;
        group_state.value_namespace = name_space;
        group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-id")
    {
        ac_id = value;
        ac_id.value_namespace = name_space;
        ac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "backup-configured")
    {
        backup_configured.yfilter = yfilter;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx.yfilter = yfilter;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-state")
    {
        group_state.yfilter = yfilter;
    }
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "ac-id")
    {
        ac_id.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop" || name == "pseudo-wire-union" || name == "backup-pseudo-wire" || name == "pw-id" || name == "signal-capability-flags" || name == "context" || name == "sequence-resync-threshold" || name == "bound" || name == "next-hop-valid" || name == "backup-configured" || name == "redundancy-role" || name == "active" || name == "pseudo-wire-id-type" || name == "pw-load-balance-type" || name == "pw-flow-label-tx" || name == "grouping-supported" || name == "group-id" || name == "group-state" || name == "global-id" || name == "ac-id" || name == "forward-class" || name == "next-hop-address")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::Base::Base()
{

    yang_name = "base"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::NextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    children_count{YType::uint32, "children-count"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::~NextHop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| children_count.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "children-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::PseudoWireUnion()
    :
    data_type{YType::enumeration, "data-type"}
        ,
    mpls(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::Mpls>())
    , l2tp(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp>())
    , l2tpv2(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2>())
    , l2tp_ipv6_ts(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts>())
{
    mpls->parent = this;
    l2tp->parent = this;
    l2tpv2->parent = this;
    l2tp_ipv6_ts->parent = this;

    yang_name = "pseudo-wire-union"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::~PseudoWireUnion()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| (mpls !=  nullptr && mpls->has_data())
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_data())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_operation())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-wire-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "l2tp")
    {
        if(l2tp == nullptr)
        {
            l2tp = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp>();
        }
        return l2tp;
    }

    if(child_yang_name == "l2tpv2")
    {
        if(l2tpv2 == nullptr)
        {
            l2tpv2 = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2>();
        }
        return l2tpv2;
    }

    if(child_yang_name == "l2tp-ipv6-ts")
    {
        if(l2tp_ipv6_ts == nullptr)
        {
            l2tp_ipv6_ts = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts>();
        }
        return l2tp_ipv6_ts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(l2tp != nullptr)
    {
        _children["l2tp"] = l2tp;
    }

    if(l2tpv2 != nullptr)
    {
        _children["l2tpv2"] = l2tpv2;
    }

    if(l2tp_ipv6_ts != nullptr)
    {
        _children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "l2tp" || name == "l2tpv2" || name == "l2tp-ipv6-ts" || name == "data-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::Mpls::Mpls()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{

    yang_name = "mpls"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::Mpls::~Mpls()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_label.yfilter)
	|| ydk::is_set(pw_local_label.yfilter)
	|| ydk::is_set(pw_tunnel_interface.yfilter)
	|| ydk::is_set(pw_xcid.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.yfilter)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.yfilter)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.yfilter)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.yfilter)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
        pw_label.value_namespace = name_space;
        pw_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
        pw_local_label.value_namespace = name_space;
        pw_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
        pw_tunnel_interface.value_namespace = name_space;
        pw_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
        pw_xcid.value_namespace = name_space;
        pw_xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-label")
    {
        pw_label.yfilter = yfilter;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label.yfilter = yfilter;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-label" || name == "pw-local-label" || name == "pw-tunnel-interface" || name == "pw-xcid")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::L2tp()
    :
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"}
        ,
    local(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Local>())
    , remote(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tp"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::~L2tp()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::has_data() const
{
    if (is_presence_container) return true;
    return tos_val.is_set
	|| ttl.is_set
	|| path_mtu.is_set
	|| sequence_number_sent.is_set
	|| sequence_number_expected.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "tos-val" || name == "ttl" || name == "path-mtu" || name == "sequence-number-sent" || name == "sequence-number-expected")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"}
{

    yang_name = "local"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Local::~Local()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Local::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"}
{

    yang_name = "remote"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Remote::~Remote()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Remote::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::L2tpv2()
    :
    pw_flags{YType::uint8, "pw-flags"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    path_mtu{YType::uint16, "path-mtu"},
    protocol{YType::uint16, "protocol"},
    rem_udp_port{YType::uint16, "rem-udp-port"},
    xconnect_id{YType::uint32, "xconnect-id"},
    next_hop_address{YType::str, "next-hop-address"},
    source_address{YType::str, "source-address"}
        ,
    local(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Local>())
    , remote(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tpv2"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::~L2tpv2()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::has_data() const
{
    if (is_presence_container) return true;
    return pw_flags.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| path_mtu.is_set
	|| protocol.is_set
	|| rem_udp_port.is_set
	|| xconnect_id.is_set
	|| next_hop_address.is_set
	|| source_address.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_flags.yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(rem_udp_port.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_flags.is_set || is_set(pw_flags.yfilter)) leaf_name_data.push_back(pw_flags.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rem_udp_port.is_set || is_set(rem_udp_port.yfilter)) leaf_name_data.push_back(rem_udp_port.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-flags")
    {
        pw_flags = value;
        pw_flags.value_namespace = name_space;
        pw_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port = value;
        rem_udp_port.value_namespace = name_space;
        rem_udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-flags")
    {
        pw_flags.yfilter = yfilter;
    }
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "pw-flags" || name == "tos-val" || name == "ttl" || name == "path-mtu" || name == "protocol" || name == "rem-udp-port" || name == "xconnect-id" || name == "next-hop-address" || name == "source-address")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "local"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::~Local()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tunnel-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "remote"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::~Remote()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tunnel-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::L2tpIpv6Ts()
    :
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
        ,
    local(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local>())
    , remote(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tp-ipv6-ts"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::~L2tpIpv6Ts()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::has_data() const
{
    if (is_presence_container) return true;
    return tos_val.is_set
	|| ttl.is_set
	|| path_mtu.is_set
	|| sequence_number_sent.is_set
	|| sequence_number_expected.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-ipv6-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "tos-val" || name == "ttl" || name == "path-mtu" || name == "sequence-number-sent" || name == "sequence-number-expected" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::Local()
    :
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"},
    secondary_cookie_size{YType::uint8, "secondary-cookie-size"},
    secondary_cookie_low_value{YType::uint32, "secondary-cookie-low-value"},
    secondary_cookie_high_value{YType::uint32, "secondary-cookie-high-value"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "local"; yang_parent_name = "l2tp-ipv6-ts"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::~Local()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::has_data() const
{
    if (is_presence_container) return true;
    return cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set
	|| secondary_cookie_size.is_set
	|| secondary_cookie_low_value.is_set
	|| secondary_cookie_high_value.is_set
	|| session_id.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter)
	|| ydk::is_set(secondary_cookie_size.yfilter)
	|| ydk::is_set(secondary_cookie_low_value.yfilter)
	|| ydk::is_set(secondary_cookie_high_value.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (secondary_cookie_size.is_set || is_set(secondary_cookie_size.yfilter)) leaf_name_data.push_back(secondary_cookie_size.get_name_leafdata());
    if (secondary_cookie_low_value.is_set || is_set(secondary_cookie_low_value.yfilter)) leaf_name_data.push_back(secondary_cookie_low_value.get_name_leafdata());
    if (secondary_cookie_high_value.is_set || is_set(secondary_cookie_high_value.yfilter)) leaf_name_data.push_back(secondary_cookie_high_value.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size = value;
        secondary_cookie_size.value_namespace = name_space;
        secondary_cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value = value;
        secondary_cookie_low_value.value_namespace = name_space;
        secondary_cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value = value;
        secondary_cookie_high_value.value_namespace = name_space;
        secondary_cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value" || name == "secondary-cookie-size" || name == "secondary-cookie-low-value" || name == "secondary-cookie-high-value" || name == "session-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"}
{

    yang_name = "remote"; yang_parent_name = "l2tp-ipv6-ts"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::~Remote()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::BackupPseudoWire()
    :
    backup_next_hop{YType::str, "backup-next-hop"},
    backup_pseudo_wire_id_type{YType::enumeration, "backup-pseudo-wire-id-type"},
    backup_pseudo_wire_id{YType::uint32, "backup-pseudo-wire-id"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    active{YType::boolean, "active"},
    bound{YType::boolean, "bound"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    grouping_supported{YType::boolean, "grouping-supported"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"}
        ,
    atom(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::Atom>())
{
    atom->parent = this;

    yang_name = "backup-pseudo-wire"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::~BackupPseudoWire()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::has_data() const
{
    if (is_presence_container) return true;
    return backup_next_hop.is_set
	|| backup_pseudo_wire_id_type.is_set
	|| backup_pseudo_wire_id.is_set
	|| redundancy_role.is_set
	|| active.is_set
	|| bound.is_set
	|| pw_flow_label_tx.is_set
	|| grouping_supported.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| (atom !=  nullptr && atom->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_next_hop.yfilter)
	|| ydk::is_set(backup_pseudo_wire_id_type.yfilter)
	|| ydk::is_set(backup_pseudo_wire_id.yfilter)
	|| ydk::is_set(redundancy_role.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(pw_flow_label_tx.yfilter)
	|| ydk::is_set(grouping_supported.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_state.yfilter)
	|| (atom !=  nullptr && atom->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudo-wire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_next_hop.is_set || is_set(backup_next_hop.yfilter)) leaf_name_data.push_back(backup_next_hop.get_name_leafdata());
    if (backup_pseudo_wire_id_type.is_set || is_set(backup_pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(backup_pseudo_wire_id_type.get_name_leafdata());
    if (backup_pseudo_wire_id.is_set || is_set(backup_pseudo_wire_id.yfilter)) leaf_name_data.push_back(backup_pseudo_wire_id.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.yfilter)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.yfilter)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.yfilter)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.yfilter)) leaf_name_data.push_back(group_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atom")
    {
        if(atom == nullptr)
        {
            atom = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::Atom>();
        }
        return atom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atom != nullptr)
    {
        _children["atom"] = atom;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-next-hop")
    {
        backup_next_hop = value;
        backup_next_hop.value_namespace = name_space;
        backup_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type = value;
        backup_pseudo_wire_id_type.value_namespace = name_space;
        backup_pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id = value;
        backup_pseudo_wire_id.value_namespace = name_space;
        backup_pseudo_wire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
        redundancy_role.value_namespace = name_space;
        redundancy_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
        pw_flow_label_tx.value_namespace = name_space;
        pw_flow_label_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
        grouping_supported.value_namespace = name_space;
        grouping_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-state")
    {
        group_state = value;
        group_state.value_namespace = name_space;
        group_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-next-hop")
    {
        backup_next_hop.yfilter = yfilter;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx.yfilter = yfilter;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-state")
    {
        group_state.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atom" || name == "backup-next-hop" || name == "backup-pseudo-wire-id-type" || name == "backup-pseudo-wire-id" || name == "redundancy-role" || name == "active" || name == "bound" || name == "pw-flow-label-tx" || name == "grouping-supported" || name == "group-id" || name == "group-state")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::Atom::Atom()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{

    yang_name = "atom"; yang_parent_name = "backup-pseudo-wire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::Atom::~Atom()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::Atom::has_data() const
{
    if (is_presence_container) return true;
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::Atom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_label.yfilter)
	|| ydk::is_set(pw_local_label.yfilter)
	|| ydk::is_set(pw_tunnel_interface.yfilter)
	|| ydk::is_set(pw_xcid.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::Atom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.yfilter)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.yfilter)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.yfilter)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.yfilter)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::Atom::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::Atom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
        pw_label.value_namespace = name_space;
        pw_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
        pw_local_label.value_namespace = name_space;
        pw_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
        pw_tunnel_interface.value_namespace = name_space;
        pw_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
        pw_xcid.value_namespace = name_space;
        pw_xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::Atom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-label")
    {
        pw_label.yfilter = yfilter;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label.yfilter = yfilter;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::Atom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-label" || name == "pw-local-label" || name == "pw-tunnel-interface" || name == "pw-xcid")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6s()
    :
    l2fib_mroute_ipv6(this, {})
{

    yang_name = "l2fib-mroute-ipv6s"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::~L2fibMrouteIpv6s()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_mroute_ipv6.len(); index++)
    {
        if(l2fib_mroute_ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mroute_ipv6.len(); index++)
    {
        if(l2fib_mroute_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute-ipv6s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mroute-ipv6")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6>();
        ent_->parent = this;
        l2fib_mroute_ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_mroute_ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mroute-ipv6")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::L2fibMrouteIpv6()
    :
    source{YType::str, "source"},
    group{YType::str, "group"},
    bd_group_name{YType::str, "bd-group-name"},
    bd_name{YType::str, "bd-name"},
    bridge_id{YType::uint32, "bridge-id"},
    xid_count{YType::uint16, "xid-count"},
    platform_data_length{YType::uint8, "platform-data-length"},
    platform_data{YType::str, "platform-data"},
    hardware_information{YType::str, "hardware-information"},
    bridge_domain_name{YType::str, "bridge-domain-name"}
        ,
    multicast_base_information(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::MulticastBaseInformation>())
    , source_prefix(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::SourcePrefix>())
    , destination_prefix(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::DestinationPrefix>())
    , forward_stats(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats>())
    , irb_info(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::IrbInfo>())
{
    multicast_base_information->parent = this;
    source_prefix->parent = this;
    destination_prefix->parent = this;
    forward_stats->parent = this;
    irb_info->parent = this;

    yang_name = "l2fib-mroute-ipv6"; yang_parent_name = "l2fib-mroute-ipv6s"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::~L2fibMrouteIpv6()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| group.is_set
	|| bd_group_name.is_set
	|| bd_name.is_set
	|| bridge_id.is_set
	|| xid_count.is_set
	|| platform_data_length.is_set
	|| platform_data.is_set
	|| hardware_information.is_set
	|| bridge_domain_name.is_set
	|| (multicast_base_information !=  nullptr && multicast_base_information->has_data())
	|| (source_prefix !=  nullptr && source_prefix->has_data())
	|| (destination_prefix !=  nullptr && destination_prefix->has_data())
	|| (forward_stats !=  nullptr && forward_stats->has_data())
	|| (irb_info !=  nullptr && irb_info->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(bd_group_name.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(xid_count.yfilter)
	|| ydk::is_set(platform_data_length.yfilter)
	|| ydk::is_set(platform_data.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| (multicast_base_information !=  nullptr && multicast_base_information->has_operation())
	|| (source_prefix !=  nullptr && source_prefix->has_operation())
	|| (destination_prefix !=  nullptr && destination_prefix->has_operation())
	|| (forward_stats !=  nullptr && forward_stats->has_operation())
	|| (irb_info !=  nullptr && irb_info->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute-ipv6";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (bd_group_name.is_set || is_set(bd_group_name.yfilter)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (xid_count.is_set || is_set(xid_count.yfilter)) leaf_name_data.push_back(xid_count.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.yfilter)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());
    if (platform_data.is_set || is_set(platform_data.yfilter)) leaf_name_data.push_back(platform_data.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-base-information")
    {
        if(multicast_base_information == nullptr)
        {
            multicast_base_information = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::MulticastBaseInformation>();
        }
        return multicast_base_information;
    }

    if(child_yang_name == "source-prefix")
    {
        if(source_prefix == nullptr)
        {
            source_prefix = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::SourcePrefix>();
        }
        return source_prefix;
    }

    if(child_yang_name == "destination-prefix")
    {
        if(destination_prefix == nullptr)
        {
            destination_prefix = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::DestinationPrefix>();
        }
        return destination_prefix;
    }

    if(child_yang_name == "forward-stats")
    {
        if(forward_stats == nullptr)
        {
            forward_stats = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats>();
        }
        return forward_stats;
    }

    if(child_yang_name == "irb-info")
    {
        if(irb_info == nullptr)
        {
            irb_info = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::IrbInfo>();
        }
        return irb_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast_base_information != nullptr)
    {
        _children["multicast-base-information"] = multicast_base_information;
    }

    if(source_prefix != nullptr)
    {
        _children["source-prefix"] = source_prefix;
    }

    if(destination_prefix != nullptr)
    {
        _children["destination-prefix"] = destination_prefix;
    }

    if(forward_stats != nullptr)
    {
        _children["forward-stats"] = forward_stats;
    }

    if(irb_info != nullptr)
    {
        _children["irb-info"] = irb_info;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-group-name")
    {
        bd_group_name = value;
        bd_group_name.value_namespace = name_space;
        bd_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid-count")
    {
        xid_count = value;
        xid_count.value_namespace = name_space;
        xid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
        platform_data_length.value_namespace = name_space;
        platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-data")
    {
        platform_data = value;
        platform_data.value_namespace = name_space;
        platform_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "bd-group-name")
    {
        bd_group_name.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "xid-count")
    {
        xid_count.yfilter = yfilter;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length.yfilter = yfilter;
    }
    if(value_path == "platform-data")
    {
        platform_data.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-base-information" || name == "source-prefix" || name == "destination-prefix" || name == "forward-stats" || name == "irb-info" || name == "source" || name == "group" || name == "bd-group-name" || name == "bd-name" || name == "bridge-id" || name == "xid-count" || name == "platform-data-length" || name == "platform-data" || name == "hardware-information" || name == "bridge-domain-name")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::MulticastBaseInformation::MulticastBaseInformation()
{

    yang_name = "multicast-base-information"; yang_parent_name = "l2fib-mroute-ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::MulticastBaseInformation::~MulticastBaseInformation()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::MulticastBaseInformation::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::MulticastBaseInformation::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::MulticastBaseInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-base-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::MulticastBaseInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::MulticastBaseInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::MulticastBaseInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::MulticastBaseInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::MulticastBaseInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::MulticastBaseInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::SourcePrefix::SourcePrefix()
    :
    proto{YType::uint8, "proto"},
    prefix_length{YType::uint16, "prefix-length"},
    prefix{YType::str, "prefix"}
{

    yang_name = "source-prefix"; yang_parent_name = "l2fib-mroute-ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::SourcePrefix::~SourcePrefix()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::SourcePrefix::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| prefix_length.is_set
	|| prefix.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::SourcePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::SourcePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::SourcePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::SourcePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::SourcePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::SourcePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::SourcePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::SourcePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "prefix-length" || name == "prefix")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::DestinationPrefix::DestinationPrefix()
    :
    proto{YType::uint8, "proto"},
    prefix_length{YType::uint16, "prefix-length"},
    prefix{YType::str, "prefix"}
{

    yang_name = "destination-prefix"; yang_parent_name = "l2fib-mroute-ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::DestinationPrefix::~DestinationPrefix()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::DestinationPrefix::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| prefix_length.is_set
	|| prefix.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::DestinationPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::DestinationPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::DestinationPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::DestinationPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::DestinationPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::DestinationPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::DestinationPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::DestinationPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "prefix-length" || name == "prefix")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStats()
    :
    forward_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat>())
{
    forward_stat->parent = this;

    yang_name = "forward-stats"; yang_parent_name = "l2fib-mroute-ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::~ForwardStats()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::has_data() const
{
    if (is_presence_container) return true;
    return (forward_stat !=  nullptr && forward_stat->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::has_operation() const
{
    return is_set(yfilter)
	|| (forward_stat !=  nullptr && forward_stat->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-stat")
    {
        if(forward_stat == nullptr)
        {
            forward_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat>();
        }
        return forward_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(forward_stat != nullptr)
    {
        _children["forward-stat"] = forward_stat;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-stat")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::ForwardStat()
    :
    data_type{YType::enumeration, "data-type"}
        ,
    mulicast(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast>())
{
    mulicast->parent = this;

    yang_name = "forward-stat"; yang_parent_name = "forward-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::~ForwardStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| (mulicast !=  nullptr && mulicast->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (mulicast !=  nullptr && mulicast->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mulicast")
    {
        if(mulicast == nullptr)
        {
            mulicast = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast>();
        }
        return mulicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mulicast != nullptr)
    {
        _children["mulicast"] = mulicast;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mulicast" || name == "data-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Mulicast()
    :
    multicast_forward_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>())
    , received_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat>())
    , punt(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt>())
    , drop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop>())
    , multicast_core_forward_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>())
    , core_received_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>())
{
    multicast_forward_stat->parent = this;
    received_stat->parent = this;
    punt->parent = this;
    drop->parent = this;
    multicast_core_forward_stat->parent = this;
    core_received_stat->parent = this;

    yang_name = "mulicast"; yang_parent_name = "forward-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::~Mulicast()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::has_data() const
{
    if (is_presence_container) return true;
    return (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_data())
	|| (received_stat !=  nullptr && received_stat->has_data())
	|| (punt !=  nullptr && punt->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_data())
	|| (core_received_stat !=  nullptr && core_received_stat->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::has_operation() const
{
    return is_set(yfilter)
	|| (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_operation())
	|| (received_stat !=  nullptr && received_stat->has_operation())
	|| (punt !=  nullptr && punt->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_operation())
	|| (core_received_stat !=  nullptr && core_received_stat->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mulicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-forward-stat")
    {
        if(multicast_forward_stat == nullptr)
        {
            multicast_forward_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>();
        }
        return multicast_forward_stat;
    }

    if(child_yang_name == "received-stat")
    {
        if(received_stat == nullptr)
        {
            received_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat>();
        }
        return received_stat;
    }

    if(child_yang_name == "punt")
    {
        if(punt == nullptr)
        {
            punt = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt>();
        }
        return punt;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "multicast-core-forward-stat")
    {
        if(multicast_core_forward_stat == nullptr)
        {
            multicast_core_forward_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>();
        }
        return multicast_core_forward_stat;
    }

    if(child_yang_name == "core-received-stat")
    {
        if(core_received_stat == nullptr)
        {
            core_received_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>();
        }
        return core_received_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast_forward_stat != nullptr)
    {
        _children["multicast-forward-stat"] = multicast_forward_stat;
    }

    if(received_stat != nullptr)
    {
        _children["received-stat"] = received_stat;
    }

    if(punt != nullptr)
    {
        _children["punt"] = punt;
    }

    if(drop != nullptr)
    {
        _children["drop"] = drop;
    }

    if(multicast_core_forward_stat != nullptr)
    {
        _children["multicast-core-forward-stat"] = multicast_core_forward_stat;
    }

    if(core_received_stat != nullptr)
    {
        _children["core-received-stat"] = core_received_stat;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-forward-stat" || name == "received-stat" || name == "punt" || name == "drop" || name == "multicast-core-forward-stat" || name == "core-received-stat")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::MulticastForwardStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "multicast-forward-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::~MulticastForwardStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::ReceivedStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "received-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::~ReceivedStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::Punt()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "punt"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::~Punt()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::Drop()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "drop"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::~Drop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::MulticastCoreForwardStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "multicast-core-forward-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::~MulticastCoreForwardStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-core-forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::CoreReceivedStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "core-received-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::~CoreReceivedStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-received-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::IrbInfo::IrbInfo()
    :
    mxid_ac_interface_handle{YType::str, "mxid-ac-interface-handle"},
    mxid_pw_id{YType::uint32, "mxid-pw-id"},
    mxid_next_hop_address{YType::str, "mxid-next-hop-address"},
    irb_plat_data_len{YType::uint16, "irb-plat-data-len"},
    irb_plat_data{YType::uint32, "irb-plat-data"}
{

    yang_name = "irb-info"; yang_parent_name = "l2fib-mroute-ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::IrbInfo::~IrbInfo()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::IrbInfo::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : irb_plat_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return mxid_ac_interface_handle.is_set
	|| mxid_pw_id.is_set
	|| mxid_next_hop_address.is_set
	|| irb_plat_data_len.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::IrbInfo::has_operation() const
{
    for (auto const & leaf : irb_plat_data.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mxid_ac_interface_handle.yfilter)
	|| ydk::is_set(mxid_pw_id.yfilter)
	|| ydk::is_set(mxid_next_hop_address.yfilter)
	|| ydk::is_set(irb_plat_data_len.yfilter)
	|| ydk::is_set(irb_plat_data.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::IrbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "irb-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::IrbInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mxid_ac_interface_handle.is_set || is_set(mxid_ac_interface_handle.yfilter)) leaf_name_data.push_back(mxid_ac_interface_handle.get_name_leafdata());
    if (mxid_pw_id.is_set || is_set(mxid_pw_id.yfilter)) leaf_name_data.push_back(mxid_pw_id.get_name_leafdata());
    if (mxid_next_hop_address.is_set || is_set(mxid_next_hop_address.yfilter)) leaf_name_data.push_back(mxid_next_hop_address.get_name_leafdata());
    if (irb_plat_data_len.is_set || is_set(irb_plat_data_len.yfilter)) leaf_name_data.push_back(irb_plat_data_len.get_name_leafdata());

    auto irb_plat_data_name_datas = irb_plat_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), irb_plat_data_name_datas.begin(), irb_plat_data_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::IrbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::IrbInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::IrbInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mxid-ac-interface-handle")
    {
        mxid_ac_interface_handle = value;
        mxid_ac_interface_handle.value_namespace = name_space;
        mxid_ac_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mxid-pw-id")
    {
        mxid_pw_id = value;
        mxid_pw_id.value_namespace = name_space;
        mxid_pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mxid-next-hop-address")
    {
        mxid_next_hop_address = value;
        mxid_next_hop_address.value_namespace = name_space;
        mxid_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "irb-plat-data-len")
    {
        irb_plat_data_len = value;
        irb_plat_data_len.value_namespace = name_space;
        irb_plat_data_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "irb-plat-data")
    {
        irb_plat_data.append(value);
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::IrbInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mxid-ac-interface-handle")
    {
        mxid_ac_interface_handle.yfilter = yfilter;
    }
    if(value_path == "mxid-pw-id")
    {
        mxid_pw_id.yfilter = yfilter;
    }
    if(value_path == "mxid-next-hop-address")
    {
        mxid_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "irb-plat-data-len")
    {
        irb_plat_data_len.yfilter = yfilter;
    }
    if(value_path == "irb-plat-data")
    {
        irb_plat_data.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::IrbInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mxid-ac-interface-handle" || name == "mxid-pw-id" || name == "mxid-next-hop-address" || name == "irb-plat-data-len" || name == "irb-plat-data")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCons()
    :
    l2fib_mon_sess_x_con(this, {"monitor_session_name"})
{

    yang_name = "l2fib-mon-sess-x-cons"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::~L2fibMonSessXCons()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_mon_sess_x_con.len(); index++)
    {
        if(l2fib_mon_sess_x_con[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mon_sess_x_con.len(); index++)
    {
        if(l2fib_mon_sess_x_con[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mon-sess-x-cons";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mon-sess-x-con")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon>();
        ent_->parent = this;
        l2fib_mon_sess_x_con.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_mon_sess_x_con.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mon-sess-x-con")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::L2fibMonSessXCon()
    :
    monitor_session_name{YType::str, "monitor-session-name"},
    xcon_name{YType::str, "xcon-name"},
    bound{YType::boolean, "bound"},
    switching_type{YType::enumeration, "switching-type"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Base>())
    , segment1(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1>())
    , segment2(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment2>())
{
    base->parent = this;
    segment1->parent = this;
    segment2->parent = this;

    yang_name = "l2fib-mon-sess-x-con"; yang_parent_name = "l2fib-mon-sess-x-cons"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::~L2fibMonSessXCon()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::has_data() const
{
    if (is_presence_container) return true;
    return monitor_session_name.is_set
	|| xcon_name.is_set
	|| bound.is_set
	|| switching_type.is_set
	|| (base !=  nullptr && base->has_data())
	|| (segment1 !=  nullptr && segment1->has_data())
	|| (segment2 !=  nullptr && segment2->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_session_name.yfilter)
	|| ydk::is_set(xcon_name.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(switching_type.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (segment1 !=  nullptr && segment1->has_operation())
	|| (segment2 !=  nullptr && segment2->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mon-sess-x-con";
    ADD_KEY_TOKEN(monitor_session_name, "monitor-session-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_session_name.is_set || is_set(monitor_session_name.yfilter)) leaf_name_data.push_back(monitor_session_name.get_name_leafdata());
    if (xcon_name.is_set || is_set(xcon_name.yfilter)) leaf_name_data.push_back(xcon_name.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (switching_type.is_set || is_set(switching_type.yfilter)) leaf_name_data.push_back(switching_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Base>();
        }
        return base;
    }

    if(child_yang_name == "segment1")
    {
        if(segment1 == nullptr)
        {
            segment1 = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1>();
        }
        return segment1;
    }

    if(child_yang_name == "segment2")
    {
        if(segment2 == nullptr)
        {
            segment2 = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment2>();
        }
        return segment2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(segment1 != nullptr)
    {
        _children["segment1"] = segment1;
    }

    if(segment2 != nullptr)
    {
        _children["segment2"] = segment2;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-session-name")
    {
        monitor_session_name = value;
        monitor_session_name.value_namespace = name_space;
        monitor_session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcon-name")
    {
        xcon_name = value;
        xcon_name.value_namespace = name_space;
        xcon_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-type")
    {
        switching_type = value;
        switching_type.value_namespace = name_space;
        switching_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-session-name")
    {
        monitor_session_name.yfilter = yfilter;
    }
    if(value_path == "xcon-name")
    {
        xcon_name.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "switching-type")
    {
        switching_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "segment1" || name == "segment2" || name == "monitor-session-name" || name == "xcon-name" || name == "bound" || name == "switching-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2fib-mon-sess-x-con"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Segment1()
    :
    data_type{YType::enumeration, "data-type"}
        ,
    ac(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac>())
    , pbb(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb>())
    , vni(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni>())
    , evpn(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn>())
    , monitor_session(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession>())
    , pw(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw>())
{
    ac->parent = this;
    pbb->parent = this;
    vni->parent = this;
    evpn->parent = this;
    monitor_session->parent = this;
    pw->parent = this;

    yang_name = "segment1"; yang_parent_name = "l2fib-mon-sess-x-con"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::~Segment1()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (vni !=  nullptr && vni->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (monitor_session !=  nullptr && monitor_session->has_data())
	|| (pw !=  nullptr && pw->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (vni !=  nullptr && vni->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (monitor_session !=  nullptr && monitor_session->has_operation())
	|| (pw !=  nullptr && pw->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb>();
        }
        return pbb;
    }

    if(child_yang_name == "vni")
    {
        if(vni == nullptr)
        {
            vni = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni>();
        }
        return vni;
    }

    if(child_yang_name == "evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "monitor-session")
    {
        if(monitor_session == nullptr)
        {
            monitor_session = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession>();
        }
        return monitor_session;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw>();
        }
        return pw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ac != nullptr)
    {
        _children["ac"] = ac;
    }

    if(pbb != nullptr)
    {
        _children["pbb"] = pbb;
    }

    if(vni != nullptr)
    {
        _children["vni"] = vni;
    }

    if(evpn != nullptr)
    {
        _children["evpn"] = evpn;
    }

    if(monitor_session != nullptr)
    {
        _children["monitor-session"] = monitor_session;
    }

    if(pw != nullptr)
    {
        _children["pw"] = pw;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "pbb" || name == "vni" || name == "evpn" || name == "monitor-session" || name == "pw" || name == "data-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::Ac()
    :
    interface_name{YType::str, "interface-name"},
    sub_interface_handle{YType::str, "sub-interface-handle"},
    attachment_circuit_id{YType::uint32, "attachment-circuit-id"},
    attachment_circuit_mtu{YType::uint16, "attachment-circuit-mtu"},
    actype{YType::uint8, "actype"},
    inter_working_mode{YType::uint8, "inter-working-mode"},
    adjacency_valid{YType::boolean, "adjacency-valid"},
    adjacency_address{YType::str, "adjacency-address"},
    bound{YType::boolean, "bound"},
    ip_inter_working_mac{YType::str, "ip-inter-working-mac"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"},
    fxc_next_hop_valid{YType::boolean, "fxc-next-hop-valid"},
    vlan_id_count{YType::uint8, "vlan-id-count"},
    first_vlan_id{YType::uint16, "first-vlan-id"},
    second_vlan_id{YType::uint16, "second-vlan-id"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::Base>())
    , fxc_next_hop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop>())
{
    base->parent = this;
    fxc_next_hop->parent = this;

    yang_name = "ac"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::~Ac()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| sub_interface_handle.is_set
	|| attachment_circuit_id.is_set
	|| attachment_circuit_mtu.is_set
	|| actype.is_set
	|| inter_working_mode.is_set
	|| adjacency_valid.is_set
	|| adjacency_address.is_set
	|| bound.is_set
	|| ip_inter_working_mac.is_set
	|| redundancy_group_id.is_set
	|| redundancy_object_id.is_set
	|| evpn_internal_label.is_set
	|| fxc_next_hop_valid.is_set
	|| vlan_id_count.is_set
	|| first_vlan_id.is_set
	|| second_vlan_id.is_set
	|| (base !=  nullptr && base->has_data())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(sub_interface_handle.yfilter)
	|| ydk::is_set(attachment_circuit_id.yfilter)
	|| ydk::is_set(attachment_circuit_mtu.yfilter)
	|| ydk::is_set(actype.yfilter)
	|| ydk::is_set(inter_working_mode.yfilter)
	|| ydk::is_set(adjacency_valid.yfilter)
	|| ydk::is_set(adjacency_address.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(ip_inter_working_mac.yfilter)
	|| ydk::is_set(redundancy_group_id.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter)
	|| ydk::is_set(evpn_internal_label.yfilter)
	|| ydk::is_set(fxc_next_hop_valid.yfilter)
	|| ydk::is_set(vlan_id_count.yfilter)
	|| ydk::is_set(first_vlan_id.yfilter)
	|| ydk::is_set(second_vlan_id.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sub_interface_handle.is_set || is_set(sub_interface_handle.yfilter)) leaf_name_data.push_back(sub_interface_handle.get_name_leafdata());
    if (attachment_circuit_id.is_set || is_set(attachment_circuit_id.yfilter)) leaf_name_data.push_back(attachment_circuit_id.get_name_leafdata());
    if (attachment_circuit_mtu.is_set || is_set(attachment_circuit_mtu.yfilter)) leaf_name_data.push_back(attachment_circuit_mtu.get_name_leafdata());
    if (actype.is_set || is_set(actype.yfilter)) leaf_name_data.push_back(actype.get_name_leafdata());
    if (inter_working_mode.is_set || is_set(inter_working_mode.yfilter)) leaf_name_data.push_back(inter_working_mode.get_name_leafdata());
    if (adjacency_valid.is_set || is_set(adjacency_valid.yfilter)) leaf_name_data.push_back(adjacency_valid.get_name_leafdata());
    if (adjacency_address.is_set || is_set(adjacency_address.yfilter)) leaf_name_data.push_back(adjacency_address.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (ip_inter_working_mac.is_set || is_set(ip_inter_working_mac.yfilter)) leaf_name_data.push_back(ip_inter_working_mac.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.yfilter)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.yfilter)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());
    if (fxc_next_hop_valid.is_set || is_set(fxc_next_hop_valid.yfilter)) leaf_name_data.push_back(fxc_next_hop_valid.get_name_leafdata());
    if (vlan_id_count.is_set || is_set(vlan_id_count.yfilter)) leaf_name_data.push_back(vlan_id_count.get_name_leafdata());
    if (first_vlan_id.is_set || is_set(first_vlan_id.yfilter)) leaf_name_data.push_back(first_vlan_id.get_name_leafdata());
    if (second_vlan_id.is_set || is_set(second_vlan_id.yfilter)) leaf_name_data.push_back(second_vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::Base>();
        }
        return base;
    }

    if(child_yang_name == "fxc-next-hop")
    {
        if(fxc_next_hop == nullptr)
        {
            fxc_next_hop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop>();
        }
        return fxc_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(fxc_next_hop != nullptr)
    {
        _children["fxc-next-hop"] = fxc_next_hop;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle = value;
        sub_interface_handle.value_namespace = name_space;
        sub_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id = value;
        attachment_circuit_id.value_namespace = name_space;
        attachment_circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu = value;
        attachment_circuit_mtu.value_namespace = name_space;
        attachment_circuit_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actype")
    {
        actype = value;
        actype.value_namespace = name_space;
        actype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode = value;
        inter_working_mode.value_namespace = name_space;
        inter_working_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid = value;
        adjacency_valid.value_namespace = name_space;
        adjacency_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address = value;
        adjacency_address.value_namespace = name_space;
        adjacency_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac = value;
        ip_inter_working_mac.value_namespace = name_space;
        ip_inter_working_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
        redundancy_group_id.value_namespace = name_space;
        redundancy_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
        evpn_internal_label.value_namespace = name_space;
        evpn_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid = value;
        fxc_next_hop_valid.value_namespace = name_space;
        fxc_next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id-count")
    {
        vlan_id_count = value;
        vlan_id_count.value_namespace = name_space;
        vlan_id_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-vlan-id")
    {
        first_vlan_id = value;
        first_vlan_id.value_namespace = name_space;
        first_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-vlan-id")
    {
        second_vlan_id = value;
        second_vlan_id.value_namespace = name_space;
        second_vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu.yfilter = yfilter;
    }
    if(value_path == "actype")
    {
        actype.yfilter = yfilter;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode.yfilter = yfilter;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid.yfilter = yfilter;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label.yfilter = yfilter;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "vlan-id-count")
    {
        vlan_id_count.yfilter = yfilter;
    }
    if(value_path == "first-vlan-id")
    {
        first_vlan_id.yfilter = yfilter;
    }
    if(value_path == "second-vlan-id")
    {
        second_vlan_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "fxc-next-hop" || name == "interface-name" || name == "sub-interface-handle" || name == "attachment-circuit-id" || name == "attachment-circuit-mtu" || name == "actype" || name == "inter-working-mode" || name == "adjacency-valid" || name == "adjacency-address" || name == "bound" || name == "ip-inter-working-mac" || name == "redundancy-group-id" || name == "redundancy-object-id" || name == "evpn-internal-label" || name == "fxc-next-hop-valid" || name == "vlan-id-count" || name == "first-vlan-id" || name == "second-vlan-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::Base::Base()
{

    yang_name = "base"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::FxcNextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    children_count{YType::uint32, "children-count"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::Base>())
{
    base->parent = this;

    yang_name = "fxc-next-hop"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::~FxcNextHop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| children_count.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxc-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "children-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "fxc-next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::Pbb()
    :
    bound{YType::boolean, "bound"},
    forward_class{YType::uint8, "forward-class"},
    core_pbb_evpn_enabled{YType::boolean, "core-pbb-evpn-enabled"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::Base>())
    , pbb_union(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion>())
{
    base->parent = this;
    pbb_union->parent = this;

    yang_name = "pbb"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::~Pbb()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::has_data() const
{
    if (is_presence_container) return true;
    return bound.is_set
	|| forward_class.is_set
	|| core_pbb_evpn_enabled.is_set
	|| (base !=  nullptr && base->has_data())
	|| (pbb_union !=  nullptr && pbb_union->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(core_pbb_evpn_enabled.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (pbb_union !=  nullptr && pbb_union->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (core_pbb_evpn_enabled.is_set || is_set(core_pbb_evpn_enabled.yfilter)) leaf_name_data.push_back(core_pbb_evpn_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::Base>();
        }
        return base;
    }

    if(child_yang_name == "pbb-union")
    {
        if(pbb_union == nullptr)
        {
            pbb_union = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion>();
        }
        return pbb_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(pbb_union != nullptr)
    {
        _children["pbb-union"] = pbb_union;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-pbb-evpn-enabled")
    {
        core_pbb_evpn_enabled = value;
        core_pbb_evpn_enabled.value_namespace = name_space;
        core_pbb_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "core-pbb-evpn-enabled")
    {
        core_pbb_evpn_enabled.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "pbb-union" || name == "bound" || name == "forward-class" || name == "core-pbb-evpn-enabled")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::Base::Base()
{

    yang_name = "base"; yang_parent_name = "pbb"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::PbbUnion()
    :
    pbb_type{YType::enumeration, "pbb-type"}
        ,
    edge(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Edge>())
    , core(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Core>())
{
    edge->parent = this;
    core->parent = this;

    yang_name = "pbb-union"; yang_parent_name = "pbb"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::~PbbUnion()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::has_data() const
{
    if (is_presence_container) return true;
    return pbb_type.is_set
	|| (edge !=  nullptr && edge->has_data())
	|| (core !=  nullptr && core->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_type.yfilter)
	|| (edge !=  nullptr && edge->has_operation())
	|| (core !=  nullptr && core->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_type.is_set || is_set(pbb_type.yfilter)) leaf_name_data.push_back(pbb_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "edge")
    {
        if(edge == nullptr)
        {
            edge = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Edge>();
        }
        return edge;
    }

    if(child_yang_name == "core")
    {
        if(core == nullptr)
        {
            core = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Core>();
        }
        return core;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(edge != nullptr)
    {
        _children["edge"] = edge;
    }

    if(core != nullptr)
    {
        _children["core"] = core;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-type")
    {
        pbb_type = value;
        pbb_type.value_namespace = name_space;
        pbb_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-type")
    {
        pbb_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "edge" || name == "core" || name == "pbb-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::Edge()
    :
    mac_configured{YType::boolean, "mac-configured"},
    mac{YType::str, "mac"}
{

    yang_name = "edge"; yang_parent_name = "pbb-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::~Edge()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::has_data() const
{
    if (is_presence_container) return true;
    return mac_configured.is_set
	|| mac.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_configured.yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_configured.is_set || is_set(mac_configured.yfilter)) leaf_name_data.push_back(mac_configured.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-configured")
    {
        mac_configured = value;
        mac_configured.value_namespace = name_space;
        mac_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-configured")
    {
        mac_configured.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-configured" || name == "mac")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Core::Core()
    :
    vlan_id{YType::uint32, "vlan-id"}
{

    yang_name = "core"; yang_parent_name = "pbb-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Core::~Core()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Core::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Core::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Core::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Core::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Core::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Core::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Core::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Core::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Core::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::Vni()
    :
    srcip{YType::str, "srcip"},
    mcastip{YType::str, "mcastip"},
    bound{YType::boolean, "bound"},
    parent_if{YType::str, "parent-if"},
    encap{YType::uint32, "encap"},
    udp_port{YType::uint32, "udp-port"},
    source_vtep_if{YType::str, "source-vtep-if"},
    any_cast_ip{YType::str, "any-cast-ip"},
    anycast_mcast_ip{YType::str, "anycast-mcast-ip"},
    ingress_replication{YType::boolean, "ingress-replication"},
    vx_lan_mode{YType::uint32, "vx-lan-mode"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::Base>())
{
    base->parent = this;

    yang_name = "vni"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::~Vni()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::has_data() const
{
    if (is_presence_container) return true;
    return srcip.is_set
	|| mcastip.is_set
	|| bound.is_set
	|| parent_if.is_set
	|| encap.is_set
	|| udp_port.is_set
	|| source_vtep_if.is_set
	|| any_cast_ip.is_set
	|| anycast_mcast_ip.is_set
	|| ingress_replication.is_set
	|| vx_lan_mode.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(mcastip.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(parent_if.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(udp_port.yfilter)
	|| ydk::is_set(source_vtep_if.yfilter)
	|| ydk::is_set(any_cast_ip.yfilter)
	|| ydk::is_set(anycast_mcast_ip.yfilter)
	|| ydk::is_set(ingress_replication.yfilter)
	|| ydk::is_set(vx_lan_mode.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (mcastip.is_set || is_set(mcastip.yfilter)) leaf_name_data.push_back(mcastip.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (parent_if.is_set || is_set(parent_if.yfilter)) leaf_name_data.push_back(parent_if.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.yfilter)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (source_vtep_if.is_set || is_set(source_vtep_if.yfilter)) leaf_name_data.push_back(source_vtep_if.get_name_leafdata());
    if (any_cast_ip.is_set || is_set(any_cast_ip.yfilter)) leaf_name_data.push_back(any_cast_ip.get_name_leafdata());
    if (anycast_mcast_ip.is_set || is_set(anycast_mcast_ip.yfilter)) leaf_name_data.push_back(anycast_mcast_ip.get_name_leafdata());
    if (ingress_replication.is_set || is_set(ingress_replication.yfilter)) leaf_name_data.push_back(ingress_replication.get_name_leafdata());
    if (vx_lan_mode.is_set || is_set(vx_lan_mode.yfilter)) leaf_name_data.push_back(vx_lan_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcip")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastip")
    {
        mcastip = value;
        mcastip.value_namespace = name_space;
        mcastip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-if")
    {
        parent_if = value;
        parent_if.value_namespace = name_space;
        parent_if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
        udp_port.value_namespace = name_space;
        udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-vtep-if")
    {
        source_vtep_if = value;
        source_vtep_if.value_namespace = name_space;
        source_vtep_if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any-cast-ip")
    {
        any_cast_ip = value;
        any_cast_ip.value_namespace = name_space;
        any_cast_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-mcast-ip")
    {
        anycast_mcast_ip = value;
        anycast_mcast_ip.value_namespace = name_space;
        anycast_mcast_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-replication")
    {
        ingress_replication = value;
        ingress_replication.value_namespace = name_space;
        ingress_replication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vx-lan-mode")
    {
        vx_lan_mode = value;
        vx_lan_mode.value_namespace = name_space;
        vx_lan_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcip")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "mcastip")
    {
        mcastip.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "parent-if")
    {
        parent_if.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "udp-port")
    {
        udp_port.yfilter = yfilter;
    }
    if(value_path == "source-vtep-if")
    {
        source_vtep_if.yfilter = yfilter;
    }
    if(value_path == "any-cast-ip")
    {
        any_cast_ip.yfilter = yfilter;
    }
    if(value_path == "anycast-mcast-ip")
    {
        anycast_mcast_ip.yfilter = yfilter;
    }
    if(value_path == "ingress-replication")
    {
        ingress_replication.yfilter = yfilter;
    }
    if(value_path == "vx-lan-mode")
    {
        vx_lan_mode.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "srcip" || name == "mcastip" || name == "bound" || name == "parent-if" || name == "encap" || name == "udp-port" || name == "source-vtep-if" || name == "any-cast-ip" || name == "anycast-mcast-ip" || name == "ingress-replication" || name == "vx-lan-mode")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::Base::Base()
{

    yang_name = "base"; yang_parent_name = "vni"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::Evpn()
    :
    bound{YType::boolean, "bound"},
    evi{YType::uint32, "evi"},
    forward_class{YType::uint8, "forward-class"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::Base>())
{
    base->parent = this;

    yang_name = "evpn"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::~Evpn()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::has_data() const
{
    if (is_presence_container) return true;
    return bound.is_set
	|| evi.is_set
	|| forward_class.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "bound" || name == "evi" || name == "forward-class")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::Base::Base()
{

    yang_name = "base"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::MonitorSession()
    :
    xcid{YType::uint32, "xcid"},
    session_name{YType::str, "session-name"},
    hardware_information{YType::str, "hardware-information"},
    bound{YType::boolean, "bound"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::Base>())
{
    base->parent = this;

    yang_name = "monitor-session"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::~MonitorSession()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::has_data() const
{
    if (is_presence_container) return true;
    return xcid.is_set
	|| session_name.is_set
	|| hardware_information.is_set
	|| bound.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "xcid" || name == "session-name" || name == "hardware-information" || name == "bound")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::Base::Base()
{

    yang_name = "base"; yang_parent_name = "monitor-session"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::Pw()
    :
    pw_id{YType::uint64, "pw-id"},
    signal_capability_flags{YType::uint32, "signal-capability-flags"},
    context{YType::uint16, "context"},
    sequence_resync_threshold{YType::uint16, "sequence-resync-threshold"},
    bound{YType::boolean, "bound"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    backup_configured{YType::boolean, "backup-configured"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    active{YType::boolean, "active"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_load_balance_type{YType::enumeration, "pw-load-balance-type"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    grouping_supported{YType::boolean, "grouping-supported"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    global_id{YType::uint32, "global-id"},
    ac_id{YType::uint32, "ac-id"},
    forward_class{YType::uint8, "forward-class"},
    next_hop_address{YType::str, "next-hop-address"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::Base>())
    , next_hop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop>())
    , pseudo_wire_union(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion>())
    , backup_pseudo_wire(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::BackupPseudoWire>())
{
    base->parent = this;
    next_hop->parent = this;
    pseudo_wire_union->parent = this;
    backup_pseudo_wire->parent = this;

    yang_name = "pw"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::~Pw()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::has_data() const
{
    if (is_presence_container) return true;
    return pw_id.is_set
	|| signal_capability_flags.is_set
	|| context.is_set
	|| sequence_resync_threshold.is_set
	|| bound.is_set
	|| next_hop_valid.is_set
	|| backup_configured.is_set
	|| redundancy_role.is_set
	|| active.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_load_balance_type.is_set
	|| pw_flow_label_tx.is_set
	|| grouping_supported.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| global_id.is_set
	|| ac_id.is_set
	|| forward_class.is_set
	|| next_hop_address.is_set
	|| (base !=  nullptr && base->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_data())
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(signal_capability_flags.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(sequence_resync_threshold.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(backup_configured.yfilter)
	|| ydk::is_set(redundancy_role.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(pseudo_wire_id_type.yfilter)
	|| ydk::is_set(pw_load_balance_type.yfilter)
	|| ydk::is_set(pw_flow_label_tx.yfilter)
	|| ydk::is_set(grouping_supported.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_state.yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(ac_id.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_operation())
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (signal_capability_flags.is_set || is_set(signal_capability_flags.yfilter)) leaf_name_data.push_back(signal_capability_flags.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (sequence_resync_threshold.is_set || is_set(sequence_resync_threshold.yfilter)) leaf_name_data.push_back(sequence_resync_threshold.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (backup_configured.is_set || is_set(backup_configured.yfilter)) leaf_name_data.push_back(backup_configured.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.yfilter)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_load_balance_type.is_set || is_set(pw_load_balance_type.yfilter)) leaf_name_data.push_back(pw_load_balance_type.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.yfilter)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.yfilter)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.yfilter)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (ac_id.is_set || is_set(ac_id.yfilter)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::Base>();
        }
        return base;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "pseudo-wire-union")
    {
        if(pseudo_wire_union == nullptr)
        {
            pseudo_wire_union = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion>();
        }
        return pseudo_wire_union;
    }

    if(child_yang_name == "backup-pseudo-wire")
    {
        if(backup_pseudo_wire == nullptr)
        {
            backup_pseudo_wire = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::BackupPseudoWire>();
        }
        return backup_pseudo_wire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(pseudo_wire_union != nullptr)
    {
        _children["pseudo-wire-union"] = pseudo_wire_union;
    }

    if(backup_pseudo_wire != nullptr)
    {
        _children["backup-pseudo-wire"] = backup_pseudo_wire;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags = value;
        signal_capability_flags.value_namespace = name_space;
        signal_capability_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold = value;
        sequence_resync_threshold.value_namespace = name_space;
        sequence_resync_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-configured")
    {
        backup_configured = value;
        backup_configured.value_namespace = name_space;
        backup_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
        redundancy_role.value_namespace = name_space;
        redundancy_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
        pseudo_wire_id_type.value_namespace = name_space;
        pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type = value;
        pw_load_balance_type.value_namespace = name_space;
        pw_load_balance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
        pw_flow_label_tx.value_namespace = name_space;
        pw_flow_label_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
        grouping_supported.value_namespace = name_space;
        grouping_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-state")
    {
        group_state = value;
        group_state.value_namespace = name_space;
        group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-id")
    {
        ac_id = value;
        ac_id.value_namespace = name_space;
        ac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "backup-configured")
    {
        backup_configured.yfilter = yfilter;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx.yfilter = yfilter;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-state")
    {
        group_state.yfilter = yfilter;
    }
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "ac-id")
    {
        ac_id.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop" || name == "pseudo-wire-union" || name == "backup-pseudo-wire" || name == "pw-id" || name == "signal-capability-flags" || name == "context" || name == "sequence-resync-threshold" || name == "bound" || name == "next-hop-valid" || name == "backup-configured" || name == "redundancy-role" || name == "active" || name == "pseudo-wire-id-type" || name == "pw-load-balance-type" || name == "pw-flow-label-tx" || name == "grouping-supported" || name == "group-id" || name == "group-state" || name == "global-id" || name == "ac-id" || name == "forward-class" || name == "next-hop-address")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::Base::Base()
{

    yang_name = "base"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::NextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    children_count{YType::uint32, "children-count"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::~NextHop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| children_count.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "children-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::PseudoWireUnion()
    :
    data_type{YType::enumeration, "data-type"}
        ,
    mpls(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls>())
    , l2tp(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp>())
    , l2tpv2(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2>())
    , l2tp_ipv6_ts(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts>())
{
    mpls->parent = this;
    l2tp->parent = this;
    l2tpv2->parent = this;
    l2tp_ipv6_ts->parent = this;

    yang_name = "pseudo-wire-union"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::~PseudoWireUnion()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| (mpls !=  nullptr && mpls->has_data())
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_data())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_operation())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-wire-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "l2tp")
    {
        if(l2tp == nullptr)
        {
            l2tp = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp>();
        }
        return l2tp;
    }

    if(child_yang_name == "l2tpv2")
    {
        if(l2tpv2 == nullptr)
        {
            l2tpv2 = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2>();
        }
        return l2tpv2;
    }

    if(child_yang_name == "l2tp-ipv6-ts")
    {
        if(l2tp_ipv6_ts == nullptr)
        {
            l2tp_ipv6_ts = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts>();
        }
        return l2tp_ipv6_ts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(l2tp != nullptr)
    {
        _children["l2tp"] = l2tp;
    }

    if(l2tpv2 != nullptr)
    {
        _children["l2tpv2"] = l2tpv2;
    }

    if(l2tp_ipv6_ts != nullptr)
    {
        _children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "l2tp" || name == "l2tpv2" || name == "l2tp-ipv6-ts" || name == "data-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::Mpls()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{

    yang_name = "mpls"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::~Mpls()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_label.yfilter)
	|| ydk::is_set(pw_local_label.yfilter)
	|| ydk::is_set(pw_tunnel_interface.yfilter)
	|| ydk::is_set(pw_xcid.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.yfilter)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.yfilter)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.yfilter)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.yfilter)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
        pw_label.value_namespace = name_space;
        pw_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
        pw_local_label.value_namespace = name_space;
        pw_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
        pw_tunnel_interface.value_namespace = name_space;
        pw_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
        pw_xcid.value_namespace = name_space;
        pw_xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-label")
    {
        pw_label.yfilter = yfilter;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label.yfilter = yfilter;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-label" || name == "pw-local-label" || name == "pw-tunnel-interface" || name == "pw-xcid")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::L2tp()
    :
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"}
        ,
    local(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Local>())
    , remote(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tp"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::~L2tp()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::has_data() const
{
    if (is_presence_container) return true;
    return tos_val.is_set
	|| ttl.is_set
	|| path_mtu.is_set
	|| sequence_number_sent.is_set
	|| sequence_number_expected.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "tos-val" || name == "ttl" || name == "path-mtu" || name == "sequence-number-sent" || name == "sequence-number-expected")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"}
{

    yang_name = "local"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Local::~Local()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Local::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"}
{

    yang_name = "remote"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote::~Remote()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::L2tpv2()
    :
    pw_flags{YType::uint8, "pw-flags"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    path_mtu{YType::uint16, "path-mtu"},
    protocol{YType::uint16, "protocol"},
    rem_udp_port{YType::uint16, "rem-udp-port"},
    xconnect_id{YType::uint32, "xconnect-id"},
    next_hop_address{YType::str, "next-hop-address"},
    source_address{YType::str, "source-address"}
        ,
    local(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local>())
    , remote(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tpv2"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::~L2tpv2()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::has_data() const
{
    if (is_presence_container) return true;
    return pw_flags.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| path_mtu.is_set
	|| protocol.is_set
	|| rem_udp_port.is_set
	|| xconnect_id.is_set
	|| next_hop_address.is_set
	|| source_address.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_flags.yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(rem_udp_port.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_flags.is_set || is_set(pw_flags.yfilter)) leaf_name_data.push_back(pw_flags.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rem_udp_port.is_set || is_set(rem_udp_port.yfilter)) leaf_name_data.push_back(rem_udp_port.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-flags")
    {
        pw_flags = value;
        pw_flags.value_namespace = name_space;
        pw_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port = value;
        rem_udp_port.value_namespace = name_space;
        rem_udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-flags")
    {
        pw_flags.yfilter = yfilter;
    }
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "pw-flags" || name == "tos-val" || name == "ttl" || name == "path-mtu" || name == "protocol" || name == "rem-udp-port" || name == "xconnect-id" || name == "next-hop-address" || name == "source-address")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "local"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::~Local()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tunnel-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "remote"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::~Remote()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tunnel-id")
        return true;
    return false;
}


}
}

